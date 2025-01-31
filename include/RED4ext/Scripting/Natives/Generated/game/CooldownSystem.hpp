#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ICooldownSystem.hpp>

namespace RED4ext
{
namespace game { 
struct CooldownSystem : game::ICooldownSystem
{
    static constexpr const char* NAME = "gameCooldownSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xD0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CooldownSystem, 0xD0);
} // namespace game
} // namespace RED4ext
