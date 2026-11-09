#include "gui/pages/pages.hpp"

#include "config/config.hpp"
#include "gui/framework/button/button.hpp"
#include "gui/framework/colorswatch/colorswatch.hpp"
#include "gui/framework/combo/combo.hpp"
#include "gui/framework/groupbox/groupbox.hpp"
#include "gui/framework/checkbox/checkbox.hpp"
#include "gui/framework/layout/layout.hpp"
#include "gui/framework/list/list.hpp"
#include "gui/framework/search/search.hpp"
#include "gui/framework/style/style.hpp"

#include <cstring>

namespace vars
{
    int configScale = 3;
    float configAccent[4] = { 90.f / 255.f, 175.f / 255.f, 255.f / 255.f, 1.f };
}

namespace pages
{
    static const char* const kScaleNames[] = { "75%", "100%", "125%", "150%", "175%", "200%" };
    static const float kScaleValues[] = { 0.75f, 1.f, 1.25f, 1.5f, 1.75f, 2.f };

    static char configName[config::kNameLength] = "default";
    static char configFiles[config::kMaxConfigs][config::kNameLength];
    static int configCount = -1;
    static eth::Selection selectedConfig;

    static void RefreshConfigList()
    {
        configCount = config::ListConfigs(configFiles, config::kMaxConfigs);
    }

    void ApplyMenuScale() noexcept
    {
        if (vars::configScale >= 0 && vars::configScale < IM_ARRAYSIZE(kScaleValues))
        {
            style::scale = kScaleValues[vars::configScale] * style::dpiScale;
        }
    }

    void RenderConfig() noexcept
    {
        if (configCount < 0)
        {
            RefreshConfigList();
        }

        eth::BeginColumn(0.39f);

        if (eth::BeginColumnBox("Interface"))
        {
            if (eth::Combo("Menu scale##configScale", &vars::configScale, kScaleNames, IM_ARRAYSIZE(kScaleNames)))
            {
                ApplyMenuScale();
            }

            ImGui::TextUnformatted("Accent color");
            if (eth::ColorSwatch("##configAccent", vars::configAccent))
            {
                style::ApplyAccent(vars::configAccent);
            }

            eth::Checkbox("Enable search", &eth::searchEnabled);
        }
        eth::EndGroupBox();

        eth::EndColumn();
        eth::BeginColumn();

        if (eth::BeginColumnBox("Configs"))
        {
            const ImVec2 spacing = ImGui::GetStyle().ItemSpacing;
            const float innerWidth = ImGui::GetContentRegionAvail().x;
            const float buttonWidth = (innerWidth - spacing.x * 2.f) / 3.f;
            const float buttonHeight = style::Scaled(16.f);

            ImGui::PushStyleColor(ImGuiCol_FrameBg, style::controlBg);
            ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.f);
            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(style::Scaled(4.f), style::Scaled(3.f)));
            ImGui::SetNextItemWidth(innerWidth);
            ImGui::InputTextWithHint("##configName", "config name", configName, sizeof(configName));
            ImGui::PopStyleVar(2);
            ImGui::PopStyleColor();

            const float listHeight = ImGui::GetContentRegionAvail().y - buttonHeight - spacing.y * 2.f;
            if (eth::BeginList("##configList", ImVec2(0.f, listHeight)))
            {
                for (int index = 0; index < configCount; index++)
                {
                    if (eth::ListRowText(configFiles[index], selectedConfig))
                    {
                        strncpy_s(configName, configFiles[index], _TRUNCATE);
                    }
                }
            }
            eth::EndList();

            if (eth::Button("Save", ImVec2(buttonWidth, buttonHeight)))
            {
                if (config::TrySave(configName))
                {
                    RefreshConfigList();
                }
            }

            ImGui::SameLine();
            if (eth::Button("Load", ImVec2(buttonWidth, buttonHeight)))
            {
                if (config::TryLoad(configName))
                {
                    ApplyMenuScale();
                    style::ApplyAccent(vars::configAccent);
                }
            }

            ImGui::SameLine();
            if (eth::Button("Delete", ImVec2(buttonWidth, buttonHeight)))
            {
                if (config::TryRemove(configName))
                {
                    RefreshConfigList();
                }
            }
        }
        eth::EndGroupBox();

        eth::EndColumn();
    }

    void RegisterConfigVars(config::VarRegistry& registry)
    {
        registry.AddInt("configScale", &vars::configScale);
        registry.AddColor("configAccent", vars::configAccent);
        registry.AddBool("configSearchEnabled", &eth::searchEnabled);
    }
}
