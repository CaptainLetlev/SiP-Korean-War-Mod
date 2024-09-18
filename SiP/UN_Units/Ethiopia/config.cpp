class cfgPatches
{
    class SiP_Patch_UN_Units_Ethiopia
    {
        addonRootClass = "SiP_Patch_un_units";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = 
        {
            "SiP_French_para_uniform_base"
        };
        weapons[] = 
        {
            "SiP_French_para_uniform"
        };
    };
};

class cfgWeapons
{
    class Uniform_Base;
    class ItemCore;
    class U_BasicBody;

    class U_Simc_51_BasicBody: U_BasicBody
    {
        class ItemInfo;
    };

    class SiP_French_para_uniform: U_Simc_51_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[UN] Para Smock";
        descriptionShort = "Uniform, Herringbone Twill, OD#7, 1951";
        picture = "\WW2\Assets_t\Characters\Pictures_t\Clothing\U_UK_Denison_ca.paa";
        model = "\WW2\Assets_m\Characters\British_m\WW2_UK_Airborne\WW2_UK_Para_Uniform.p3d";
        hiddenSelections[] = {"camo1","camo2","badge","insignia"};
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_un_units\France\uniform\data\fr_para_smock_co.paa",
            "\SiP\Addons\sip_un_units\France\uniform\data\fr_para_smock_legs_co.paa",
            "",
            ""
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_French_para_uniform_base";
        };
    };
};

class cfgVehicles
{
    class simc_hbt_47;

    class SiP_French_para_uniform_base: simc_hbt_47
    {
        uniformClass = "SiP_M1947_uniform";
        model = "\WW2\Assets_m\Characters\British_m\WW2_UK_Airborne\WW2_UK_Para_Uniform.p3d";
        hiddenSelections[] = {"camo1","camo2","badge","insignia"};
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_un_units\France\uniform\data\fr_para_smock_co.paa",
            "\SiP\Addons\sip_un_units\France\uniform\data\fr_para_smock_legs_co.paa",
            "",
            ""
        };
    };
};