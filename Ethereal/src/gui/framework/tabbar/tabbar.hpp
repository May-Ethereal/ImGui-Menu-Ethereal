#pragma once

#include "imgui.h"

namespace eth
{
    bool BeginTabBar(const char* id);
    void EndTabBar();

    bool BeginTabItem(const char* label);
    void EndTabItem();
}
