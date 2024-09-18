class cfgPatches
{
    class SiP_Patch_M52_vests
    {
        addonRootClass = "SiP_Patch_us_vests";
        requiredAddons[] = 
        {
            "simc_uaf_67_core"
        };
        units[] = {};
        weapons[] = 
        {
            "m1952_flak_jacket_nvg"
        };
    };
};

class CfgWeapons
{
    class NVGoggles;
    
    class m1952_flak_jacket_nvg: NVGoggles
    {
        author = "Letlev";
        displayname = "[US] M1952 Flak Jacket";
        picture = "\simc_uaf_67_preview\icons\falk_ca.paa";
        model = "\simc_uaf_65\vest_flak_belt_open.p3d";
        hiddenSelections[] = {"camo","band"};
        hiddenSelectionsTextures[] = 
        {
            "",
            ""
        };
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "US Flak Jacket";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\simc_uaf_65\vest_flak_belt_open.p3d";
            modelOff = "\simc_uaf_65\vest_flak_belt_open.p3d";
            hiddenSelections[] = {"camo","band"};
            hiddenSelectionsTextures[] = 
            {
                "",
                ""
            };
            mass = 1;
        };
    };
};

class CfgGlasses
{
    class None;

    class m1952_flak_jacket_fw: None
    {
        scope = 2;
        author = "Letlev";
        displayname = "[US] M1952 Flak Jacket";
        picture = "\simc_uaf_67_preview\icons\falk_ca.paa";
        model = "\simc_uaf_65\vest_flak_belt_open.p3d";
        hiddenSelections[] = {"camo","band"};
        hiddenSelectionsTextures[] = 
        {
            "",
            ""
        };
        mass = 2;
    };
};