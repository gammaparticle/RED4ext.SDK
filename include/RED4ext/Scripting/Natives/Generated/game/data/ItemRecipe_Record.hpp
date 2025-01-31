#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemRecipe_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataItemRecipe_Record";
    static constexpr const char* ALIAS = "ItemRecipe_Record";

    uint8_t unk130[0x138 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(ItemRecipe_Record, 0x138);
} // namespace game::data
using ItemRecipe_Record = game::data::ItemRecipe_Record;
} // namespace RED4ext
