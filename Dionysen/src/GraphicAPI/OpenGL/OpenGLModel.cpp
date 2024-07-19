
#include "Log.h"

#include "Texture.h"
#include <string>
#include "OpenGLModel.h"
#include "RenderCommand.h"

namespace Dionysen
{

    // ==================================================================================
    // ============================= OpenGLMesh ========================================
    // ==================================================================================

    std::string TextureTypeToString(TextureType& type)
    {
        switch (type)
        {
        case TextureType::DIFFUSE:
            return "texture_diffuse";
        case TextureType::SPECULAR:
            return "texture_specular";
        case TextureType::NORMAL:
            return "texture_normal";
        case TextureType::HEIGHT:
            return "texture_height";
        default:
            return "";
            DION_ASSERT("Error Type.");
        }
    }

    TextureType StringToTextureType(std::string& type)
    {
        if (type == "texture_diffuse")
            return TextureType::DIFFUSE;
        if (type == "texture_specular")
            return TextureType::SPECULAR;
        if (type == "texture_normal")
            return TextureType::NORMAL;
        if (type == "texture_height")
            return TextureType::HEIGHT;
        return TextureType::NORMAL;
    }


    OpenGLMesh::OpenGLMesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Ref<Texture2D>> textures)
    {
        this->vertices = vertices;
        this->indices  = indices;
        this->textures = textures;

        SetupMesh();
    }

    void OpenGLMesh::Draw(Shader& shader)
    {
        // bind appropriate textures
        unsigned int diffuseNr  = 1;
        unsigned int specularNr = 1;
        unsigned int normalNr   = 1;
        unsigned int heightNr   = 1;
        for (unsigned int i = 0; i < textures.size(); i++)
        {
            glActiveTexture(GL_TEXTURE0 + i);  // active proper texture unit before binding
            // retrieve texture number (the N in diffuse_textureN)
            std::string number;
            TextureType name = textures[i]->GetType();
            if (name == TextureType::DIFFUSE)
                number = std::to_string(diffuseNr++);
            else if (name == TextureType::SPECULAR)
                number = std::to_string(specularNr++);  // transfer unsigned int to string
            else if (name == TextureType::NORMAL)
                number = std::to_string(normalNr++);  // transfer unsigned int to string
            else if (name == TextureType::HEIGHT)
                number = std::to_string(heightNr++);  // transfer unsigned int to string

            // now set the sampler to the correct texture unit
            shader.SetInt((TextureTypeToString(name) + number).c_str(), i);
            // and finally bind the texture
            glBindTexture(GL_TEXTURE_2D, textures[i]->GetRendererID());
        }

        // draw mesh
        RenderCommand::DrawIndexed(m_MeshVAO, static_cast<unsigned int>(indices.size()));

        // always good practice to set everything back to defaults once configured.
        glActiveTexture(GL_TEXTURE0);
    }

    void OpenGLMesh::SetupMesh()
    {
        m_MeshVBO = VertexBuffer::Create(vertices.size());
        m_MeshVBO->SetData(&vertices[0], vertices.size() * sizeof(Vertex));

        BufferLayout layout = {
            { ShaderDataType::Float3, "a_Position" }, { ShaderDataType::Float3, "a_Normal" },    { ShaderDataType::Float2, "a_TexCoords" },
            { ShaderDataType::Float3, "a_Tangent" },  { ShaderDataType::Float3, "a_Bitangent" }, { ShaderDataType::Float4, "a_BoneIDs" },
            { ShaderDataType::Float4, "a_Weights" },
        };
        m_MeshVBO->SetLayout(layout);

        m_MeshIBO = IndexBuffer::Create(&indices[0], indices.size() * sizeof(unsigned int));

        m_MeshVAO->AddVertexBuffer(m_MeshVBO);
        m_MeshVAO->SetIndexBuffer(m_MeshIBO);
    }

    // ==================================================================================
    // ============================= OpenGLModel ========================================
    // ==================================================================================


    OpenGLModel::OpenGLModel(std::string& filePath)
    {
        loadModel(filePath);
    }

    void OpenGLModel::Draw(Shader& shader)
    {
        for (unsigned int i = 0; i < m_Meshes.size(); i++)
            m_Meshes[i].Draw(shader);
    }

    std::vector<Ref<Texture2D>> OpenGLModel::loadMaterialTextures(aiMaterial* mat, aiTextureType type, std::string typeName)
    {
        std::vector<Ref<Texture2D>> textures;
        for (unsigned int i = 0; i < mat->GetTextureCount(type); i++)
        {
            aiString str;
            mat->GetTexture(type, i, &str);
            // check if texture was loaded before and if so, continue to next iteration: skip loading a new texture
            bool skip = false;
            for (unsigned int j = 0; j < m_TextureLoaded.size(); j++)
            {
                if (std::strcmp(m_TextureLoaded[j]->GetPath().data(), str.C_Str()) == 0)
                {
                    textures.push_back(m_TextureLoaded[j]);
                    skip = true;  // a texture with the same filepath has already been loaded, continue to next one. (optimization)
                    break;
                }
            }
            if (!skip)
            {  // if texture hasn't been loaded already, load it
                Ref<Texture2D> texture = Texture2D::Create(str.C_Str());
                texture->SetType(StringToTextureType(typeName));

                textures.push_back(texture);
                m_TextureLoaded.push_back(
                    texture);  // store it as texture loaded for entire model, to ensure we won't unnecessary load duplicate textures.
            }
        }
        return textures;
    }


    OpenGLMesh OpenGLModel::processMesh(aiMesh* mesh, const aiScene* scene)
    {  // data to fill
        std::vector<Vertex>         vertices;
        std::vector<unsigned int>   indices;
        std::vector<Ref<Texture2D>> textures;

        // walk through each of the mesh's vertices
        for (unsigned int i = 0; i < mesh->mNumVertices; i++)
        {
            Vertex    vertex;
            glm::vec3 vector;  // we declare a placeholder vector since assimp uses its own vector class that doesn't directly convert to glm's vec3
                               // class so we transfer the data to this placeholder glm::vec3 first.
            // positions
            vector.x        = mesh->mVertices[i].x;
            vector.y        = mesh->mVertices[i].y;
            vector.z        = mesh->mVertices[i].z;
            vertex.Position = vector;
            // normals
            if (mesh->HasNormals())
            {
                vector.x      = mesh->mNormals[i].x;
                vector.y      = mesh->mNormals[i].y;
                vector.z      = mesh->mNormals[i].z;
                vertex.Normal = vector;
            }
            // texture coordinates
            if (mesh->mTextureCoords[0])  // does the mesh contain texture coordinates?
            {
                glm::vec2 vec;
                // a vertex can contain up to 8 different texture coordinates. We thus make the assumption that we won't
                // use models where a vertex can have multiple texture coordinates so we always take the first set (0).
                vec.x            = mesh->mTextureCoords[0][i].x;
                vec.y            = mesh->mTextureCoords[0][i].y;
                vertex.TexCoords = vec;
                // tangent
                vector.x       = mesh->mTangents[i].x;
                vector.y       = mesh->mTangents[i].y;
                vector.z       = mesh->mTangents[i].z;
                vertex.Tangent = vector;
                // bitangent
                vector.x         = mesh->mBitangents[i].x;
                vector.y         = mesh->mBitangents[i].y;
                vector.z         = mesh->mBitangents[i].z;
                vertex.Bitangent = vector;
            }
            else
                vertex.TexCoords = glm::vec2(0.0f, 0.0f);

            vertices.push_back(vertex);
        }
        // now wak through each of the mesh's faces (a face is a mesh its triangle) and retrieve the corresponding vertex indices.
        for (unsigned int i = 0; i < mesh->mNumFaces; i++)
        {
            aiFace face = mesh->mFaces[i];
            // retrieve all indices of the face and store them in the indices vector
            for (unsigned int j = 0; j < face.mNumIndices; j++)
                indices.push_back(face.mIndices[j]);
        }
        // process materials
        aiMaterial* material = scene->mMaterials[mesh->mMaterialIndex];
        // we assume a convention for sampler names in the shaders. Each diffuse texture should be named
        // as 'texture_diffuseN' where N is a sequential number ranging from 1 to MAX_SAMPLER_NUMBER.
        // Same applies to other texture as the following list summarizes:
        // diffuse: texture_diffuseN
        // specular: texture_specularN
        // normal: texture_normalN

        // 1. diffuse maps
        std::vector<Ref<Texture2D>> diffuseMaps = loadMaterialTextures(material, aiTextureType_DIFFUSE, "texture_diffuse");
        textures.insert(textures.end(), diffuseMaps.begin(), diffuseMaps.end());
        // 2. specular maps
        std::vector<Ref<Texture2D>> specularMaps = loadMaterialTextures(material, aiTextureType_SPECULAR, "texture_specular");
        textures.insert(textures.end(), specularMaps.begin(), specularMaps.end());
        // 3. normal maps
        std::vector<Ref<Texture2D>> normalMaps = loadMaterialTextures(material, aiTextureType_HEIGHT, "texture_normal");
        textures.insert(textures.end(), normalMaps.begin(), normalMaps.end());
        // 4. height maps
        std::vector<Ref<Texture2D>> heightMaps = loadMaterialTextures(material, aiTextureType_AMBIENT, "texture_height");
        textures.insert(textures.end(), heightMaps.begin(), heightMaps.end());

        // return a mesh object created from the extracted mesh data

        return OpenGLMesh(vertices, indices, textures);
    }
    void OpenGLModel::processNode(aiNode* node, const aiScene* scene)
    {  // process each mesh located at the current node
        for (unsigned int i = 0; i < node->mNumMeshes; i++)
        {
            // the node object only contains indices to index the actual objects in the scene.
            // the scene contains all the data, node is just to keep stuff organized (like relations between nodes).
            aiMesh* mesh = scene->mMeshes[node->mMeshes[i]];
            m_Meshes.push_back(processMesh(mesh, scene));
        }
        // after we've processed all of the meshes (if any) we then recursively process each of the children nodes
        for (unsigned int i = 0; i < node->mNumChildren; i++)
        {
            processNode(node->mChildren[i], scene);
        }
    }

    void OpenGLModel::loadModel(std::string const& path)
    {  // read file via ASSIMP
        Assimp::Importer importer;
        const aiScene*   scene =
            importer.ReadFile(path, aiProcess_Triangulate | aiProcess_GenSmoothNormals | aiProcess_FlipUVs | aiProcess_CalcTangentSpace);
        // check for errors
        if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode)  // if is Not Zero
        {
            DION_CORE_ERROR("ERROR::ASSIMP:: {0}", importer.GetErrorString());
            return;
        }
        // retrieve the directory path of the filepath
        m_Directory = path.substr(0, path.find_last_of('/'));

        // process ASSIMP's root node recursively
        processNode(scene->mRootNode, scene);
    }
}  // namespace Dionysen