#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationBodyPartsController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationFeetController : game::ui::CharacterCustomizationBodyPartsController
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationFeetController";
    static constexpr const char* ALIAS = NAME;

    CName liftedFeetGroupName; // A8
    CName flatFeetGroupName; // B0
    uint8_t unkB8[0x158 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationFeetController, 0x158);
} // namespace game::ui
} // namespace RED4ext
