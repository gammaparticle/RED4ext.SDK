#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/WheeledBaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct CarBaseObject : vehicle::WheeledBaseObject
{
    static constexpr const char* NAME = "vehicleCarBaseObject";
    static constexpr const char* ALIAS = "CarObject";

    uint8_t unk930[0x980 - 0x930]; // 930
};
RED4EXT_ASSERT_SIZE(CarBaseObject, 0x980);
} // namespace vehicle
using CarObject = vehicle::CarBaseObject;
} // namespace RED4ext
