#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PreviewGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PuppetPreviewCameraController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PuppetPreviewGameController : game::ui::PreviewGameController
{
    static constexpr const char* NAME = "gameuiPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkPuppetPreviewGameController";

    uint8_t unkF8[0x140 - 0xF8]; // F8
    game::ui::PuppetPreviewCameraController cameraController; // 140
    uint8_t unk1B0[0x1C0 - 0x1B0]; // 1B0
};
RED4EXT_ASSERT_SIZE(PuppetPreviewGameController, 0x1C0);
} // namespace game::ui
using inkPuppetPreviewGameController = game::ui::PuppetPreviewGameController;
} // namespace RED4ext
