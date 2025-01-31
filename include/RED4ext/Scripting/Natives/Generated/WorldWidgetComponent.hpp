#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IWorldWidgetComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ui/SceneWidgetProperties.hpp>

namespace RED4ext
{
struct CBitmapTexture;
namespace ink { struct WidgetLibraryResource; }

struct WorldWidgetComponent : IWorldWidgetComponent
{
    static constexpr const char* NAME = "WorldWidgetComponent";
    static constexpr const char* ALIAS = "WorldWidgetComponent";

    uint8_t unk2B0[0x2B8 - 0x2B0]; // 2B0
    Ref<ink::WidgetLibraryResource> cursorResource; // 2B8
    RaRef<ink::WidgetLibraryResource> widgetResource; // 2D0
    RaRef<CBitmapTexture> staticTextureResource; // 2D8
    uint8_t unk2E0[0x2F0 - 0x2E0]; // 2E0
    CName itemNameToSpawn; // 2F0
    world::ui::SceneWidgetProperties sceneWidgetProperties; // 2F8
    uint8_t unk318[0x390 - 0x318]; // 318
};
RED4EXT_ASSERT_SIZE(WorldWidgetComponent, 0x390);
} // namespace RED4ext
