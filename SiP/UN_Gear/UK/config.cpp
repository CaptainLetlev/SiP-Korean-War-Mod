class cfgPatches
{
	class SiP_UN_Gear_UK_Patch
	{
		Name = "Suicide Is Painless - Korean War Mod - UK Gear";
        addonRootClass = "SiP_UN_Gear_Patch";
		requiredAddons[] = 
		{
			"sns_uniform"
		};
		units[] = {};
		weapons[] = 
		{
			"SiP_UK_Magazine_Pouches",
			"SiP_UK_SMG_Magazine_Pouches"
		};
	};
};

class CfgGlasses
{
    class None;

    class Big_Three_piat_bag: None
    {
        author = "Letlev";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[BCFK] Piat Bag";
        picture = "\fow\fow_characters\uk\data\ui\fow_b_uk_p37_ca.paa";
        model = "\fow\fow_characters\uk\lodu_brit_piat_bag";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"fow\fow_weapons\piat\data\projectile_co.paa"};
    };

    class Big_Three_uk_fieldgear_od: None
    {
		author = "Letlev";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[BCFK] Field Gear (OD)";
        picture = "\WW2\Assets_t\Characters\Pictures_t\Clothing\V_LIB_UK_P37_Rifleman_Blanco_ca.paa";
		model = "\WW2\Assets_m\Characters\British_m\WW2_UK_Army\WW2_UK_P37_Vest_Rifleman.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\WW2\Assets_t\Characters\British_t\WW2_UK_Army\webbing_pouches_blanco_co.paa"};
    };
};

class CfgWeapons
{
    class NVGoggles;
    
    class SiP_UK_Magazine_Pouches: NVGoggles
    {
        author = "Letlev";
        displayName = "[BCFK] P37 Pouches";
        picture = "\sns_dutch\ui\gear_p37_ca.paa";
        model = "\sns_dutch\sns_gear_p37.p3d";
        hiddenSelections[] = {"camo","gas","pouches"};
        hiddenSelectionsTextures[] = {"","","\sns_dutch\data\gear_m58_co.paa"};
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "British Ammo Pouches";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\sns_dutch\sns_gear_p37.p3d";
            modelOff = "\sns_dutch\sns_gear_p37.p3d";
            hiddenSelections[] = {"camo","gas","pouches"};
            hiddenSelectionsTextures[] = {"","","\sns_dutch\data\gear_m58_co.paa"};
            mass = 1;
        };
    };

	class SiP_UK_SMG_Magazine_Pouches: NVGoggles
    {
        author = "Letlev";
        displayName = "[BCFK] P37 SMG Pouches";
        picture = "\sns_dutch\ui\gear_p37_ca.paa";
        model = "\WW2\Assets_m\Characters\British_m\WW2_UK_Army\WW2_UK_P37_Vest_Sten.p3d";
        hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","","\WW2\Assets_t\Characters\British_t\WW2_UK_Army\UK_Bandolier_blanco_co.paa"};
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "British SMG Ammo Pouches";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\WW2\Assets_m\Characters\British_m\WW2_UK_Army\WW2_UK_P37_Vest_Sten.p3d";
            modelOff = "\WW2\Assets_m\Characters\British_m\WW2_UK_Army\WW2_UK_P37_Vest_Sten.p3d";
            hiddenSelections[] = {"camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"","","\WW2\Assets_t\Characters\British_t\WW2_UK_Army\UK_Bandolier_blanco_co.paa"};
            mass = 1;
        };
    };
};