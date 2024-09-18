class cfgPatches
{
	class SiP_Patch_US_MASH_uniform
	{
		addonRootClass = "SiP_Patch_US_Army_Uniforms";
		requiredAddons[] = 
		{
			"simc_hillbilly_core"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class U_Simc_67_BasicBody;
	class U_simc_surf: U_Simc_67_BasicBody
	{
		class ItemInfo;
	};
	class U_Simc_OG107_mk1: U_Simc_67_BasicBody
	{
		class ItemInfo;
	};
	class SiP_mash_uniform_potter: U_Simc_OG107_mk1
	{
		displayName = "[MASH] Colonel Potter's Uniform";
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\og107_mk1_co.paa","SiP\addons\sip_us_army_gear\Uniforms\textures\uniform\shirt_ranks\US_med_COL_ca.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_col_potter";
		};
		class XtdGearInfo
        {
            model = "u_hssn_SiP_MASH_uniform";
            style = "col_potter";
        };
	};
	class SiP_Hawaii_Shirt_Red: U_simc_surf
	{
		author = "Letlev";
		displayName = "[MASH] Hawaii shirt (Red)";
		hiddenSelectionsTextures[] = {"SiP\addons\sip_us_units\Army\data\civ_clothes\red_hawaii_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_trapper_john";
		};
		class XtdGearInfo
        {
            model = "u_hssn_SiP_MASH_uniform";
            style = "hawaiian_red";
        };
	};
	class SiP_Hawaii_Shirt_yellow: U_simc_surf
	{
		author = "Letlev";
		displayName = "[MASH] Hawaii shirt (Yellow)";
		hiddenSelectionsTextures[] = {"SiP\addons\sip_us_units\Army\data\civ_clothes\yellow_hawaii_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_beej";
		};
		class XtdGearInfo
        {
            model = "u_hssn_SiP_MASH_uniform";
            style = "hawaiian_yellow";
        };
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_MASH_uniform
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
                    "col_potter",
                    "hawaiian_red",
                    "hawaiian_yellow"
                };
                class col_potter
                {
                    label = "Potter";
                };
                class hawaiian_red
                {
                    label = "Hawaii Red";
                };
                class hawaiian_yellow
                {
                    label = "Hawaii Yellow";
                };
            };
        };
    };
};