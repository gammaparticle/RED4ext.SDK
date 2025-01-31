#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct GOGRewardsSystem : IScriptable
{
    static constexpr const char* NAME = "gameGOGRewardsSystem";
    static constexpr const char* ALIAS = "GOGRewardsSystem";

    uint8_t unk40[0x1B0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GOGRewardsSystem, 0x1B0);
} // namespace game
using GOGRewardsSystem = game::GOGRewardsSystem;
} // namespace RED4ext
