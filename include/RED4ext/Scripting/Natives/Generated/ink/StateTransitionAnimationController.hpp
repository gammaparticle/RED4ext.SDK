#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetStateAnimatedTransition.hpp>

namespace RED4ext
{
namespace ink { 
struct StateTransitionAnimationController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkStateTransitionAnimationController";
    static constexpr const char* ALIAS = NAME;

    bool stopActiveAnimation; // 68
    uint8_t unk69[0x80 - 0x69]; // 69
    DynArray<ink::WidgetStateAnimatedTransition> transition; // 80
};
RED4EXT_ASSERT_SIZE(StateTransitionAnimationController, 0x90);
} // namespace ink
} // namespace RED4ext
