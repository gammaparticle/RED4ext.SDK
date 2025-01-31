#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeSystemRepellerComponents : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemRepellerComponents";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x3A0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemRepellerComponents, 0x3A0);
} // namespace world
} // namespace RED4ext
