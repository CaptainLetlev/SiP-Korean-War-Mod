class cfgPatches
{
    class SiP_Patch_kpa_backpacks
    {
        Name = "Suicide Is Painless - Korean War Mod - KPA Backpacks";
        addonRootClass = "SiP_Communist_Gear";
        requiredAddons[] = 
        {
            "EAW_Chinese_Infantry"
        };
        units[] = 
        {
            "SiP_KPA_backpack",
            "SiP_KPA_backpack_ppsh",
            "SiP_KPA_backpack_pps",
            "SiP_KPA_backpack_svt",
            "SiP_KPA_backpack_dp28"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class EAW_Chinese_Backpack_3_3;

    class SiP_KPA_backpack: EAW_Chinese_Backpack_3_3
    {
        scope = 2;
        scopeArsenal = 2;
        displayname = "[KPA] Standard Backpack";
        class TransportMagazines
        {
            class _xx_vn_rgd33_grenade_mag
            {
                magazine = "vn_rgd33_grenade_mag";
                count = 2;
            };
            class _xx_vn_f1_grenade_mag
            {
                magazine = "vn_f1_grenade_mag";
                count = 2;
            };
        };
    };
    
    class SiP_KPA_backpack_ppsh: SiP_KPA_backpack
    {
        scope = 1;
        scopeArsenal = 1;
        class TransportMagazines
        {
            class _xx_vn_ppsh41_71_mag
            {
                magazine = "vn_ppsh41_71_mag";
                count = 3;
            };
            class _xx_vn_ppsh41_35_mag
            {
                magazine = "vn_ppsh41_35_mag";
                count = 10;
            };
            class _xx_vn_f1_grenade_mag
            {
                magazine = "vn_f1_grenade_mag";
                count = 2;
            };
        };
    };
    class SiP_KPA_backpack_nades: SiP_KPA_backpack_ppsh
    {
        class TransportMagazines
        {
            class _xx_vn_rgd33_grenade_mag
            {
                magazine = "vn_rgd33_grenade_mag";
                count = 2;
            };
            class _xx_vn_f1_grenade_mag
            {
                magazine = "vn_f1_grenade_mag";
                count = 2;
            };
        };
    };
    class SiP_KPA_backpack_pps: SiP_KPA_backpack_ppsh
    {
        class TransportMagazines
        {
            class _xx_vn_pps_mag
            {
                magazine = "vn_pps_mag";
                count = 10;
            };
            class _xx_vn_rgd33_grenade_mag
            {
                magazine = "vn_rgd33_grenade_mag";
                count = 2;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 2;
            };
        };
    };
    class SiP_KPA_backpack_svt: SiP_KPA_backpack_ppsh
    {
        class TransportMagazines
        {
            class _xx_SiP_svt_10_mag
            {
                magazine = "SiP_svt_10_mag";
                count = 10;
            };
            class _xx_vn_f1_grenade_mag
            {
                magazine = "vn_f1_grenade_mag";
                count = 2;
            };
            class _xx_vn_rg42_grenade_mag
            {
                magazine = "vn_rg42_grenade_mag";
                count = 2;
            };
        };
    };
    class SiP_KPA_backpack_dp28: SiP_KPA_backpack_ppsh
    {
        class TransportMagazines
        {
            class _xx_vn_dp28_mag
            {
                magazine = "vn_dp28_mag";
                count = 9;
            };
        };
    };
};