#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace world { 
struct IDestructibleSpotsSystem : game::IGameSystem
{
    static constexpr const char* NAME = "worldIDestructibleSpotsSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IDestructibleSpotsSystem, 0x48);
} // namespace world
} // namespace RED4ext
