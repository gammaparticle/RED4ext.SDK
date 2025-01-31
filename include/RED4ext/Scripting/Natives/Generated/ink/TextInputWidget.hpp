#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct TextInputWidget : ink::TextWidget
{
    static constexpr const char* NAME = "inkTextInputWidget";
    static constexpr const char* ALIAS = "inkTextInput";

    uint8_t unk420[0x460 - 0x420]; // 420
};
RED4EXT_ASSERT_SIZE(TextInputWidget, 0x460);
} // namespace ink
using inkTextInput = ink::TextInputWidget;
} // namespace RED4ext
