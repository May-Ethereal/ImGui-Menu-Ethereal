#include "gui/pages/pages.hpp"

#include "config/config.hpp"
#include "gui/framework/button/button.hpp"
#include "gui/framework/checkbox/checkbox.hpp"
#include "gui/framework/colorswatch/colorswatch.hpp"
#include "gui/framework/groupbox/groupbox.hpp"
#include "gui/framework/layout/layout.hpp"
#include "gui/framework/list/list.hpp"
#include "gui/framework/style/style.hpp"

namespace vars
{
    bool playersWatch[6];
    bool playersHighlight = true;
    float playersHighlightColor[4] = { 0.85f, 0.45f, 0.18f, 1.f };
    bool playersIgnore = false;
    bool playersDrawOnMap = true;
    bool playersNotifyOnline = false;
}

namespace pages
{
    static const char* const kSamplePlayers[6] = { "Local Player", "survivor882", "TwitchRust", "kn0cker", "sleeper (roof)", "scientist_np" };

    void RenderPlayers() noexcept
    {
        static eth::Selection selectedPlayer = { "Local Player" };

        eth::BeginColumn(0.46f);

        if (eth::BeginColumnBox("Players"))
        {
            if (eth::BeginList("##playerList"))
            {
                for (int index = 0; index < 6; index++)
                {
                    eth::ListRow(kSamplePlayers[index], &vars::playersWatch[index], selectedPlayer);
                }
            }
            eth::EndList();
        }
        eth::EndGroupBox();

        eth::EndColumn();
        eth::BeginColumn();

        if (eth::BeginColumnBox(selectedPlayer.current))
        {
            eth::Checkbox("Highlight player", &vars::playersHighlight);
            eth::ColorSwatch("##playersHighlightColor", vars::playersHighlightColor);

            eth::Checkbox("Ignore player", &vars::playersIgnore);
            eth::Checkbox("Draw on map", &vars::playersDrawOnMap);
            eth::Checkbox("Notify when online", &vars::playersNotifyOnline);

            ImGui::Spacing();
            eth::Button("Add to friends", ImVec2(style::Scaled(90.f), style::Scaled(16.f)));
            eth::Button("Copy name", ImVec2(style::Scaled(90.f), style::Scaled(16.f)));
        }
        eth::EndGroupBox();

        eth::EndColumn();
    }

    void RegisterPlayersVars(config::VarRegistry& registry)
    {
        registry.AddBool("playersHighlight", &vars::playersHighlight);
        registry.AddColor("playersHighlightColor", vars::playersHighlightColor);
        registry.AddBool("playersIgnore", &vars::playersIgnore);
        registry.AddBool("playersDrawOnMap", &vars::playersDrawOnMap);
        registry.AddBool("playersNotifyOnline", &vars::playersNotifyOnline);
    }
}
