#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetup.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }
namespace anim { struct Rig; }

namespace work { 
struct WorkspotAnimsetEntry
{
    static constexpr const char* NAME = "workWorkspotAnimsetEntry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    RaRef<anim::Rig> rig; // 08
    anim::AnimSetup animations; // 10
    DynArray<Ref<anim::AnimSet>> loadingHandles; // 30
    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(WorkspotAnimsetEntry, 0x70);
} // namespace work
} // namespace RED4ext
