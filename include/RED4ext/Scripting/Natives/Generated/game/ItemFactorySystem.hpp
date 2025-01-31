#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IItemFactorySystem.hpp>

namespace RED4ext
{
namespace game { 
struct ItemFactorySystem : game::IItemFactorySystem
{
    static constexpr const char* NAME = "gameItemFactorySystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x5010 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemFactorySystem, 0x5010);
} // namespace game
} // namespace RED4ext
