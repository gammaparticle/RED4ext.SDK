#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/mp/Player.hpp>

namespace RED4ext
{
namespace mp { 
struct RemotePlayer : mp::Player
{
    static constexpr const char* NAME = "mpRemotePlayer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RemotePlayer, 0x60);
} // namespace mp
} // namespace RED4ext
