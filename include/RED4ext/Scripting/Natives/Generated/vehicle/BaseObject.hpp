#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace AI { struct Archetype; }

namespace vehicle { 
struct BaseObject : game::Object
{
    static constexpr const char* NAME = "vehicleBaseObject";
    static constexpr const char* ALIAS = "VehicleObject";

    uint8_t unk240[0x350 - 0x240]; // 240
    Ref<AI::Archetype> archetype; // 350
    uint8_t unk368[0x910 - 0x368]; // 368
};
RED4EXT_ASSERT_SIZE(BaseObject, 0x910);
} // namespace vehicle
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
