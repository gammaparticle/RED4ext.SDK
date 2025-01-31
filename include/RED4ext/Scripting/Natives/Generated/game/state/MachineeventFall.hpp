#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineeventFall : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventFall";
    static constexpr const char* ALIAS = "PSMFall";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineeventFall, 0x48);
} // namespace game::state
using PSMFall = game::state::MachineeventFall;
} // namespace RED4ext
