#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace ent { 
struct SlotPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "entSlotPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x90 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(SlotPositionProvider, 0x90);
} // namespace ent
} // namespace RED4ext
