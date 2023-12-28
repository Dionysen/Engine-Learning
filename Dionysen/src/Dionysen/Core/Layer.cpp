#include "Layer.h"

#include <utility>

namespace Dionysen
{
    Layer::Layer(std::string debugName)
        : m_DebugName(std::move(debugName))
    {
    }
}  // namespace Dionysen