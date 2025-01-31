#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink { 
struct FullscreenCompositionManager : ISerializable
{
    static constexpr const char* NAME = "inkFullscreenCompositionManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xD0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(FullscreenCompositionManager, 0xD0);
} // namespace ink
} // namespace RED4ext
