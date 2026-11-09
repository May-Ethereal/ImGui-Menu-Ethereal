#include "gui/pages/pages.hpp"

#include "config/config.hpp"
#include "gui/framework/badge/badge.hpp"
#include "gui/framework/checkbox/checkbox.hpp"
#include "gui/framework/colorswatch/colorswatch.hpp"
#include "gui/framework/groupbox/groupbox.hpp"
#include "gui/framework/layout/layout.hpp"
#include "gui/framework/list/list.hpp"
#include "gui/framework/slider/slider.hpp"
#include "gui/framework/style/style.hpp"
#include "gui/framework/tabbar/tabbar.hpp"

#include <cstdio>

namespace vars
{
    bool espPlayersEnabled = true;
    int espPlayersDistance = 104;
    bool espNpcsEnabled = true;
    int espNpcsDistance = 62;
    bool espAiEnabled = true;
    int espAiDistance = 146;
    bool espTrapEnabled = true;
    int espTrapDistance = 300;
    bool espVehiclesEnabled = false;
    int espVehiclesDistance = 300;
    bool espResourceEnabled = true;
    int espResourceDistance = 153;
    bool espCratesEnabled = true;
    int espCratesDistance = 300;
    bool espWorldEnabled = true;
    int espWorldDistance = 300;

    bool espShowPlayer = true;
    bool espShowFriendly = true;
    bool espShowEnemy = true;

    bool espPlayerName = true;
    float espPlayerNameColor[4] = { 1.f, 1.f, 1.f, 1.f };
    float espPlayerNameColorAlt[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espPlayerDistance = true;
    float espPlayerDistanceColor[4] = { 1.f, 1.f, 1.f, 1.f };
    float espPlayerDistanceColorAlt[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espPlayerBox = true;
    float espPlayerBoxColor[4] = { 1.f, 1.f, 1.f, 1.f };
    float espPlayerBoxColorAlt[4] = { 0.56f, 0.12f, 0.12f, 1.f };
    bool espPlayerSkeleton = false;
    float espPlayerSkeletonColor[4] = { 1.f, 1.f, 1.f, 1.f };
    float espPlayerSkeletonColorAlt[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espPlayerActiveItem = true;
    float espPlayerActiveItemColor[4] = { 1.f, 1.f, 1.f, 1.f };
    float espPlayerActiveItemColorAlt[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espPlayerTeam = true;
    float espPlayerTeamColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espPlayerRandomizeTeamColors = true;
    bool espPlayerFlags = true;
    bool espPlayerExplosives = true;
    bool espPlayerDrawOnMap = false;
    bool espPlayerOutOfFovArrows = false;
    float espPlayerOutOfFovArrowsColor[4] = { 0.84f, 0.42f, 0.12f, 1.f };
    int espPlayerArrowRadius = 71;
    int espPlayerArrowSize = 5;
    int espPlayerMaxDistance = 216;
    bool espPlayerIgnoreSleepers = true;
    bool espPlayerDrawBelt = true;
    int espPlayerBeltFov = 7;

    bool espShowScientist = true;
    bool espShowHeavyScientist = true;
    bool espShowPeacekeeper = false;
    bool espShowShopkeeper = false;

    bool espNpcName = false;
    float espNpcNameColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espNpcDistance = false;
    float espNpcDistanceColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espNpcBox = false;
    float espNpcBoxColor[4] = { 0.35f, 0.55f, 0.85f, 1.f };
    bool espNpcSkeleton = true;
    float espNpcSkeletonColor[4] = { 0.30f, 0.75f, 0.72f, 1.f };
    bool espNpcOverrideDistance = false;
    int espNpcSubDistance = 100;

    bool espShowBradley = true;
    bool espShowPatrol = true;
    bool espShowCargo = false;
    bool espShowBear = true;
    bool espShowHog = true;
    bool espShowChicken = false;
    bool espShowDeer = false;
    bool espShowWolf = true;
    bool espShowShark = false;
    bool espShowPanther = true;
    bool espShowTiger = true;
    bool espShowCrocodile = true;
    bool espShowSnake = false;

    bool espAiName = true;
    float espAiNameColor[4] = { 0.35f, 0.78f, 0.42f, 1.f };
    bool espAiDistanceRow = true;
    float espAiDistanceColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espAiHealth = true;
    bool espAiOverrideDistance = false;
    int espAiSubDistance = 100;

    bool espShowAutoTurret = true;
    bool espShowBearTrap = true;
    bool espShowSamSite = true;
    bool espShowShotgunTrap = true;
    bool espShowLandmine = true;
    bool espShowFlameTurret = true;
    bool espShowSpikes = false;

    bool espTrapName = true;
    float espTrapNameColor[4] = { 0.85f, 0.30f, 0.30f, 1.f };
    bool espTrapDistanceRow = true;
    float espTrapDistanceColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espTrapHealth = false;
    bool espTrapDrawOffline = false;
    bool espTrapOverrideDistance = true;
    int espTrapSubDistance = 100;

    bool espShowCar = true;
    bool espShowTrain = true;
    bool espShowBoat = false;
    bool espShowTugboat = false;
    bool espShowRhib = false;
    bool espShowHorse = false;
    bool espShowMinicopter = true;
    bool espShowScrapHelicopter = false;
    bool espShowAttackHelicopter = false;
    bool espShowSnowmobile = true;
    bool espShowBike = true;
    bool espShowMotorcycle = true;
    bool espShowKayak = true;
    bool espShowBoogieBoard = true;
    bool espShowDpv = true;
    bool espShowSoloSubmarine = true;
    bool espShowDuoSubmarine = true;

    bool espVehicleName = true;
    float espVehicleNameColor[4] = { 0.72f, 0.70f, 0.95f, 1.f };
    bool espVehicleDistanceRow = true;
    float espVehicleDistanceColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espVehicleHealth = false;
    bool espVehicleOverrideDistance = false;
    int espVehicleSubDistance = 100;

    bool espShowStoneOre = false;
    bool espShowMetalOre = false;
    bool espShowSulfurOre = false;
    bool espShowStone = false;
    bool espShowMetal = false;
    bool espShowSulfur = false;
    bool espShowWood = false;
    bool espShowDiesel = false;
    bool espShowHemp = true;
    bool espShowCorn = false;
    bool espShowPotato = true;
    bool espShowPumpkin = false;
    bool espShowMushroom = false;
    bool espShowYellowBerry = false;
    bool espShowBlueBerry = false;
    bool espShowWhiteBerry = false;
    bool espShowGreenBerry = false;
    bool espShowRedBerry = false;
    bool espShowBlackBerry = false;
    bool espShowWoodPile = false;

    bool espResourceName = true;
    float espResourceNameColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espResourceDistanceRow = true;
    float espResourceDistanceColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espResourceOverrideDistance = false;
    int espResourceSubDistance = 100;

    bool espShowHackableCrate = true;
    bool espShowBradleyCrate = false;
    bool espShowHeliCrate = false;
    bool espShowEliteCrate = false;
    bool espShowMilitaryCrate = false;
    bool espShowSupplyDrop = true;
    bool espShowBasicCrate = false;
    bool espShowMedicalCrate = false;
    bool espShowYellowCrate = false;
    bool espShowWoodCrate = false;
    bool espShowSmallCrate = false;
    bool espShowTechCrate = false;
    bool espShowAmmoBox = false;
    bool espShowFoodBox = false;
    bool espShowToolbox = false;
    bool espShowCarParts = false;
    bool espShowBarrel = false;
    bool espShowBlueBarrel = false;
    bool espShowFuelBarrel = false;
    bool espShowSunkenLargeBox = false;
    bool espShowSunkenSmallBox = false;
    bool espShowFoodCache = false;

    bool espCrateName = true;
    float espCrateNameColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espCrateDistanceRow = true;
    float espCrateDistanceColor[4] = { 1.f, 1.f, 1.f, 1.f };
    bool espCrateInfo = true;
    bool espCrateOverrideDistance = false;
    int espCrateSubDistance = 100;

    bool espShowItem = true;
    bool espShowPlayerCorpse = true;
    bool espShowScientistCorpse = false;
    bool espShowAnimalCorpse = false;
    bool espShowRecycler = false;
    bool espShowRepairBench = false;
    bool espShowResearchTable = false;
    bool espShowVendingMachine = false;
    bool espShowWorkbench1 = false;
    bool espShowWorkbench2 = false;
    bool espShowWorkbench3 = true;
    bool espShowSmallBox = false;
    bool espShowLargeBox = false;
    bool espShowSleepingBag = false;
    bool espShowSeismicSensor = false;
    bool espShowHbhfSensor = false;
    bool espShowLootBag = false;
    bool espShowRefinery = false;
    bool espShowTc = false;

    bool espWorldWeapon = true;
    float espWorldWeaponColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldConstruction = true;
    float espWorldConstructionColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldItems = true;
    float espWorldItemsColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldResources = true;
    float espWorldResourcesColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldAttire = true;
    float espWorldAttireColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldTool = true;
    float espWorldToolColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldMedical = true;
    float espWorldMedicalColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldFood = true;
    float espWorldFoodColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldAmmunition = true;
    float espWorldAmmunitionColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldTraps = true;
    float espWorldTrapsColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldMisc = true;
    float espWorldMiscColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldComponent = true;
    float espWorldComponentColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldElectrical = true;
    float espWorldElectricalColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldFun = true;
    float espWorldFunColor[4] = { 0.45f, 0.66f, 0.85f, 1.f };
    bool espWorldDistanceRow = true;
    float espWorldDistanceColor[4] = { 0.62f, 0.62f, 0.62f, 1.f };
    bool espWorldOverrideDistance = false;
    int espWorldSubDistance = 100;
    bool espWorldIgnoreArrowsNails = true;
}

namespace pages
{
    static const float kPlayerModifiersHeight = 104.f;
    static const float kNpcModifiersHeight = 64.f;

    static float espListWidth = 0.f;
    static float espPanelWidth = 0.f;

    static eth::Selection selectedPlayer = { "Player" };
    static eth::Selection selectedNpc = { "Scientist" };
    static eth::Selection selectedAi = { "Bradley" };
    static eth::Selection selectedTrap = { "Auto Turret" };
    static eth::Selection selectedVehicle = { "Car" };
    static eth::Selection selectedResource = { "Stone Ore" };
    static eth::Selection selectedCrate = { "Hackable Crate" };
    static eth::Selection selectedWorld = { "Item" };

    static ImVec2 EspListSize()
    {
        return ImVec2(espListWidth, ImGui::GetContentRegionAvail().y);
    }

    static ImVec2 EspPanelSize()
    {
        return ImVec2(espPanelWidth, ImGui::GetContentRegionAvail().y);
    }

    static ImVec2 EspPanelSize(float modifiersHeight)
    {
        const float spacing = ImGui::GetStyle().ItemSpacing.y;
        return ImVec2(espPanelWidth, ImGui::GetContentRegionAvail().y - style::Scaled(modifiersHeight) - spacing);
    }

    static ImVec2 EspModifiersSize(float height)
    {
        return ImVec2(espPanelWidth, style::Scaled(height));
    }

    static void EspOverrideRow(bool* isOverriding, int* distance, const char* id)
    {
        eth::Checkbox("Override max distance", isOverriding);

        if (*isOverriding)
        {
            char idBuffer[64];
            snprintf(idBuffer, sizeof(idBuffer), "Max distance##%s", id);
            eth::SliderDistance(idBuffer, distance, 300);
        }
    }

    void RenderEsp() noexcept
    {
        const ImVec2 available = ImGui::GetContentRegionAvail();
        const float spacing = ImGui::GetStyle().ItemSpacing.x;
        const float categoriesWidth = available.x * 0.27f;

        espListWidth = available.x * 0.36f;
        espPanelWidth = available.x - categoriesWidth - espListWidth - spacing * 2.f;

        if (eth::BeginGroupBox("Categories", ImVec2(categoriesWidth, available.y)))
        {
            eth::Checkbox("Players", &vars::espPlayersEnabled);
            if (vars::espPlayersEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatPlayers", &vars::espPlayersDistance, 300);
                eth::Unindent();
            }

            eth::Checkbox("NPCs", &vars::espNpcsEnabled);
            eth::StatusBadge(vars::espNpcsEnabled);
            if (vars::espNpcsEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatNpcs", &vars::espNpcsDistance, 300);
                eth::Unindent();
            }

            eth::Checkbox("AI", &vars::espAiEnabled);
            eth::StatusBadge(vars::espAiEnabled);
            if (vars::espAiEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatAi", &vars::espAiDistance, 300);
                eth::Unindent();
            }

            eth::Checkbox("Trap", &vars::espTrapEnabled);
            eth::StatusBadge(vars::espTrapEnabled);
            if (vars::espTrapEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatTrap", &vars::espTrapDistance, 300);
                eth::Unindent();
            }

            eth::Checkbox("Vehicles", &vars::espVehiclesEnabled);
            eth::StatusBadge(vars::espVehiclesEnabled);
            if (vars::espVehiclesEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatVehicles", &vars::espVehiclesDistance, 300);
                eth::Unindent();
            }

            eth::Checkbox("Resource", &vars::espResourceEnabled);
            eth::StatusBadge(vars::espResourceEnabled);
            if (vars::espResourceEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatResource", &vars::espResourceDistance, 300);
                eth::Unindent();
            }

            eth::Checkbox("Crates", &vars::espCratesEnabled);
            eth::StatusBadge(vars::espCratesEnabled);
            if (vars::espCratesEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatCrates", &vars::espCratesDistance, 300);
                eth::Unindent();
            }

            eth::Checkbox("World", &vars::espWorldEnabled);
            eth::StatusBadge(vars::espWorldEnabled);
            if (vars::espWorldEnabled)
            {
                eth::Indent();
                eth::SliderDistance("Max distance##espCatWorld", &vars::espWorldDistance, 300);
                eth::Unindent();
            }
        }
        eth::EndGroupBox();

        ImGui::SameLine();
        ImGui::BeginGroup();

        if (eth::BeginTabBar("##espCategories"))
        {
            if (eth::BeginTabItem("Players"))
            {
                if (eth::BeginGroupBox("Players", EspListSize()))
                {
                    if (eth::BeginList("##espPlayerItems"))
                    {
                        eth::ListRow("Player", &vars::espShowPlayer, selectedPlayer);
                        eth::ListRow("Friendly", &vars::espShowFriendly, selectedPlayer);
                        eth::ListRow("Enemy", &vars::espShowEnemy, selectedPlayer);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();
                ImGui::BeginGroup();

                if (eth::BeginGroupBox(selectedPlayer.current, EspPanelSize(kPlayerModifiersHeight)))
                {
                    eth::Checkbox("Name", &vars::espPlayerName);
                    eth::ColorSwatch("##espPlayerNameColor", vars::espPlayerNameColor);
                    eth::ColorSwatch("##espPlayerNameColorAlt", vars::espPlayerNameColorAlt);

                    eth::Checkbox("Distance", &vars::espPlayerDistance);
                    eth::ColorSwatch("##espPlayerDistanceColor", vars::espPlayerDistanceColor);
                    eth::ColorSwatch("##espPlayerDistanceColorAlt", vars::espPlayerDistanceColorAlt);

                    eth::Checkbox("Box", &vars::espPlayerBox);
                    eth::ColorSwatch("##espPlayerBoxColor", vars::espPlayerBoxColor);
                    eth::ColorSwatch("##espPlayerBoxColorAlt", vars::espPlayerBoxColorAlt);

                    eth::Checkbox("Skeleton", &vars::espPlayerSkeleton);
                    eth::ColorSwatch("##espPlayerSkeletonColor", vars::espPlayerSkeletonColor);
                    eth::ColorSwatch("##espPlayerSkeletonColorAlt", vars::espPlayerSkeletonColorAlt);

                    eth::Checkbox("Active Item", &vars::espPlayerActiveItem);
                    eth::ColorSwatch("##espPlayerActiveItemColor", vars::espPlayerActiveItemColor);
                    eth::ColorSwatch("##espPlayerActiveItemColorAlt", vars::espPlayerActiveItemColorAlt);

                    eth::Checkbox("Team", &vars::espPlayerTeam);
                    eth::ColorSwatch("##espPlayerTeamColor", vars::espPlayerTeamColor);

                    eth::Checkbox("Randomize team colors", &vars::espPlayerRandomizeTeamColors);
                    eth::Checkbox("Flags", &vars::espPlayerFlags);
                    eth::Checkbox("Explosives", &vars::espPlayerExplosives);
                    eth::Checkbox("Draw on map", &vars::espPlayerDrawOnMap);

                    eth::Checkbox("Out of fov arrows", &vars::espPlayerOutOfFovArrows);
                    eth::ColorSwatch("##espPlayerArrowsColor", vars::espPlayerOutOfFovArrowsColor);

                    eth::Indent();
                    eth::SliderInt("Arrow radius", &vars::espPlayerArrowRadius, 0, 100, "%d%%");
                    eth::SliderInt("Arrow size", &vars::espPlayerArrowSize, 0, 100, "%d%%");
                    eth::Unindent();
                }
                eth::EndGroupBox();

                if (eth::BeginGroupBox("Player modifiers", EspModifiersSize(kPlayerModifiersHeight)))
                {
                    eth::SliderDistance("Max distance", &vars::espPlayerMaxDistance, 300);

                    eth::Checkbox("Ignore sleepers", &vars::espPlayerIgnoreSleepers);
                    eth::StatusBadge(vars::espPlayerIgnoreSleepers);

                    eth::Checkbox("Draw belt", &vars::espPlayerDrawBelt);
                    eth::SliderInt("Belt field of view", &vars::espPlayerBeltFov, 0, 180, "%d\xC2\xB0");
                }
                eth::EndGroupBox();

                ImGui::EndGroup();
                eth::EndTabItem();
            }

            if (eth::BeginTabItem("NPCs"))
            {
                if (eth::BeginGroupBox("NPCs", EspListSize()))
                {
                    if (eth::BeginList("##espNpcItems"))
                    {
                        eth::ListRow("Scientist", &vars::espShowScientist, selectedNpc);
                        eth::ListRow("Heavy Scientist", &vars::espShowHeavyScientist, selectedNpc);
                        eth::ListRow("Peacekeeper", &vars::espShowPeacekeeper, selectedNpc);
                        eth::ListRow("Shopkeeper", &vars::espShowShopkeeper, selectedNpc);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();
                ImGui::BeginGroup();

                if (eth::BeginGroupBox(selectedNpc.current, EspPanelSize(kNpcModifiersHeight)))
                {
                    eth::Checkbox("Name", &vars::espNpcName);
                    eth::ColorSwatch("##espNpcNameColor", vars::espNpcNameColor);

                    eth::Checkbox("Distance", &vars::espNpcDistance);
                    eth::ColorSwatch("##espNpcDistanceColor", vars::espNpcDistanceColor);

                    eth::Checkbox("Box", &vars::espNpcBox);
                    eth::ColorSwatch("##espNpcBoxColor", vars::espNpcBoxColor);

                    eth::Checkbox("Skeleton", &vars::espNpcSkeleton);
                    eth::ColorSwatch("##espNpcSkeletonColor", vars::espNpcSkeletonColor);
                }
                eth::EndGroupBox();

                char modifiersTitle[80];
                snprintf(modifiersTitle, sizeof(modifiersTitle), "%s modifiers", selectedNpc.current);

                if (eth::BeginGroupBox(modifiersTitle, EspModifiersSize(kNpcModifiersHeight)))
                {
                    EspOverrideRow(&vars::espNpcOverrideDistance, &vars::espNpcSubDistance, "espNpcSub");
                }
                eth::EndGroupBox();

                ImGui::EndGroup();
                eth::EndTabItem();
            }

            if (eth::BeginTabItem("AI"))
            {
                if (eth::BeginGroupBox("AI", EspListSize()))
                {
                    if (eth::BeginList("##espAiItems"))
                    {
                        eth::ListRow("Bradley", &vars::espShowBradley, selectedAi);
                        eth::ListRow("Patrol", &vars::espShowPatrol, selectedAi);
                        eth::ListRow("Cargo", &vars::espShowCargo, selectedAi);
                        eth::ListRow("Bear", &vars::espShowBear, selectedAi);
                        eth::ListRow("Hog", &vars::espShowHog, selectedAi);
                        eth::ListRow("Chicken", &vars::espShowChicken, selectedAi);
                        eth::ListRow("Deer", &vars::espShowDeer, selectedAi);
                        eth::ListRow("Wolf", &vars::espShowWolf, selectedAi);
                        eth::ListRow("Shark", &vars::espShowShark, selectedAi);
                        eth::ListRow("Panther", &vars::espShowPanther, selectedAi);
                        eth::ListRow("Tiger", &vars::espShowTiger, selectedAi);
                        eth::ListRow("Crocodile", &vars::espShowCrocodile, selectedAi);
                        eth::ListRow("Snake", &vars::espShowSnake, selectedAi);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();

                if (eth::BeginGroupBox(selectedAi.current, EspPanelSize()))
                {
                    eth::Checkbox("Name", &vars::espAiName);
                    eth::ColorSwatch("##espAiNameColor", vars::espAiNameColor);

                    eth::Checkbox("Distance", &vars::espAiDistanceRow);
                    eth::ColorSwatch("##espAiDistanceColor", vars::espAiDistanceColor);

                    eth::Checkbox("Health", &vars::espAiHealth);

                    EspOverrideRow(&vars::espAiOverrideDistance, &vars::espAiSubDistance, "espAiSub");
                }
                eth::EndGroupBox();

                eth::EndTabItem();
            }

            if (eth::BeginTabItem("Trap"))
            {
                if (eth::BeginGroupBox("Trap", EspListSize()))
                {
                    if (eth::BeginList("##espTrapItems"))
                    {
                        eth::ListRow("Auto Turret", &vars::espShowAutoTurret, selectedTrap);
                        eth::ListRow("Bear Trap", &vars::espShowBearTrap, selectedTrap);
                        eth::ListRow("Sam Site", &vars::espShowSamSite, selectedTrap);
                        eth::ListRow("Shotgun Trap", &vars::espShowShotgunTrap, selectedTrap);
                        eth::ListRow("Landmine", &vars::espShowLandmine, selectedTrap);
                        eth::ListRow("Flame Turret", &vars::espShowFlameTurret, selectedTrap);
                        eth::ListRow("Spikes", &vars::espShowSpikes, selectedTrap);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();

                if (eth::BeginGroupBox(selectedTrap.current, EspPanelSize()))
                {
                    eth::Checkbox("Name", &vars::espTrapName);
                    eth::ColorSwatch("##espTrapNameColor", vars::espTrapNameColor);

                    eth::Checkbox("Distance", &vars::espTrapDistanceRow);
                    eth::ColorSwatch("##espTrapDistanceColor", vars::espTrapDistanceColor);

                    eth::Checkbox("Health", &vars::espTrapHealth);
                    eth::Checkbox("Draw offline", &vars::espTrapDrawOffline);

                    EspOverrideRow(&vars::espTrapOverrideDistance, &vars::espTrapSubDistance, "espTrapSub");
                }
                eth::EndGroupBox();

                eth::EndTabItem();
            }

            if (eth::BeginTabItem("Vehicles"))
            {
                if (eth::BeginGroupBox("Vehicles", EspListSize()))
                {
                    if (eth::BeginList("##espVehicleItems"))
                    {
                        eth::ListRow("Car", &vars::espShowCar, selectedVehicle);
                        eth::ListRow("Train", &vars::espShowTrain, selectedVehicle);
                        eth::ListRow("Boat", &vars::espShowBoat, selectedVehicle);
                        eth::ListRow("Tugboat", &vars::espShowTugboat, selectedVehicle);
                        eth::ListRow("RHIB", &vars::espShowRhib, selectedVehicle);
                        eth::ListRow("Horse", &vars::espShowHorse, selectedVehicle);
                        eth::ListRow("Minicopter", &vars::espShowMinicopter, selectedVehicle);
                        eth::ListRow("Scrap Helicopter", &vars::espShowScrapHelicopter, selectedVehicle);
                        eth::ListRow("Attack Helicopter", &vars::espShowAttackHelicopter, selectedVehicle);
                        eth::ListRow("Snowmobile", &vars::espShowSnowmobile, selectedVehicle);
                        eth::ListRow("Bike", &vars::espShowBike, selectedVehicle);
                        eth::ListRow("Motorcycle", &vars::espShowMotorcycle, selectedVehicle);
                        eth::ListRow("Kayak", &vars::espShowKayak, selectedVehicle);
                        eth::ListRow("Boogie Board", &vars::espShowBoogieBoard, selectedVehicle);
                        eth::ListRow("Dpv", &vars::espShowDpv, selectedVehicle);
                        eth::ListRow("Solo Submarine", &vars::espShowSoloSubmarine, selectedVehicle);
                        eth::ListRow("Duo Submarine", &vars::espShowDuoSubmarine, selectedVehicle);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();

                if (eth::BeginGroupBox(selectedVehicle.current, EspPanelSize()))
                {
                    eth::Checkbox("Name", &vars::espVehicleName);
                    eth::ColorSwatch("##espVehicleNameColor", vars::espVehicleNameColor);

                    eth::Checkbox("Distance", &vars::espVehicleDistanceRow);
                    eth::ColorSwatch("##espVehicleDistanceColor", vars::espVehicleDistanceColor);

                    eth::Checkbox("Health", &vars::espVehicleHealth);

                    EspOverrideRow(&vars::espVehicleOverrideDistance, &vars::espVehicleSubDistance, "espVehicleSub");
                }
                eth::EndGroupBox();

                eth::EndTabItem();
            }

            if (eth::BeginTabItem("Resource"))
            {
                if (eth::BeginGroupBox("Resource", EspListSize()))
                {
                    if (eth::BeginList("##espResourceItems"))
                    {
                        eth::ListRow("Stone Ore", &vars::espShowStoneOre, selectedResource);
                        eth::ListRow("Metal Ore", &vars::espShowMetalOre, selectedResource);
                        eth::ListRow("Sulfur Ore", &vars::espShowSulfurOre, selectedResource);
                        eth::ListRow("Stone", &vars::espShowStone, selectedResource);
                        eth::ListRow("Metal", &vars::espShowMetal, selectedResource);
                        eth::ListRow("Sulfur", &vars::espShowSulfur, selectedResource);
                        eth::ListRow("Wood", &vars::espShowWood, selectedResource);
                        eth::ListRow("Diesel", &vars::espShowDiesel, selectedResource);
                        eth::ListRow("Hemp", &vars::espShowHemp, selectedResource);
                        eth::ListRow("Corn", &vars::espShowCorn, selectedResource);
                        eth::ListRow("Potato", &vars::espShowPotato, selectedResource);
                        eth::ListRow("Pumpkin", &vars::espShowPumpkin, selectedResource);
                        eth::ListRow("Mushroom", &vars::espShowMushroom, selectedResource);
                        eth::ListRow("Yellow Berry", &vars::espShowYellowBerry, selectedResource);
                        eth::ListRow("Blue Berry", &vars::espShowBlueBerry, selectedResource);
                        eth::ListRow("White Berry", &vars::espShowWhiteBerry, selectedResource);
                        eth::ListRow("Green Berry", &vars::espShowGreenBerry, selectedResource);
                        eth::ListRow("Red Berry", &vars::espShowRedBerry, selectedResource);
                        eth::ListRow("Black Berry", &vars::espShowBlackBerry, selectedResource);
                        eth::ListRow("Wood Pile", &vars::espShowWoodPile, selectedResource);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();

                if (eth::BeginGroupBox(selectedResource.current, EspPanelSize()))
                {
                    eth::Checkbox("Name", &vars::espResourceName);
                    eth::ColorSwatch("##espResourceNameColor", vars::espResourceNameColor);

                    eth::Checkbox("Distance", &vars::espResourceDistanceRow);
                    eth::ColorSwatch("##espResourceDistanceColor", vars::espResourceDistanceColor);

                    EspOverrideRow(&vars::espResourceOverrideDistance, &vars::espResourceSubDistance, "espResourceSub");
                }
                eth::EndGroupBox();

                eth::EndTabItem();
            }

            if (eth::BeginTabItem("Crates"))
            {
                if (eth::BeginGroupBox("Crates", EspListSize()))
                {
                    if (eth::BeginList("##espCrateItems"))
                    {
                        eth::ListRow("Hackable Crate", &vars::espShowHackableCrate, selectedCrate);
                        eth::ListRow("Bradley Crate", &vars::espShowBradleyCrate, selectedCrate);
                        eth::ListRow("Heli Crate", &vars::espShowHeliCrate, selectedCrate);
                        eth::ListRow("Elite Crate", &vars::espShowEliteCrate, selectedCrate);
                        eth::ListRow("Military Crate", &vars::espShowMilitaryCrate, selectedCrate);
                        eth::ListRow("Supply Drop", &vars::espShowSupplyDrop, selectedCrate);
                        eth::ListRow("Basic Crate", &vars::espShowBasicCrate, selectedCrate);
                        eth::ListRow("Medical Crate", &vars::espShowMedicalCrate, selectedCrate);
                        eth::ListRow("Yellow Crate", &vars::espShowYellowCrate, selectedCrate);
                        eth::ListRow("Wood Crate", &vars::espShowWoodCrate, selectedCrate);
                        eth::ListRow("Small Crate", &vars::espShowSmallCrate, selectedCrate);
                        eth::ListRow("Tech Crate", &vars::espShowTechCrate, selectedCrate);
                        eth::ListRow("Ammo Box", &vars::espShowAmmoBox, selectedCrate);
                        eth::ListRow("Food Box", &vars::espShowFoodBox, selectedCrate);
                        eth::ListRow("Toolbox", &vars::espShowToolbox, selectedCrate);
                        eth::ListRow("Car Parts", &vars::espShowCarParts, selectedCrate);
                        eth::ListRow("Barrel", &vars::espShowBarrel, selectedCrate);
                        eth::ListRow("Blue Barrel", &vars::espShowBlueBarrel, selectedCrate);
                        eth::ListRow("Fuel Barrel", &vars::espShowFuelBarrel, selectedCrate);
                        eth::ListRow("Sunken Large Box", &vars::espShowSunkenLargeBox, selectedCrate);
                        eth::ListRow("Sunken Small Box", &vars::espShowSunkenSmallBox, selectedCrate);
                        eth::ListRow("Food Cache", &vars::espShowFoodCache, selectedCrate);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();

                if (eth::BeginGroupBox(selectedCrate.current, EspPanelSize()))
                {
                    eth::Checkbox("Name", &vars::espCrateName);
                    eth::ColorSwatch("##espCrateNameColor", vars::espCrateNameColor);

                    eth::Checkbox("Distance", &vars::espCrateDistanceRow);
                    eth::ColorSwatch("##espCrateDistanceColor", vars::espCrateDistanceColor);

                    eth::Checkbox("Info", &vars::espCrateInfo);

                    EspOverrideRow(&vars::espCrateOverrideDistance, &vars::espCrateSubDistance, "espCrateSub");
                }
                eth::EndGroupBox();

                eth::EndTabItem();
            }

            if (eth::BeginTabItem("World"))
            {
                if (eth::BeginGroupBox("World", EspListSize()))
                {
                    if (eth::BeginList("##espWorldItems"))
                    {
                        eth::ListRow("Item", &vars::espShowItem, selectedWorld);
                        eth::ListRow("Player Corpse", &vars::espShowPlayerCorpse, selectedWorld);
                        eth::ListRow("Scientist Corpse", &vars::espShowScientistCorpse, selectedWorld);
                        eth::ListRow("Animal Corpse", &vars::espShowAnimalCorpse, selectedWorld);
                        eth::ListRow("Recycler", &vars::espShowRecycler, selectedWorld);
                        eth::ListRow("Repair Bench", &vars::espShowRepairBench, selectedWorld);
                        eth::ListRow("Research Table", &vars::espShowResearchTable, selectedWorld);
                        eth::ListRow("Vending Machine", &vars::espShowVendingMachine, selectedWorld);
                        eth::ListRow("Workbench 1", &vars::espShowWorkbench1, selectedWorld);
                        eth::ListRow("Workbench 2", &vars::espShowWorkbench2, selectedWorld);
                        eth::ListRow("Workbench 3", &vars::espShowWorkbench3, selectedWorld);
                        eth::ListRow("Small Box", &vars::espShowSmallBox, selectedWorld);
                        eth::ListRow("Large Box", &vars::espShowLargeBox, selectedWorld);
                        eth::ListRow("Sleeping Bag", &vars::espShowSleepingBag, selectedWorld);
                        eth::ListRow("Seismic Sensor", &vars::espShowSeismicSensor, selectedWorld);
                        eth::ListRow("HBHF Sensor", &vars::espShowHbhfSensor, selectedWorld);
                        eth::ListRow("Loot Bag", &vars::espShowLootBag, selectedWorld);
                        eth::ListRow("Refinery", &vars::espShowRefinery, selectedWorld);
                        eth::ListRow("Tc", &vars::espShowTc, selectedWorld);
                    }
                    eth::EndList();
                }
                eth::EndGroupBox();

                ImGui::SameLine();

                if (eth::BeginGroupBox(selectedWorld.current, EspPanelSize()))
                {
                    eth::Checkbox("Weapon", &vars::espWorldWeapon);
                    eth::ColorSwatch("##espWorldWeaponColor", vars::espWorldWeaponColor);

                    eth::Checkbox("Construction", &vars::espWorldConstruction);
                    eth::ColorSwatch("##espWorldConstructionColor", vars::espWorldConstructionColor);

                    eth::Checkbox("Items", &vars::espWorldItems);
                    eth::ColorSwatch("##espWorldItemsColor", vars::espWorldItemsColor);

                    eth::Checkbox("Resources", &vars::espWorldResources);
                    eth::ColorSwatch("##espWorldResourcesColor", vars::espWorldResourcesColor);

                    eth::Checkbox("Attire", &vars::espWorldAttire);
                    eth::ColorSwatch("##espWorldAttireColor", vars::espWorldAttireColor);

                    eth::Checkbox("Tool", &vars::espWorldTool);
                    eth::ColorSwatch("##espWorldToolColor", vars::espWorldToolColor);

                    eth::Checkbox("Medical", &vars::espWorldMedical);
                    eth::ColorSwatch("##espWorldMedicalColor", vars::espWorldMedicalColor);

                    eth::Checkbox("Food", &vars::espWorldFood);
                    eth::ColorSwatch("##espWorldFoodColor", vars::espWorldFoodColor);

                    eth::Checkbox("Ammunition", &vars::espWorldAmmunition);
                    eth::ColorSwatch("##espWorldAmmunitionColor", vars::espWorldAmmunitionColor);

                    eth::Checkbox("Traps", &vars::espWorldTraps);
                    eth::ColorSwatch("##espWorldTrapsColor", vars::espWorldTrapsColor);

                    eth::Checkbox("Misc", &vars::espWorldMisc);
                    eth::ColorSwatch("##espWorldMiscColor", vars::espWorldMiscColor);

                    eth::Checkbox("Component", &vars::espWorldComponent);
                    eth::ColorSwatch("##espWorldComponentColor", vars::espWorldComponentColor);

                    eth::Checkbox("Electrical", &vars::espWorldElectrical);
                    eth::ColorSwatch("##espWorldElectricalColor", vars::espWorldElectricalColor);

                    eth::Checkbox("Fun", &vars::espWorldFun);
                    eth::ColorSwatch("##espWorldFunColor", vars::espWorldFunColor);

                    eth::Checkbox("Distance", &vars::espWorldDistanceRow);
                    eth::ColorSwatch("##espWorldDistanceColor", vars::espWorldDistanceColor);

                    EspOverrideRow(&vars::espWorldOverrideDistance, &vars::espWorldSubDistance, "espWorldSub");

                    eth::Checkbox("Ignore single arrows & nails", &vars::espWorldIgnoreArrowsNails);
                }
                eth::EndGroupBox();

                eth::EndTabItem();
            }

            eth::EndTabBar();
        }

        ImGui::EndGroup();
    }

    void RegisterEspVars(config::VarRegistry& registry)
    {
        registry.AddBool("espPlayersEnabled", &vars::espPlayersEnabled);
        registry.AddInt("espPlayersDistance", &vars::espPlayersDistance);
        registry.AddBool("espNpcsEnabled", &vars::espNpcsEnabled);
        registry.AddInt("espNpcsDistance", &vars::espNpcsDistance);
        registry.AddBool("espAiEnabled", &vars::espAiEnabled);
        registry.AddInt("espAiDistance", &vars::espAiDistance);
        registry.AddBool("espTrapEnabled", &vars::espTrapEnabled);
        registry.AddInt("espTrapDistance", &vars::espTrapDistance);
        registry.AddBool("espVehiclesEnabled", &vars::espVehiclesEnabled);
        registry.AddInt("espVehiclesDistance", &vars::espVehiclesDistance);
        registry.AddBool("espResourceEnabled", &vars::espResourceEnabled);
        registry.AddInt("espResourceDistance", &vars::espResourceDistance);
        registry.AddBool("espCratesEnabled", &vars::espCratesEnabled);
        registry.AddInt("espCratesDistance", &vars::espCratesDistance);
        registry.AddBool("espWorldEnabled", &vars::espWorldEnabled);
        registry.AddInt("espWorldDistance", &vars::espWorldDistance);

        registry.AddBool("espShowPlayer", &vars::espShowPlayer);
        registry.AddBool("espShowFriendly", &vars::espShowFriendly);
        registry.AddBool("espShowEnemy", &vars::espShowEnemy);

        registry.AddBool("espPlayerName", &vars::espPlayerName);
        registry.AddColor("espPlayerNameColor", vars::espPlayerNameColor);
        registry.AddColor("espPlayerNameColorAlt", vars::espPlayerNameColorAlt);
        registry.AddBool("espPlayerDistance", &vars::espPlayerDistance);
        registry.AddColor("espPlayerDistanceColor", vars::espPlayerDistanceColor);
        registry.AddColor("espPlayerDistanceColorAlt", vars::espPlayerDistanceColorAlt);
        registry.AddBool("espPlayerBox", &vars::espPlayerBox);
        registry.AddColor("espPlayerBoxColor", vars::espPlayerBoxColor);
        registry.AddColor("espPlayerBoxColorAlt", vars::espPlayerBoxColorAlt);
        registry.AddBool("espPlayerSkeleton", &vars::espPlayerSkeleton);
        registry.AddColor("espPlayerSkeletonColor", vars::espPlayerSkeletonColor);
        registry.AddColor("espPlayerSkeletonColorAlt", vars::espPlayerSkeletonColorAlt);
        registry.AddBool("espPlayerActiveItem", &vars::espPlayerActiveItem);
        registry.AddColor("espPlayerActiveItemColor", vars::espPlayerActiveItemColor);
        registry.AddColor("espPlayerActiveItemColorAlt", vars::espPlayerActiveItemColorAlt);
        registry.AddBool("espPlayerTeam", &vars::espPlayerTeam);
        registry.AddColor("espPlayerTeamColor", vars::espPlayerTeamColor);
        registry.AddBool("espPlayerRandomizeTeamColors", &vars::espPlayerRandomizeTeamColors);
        registry.AddBool("espPlayerFlags", &vars::espPlayerFlags);
        registry.AddBool("espPlayerExplosives", &vars::espPlayerExplosives);
        registry.AddBool("espPlayerDrawOnMap", &vars::espPlayerDrawOnMap);
        registry.AddBool("espPlayerOutOfFovArrows", &vars::espPlayerOutOfFovArrows);
        registry.AddColor("espPlayerOutOfFovArrowsColor", vars::espPlayerOutOfFovArrowsColor);
        registry.AddInt("espPlayerArrowRadius", &vars::espPlayerArrowRadius);
        registry.AddInt("espPlayerArrowSize", &vars::espPlayerArrowSize);
        registry.AddInt("espPlayerMaxDistance", &vars::espPlayerMaxDistance);
        registry.AddBool("espPlayerIgnoreSleepers", &vars::espPlayerIgnoreSleepers);
        registry.AddBool("espPlayerDrawBelt", &vars::espPlayerDrawBelt);
        registry.AddInt("espPlayerBeltFov", &vars::espPlayerBeltFov);

        registry.AddBool("espShowScientist", &vars::espShowScientist);
        registry.AddBool("espShowHeavyScientist", &vars::espShowHeavyScientist);
        registry.AddBool("espShowPeacekeeper", &vars::espShowPeacekeeper);
        registry.AddBool("espShowShopkeeper", &vars::espShowShopkeeper);

        registry.AddBool("espNpcName", &vars::espNpcName);
        registry.AddColor("espNpcNameColor", vars::espNpcNameColor);
        registry.AddBool("espNpcDistance", &vars::espNpcDistance);
        registry.AddColor("espNpcDistanceColor", vars::espNpcDistanceColor);
        registry.AddBool("espNpcBox", &vars::espNpcBox);
        registry.AddColor("espNpcBoxColor", vars::espNpcBoxColor);
        registry.AddBool("espNpcSkeleton", &vars::espNpcSkeleton);
        registry.AddColor("espNpcSkeletonColor", vars::espNpcSkeletonColor);
        registry.AddBool("espNpcOverrideDistance", &vars::espNpcOverrideDistance);
        registry.AddInt("espNpcSubDistance", &vars::espNpcSubDistance);

        registry.AddBool("espShowBradley", &vars::espShowBradley);
        registry.AddBool("espShowPatrol", &vars::espShowPatrol);
        registry.AddBool("espShowCargo", &vars::espShowCargo);
        registry.AddBool("espShowBear", &vars::espShowBear);
        registry.AddBool("espShowHog", &vars::espShowHog);
        registry.AddBool("espShowChicken", &vars::espShowChicken);
        registry.AddBool("espShowDeer", &vars::espShowDeer);
        registry.AddBool("espShowWolf", &vars::espShowWolf);
        registry.AddBool("espShowShark", &vars::espShowShark);
        registry.AddBool("espShowPanther", &vars::espShowPanther);
        registry.AddBool("espShowTiger", &vars::espShowTiger);
        registry.AddBool("espShowCrocodile", &vars::espShowCrocodile);
        registry.AddBool("espShowSnake", &vars::espShowSnake);

        registry.AddBool("espAiName", &vars::espAiName);
        registry.AddColor("espAiNameColor", vars::espAiNameColor);
        registry.AddBool("espAiDistanceRow", &vars::espAiDistanceRow);
        registry.AddColor("espAiDistanceColor", vars::espAiDistanceColor);
        registry.AddBool("espAiHealth", &vars::espAiHealth);
        registry.AddBool("espAiOverrideDistance", &vars::espAiOverrideDistance);
        registry.AddInt("espAiSubDistance", &vars::espAiSubDistance);

        registry.AddBool("espShowAutoTurret", &vars::espShowAutoTurret);
        registry.AddBool("espShowBearTrap", &vars::espShowBearTrap);
        registry.AddBool("espShowSamSite", &vars::espShowSamSite);
        registry.AddBool("espShowShotgunTrap", &vars::espShowShotgunTrap);
        registry.AddBool("espShowLandmine", &vars::espShowLandmine);
        registry.AddBool("espShowFlameTurret", &vars::espShowFlameTurret);
        registry.AddBool("espShowSpikes", &vars::espShowSpikes);

        registry.AddBool("espTrapName", &vars::espTrapName);
        registry.AddColor("espTrapNameColor", vars::espTrapNameColor);
        registry.AddBool("espTrapDistanceRow", &vars::espTrapDistanceRow);
        registry.AddColor("espTrapDistanceColor", vars::espTrapDistanceColor);
        registry.AddBool("espTrapHealth", &vars::espTrapHealth);
        registry.AddBool("espTrapDrawOffline", &vars::espTrapDrawOffline);
        registry.AddBool("espTrapOverrideDistance", &vars::espTrapOverrideDistance);
        registry.AddInt("espTrapSubDistance", &vars::espTrapSubDistance);

        registry.AddBool("espShowCar", &vars::espShowCar);
        registry.AddBool("espShowTrain", &vars::espShowTrain);
        registry.AddBool("espShowBoat", &vars::espShowBoat);
        registry.AddBool("espShowTugboat", &vars::espShowTugboat);
        registry.AddBool("espShowRhib", &vars::espShowRhib);
        registry.AddBool("espShowHorse", &vars::espShowHorse);
        registry.AddBool("espShowMinicopter", &vars::espShowMinicopter);
        registry.AddBool("espShowScrapHelicopter", &vars::espShowScrapHelicopter);
        registry.AddBool("espShowAttackHelicopter", &vars::espShowAttackHelicopter);
        registry.AddBool("espShowSnowmobile", &vars::espShowSnowmobile);
        registry.AddBool("espShowBike", &vars::espShowBike);
        registry.AddBool("espShowMotorcycle", &vars::espShowMotorcycle);
        registry.AddBool("espShowKayak", &vars::espShowKayak);
        registry.AddBool("espShowBoogieBoard", &vars::espShowBoogieBoard);
        registry.AddBool("espShowDpv", &vars::espShowDpv);
        registry.AddBool("espShowSoloSubmarine", &vars::espShowSoloSubmarine);
        registry.AddBool("espShowDuoSubmarine", &vars::espShowDuoSubmarine);

        registry.AddBool("espVehicleName", &vars::espVehicleName);
        registry.AddColor("espVehicleNameColor", vars::espVehicleNameColor);
        registry.AddBool("espVehicleDistanceRow", &vars::espVehicleDistanceRow);
        registry.AddColor("espVehicleDistanceColor", vars::espVehicleDistanceColor);
        registry.AddBool("espVehicleHealth", &vars::espVehicleHealth);
        registry.AddBool("espVehicleOverrideDistance", &vars::espVehicleOverrideDistance);
        registry.AddInt("espVehicleSubDistance", &vars::espVehicleSubDistance);

        registry.AddBool("espShowStoneOre", &vars::espShowStoneOre);
        registry.AddBool("espShowMetalOre", &vars::espShowMetalOre);
        registry.AddBool("espShowSulfurOre", &vars::espShowSulfurOre);
        registry.AddBool("espShowStone", &vars::espShowStone);
        registry.AddBool("espShowMetal", &vars::espShowMetal);
        registry.AddBool("espShowSulfur", &vars::espShowSulfur);
        registry.AddBool("espShowWood", &vars::espShowWood);
        registry.AddBool("espShowDiesel", &vars::espShowDiesel);
        registry.AddBool("espShowHemp", &vars::espShowHemp);
        registry.AddBool("espShowCorn", &vars::espShowCorn);
        registry.AddBool("espShowPotato", &vars::espShowPotato);
        registry.AddBool("espShowPumpkin", &vars::espShowPumpkin);
        registry.AddBool("espShowMushroom", &vars::espShowMushroom);
        registry.AddBool("espShowYellowBerry", &vars::espShowYellowBerry);
        registry.AddBool("espShowBlueBerry", &vars::espShowBlueBerry);
        registry.AddBool("espShowWhiteBerry", &vars::espShowWhiteBerry);
        registry.AddBool("espShowGreenBerry", &vars::espShowGreenBerry);
        registry.AddBool("espShowRedBerry", &vars::espShowRedBerry);
        registry.AddBool("espShowBlackBerry", &vars::espShowBlackBerry);
        registry.AddBool("espShowWoodPile", &vars::espShowWoodPile);

        registry.AddBool("espResourceName", &vars::espResourceName);
        registry.AddColor("espResourceNameColor", vars::espResourceNameColor);
        registry.AddBool("espResourceDistanceRow", &vars::espResourceDistanceRow);
        registry.AddColor("espResourceDistanceColor", vars::espResourceDistanceColor);
        registry.AddBool("espResourceOverrideDistance", &vars::espResourceOverrideDistance);
        registry.AddInt("espResourceSubDistance", &vars::espResourceSubDistance);

        registry.AddBool("espShowHackableCrate", &vars::espShowHackableCrate);
        registry.AddBool("espShowBradleyCrate", &vars::espShowBradleyCrate);
        registry.AddBool("espShowHeliCrate", &vars::espShowHeliCrate);
        registry.AddBool("espShowEliteCrate", &vars::espShowEliteCrate);
        registry.AddBool("espShowMilitaryCrate", &vars::espShowMilitaryCrate);
        registry.AddBool("espShowSupplyDrop", &vars::espShowSupplyDrop);
        registry.AddBool("espShowBasicCrate", &vars::espShowBasicCrate);
        registry.AddBool("espShowMedicalCrate", &vars::espShowMedicalCrate);
        registry.AddBool("espShowYellowCrate", &vars::espShowYellowCrate);
        registry.AddBool("espShowWoodCrate", &vars::espShowWoodCrate);
        registry.AddBool("espShowSmallCrate", &vars::espShowSmallCrate);
        registry.AddBool("espShowTechCrate", &vars::espShowTechCrate);
        registry.AddBool("espShowAmmoBox", &vars::espShowAmmoBox);
        registry.AddBool("espShowFoodBox", &vars::espShowFoodBox);
        registry.AddBool("espShowToolbox", &vars::espShowToolbox);
        registry.AddBool("espShowCarParts", &vars::espShowCarParts);
        registry.AddBool("espShowBarrel", &vars::espShowBarrel);
        registry.AddBool("espShowBlueBarrel", &vars::espShowBlueBarrel);
        registry.AddBool("espShowFuelBarrel", &vars::espShowFuelBarrel);
        registry.AddBool("espShowSunkenLargeBox", &vars::espShowSunkenLargeBox);
        registry.AddBool("espShowSunkenSmallBox", &vars::espShowSunkenSmallBox);
        registry.AddBool("espShowFoodCache", &vars::espShowFoodCache);

        registry.AddBool("espCrateName", &vars::espCrateName);
        registry.AddColor("espCrateNameColor", vars::espCrateNameColor);
        registry.AddBool("espCrateDistanceRow", &vars::espCrateDistanceRow);
        registry.AddColor("espCrateDistanceColor", vars::espCrateDistanceColor);
        registry.AddBool("espCrateInfo", &vars::espCrateInfo);
        registry.AddBool("espCrateOverrideDistance", &vars::espCrateOverrideDistance);
        registry.AddInt("espCrateSubDistance", &vars::espCrateSubDistance);

        registry.AddBool("espShowItem", &vars::espShowItem);
        registry.AddBool("espShowPlayerCorpse", &vars::espShowPlayerCorpse);
        registry.AddBool("espShowScientistCorpse", &vars::espShowScientistCorpse);
        registry.AddBool("espShowAnimalCorpse", &vars::espShowAnimalCorpse);
        registry.AddBool("espShowRecycler", &vars::espShowRecycler);
        registry.AddBool("espShowRepairBench", &vars::espShowRepairBench);
        registry.AddBool("espShowResearchTable", &vars::espShowResearchTable);
        registry.AddBool("espShowVendingMachine", &vars::espShowVendingMachine);
        registry.AddBool("espShowWorkbench1", &vars::espShowWorkbench1);
        registry.AddBool("espShowWorkbench2", &vars::espShowWorkbench2);
        registry.AddBool("espShowWorkbench3", &vars::espShowWorkbench3);
        registry.AddBool("espShowSmallBox", &vars::espShowSmallBox);
        registry.AddBool("espShowLargeBox", &vars::espShowLargeBox);
        registry.AddBool("espShowSleepingBag", &vars::espShowSleepingBag);
        registry.AddBool("espShowSeismicSensor", &vars::espShowSeismicSensor);
        registry.AddBool("espShowHbhfSensor", &vars::espShowHbhfSensor);
        registry.AddBool("espShowLootBag", &vars::espShowLootBag);
        registry.AddBool("espShowRefinery", &vars::espShowRefinery);
        registry.AddBool("espShowTc", &vars::espShowTc);

        registry.AddBool("espWorldWeapon", &vars::espWorldWeapon);
        registry.AddColor("espWorldWeaponColor", vars::espWorldWeaponColor);
        registry.AddBool("espWorldConstruction", &vars::espWorldConstruction);
        registry.AddColor("espWorldConstructionColor", vars::espWorldConstructionColor);
        registry.AddBool("espWorldItems", &vars::espWorldItems);
        registry.AddColor("espWorldItemsColor", vars::espWorldItemsColor);
        registry.AddBool("espWorldResources", &vars::espWorldResources);
        registry.AddColor("espWorldResourcesColor", vars::espWorldResourcesColor);
        registry.AddBool("espWorldAttire", &vars::espWorldAttire);
        registry.AddColor("espWorldAttireColor", vars::espWorldAttireColor);
        registry.AddBool("espWorldTool", &vars::espWorldTool);
        registry.AddColor("espWorldToolColor", vars::espWorldToolColor);
        registry.AddBool("espWorldMedical", &vars::espWorldMedical);
        registry.AddColor("espWorldMedicalColor", vars::espWorldMedicalColor);
        registry.AddBool("espWorldFood", &vars::espWorldFood);
        registry.AddColor("espWorldFoodColor", vars::espWorldFoodColor);
        registry.AddBool("espWorldAmmunition", &vars::espWorldAmmunition);
        registry.AddColor("espWorldAmmunitionColor", vars::espWorldAmmunitionColor);
        registry.AddBool("espWorldTraps", &vars::espWorldTraps);
        registry.AddColor("espWorldTrapsColor", vars::espWorldTrapsColor);
        registry.AddBool("espWorldMisc", &vars::espWorldMisc);
        registry.AddColor("espWorldMiscColor", vars::espWorldMiscColor);
        registry.AddBool("espWorldComponent", &vars::espWorldComponent);
        registry.AddColor("espWorldComponentColor", vars::espWorldComponentColor);
        registry.AddBool("espWorldElectrical", &vars::espWorldElectrical);
        registry.AddColor("espWorldElectricalColor", vars::espWorldElectricalColor);
        registry.AddBool("espWorldFun", &vars::espWorldFun);
        registry.AddColor("espWorldFunColor", vars::espWorldFunColor);
        registry.AddBool("espWorldDistanceRow", &vars::espWorldDistanceRow);
        registry.AddColor("espWorldDistanceColor", vars::espWorldDistanceColor);
        registry.AddBool("espWorldOverrideDistance", &vars::espWorldOverrideDistance);
        registry.AddInt("espWorldSubDistance", &vars::espWorldSubDistance);
        registry.AddBool("espWorldIgnoreArrowsNails", &vars::espWorldIgnoreArrowsNails);
    }
}
