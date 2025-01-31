#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/mp/GameSession.hpp>

namespace RED4ext
{
namespace mp { 
struct ClientGameSession : mp::GameSession
{
    static constexpr const char* NAME = "mpClientGameSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(ClientGameSession, 0xA8);
} // namespace mp
} // namespace RED4ext
