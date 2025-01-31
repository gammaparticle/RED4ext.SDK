#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerScoreRecordData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VerticalPanelWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PanzerScoreBoard : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerScoreBoard";
    static constexpr const char* ALIAS = "PanzerScoreBoard";

    ink::VerticalPanelWidgetReference scoreboardList; // C0
    DynArray<game::ui::PanzerScoreRecordData> champions; // D8
    CName recordWidgetLibraryName; // E8
    uint8_t unkF0[0x108 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(PanzerScoreBoard, 0x108);
} // namespace game::ui
using PanzerScoreBoard = game::ui::PanzerScoreBoard;
} // namespace RED4ext
