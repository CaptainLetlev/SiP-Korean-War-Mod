class cfgPatches
{
    class SiP_Patch_pva_uniforms
    {
        Name = "Suicide Is Painless - Korean War Mod - PVA uniforms";
        addonRootClass = "SiP_Communist_Gear";
        requiredAddons[] = 
        {
            "EAW_Chinese_Infantry"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_PVA_Uniform",
            "SiP_PVA_Officer_Uniform",
            "SiP_PVA_Uniform_Winter"
        };
    };
};

class cfgWeapons
{
    class Uniform_Base;

    class EAW_Chinese_Uniform;
    class EAW_Chinese_Uniform_Training: EAW_Chinese_Uniform
    {
        class ItemInfo;
    };

    class SiP_PVA_Uniform: EAW_Chinese_Uniform_Training
    {
        scope = 2;
        author = "Letlev";
        displayName = "[PVA] Standard Uniform";
        picture = "\SiP\COM_Gear\PVA\uniforms\data\UI\pva_uniform_ui_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_PVA_rifleman1";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_PVA_uniform";
            style = "standard";
        };
    };
    
    class SiP_PVA_Officer_Uniform: EAW_Chinese_Uniform_Training
    {
        scope = 2;
        author = "Letlev";
        displayName = "[PVA] Officer Uniform";
        picture = "\SiP\COM_Gear\PVA\uniforms\data\UI\pva_uniform_ui_ca.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_PVA_Officer";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_PVA_uniform";
            style = "officer";
        };
    };

    class SiP_PVA_Uniform_Winter: SiP_PVA_Uniform
    {
        author = "Letlev";
        displayName = "[PVA] Quilted Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_PVA_rifleman1_w";
        };
        class XtdGearInfo
        {
            model = "u_hssn_SiP_PVA_uniform";
            style = "winter";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_PVA_uniform
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "style"
            };
            class style
            {
                label = "Style";
                hiddenselection = "camo";
                values[]=
                {
                    "standard",
                    "officer",
                    "winter"
                };
                class standard
                {
                    label = "Standard";
                };
                class officer
                {
                    label = "Officer";
                };
                class winter
                {
                    label = "Winter";
                };
            };
        };
    };
};