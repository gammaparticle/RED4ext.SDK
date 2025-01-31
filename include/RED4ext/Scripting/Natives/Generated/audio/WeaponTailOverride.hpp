#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct WeaponTailOverride : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioWeaponTailOverride";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    CName value; // 40
};
RED4EXT_ASSERT_SIZE(WeaponTailOverride, 0x48);
} // namespace audio
} // namespace RED4ext
