class cfgPatches
{
    class SiP_Patch_usmc_backpacks
    {
        Name = "Suicide Is Painless - Korean War Mod - USMC Backpacks";
        addonRootClass = "SiP_Patch_us_army_gear";
        requiredAddons[] = 
        {
            "simc_mc_67_assets"
        };
        units[] = 
        {
            "SiP_m1941_marine_backpack_bar",
            "SiP_m1941_marine_backpack_mg",
            "SiP_m1941_marine_backpack_shotgun",
            "SiP_m1941_marine_backpack_grenadier",
            "SiP_m1941_marine_backpack_smg_pistol",
            "SiP_m1941_marine_backpack_pistol"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class B_simc_USMC51_M41_flat_roll;
    class B_simc_USMC51_M41_M43_roll;
    class B_simc_USMC51_M41_flat_M43_roll;
    
    class SiP_m1941_marine_backpack_bar: B_simc_USMC51_M41_flat_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 8;
            };
        };
    };
    class SiP_m1941_marine_backpack_mg: B_simc_USMC51_M41_M43_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 8;
            };
        };
    };
    class SiP_m1941_marine_backpack_shotgun: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_grenadier: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 5;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 5;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_smg_pistol: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 10;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_pistol: B_simc_USMC51_M41_flat_M43_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
};