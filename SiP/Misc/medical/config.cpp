class cfgPatches
{
    class SiP_Patch_misc_medical
    {
        Name = " Suicide Is Painless - Korean War Mod - Medical";
        addonRootClass = "SiP_Patch_misc";
        requiredAddons[] = 
        {
            "ace_medical_treatment",
            "WW2_ACE_Items_Patch_misc_medical"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_ACE_Items_sulfa"
        };
    };
};

class CfgWeapons
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class ACE_surgicalKit: ACE_ItemCore
	{
        picture = "\vn\weapons_f_vietnam\ui\icon_vn_b_item_medikit_01_ca.paa";
        model = "\vn\weapons_f_vietnam\items\medikit\vn_b_medikit_mag.p3d";
    };

    class ACE_elasticBandage: ACE_ItemCore
	{
        picture = "\vn\weapons_f_vietnam\ui\icon_vn_b_item_bandage_01_ca.paa";
        model = "vn\characters_f_vietnam\BLUFOR\headgear\items\vn_b_item_bandage_01.p3d";
    };
};