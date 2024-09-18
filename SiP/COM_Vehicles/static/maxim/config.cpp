class cfgPatches
{
    class SiP_Patch_pm1910_maxim_static
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "static_f_vietnam",
            "static_f_vietnam_c",
            "weapons_v_f_vietnam",
            "NORTH_StaticWeapons",
            "NORTH_StaticWeapons_cfg"
        };
        units[] = 
        {
            "SiP_maxim_low",
            "SiP_KPA_maxim_low",
            "SiP_PVA_w_maxim_mid",
            "SiP_maxim_mid",
            "SiP_KPA_maxim_mid",
            "SiP_PVA_w_maxim_mid",
            "SiP_maxim_high",
            "SiP_KPA_maxim_high",
            "SiP_PVA_w_maxim_high",
            "SiP_PVA_w_maxim_low"
        };
        weapons[] = 
        {
            "SiP_pm1910_maxim_weapon"
        };
        magazines[] = 
        {
            "SiP_200Rnd_Maxim"
        };
    };
};

class cfgWeapons
{
    class HMG_127;
    class NORTH_Maxim: HMG_127
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };
    
    class SiP_pm1910_maxim_weapon: NORTH_Maxim
    {
        displayName = "PM-1910 Maxim";
        magazines[] = {"SiP_200Rnd_Maxim"};
        class manual: manual
        {
            reloadTime = 0.109;
        };
        class close: close
        {
            reloadTime = 0.109;
        };
        class short: short
        {
            reloadTime = 0.109;
        };
        class medium: medium
        {
            reloadTime = 0.109;
        };
        class far: far
        {
            reloadTime = 0.109;
        };
        class GunParticles{};
    };
};

class cfgMagazines
{
    class NORTH_200Rnd_762mm_Maxim;
    class SiP_200Rnd_Maxim: NORTH_200Rnd_762mm_Maxim
    {
        ammo = "vn_762x54";
    };
};

class cfgVehicles
{
    class NORTH_staticMGWeapon;
    class NORTH_Maxim_Base: NORTH_staticMGWeapon
    {
        class Turrets;
    };
    class NORTH_Maxim: NORTH_Maxim_Base
    {
        class Turrets;
    };

    class NORTH_SOV_Maxim: NORTH_Maxim
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class NORTH_SOV_Maxim_Medium: NORTH_Maxim
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };
    
    class NORTH_SOV_Maxim_High: NORTH_Maxim
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_maxim_low_base: NORTH_SOV_Maxim
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_pm1910_maxim_weapon"};
                magazines[] = {"SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim"};
                ejectDeadGunner = 1;
            };
        };
        class AnimationSources: AnimationSources
        {
            class muzzle_source
            {
                source = "reload";
                weapon = "SiP_maxim_low_base";
            };
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_pm1910_maxim_weapon";
            };
            class ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_pm1910_maxim_weapon";
            };
            class Revolving
            {
                source = "revolving";
                weapon = "SiP_pm1910_maxim_weapon";
            };
        };
    };

    class SiP_maxim_mid_base: NORTH_SOV_Maxim_Medium
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_pm1910_maxim_weapon"};
                magazines[] = {"SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim"};
                ejectDeadGunner = 1;
            };
        };
        class AnimationSources: AnimationSources
        {
            class muzzle_source
            {
                source = "reload";
                weapon = "SiP_maxim_mid_base";
            };
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_pm1910_maxim_weapon";
            };
            class ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_pm1910_maxim_weapon";
            };
            class Revolving
            {
                source = "revolving";
                weapon = "SiP_pm1910_maxim_weapon";
            };
        };
    };

    class SiP_maxim_high_base: NORTH_SOV_Maxim_High
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_pm1910_maxim_weapon"};
                magazines[] = {"SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim","SiP_200Rnd_Maxim"};
                ejectDeadGunner = 1;
            };
        };
        class AnimationSources: AnimationSources
        {
            class muzzle_source
            {
                source = "reload";
                weapon = "SiP_maxim_high_base";
            };
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_pm1910_maxim_weapon";
            };
            class ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_pm1910_maxim_weapon";
            };
            class Revolving
            {
                source = "revolving";
                weapon = "SiP_pm1910_maxim_weapon";
            };
        };
    };

    class SiP_maxim_low: SiP_maxim_low_base
    {
        displayName = "PM1910/30 Maxim - Low";
        author = "Letlev";
        scope = 2;
        side = 0;
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        crew = "SiP_PVA_gunner";
        editorPreview = "\NORTH\north_editorPreviewsSTC\data\NORTH_SOV_W_41_Maxim.jpg";
    };
    class SiP_KPA_maxim_low: SiP_maxim_low
    {
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_gunner";
    };
    class SiP_PVA_w_maxim_low: SiP_maxim_low
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
    };

    class SiP_maxim_mid: SiP_maxim_mid_base
    {
        displayName = "PM1910/30 Maxim - Mid";
        author = "Letlev";
        scope = 2;
        side = 0;
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        crew = "SiP_PVA_gunner";
    };
    class SiP_KPA_maxim_mid: SiP_maxim_mid
    {
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_gunner";
    };
    class SiP_PVA_w_maxim_mid: SiP_maxim_mid
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
    };
    class SiP_maxim_high: SiP_maxim_high_base
    {
        displayName = "PM1910/30 Maxim - High";
        author = "Letlev";
        scope = 2;
        side = 0;
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        crew = "SiP_PVA_gunner";
        editorPreview = "\NORTH\north_editorPreviewsSTC\data\NORTH_SOV_W_41_Maxim.jpg";
    };
    class SiP_KPA_maxim_high: SiP_maxim_high
    {
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_gunner";
    };
    class SiP_PVA_w_maxim_high: SiP_maxim_high
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
    };
};