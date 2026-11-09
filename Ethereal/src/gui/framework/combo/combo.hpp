#pragma once

#include "imgui.h"

namespace eth
{
    bool Combo(const char* label, int* current, const char* const items[], int itemCount);
}
