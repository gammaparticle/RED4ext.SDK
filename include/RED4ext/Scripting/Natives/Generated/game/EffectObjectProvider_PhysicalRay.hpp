#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Float.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Vector.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectOutputParameter_Vector.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct EffectObjectProvider_PhysicalRay : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_PhysicalRay";
    static constexpr const char* ALIAS = NAME;

    game::EffectInputParameter_Vector inputPosition; // 40
    game::EffectInputParameter_Vector inputForward; // 58
    game::EffectInputParameter_Float inputRange; // 70
    game::EffectOutputParameter_Vector outputRaycastEnd; // 88
    Handle<physics::FilterData> filterData; // C8
    uint8_t unkD8[0xE8 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_PhysicalRay, 0xE8);
} // namespace game
} // namespace RED4ext
