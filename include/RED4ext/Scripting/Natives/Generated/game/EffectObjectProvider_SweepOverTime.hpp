#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game { 
struct EffectObjectProvider_SweepOverTime : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SweepOverTime";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SweepOverTime, 0x60);
} // namespace game
} // namespace RED4ext
