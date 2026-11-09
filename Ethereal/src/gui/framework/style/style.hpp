#pragma once

#include "imgui.h"

namespace style
{
    inline ImVec4 accent = ImColor(90, 175, 255);
    inline ImVec4 accentDim = ImColor(42, 82, 120);
    inline ImVec4 accentBarDark = ImColor(28, 54, 79);
    inline ImVec4 accentBar = ImColor(60, 117, 171);
    inline ImVec4 accentBarBright = ImColor(90, 175, 255);
    inline ImVec4 toggleOn = ImColor(110, 158, 75);

    inline ImVec4 headerBg = ImColor(16, 19, 27);
    inline ImVec4 windowBg = ImColor(23, 27, 38);
    inline ImVec4 panelBg = ImColor(23, 27, 38);
    inline ImVec4 controlBg = ImColor(11, 13, 20);
    inline ImVec4 checkboxBg = ImColor(21, 25, 35);
    inline ImVec4 listRowEven = ImColor(21, 25, 35);
    inline ImVec4 listRowOdd = ImColor(28, 33, 45);

    inline ImVec4 windowBorder = ImColor(8, 10, 15);
    inline ImVec4 stroke = ImColor(48, 56, 76);
    inline ImVec4 strokeHover = ImColor(84, 98, 128);
    inline ImVec4 tabBorder = ImColor(50, 59, 80);

    inline ImVec4 tabHighlight = ImColor(120, 150, 190);
    inline ImVec4 sliderTrack = ImColor(19, 22, 31);
    inline ImVec4 sliderFill = ImColor(90, 175, 255);
    inline ImVec4 sliderKnob = ImColor(150, 162, 186);
    inline ImVec4 bevelDark = ImColor(9, 11, 16);
    inline ImVec4 bevelLight = ImColor(51, 60, 81);

    inline ImVec4 text = ImColor(200, 208, 222);
    inline ImVec4 textStrong = ImColor(255, 255, 255);
    inline ImVec4 textDisabled = ImColor(104, 114, 136);

    inline float scale = 1.f;
    inline float dpiScale = 1.f;

    inline float textSize = 11.f;
    inline float titleSize = 12.f;
    inline float titleBarHeight = 18.f;
    inline float tabBarHeight = 15.f;

    inline float Scaled(float value) noexcept
    {
        // Snap to whole pixels so 1px edges and bevels stay crisp at fractional menu/DPI scales.
        return float(int(value * scale + 0.5f));
    }

    inline void ApplyAccent(const float accentColor[4]) noexcept
    {
        accent = ImVec4(accentColor[0], accentColor[1], accentColor[2], 1.f);
        accentBarBright = accent;
        sliderFill = accent;
        accentBar = ImVec4(accent.x * 0.67f, accent.y * 0.67f, accent.z * 0.67f, 1.f);
        accentDim = ImVec4(accent.x * 0.47f, accent.y * 0.47f, accent.z * 0.47f, 1.f);
        accentBarDark = ImVec4(accent.x * 0.31f, accent.y * 0.31f, accent.z * 0.31f, 1.f);
    }

    inline void ResetToDefault() noexcept
    {
        accent = ImColor(90, 175, 255);
        accentDim = ImColor(42, 82, 120);
        accentBarDark = ImColor(28, 54, 79);
        accentBar = ImColor(60, 117, 171);
        accentBarBright = ImColor(90, 175, 255);
        toggleOn = ImColor(110, 158, 75);
        headerBg = ImColor(16, 19, 27);
        windowBg = ImColor(23, 27, 38);
        panelBg = ImColor(23, 27, 38);
        controlBg = ImColor(11, 13, 20);
        checkboxBg = ImColor(21, 25, 35);
        listRowEven = ImColor(21, 25, 35);
        listRowOdd = ImColor(28, 33, 45);
        windowBorder = ImColor(8, 10, 15);
        stroke = ImColor(48, 56, 76);
        strokeHover = ImColor(84, 98, 128);
        tabBorder = ImColor(50, 59, 80);
        tabHighlight = ImColor(120, 150, 190);
        sliderTrack = ImColor(19, 22, 31);
        sliderFill = ImColor(90, 175, 255);
        sliderKnob = ImColor(150, 162, 186);
        bevelDark = ImColor(9, 11, 16);
        bevelLight = ImColor(51, 60, 81);
        text = ImColor(200, 208, 222);
        textStrong = ImColor(255, 255, 255);
        textDisabled = ImColor(104, 114, 136);
    }
}
