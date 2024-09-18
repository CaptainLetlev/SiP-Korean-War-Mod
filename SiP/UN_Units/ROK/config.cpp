class cfgPatches
{
    class SiP_Patch_UN_Units_ROK
    {
        addonRootClass = "SiP_Patch_un_units";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = 
        {
            "SiP_ROKAF_Fighter_Pilot",
            "SiP_ROK_Army_gunner"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class SiP_US_Army_gunner;
    class SiP_USAF_Fighter_Pilot;

    class SiP_ROKAF_Fighter_Pilot: SiP_USAF_Fighter_Pilot
    {
        faction = "SiP_ROK_Army";
        editorCategory = "SiP_ROK_Army_Editor_Category";
        displayName = "ROKAF Fighter Pilot";
        identityTypes[] = {"LanguageMUTE_F","vn_o_asian_viet","Head_Asian"};
        genericNames = "rokmen";
    };

    class SiP_ROK_Army_gunner: SiP_US_Army_gunner
    {
        faction = "SiP_ROK_Army";
        editorCategory = "SiP_ROK_Army_Editor_Category";
        uniformClass = "SiP_M1947_early_uniform_tuck";
        identityTypes[] = {"LanguageMUTE_F","vn_o_asian_viet","Head_Asian"};
        genericNames = "rokmen";
        model = "\simc_uaf_51\hbt_47_erla_tuck.p3d";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_51\data\hbt_47_co.paa",
            ""
        };
        allowedHeadgear[] = {"SiP_M1_Helmet_NS1"};
        linkedItems[] = {"SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_bayo","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_bayo","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        weapons[] = {"vn_m1_garand","Throw","Put"};
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = {"vn_m1_garand","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
    };
};