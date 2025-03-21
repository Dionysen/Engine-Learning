#pragma once

#include <cstdint>
#include <cstdlib>
namespace Dionysen
{
    class UUID
    {
      public:
        UUID();
        UUID(uint64_t uuid);
        UUID(const UUID&) = default;

        operator uint64_t() const
        {
            return m_UUID;
        }

      private:
        uint64_t m_UUID;
    };

}  // namespace Dionysen

namespace std
{
    template <typename T> struct hash;
    template <> struct hash<Dionysen::UUID>
    {
        std::size_t operator()(const Dionysen::UUID& uuid) const
        {
            return static_cast<std::size_t>(uuid);
        }
    };

}  // namespace std
