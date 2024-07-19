#pragma once

#include "Model.h"
#include <string>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "Base.h"
#include "Texture.h"
#include "VertexArray.h"

namespace Dionysen
{
    std::string TextureTypeToString(TextureType& type);
    TextureType StringToTextureType(std::string& type);

#define MAX_BONE_INFLUENCE 4
    struct Vertex
    {
        // position
        glm::vec3 Position;
        // normal
        glm::vec3 Normal;
        // texCoords
        glm::vec2 TexCoords;
        // tangent
        glm::vec3 Tangent;
        // bitangent
        glm::vec3 Bitangent;
        // bone indexes which will influence this vertex
        int m_BoneIDs[MAX_BONE_INFLUENCE];
        // weights from each bone
        float m_Weights[MAX_BONE_INFLUENCE];
    };

    class OpenGLMesh
    {
      public:
        // mesh Data
        std::vector<Vertex>         vertices;
        std::vector<unsigned int>   indices;
        std::vector<Ref<Texture2D>> textures;

        Ref<VertexArray>  m_MeshVAO;
        Ref<VertexBuffer> m_MeshVBO;
        Ref<IndexBuffer>  m_MeshIBO;

        // constructor
        OpenGLMesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Ref<Texture2D>> textures);

        // render the mesh
        virtual void Draw(Shader& shader);

      private:
        // initializes all the buffer objects/arrays
        virtual void SetupMesh();
    };


    class OpenGLModel : public Model
    {
      public:
        OpenGLModel(std::string& filePath);
        ~OpenGLModel() = default;

        virtual void loadModel(std::string const& path) override;
        virtual void Draw(Shader& shader) override;

        OpenGLMesh processMesh(aiMesh* mesh, const aiScene* scene);
        void       processNode(aiNode* node, const aiScene* scene);

        std::vector<Ref<Texture2D>> loadMaterialTextures(aiMaterial* mat, aiTextureType type, std::string typeName);

      private:
        std::string                 m_Directory;
        std::vector<Ref<Texture2D>> m_TextureLoaded;
        std::vector<OpenGLMesh>     m_Meshes;
    };
}  // namespace Dionysen