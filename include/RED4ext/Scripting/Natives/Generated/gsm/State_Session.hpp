#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State.hpp>

namespace RED4ext
{
namespace gsm { 
struct State_Session : gsm::State
{
    static constexpr const char* NAME = "gsmState_Session";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0x300 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(State_Session, 0x300);
} // namespace gsm
} // namespace RED4ext
