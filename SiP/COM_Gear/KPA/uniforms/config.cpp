class cfgPatches
{
    class SiP_Patch_kpa_uniform
    {
        addonRootClass = "SiP_Communist_Gear";
        requiredAddons[] = 
        {
            "EAW_Chinese_Infantry"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_KPA_Officer_Uniform"
        };
    };
};

class cfgWeapons
{
    class EAW_Chinese_Uniform;
    class EAW_Chinese_Uniform_Training: EAW_Chinese_Uniform
    {
        class ItemInfo;
    };

    class SiP_KPA_Officer_Uniform: EAW_Chinese_Uniform_Training
    {
        scope = 2;
        author = "Letlev";
        displayName = "[KPA] Officer Uniform";
        descriptionShort = "North Korean Lieutenant";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_KPA_Officer";
            hiddenSelections[] = {"Camo","Camo1"};
        };
    };
};
