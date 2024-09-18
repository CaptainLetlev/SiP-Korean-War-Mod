class cfgPatches
{
    class SiP_Patch_uk_vests
    {
        Name = "Suicide Is Painless - Korean War Mod - UK Vests";
        addonRootClass = "SiP_UN_Gear_Patch";
        requiredAddons[] = 
        {
            "WW2_Assets_c_Characters_British_c_UK_Army_Gear",
            "fow_characters_c"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_P37_crew_vest",
            "SiP_P37_can_vest",
            "SiP_P37_uk_vest",
            "SiP_P37_uk_vest_Pistol"
        };
    };
};

class cfgWeapons
{
    class Vest_Camo_Base;

    class V_LIB_UK_P37_Rifleman;
    class V_LIB_UK_P37_Crew: V_LIB_UK_P37_Rifleman
    {
        class ItemInfo;
    };

    class fow_v_base;
    class fow_v_uk_officer: fow_v_base
    {
        class ItemInfo;
    };

    class V_sns_m58_basic: Vest_Camo_Base
	{
        class ItemInfo;
    };
    
    class SiP_P37_crew_vest: V_LIB_UK_P37_Crew
    {
        displayName = "[BCFK] P37 Belt/Holster";
        hiddenSelectionsTextures[] = {"\WW2\Assets_t\Characters\British_t\WW2_UK_Army\webbing_main_blanco_co.paa","\WW2\Assets_t\Characters\British_t\WW2_UK_Army\webbing_pouches_blanco_co.paa"};
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply70";
            mass = 7;
        };
    };

    class SiP_P37_can_vest: fow_v_uk_officer
    {
        displayName = "[BCFK] P37 CAN Belt/Holster";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_uk_army_gear\Vests\data\textures\p37_vest_can_co.paa"};
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply140";
            mass = 7;
        };
    };

    class SiP_P37_uk_vest: V_sns_m58_basic
	{
		author = "Letlev";
		scope = 2;
		displayName = "[BCFK] P37 Field Gear";
		model = "\sns_dutch\sns_gear_p37_bare.p3d";
		picture = "\sns_dutch\ui\gear_p37_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\sns_dutch\data\gear_m58_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\sns_dutch\sns_gear_p37_bare.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply130";
			mass = 15;
		};
	};

    class SiP_P37_uk_vest_Pistol: V_sns_m58_basic
	{
		author = "Letlev";
		scope = 2;
		displayName = "[BCFK] P37 Field Gear (Sidearm)";
		model = "\sns_dutch\sns_gear_m58_pistal.p3d";
		picture = "\sns_dutch\ui\gear_m58_pistal_ca.paa";
		hiddenSelections[] = {"camo","gas"};
		hiddenSelectionsTextures[] = {"\sns_dutch\data\gear_m58_co.paa",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\sns_dutch\sns_gear_m58_pistal.p3d";
			hiddenSelections[] = {"camo","gas"};
			containerClass = "Supply100";
			mass = 15;
		};
	};
};

class XtdGearInfos
{
    class CfgWeapons
    {
        class SiP_P37_uk_vest
        {
            model = "B_hssn_SiP_BCFK_P44_Backpack";
            config = "SiP_P37_uk_vest";
        };
        class SiP_P37_uk_vest_Pistol
        {
            model = "B_hssn_SiP_BCFK_P44_Backpack";
            config = "SiP_P37_uk_vest_Pistol";
        };
        class SiP_P37_crew_vest
        {
            model = "B_hssn_SiP_BCFK_P44_Backpack";
            config = "SiP_P37_crew_vest";
        };
    };
};	

class XtdGearModels
{
    class CfgWeapons
    {		
        class V_hssn_SiP_P37_uk_vest
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "config"
            };
            class config
            {
                label = "Configuration";
                values[]=
                {
                    "SiP_P37_uk_vest",
                    "SiP_P37_uk_vest_Pistol",
                    "SiP_P37_crew_vest"
                };
                class SiP_P37_uk_vest
                {
                    label = "Standard";
                };
                class SiP_P37_uk_vest_Pistol
                {
                    label = "Sidearm";
                };
                class SiP_P37_crew_vest
                {
                    label = "Basic";
                };
            };	
        };
    };
};