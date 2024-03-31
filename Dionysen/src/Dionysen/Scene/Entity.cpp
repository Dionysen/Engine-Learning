#include "dspch.h"
#include "Entity.h"

namespace Dionysen
{

    Entity::Entity(entt::entity handle, Scene* scene)
        : m_EntityHandle(handle)
        , m_Scene(scene)
    {
    }

}  // namespace Dionysen