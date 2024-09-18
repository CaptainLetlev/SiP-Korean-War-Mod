class cfgPatches
{
    class SiP_Patch_PVA_Headgear
    {
        Name = " Suicide Is Painless - Korean War Mod - PVA Headgear";
        addonRootClass = "SiP_Communist_Gear";
        requiredAddons[] = 
        {
            "SiP_Patch_pva_gear"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
    class ItemCore;

    class vn_o_pl_cap_01_01;
    class vn_o_pl_cap_02_01: vn_o_pl_cap_01_01
    {
        class ItemInfo;
    };

    class H_LIB_Hat;
    class H_LIB_SOV_Ushanka: H_LIB_Hat
    {
        class ItemInfo;
    };

    class H_LIB_SOV_Ushanka2: H_LIB_SOV_Ushanka
    {
        class ItemInfo;
    };
    
    class SiP_type56_cap2: vn_o_pl_cap_02_01
    {
        displayName = "[PVA] Type 56 Cap";
        hiddenSelectionsTextures[] = {"\SiP\COM_Gear\PVA\headgear\data\type56_Tan1.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = {"\SiP\COM_Gear\PVA\headgear\data\type56_Tan1.paa"};
        };
    };
    class SiP_PVA_Ushanka: H_LIB_SOV_Ushanka
    {
        author = "Letlev";
        displayName = "[PVA] Ushanka";
        model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\LEN_Ushanka.p3d";
        hiddenSelections[] = {"camo_0","camo_1"};
        hiddenSelectionsTextures[] = {"\SiP\COM_Gear\PVA\headgear\data\ushanka_ifa.paa",""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\LEN_Ushanka.p3d";
            hiddenSelections[] = {"camo_0","camo_1"};
            hiddenSelectionsTextures[] = {"\SiP\COM_Gear\PVA\headgear\data\ushanka_ifa.paa",""};
        };
        class XtdGearInfo
        {
            model = "SiP_PVA_Ushanka";
            earflaps = "folded";
        };
    };
    class SiP_PVA_Ushanka2: H_LIB_SOV_Ushanka2
    {
        author = "Letlev";
        displayName = "[PVA] Ushanka (Unfolded)";
        model = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\LEN_Ushanka2.p3d";
        hiddenSelections[] = {"camo_0","camo_1"};
        hiddenSelectionsTextures[] = {"\SiP\COM_Gear\PVA\headgear\data\ushanka_ifa.paa",""};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo_0","camo_1"};
            hiddenSelectionsTextures[] = {"\SiP\COM_Gear\PVA\headgear\data\ushanka_ifa.paa",""};
            uniformModel = "\WW2\Assets_m\Characters\Soviets_m\SOV_RKKA\LEN_Ushanka2.p3d";
        };
        class XtdGearInfo
        {
            model = "SiP_PVA_Ushanka";
            earflaps = "unfolded";
        };
    };
};

class XtdGearModels 
{
    class CfgWeapons 
    {
        class SiP_PVA_Ushanka
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "earflaps"
            };
            class earflaps
            {
                label = "Ear Flaps";
                changeingame = 1;
                changedelay = 1;
                values[]=
                {
                    "folded",
                    "unfolded"
                };
                class folded
                {
                    label = "Folded";
                    actionlabel = "Fold Earflaps";
                    icon = "\WW2\Assets_t\Characters\Pictures_t\Clothing\H_SOV_RKKA_Ushanka_ca.paa";
                };
                class unfolded
                {
                    label = "Unfolded";
                    actionlabel = "Unfold Earflaps";
                    icon = "\WW2\Assets_t\Characters\Pictures_t\Clothing\H_SOV_RKKA_Ushanka2_ca.paa";
                };                
            };            
        };
    };
};