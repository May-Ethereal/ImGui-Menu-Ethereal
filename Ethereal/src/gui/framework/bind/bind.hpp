#pragma once

#include "imgui.h"

namespace eth
{
    enum BindMode
    {
        BindMode_Toggle,
        BindMode_Hold,
        BindMode_Always
    };

    bool Bind(const char* id, bool* isEnabled, int* key, int* mode);

    void UpdateBinds() noexcept;
}
