#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDataChunk.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFallbackFrameDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
struct CResource;
namespace anim { struct AnimSetEntry; }
namespace anim { struct Rig; }

namespace anim { 
struct AnimSet : CResource
{
    static constexpr const char* NAME = "animAnimSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimSetEntry>> animations; // 40
    DynArray<anim::AnimDataChunk> animationDataChunks; // 50
    uint8_t unk60[0x68 - 0x60]; // 60
    DataBuffer fallbackAnimDataBuffer; // 68
    uint8_t unk90[0xA0 - 0x90]; // 90
    DynArray<anim::AnimFallbackFrameDesc> fallbackAnimFrameDescs; // A0
    uint8_t unkB0[0xC0 - 0xB0]; // B0
    DynArray<uint16_t> fallbackDataAddresses; // C0
    DynArray<uint8_t> fallbackAnimDescIndexes; // D0
    DynArray<uint8_t> fallbackDataAddressIndexes; // E0
    uint16_t fallbackNumPositionData; // F0
    uint16_t fallbackNumRotationData; // F2
    uint8_t unkF4[0x128 - 0xF4]; // F4
    Ref<anim::Rig> rig; // 128
    Ref<CResource> correspondingArchetype; // 140
    red::TagList tags; // 158
    uint8_t unk168[0x1F0 - 0x168]; // 168
    uint32_t version; // 1F0
    uint8_t unk1F4[0x1F8 - 0x1F4]; // 1F4
};
RED4EXT_ASSERT_SIZE(AnimSet, 0x1F8);
} // namespace anim
} // namespace RED4ext
