#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace vehicle { 
struct Controller : game::Component
{
    static constexpr const char* NAME = "vehicleController";
    static constexpr const char* ALIAS = NAME;

    CName alarmCurve; // A8
    float alarmTime; // B0
    uint8_t unkB4[0xD8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(Controller, 0xD8);
} // namespace vehicle
} // namespace RED4ext
