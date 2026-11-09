#include "gui/pages/pages.hpp"

#include "config/config.hpp"
#include "gui/framework/badge/badge.hpp"
#include "gui/framework/bind/bind.hpp"
#include "gui/framework/checkbox/checkbox.hpp"
#include "gui/framework/colorswatch/colorswatch.hpp"
#include "gui/framework/groupbox/groupbox.hpp"
#include "gui/framework/layout/layout.hpp"
#include "gui/framework/slider/slider.hpp"

namespace vars
{
    bool visRadarEnabled = true;
    int visRadarZoom = 50;
    bool visRadarBorder = false;
    bool visRadarCompass = true;
    bool visRangeMarkers = true;
    int visRangeMarkerDistance = 50;
    bool visDrawLocalCamera = true;
    float visLocalCameraColor[4] = { 1.f, 0.80f, 0.25f, 1.f };
    bool visDrawLocalPlayer = true;
    float visLocalPlayerColor[4] = { 0.30f, 0.55f, 0.90f, 1.f };
    bool visDrawPlayers = true;
    float visPlayersColor[4] = { 0.85f, 0.45f, 0.18f, 1.f };
    bool visDrawPlayerDistance = true;
    bool visDrawPlayersDirection = true;
    int visPlayerDirectionDistance = 20;

    bool visNodeDrawWorld = false;
    bool visNodeDrawMap = false;
    float visNodeColor[4] = { 0.40f, 0.80f, 0.30f, 1.f };
    int visNodeDepth = 6;
    bool visIncludeStone = true;
    bool visIncludeMetal = true;
    bool visIncludeSulfur = true;

    bool visBoldFont = false;
    bool visWatermark = true;
    bool visActiveFeatures = true;
    bool visFullBright = true;
    int visFullBrightKey = ImGuiKey_K;
    int visFullBrightMode = 0;
    bool visDisableScreenShake = true;
    bool visDrawServerTime = true;
    bool visRaidsWorld = true;
    float visRaidsWorldColor[4] = { 0.85f, 0.45f, 0.18f, 1.f };
    bool visRaidsMap = true;
    float visRaidsMapColor[4] = { 0.85f, 0.45f, 0.18f, 1.f };
    bool visEventCrates = true;
    bool visPatrolMap = true;
    bool visXray = true;
    int visXrayKey = ImGuiKey_X;
    int visXrayMode = 0;
    bool visCombatMode = false;
    int visCombatKey = ImGuiKey_P;
    int visCombatMode2 = 0;

    bool crossEnabled = true;
    float crossColor[4] = { 1.f, 1.f, 1.f, 1.f };
    int crossGap = 2;
    int crossLength = 4;
    int crossHeight = 2;
    bool crossOutline = true;
    int crossWeight = 1;
}

namespace pages
{
    void RenderVisuals() noexcept
    {
        eth::BeginColumn(0.5f);

        if (eth::BeginColumnBox("Radar", 0.62f))
        {
            eth::Checkbox("Radar enabled", &vars::visRadarEnabled);

            eth::Indent();
            eth::SliderInt("Radar zoom", &vars::visRadarZoom, 0, 100, "%d%%");
            eth::Unindent();

            eth::Checkbox("Radar border", &vars::visRadarBorder);
            eth::Checkbox("Radar compass", &vars::visRadarCompass);
            eth::Checkbox("Draw range markers", &vars::visRangeMarkers);

            eth::Indent();
            eth::SliderInt("Range marker distance", &vars::visRangeMarkerDistance, 0, 200, "%dm");
            eth::Unindent();

            eth::Checkbox("Draw local camera", &vars::visDrawLocalCamera);
            eth::ColorSwatch("##visCamColor", vars::visLocalCameraColor);
            eth::Checkbox("Draw local player", &vars::visDrawLocalPlayer);
            eth::ColorSwatch("##visLocalColor", vars::visLocalPlayerColor);
            eth::Checkbox("Draw players", &vars::visDrawPlayers);
            eth::ColorSwatch("##visPlayersColor", vars::visPlayersColor);
            eth::Checkbox("Draw player distance", &vars::visDrawPlayerDistance);
            eth::Checkbox("Draw players direction", &vars::visDrawPlayersDirection);

            eth::Indent();
            eth::SliderInt("Player direction distance", &vars::visPlayerDirectionDistance, 0, 100, "%dm");
            eth::Unindent();
        }
        eth::EndGroupBox();

        if (eth::BeginColumnBox("Node Path"))
        {
            eth::Checkbox("Draw in world", &vars::visNodeDrawWorld);
            eth::StatusBadge(vars::visNodeDrawWorld);

            eth::Checkbox("Draw on map", &vars::visNodeDrawMap);

            ImGui::TextUnformatted("Node path color");
            eth::ColorSwatch("##visNodeColor", vars::visNodeColor);

            eth::SliderInt("Depth", &vars::visNodeDepth, 0, 10);

            eth::Checkbox("Include stone", &vars::visIncludeStone);
            eth::Checkbox("Include metal", &vars::visIncludeMetal);
            eth::Checkbox("Include sulfur", &vars::visIncludeSulfur);
        }
        eth::EndGroupBox();

        eth::EndColumn();
        eth::BeginColumn();

        if (eth::BeginColumnBox("Other", 0.62f))
        {
            eth::Checkbox("Bold font", &vars::visBoldFont);
            eth::Checkbox("Watermark", &vars::visWatermark);
            eth::Checkbox("Active features", &vars::visActiveFeatures);

            eth::Checkbox("Full bright", &vars::visFullBright);
            eth::Bind("##visBrightBind", &vars::visFullBright, &vars::visFullBrightKey, &vars::visFullBrightMode);

            eth::Checkbox("Disable screen shake", &vars::visDisableScreenShake);
            eth::Checkbox("Draw server time", &vars::visDrawServerTime);

            eth::Checkbox("Draw raids in world", &vars::visRaidsWorld);
            eth::ColorSwatch("##visRaidsWorldColor", vars::visRaidsWorldColor);
            eth::Checkbox("Draw raids on map", &vars::visRaidsMap);
            eth::ColorSwatch("##visRaidsMapColor", vars::visRaidsMapColor);

            eth::Checkbox("Draw event crates on map", &vars::visEventCrates);
            eth::Checkbox("Draw patrol on map", &vars::visPatrolMap);

            eth::Checkbox("X-Ray", &vars::visXray);
            eth::Bind("##visXrayBind", &vars::visXray, &vars::visXrayKey, &vars::visXrayMode);

            ImGui::TextUnformatted("Combat mode");
            eth::Bind("##visCombatBind", &vars::visCombatMode, &vars::visCombatKey, &vars::visCombatMode2);
        }
        eth::EndGroupBox();

        if (eth::BeginColumnBox("Crosshair"))
        {
            eth::Checkbox("Enabled", &vars::crossEnabled);
            eth::ColorSwatch("##crossColor", vars::crossColor);

            eth::Indent();
            eth::SliderInt("Gap", &vars::crossGap, 0, 20, "%dpx");
            eth::SliderInt("Length", &vars::crossLength, 0, 20, "%dpx");
            eth::SliderInt("Height", &vars::crossHeight, 0, 20, "%dpx");
            eth::Unindent();

            eth::Checkbox("Outline", &vars::crossOutline);

            eth::Indent();
            eth::SliderInt("Weight", &vars::crossWeight, 0, 5, "%dpx");
            eth::Unindent();
        }
        eth::EndGroupBox();

        eth::EndColumn();
    }

    void RegisterVisualsVars(config::VarRegistry& registry)
    {
        registry.AddBool("visRadarEnabled", &vars::visRadarEnabled);
        registry.AddInt("visRadarZoom", &vars::visRadarZoom);
        registry.AddBool("visRadarBorder", &vars::visRadarBorder);
        registry.AddBool("visRadarCompass", &vars::visRadarCompass);
        registry.AddBool("visRangeMarkers", &vars::visRangeMarkers);
        registry.AddInt("visRangeMarkerDistance", &vars::visRangeMarkerDistance);
        registry.AddBool("visDrawLocalCamera", &vars::visDrawLocalCamera);
        registry.AddColor("visLocalCameraColor", vars::visLocalCameraColor);
        registry.AddBool("visDrawLocalPlayer", &vars::visDrawLocalPlayer);
        registry.AddColor("visLocalPlayerColor", vars::visLocalPlayerColor);
        registry.AddBool("visDrawPlayers", &vars::visDrawPlayers);
        registry.AddColor("visPlayersColor", vars::visPlayersColor);
        registry.AddBool("visDrawPlayerDistance", &vars::visDrawPlayerDistance);
        registry.AddBool("visDrawPlayersDirection", &vars::visDrawPlayersDirection);
        registry.AddInt("visPlayerDirectionDistance", &vars::visPlayerDirectionDistance);
        registry.AddBool("visNodeDrawWorld", &vars::visNodeDrawWorld);
        registry.AddBool("visNodeDrawMap", &vars::visNodeDrawMap);
        registry.AddColor("visNodeColor", vars::visNodeColor);
        registry.AddInt("visNodeDepth", &vars::visNodeDepth);
        registry.AddBool("visIncludeStone", &vars::visIncludeStone);
        registry.AddBool("visIncludeMetal", &vars::visIncludeMetal);
        registry.AddBool("visIncludeSulfur", &vars::visIncludeSulfur);
        registry.AddBool("visBoldFont", &vars::visBoldFont);
        registry.AddBool("visWatermark", &vars::visWatermark);
        registry.AddBool("visActiveFeatures", &vars::visActiveFeatures);
        registry.AddBool("visFullBright", &vars::visFullBright);
        registry.AddInt("visFullBrightKey", &vars::visFullBrightKey);
        registry.AddInt("visFullBrightMode", &vars::visFullBrightMode);
        registry.AddBool("visDisableScreenShake", &vars::visDisableScreenShake);
        registry.AddBool("visDrawServerTime", &vars::visDrawServerTime);
        registry.AddBool("visRaidsWorld", &vars::visRaidsWorld);
        registry.AddColor("visRaidsWorldColor", vars::visRaidsWorldColor);
        registry.AddBool("visRaidsMap", &vars::visRaidsMap);
        registry.AddColor("visRaidsMapColor", vars::visRaidsMapColor);
        registry.AddBool("visEventCrates", &vars::visEventCrates);
        registry.AddBool("visPatrolMap", &vars::visPatrolMap);
        registry.AddBool("visXray", &vars::visXray);
        registry.AddInt("visXrayKey", &vars::visXrayKey);
        registry.AddInt("visXrayMode", &vars::visXrayMode);
        registry.AddBool("visCombatMode", &vars::visCombatMode);
        registry.AddInt("visCombatKey", &vars::visCombatKey);
        registry.AddInt("visCombatMode2", &vars::visCombatMode2);
        registry.AddBool("crossEnabled", &vars::crossEnabled);
        registry.AddColor("crossColor", vars::crossColor);
        registry.AddInt("crossGap", &vars::crossGap);
        registry.AddInt("crossLength", &vars::crossLength);
        registry.AddInt("crossHeight", &vars::crossHeight);
        registry.AddBool("crossOutline", &vars::crossOutline);
        registry.AddInt("crossWeight", &vars::crossWeight);
    }
}
