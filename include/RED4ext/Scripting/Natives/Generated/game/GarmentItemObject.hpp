#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game { 
struct GarmentItemObject : game::ItemObject
{
    static constexpr const char* NAME = "gameGarmentItemObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk328[0x360 - 0x328]; // 328
};
RED4EXT_ASSERT_SIZE(GarmentItemObject, 0x360);
} // namespace game
} // namespace RED4ext
