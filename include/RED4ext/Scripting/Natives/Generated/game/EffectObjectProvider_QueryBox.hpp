#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectInputParameter_Vector.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct EffectObjectProvider_QueryBox : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_QueryBox";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
    game::EffectInputParameter_Vector inputPosition; // 60
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_QueryBox, 0x78);
} // namespace game
} // namespace RED4ext
