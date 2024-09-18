class cfgPatches
{
	class SiP_Patch_US_Army_Headgear
	{
		Name = " Suicide Is Painless - Korean War Mod - US Army Headgear";
		addonRootClass = "SiP_UN_Gear_Patch";
		requiredAddons[] = 
		{
			"characters_f_vietnam_c"
		};
		units[] = {};
		
		weapons[] = 
        {
			"SiP_US_P1A_Flight_Helmet"
		};
	};
};

class CfgWeapons
{
	class vn_b_headgear_base;

	class vn_b_helmet_aph6_01_01: vn_b_headgear_base
	{
		class ItemInfo;
	};

	class SiP_US_P1A_Flight_Helmet: vn_b_helmet_aph6_01_01
	{
		displayName = "P1A Flight Helmet";
		allowedFacewear[] = {"G_SWDG",1,"G_SWDG_Face",1};
	};
};