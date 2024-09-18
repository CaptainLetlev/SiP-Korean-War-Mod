class cfgPatches
{
    class SiP_Patch_M1948_parka
    {
        addonRootClass = "SiP_Patch_US_Army_Uniforms";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_M1948_parka_uniform"
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

    class SiP_M1948_parka_uniform: U_Simc_51_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M1948 Parka";
        model = "\simc_mc_51\suitpack_mcparca.p3d";
        picture = "\simc_uaf_51_preview\icons\mcparca_ca.paa";
        descriptionShort = "Coat, Extreme weather, Parka style, 1948";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1948_parka_uniform_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1948_parka_uniform";
            style = "boots";
            shoepack = "standard";
            scarf = "noscarf";
        };
    };

    //Leggings
    class SiP_M1948_parka_uniform_leggings: SiP_M1948_parka_uniform
    {
        model = "\simc_uaf_51\hbt_47_tuck.p3d";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1948_parka_uniform_leggings_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1948_parka_uniform";
            style = "leggings";
            shoepack = "standard";
            scarf = "noscarf";
        };
    };

    //Scarf + Shoepacks
    class SiP_M1948_parka_uniform_shoepack_scarf: SiP_M1948_parka_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1948_parka_uniform_shoepack_scarf_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1948_parka_uniform";
            style = "boots";
            shoepack = "shoepack";
            scarf = "scarf";
        };
    };

    //Trop + Tucked
    class SiP_M1948_parka_uniform_shoepack: SiP_M1948_parka_uniform
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_M1948_parka_uniform_shoepack_base";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_M1948_parka_uniform";
            style = "boots";
            shoepack = "shoepack";
            scarf = "noscarf";
        };
    };
};

class cfgVehicles
{
    class simc_mcparca;
    class simc_mcparca_legging;
    class simc_mcparca_snew;
    class simc_mcparca_snew_alt;

    class SiP_M1948_parka_uniform_base: simc_mcparca
    {
        uniformClass = "SiP_M1948_parka_uniform";
    };

    //Leggings
    class SiP_M1948_parka_uniform_leggings_base: simc_mcparca_legging
    {
        uniformClass = "SiP_M1948_parka_uniform_leggings";
    };

    //Shoepacks + Scarf
    class SiP_M1948_parka_uniform_shoepack_scarf_base: simc_mcparca_snew
    {
        uniformClass = "SiP_M1948_parka_uniform_shoepack_scarf";
    };

    //Shoepacks
    class SiP_M1948_parka_uniform_shoepack_base: simc_mcparca_snew_alt
    {
        uniformClass = "SiP_M1948_parka_uniform_shoepack";
    };

};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_M1948_parka_uniform
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "style",
                "shoepack",
                "scarf"
            };
            class style
            {
                label = "Style";
                hiddenselection = "camo";
                values[]=
                {
                    "boots",
                    "leggings"
                };
                class boots
                {
                    label = "Boots";
                };
                class leggings
                {
                    label = "Leggings";
                };
            };
            class shoepack
            {
                label = "Shoepack";
                hiddenselection = "bots";
                changeingame = 1;
                changedelay = 2;
                values[]=
                {
                    "standard",
                    "shoepack"
                };
                class standard
                {
                    label = "Standard";
                    actionLabel = "Remove shoepacks";
                };
                class shoepack
                {
                    label = "Shoepack";
                    actionLabel = "Put on Shoepacks";
                };
            };
            class scarf
            {
                label = "Scarf";
                hiddenselection = "injury_hands";
                changeingame = 1;
                changedelay = 2;
                values[]=
                {
                    "noscarf",
                    "scarf"
                };
                class noscarf
                {
                    label = "No Scarf";
                    actionLabel = "Remove Scarf";
                };
                class scarf
                {
                    label = "Scarf";
                    actionLabel = "Wear Scarf";
                    icon = "\simc_uaf_44_preview\icons\scharf_ca.paa";
                };
            };
        };
    };
};