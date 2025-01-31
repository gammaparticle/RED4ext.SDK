#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct GameplayLogicPackageObject : IScriptable
{
    static constexpr const char* NAME = "gameGameplayLogicPackageObject";
    static constexpr const char* ALIAS = "GameplayLogicPackageObject";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GameplayLogicPackageObject, 0x70);
} // namespace game
using GameplayLogicPackageObject = game::GameplayLogicPackageObject;
} // namespace RED4ext
