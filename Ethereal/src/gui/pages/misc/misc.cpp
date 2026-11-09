#include "gui/pages/pages.hpp"

#include "config/config.hpp"
#include "gui/framework/badge/badge.hpp"
#include "gui/framework/bind/bind.hpp"
#include "gui/framework/checkbox/checkbox.hpp"
#include "gui/framework/groupbox/groupbox.hpp"
#include "gui/framework/layout/layout.hpp"
#include "gui/framework/slider/slider.hpp"

namespace vars
{
    bool miscFreecam = true;
    int miscFreecamKey = 0;
    int miscFreecamMode = 0;
    float miscFreecamSpeed = 0.64f;
    bool miscFastLoot = false;
    bool miscExtendedMelee = false;
    bool miscInstantRevive = false;
    bool miscInstantPickup = false;
    bool miscInstantUntie = false;
    bool miscAntiAfk = false;
    bool miscFishingBot = false;

    bool miscNoclip = false;
    int miscNoclipKey = ImGuiKey_T;
    int miscNoclipMode = 0;
    bool miscNoclipGrounded = true;
    bool miscNoclipSmallWaist = true;
    float miscNoclipSpeed = 2.22f;
    bool miscInteractive = false;
    int miscInteractiveKey = ImGuiKey_H;
    int miscInteractiveMode = 0;
    bool miscInteractiveCollision = false;
    float miscInteractiveSpeed = 1.f;
    bool miscJumpMidair = false;
    bool miscNoJumpCooldown = false;
    bool miscSnapTap = false;
    bool miscOmniSprint = false;
    bool miscAntiAim = false;
    bool miscNoSlowDown = false;
}

namespace pages
{
    void RenderMisc() noexcept
    {
        eth::BeginColumn(0.5f);

        if (eth::BeginColumnBox("General"))
        {
            eth::Checkbox("Freecam", &vars::miscFreecam);
            eth::Bind("##miscFreecamBind", &vars::miscFreecam, &vars::miscFreecamKey, &vars::miscFreecamMode);

            eth::Indent();
            eth::SliderFloat("Freecam speed", &vars::miscFreecamSpeed, 0.1f, 3.f, "%.2fx");
            eth::Unindent();

            eth::Checkbox("Fast loot", &vars::miscFastLoot);
            eth::Checkbox("Extended melee", &vars::miscExtendedMelee);
            eth::Checkbox("Instant revive", &vars::miscInstantRevive);
            eth::Checkbox("Instant pickup", &vars::miscInstantPickup);
            eth::Checkbox("Instant untie", &vars::miscInstantUntie);
            eth::Checkbox("Anti afk", &vars::miscAntiAfk);
            eth::Checkbox("Fishing bot", &vars::miscFishingBot);
        }
        eth::EndGroupBox();

        eth::EndColumn();
        eth::BeginColumn();

        if (eth::BeginColumnBox("Movement"))
        {
            eth::Checkbox("Noclip", &vars::miscNoclip);
            eth::Bind("##miscNoclipBind", &vars::miscNoclip, &vars::miscNoclipKey, &vars::miscNoclipMode);

            eth::Checkbox("Noclip grounded", &vars::miscNoclipGrounded);

            eth::Checkbox("Noclip small waist", &vars::miscNoclipSmallWaist);
            eth::StatusBadge(vars::miscNoclipSmallWaist);

            eth::SliderFloat("Noclip speed", &vars::miscNoclipSpeed, 0.1f, 10.f, "%.2fx");

            eth::Checkbox("Interactive", &vars::miscInteractive);
            eth::Bind("##miscInteractiveBind", &vars::miscInteractive, &vars::miscInteractiveKey, &vars::miscInteractiveMode);

            eth::Indent();
            eth::Checkbox("Interactive collision", &vars::miscInteractiveCollision);
            eth::SliderFloat("Interactive speed", &vars::miscInteractiveSpeed, 0.1f, 5.f, "%.2fx");
            eth::Unindent();

            eth::Checkbox("Jump while midair", &vars::miscJumpMidair);
            eth::Checkbox("No jump cooldown", &vars::miscNoJumpCooldown);
            eth::Checkbox("Snap tap", &vars::miscSnapTap);
            eth::Checkbox("Omni sprint", &vars::miscOmniSprint);
            eth::Checkbox("Anti aim", &vars::miscAntiAim);
            eth::Checkbox("No slow down", &vars::miscNoSlowDown);
        }
        eth::EndGroupBox();

        eth::EndColumn();
    }

    void RegisterMiscVars(config::VarRegistry& registry)
    {
        registry.AddBool("miscFreecam", &vars::miscFreecam);
        registry.AddInt("miscFreecamKey", &vars::miscFreecamKey);
        registry.AddInt("miscFreecamMode", &vars::miscFreecamMode);
        registry.AddFloat("miscFreecamSpeed", &vars::miscFreecamSpeed);
        registry.AddBool("miscFastLoot", &vars::miscFastLoot);
        registry.AddBool("miscExtendedMelee", &vars::miscExtendedMelee);
        registry.AddBool("miscInstantRevive", &vars::miscInstantRevive);
        registry.AddBool("miscInstantPickup", &vars::miscInstantPickup);
        registry.AddBool("miscInstantUntie", &vars::miscInstantUntie);
        registry.AddBool("miscAntiAfk", &vars::miscAntiAfk);
        registry.AddBool("miscFishingBot", &vars::miscFishingBot);
        registry.AddBool("miscNoclip", &vars::miscNoclip);
        registry.AddInt("miscNoclipKey", &vars::miscNoclipKey);
        registry.AddInt("miscNoclipMode", &vars::miscNoclipMode);
        registry.AddBool("miscNoclipGrounded", &vars::miscNoclipGrounded);
        registry.AddBool("miscNoclipSmallWaist", &vars::miscNoclipSmallWaist);
        registry.AddFloat("miscNoclipSpeed", &vars::miscNoclipSpeed);
        registry.AddBool("miscInteractive", &vars::miscInteractive);
        registry.AddInt("miscInteractiveKey", &vars::miscInteractiveKey);
        registry.AddInt("miscInteractiveMode", &vars::miscInteractiveMode);
        registry.AddBool("miscInteractiveCollision", &vars::miscInteractiveCollision);
        registry.AddFloat("miscInteractiveSpeed", &vars::miscInteractiveSpeed);
        registry.AddBool("miscJumpMidair", &vars::miscJumpMidair);
        registry.AddBool("miscNoJumpCooldown", &vars::miscNoJumpCooldown);
        registry.AddBool("miscSnapTap", &vars::miscSnapTap);
        registry.AddBool("miscOmniSprint", &vars::miscOmniSprint);
        registry.AddBool("miscAntiAim", &vars::miscAntiAim);
        registry.AddBool("miscNoSlowDown", &vars::miscNoSlowDown);
    }
}
