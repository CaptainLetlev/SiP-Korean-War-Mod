class cfgPatches
{
    class SiP_Patch_un_mortars_static
    {
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] = 
        {
            "static_f_vietnam",
            "static_f_vietnam_c",
            "weapons_v_f_vietnam",
            "weapons_v_f_vietnam_c",
            "WW2_SPE_Assets_c_Vehicles_StaticWeapons_c",
            "WW2_SPE_Assets_c_Vehicles_Weapons_c"
        };
        units[] = 
        {
            "SiP_m2_60mm_mortar",

            "SiP_m1_81mm_mortar",

            "SiP_M2_107mm_mortar",

            "SiP_m2_60mm_mortar_marines",

            "SiP_m1_81mm_mortar_marines",

            "SiP_M2_107mm_mortar_marines",

            "SiP_M2_107mm_mortar_uk"
        };
        weapons[] = 
        {
            "SiP_M2_107mm_mortar_weapon",
            "SiP_M30_107mm_mortar_weapon",

            "SiP_M1_81mm_mortar_weapon",

            "SiP_M2_mortar_weapon"
        };
        magazines[] = 
        {
            "ace_compat_SiP_81mm_he",
            "ace_compat_SiP_81mm_smoke",
            "ace_compat_SiP_81mm_wp",
            "ace_compat_SiP_81mm_lume",

            "ace_compat_SiP_60mm_he",
            "ace_compat_SiP_60mm_wp",
            "ace_compat_SiP_60mm_lume",

            "SiP_M2_107mm_mortar_mag_he",
            "SiP_M2_107mm_mortar_mag_wp",

            "ace_compat_SiP_M2_107mm_he",
            "ace_compat_SiP_M2_107mm_wp",

            "SiP_M30_107mm_mortar_mag_he",
            "SiP_M30_107mm_mortar_mag_wp",
            "SiP_M30_107mm_mortar_mag_lume",

            "ace_compat_SiP_m30_107mm_he",
            "ace_compat_SiP_m30_107mm_wp",
            "ace_compat_SiP_m30_107mm_lume"
        };
        ammo[] = 
        {
            "SiP_107mm_Mortar_he_ammo"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;

class cfgWeapons
{
    class vn_mortar_81mm_base;
    class vn_mortar_60mm_base;
    class vn_mortar_m2: vn_mortar_60mm_base
    {
        class Single1;
        class Single2;
        class Burst1;
        class Burst2;
    };

    class SPE_M1_81;

    class SiP_M2_107mm_mortar_weapon: vn_mortar_81mm_base
    {
        author = "Letlev";
        displayName = "M2 4.2 Inch Mortar";
        magazineReloadTime = 0.5;
        magazines[] = {"SiP_M2_107mm_mortar_mag_he","SiP_M2_107mm_mortar_mag_wp"};
    };
    class SiP_M30_107mm_mortar_weapon: SiP_M2_107mm_mortar_weapon
    {
        displayName = "M30 107mm Mortar";
        magazines[] = {"SiP_M30_107mm_mortar_mag_he","SiP_M30_107mm_mortar_mag_wp","SiP_M30_107mm_mortar_mag_lume"};
    };

    class SiP_M1_81mm_mortar_weapon: SPE_M1_81
    {
        author = "Letlev";
        magazineReloadTime = 0.5;
        magazines[] = 
        {
            "SPE_8Rnd_81mmHE_M1_M43A1",
            "SPE_8rnd_81mm_M1_M57_SmokeShell",
            "SPE_8Rnd_81mmWP_M1_M57",
            "SPE_1Rnd_81mmHE_M1_M43A1",
            "SPE_81mm_M1_M57_SmokeShell",
            "SPE_1Rnd_81mmWP_M1_M57",
            "vn_mortar_m29_mag_lume_x8"
        };
    };

    class SiP_M2_mortar_weapon: vn_mortar_m2
    {
        class Single1: Single1
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"SPE_mortar_Shot_SoundSet","vn_mortar_tails_soundset"};
            };
        };
        class Single2: Single2
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"SPE_mortar_Shot_SoundSet","vn_mortar_tails_soundset"};
            };
        };
        class Burst1: Burst1
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"SPE_mortar_Shot_SoundSet","vn_mortar_tails_soundset"};
            };
        };
        class Burst2: Burst2
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"SPE_mortar_Shot_SoundSet","vn_mortar_tails_soundset"};
            };
        };
    };
};

class cfgMagazines
{
    class SPE_8Rnd_81mmHE_M1_M43A1;
    class SPE_8rnd_81mm_M1_M57_SmokeShell;
    class SPE_8Rnd_81mmWP_M1_M57;

    class vn_mortar_m2_mag_he_x8;
    class vn_mortar_m2_mag_wp_x8;
    class vn_mortar_m2_mag_lume_x8;
    
    class vn_mortar_m29_mag_he_x8;
    class vn_mortar_m29_mag_wp_x8;
    class vn_mortar_m29_mag_lume_x8;
    
    class ace_compat_SiP_81mm_he: SPE_8Rnd_81mmHE_M1_M43A1
    {
        author = "Letlev";
        displayName = "81mm M43A1 HE Round";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_HE_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\AmmoBoxes_m\Mortars\SPE_Shell80.p3d";
        type = 256;
        count = 1;
        mass = 15;
    };
    class ace_compat_SiP_81mm_smoke: SPE_8rnd_81mm_M1_M57_SmokeShell
    {
        author = "Letlev";
        displayname = "81mm M57 FS Smoke Round";
        picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Smoke_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\AmmoBoxes_m\Mortars\SPE_Shell80.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Weapons\Ammoboxes_t\Mortars\Shell80_Smoke_co.paa"};
        type = 256;
        count = 1;
        mass = 15;
    };
    class ace_compat_SiP_81mm_wp: SPE_8Rnd_81mmWP_M1_M57
    {
        author = "Letlev";
        displayName = "81mm M57 WP Round";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_80_Smoke_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\AmmoBoxes_m\Mortars\SPE_Shell80.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Weapons\Ammoboxes_t\Mortars\Shell80_Smoke_co.paa"};
        type = 256;
        count = 1;
        mass = 15;
    };
    class ace_compat_SiP_81mm_lume: vn_mortar_m29_mag_lume_x8
    {
        author = "Letlev";
        displayName = "81mm M301 Illum Round";
        picture = "\SiP\UN_Vehicles\static\mortars\data\UI\81mm_illum_mag_ui_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\AmmoBoxes_m\Mortars\SPE_Shell80.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"SiP\Addons\sip_un_vehicles\static\mortars\data\UI\81mm_illum_mag_ui_ca.paa"};
        type = 256;
        count = 1;
        mass = 15;
    };
    
    class ace_compat_SiP_60mm_he: vn_mortar_m2_mag_he_x8
    {
        scope = 2;
        author = "Letlev";
        displayName = "60mm M49A2 HE Round";
        displayNameShort = "";
        type = 256;
        count = 1;
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_60_HE_ca.paa";
        model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell60.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"SiP\Addons\sip_un_vehicles\static\mortars\data\textures\60mm_HE_mag_co.paa"};
        mass = 10;
    };
    class ace_compat_SiP_60mm_wp: vn_mortar_m2_mag_wp_x8
    {
        scope = 2;
        displayName = "60mm M302 WP Round";
        displayNameShort = "";
        type = 256;
        count = 1;
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\M_60_Smoke_ca.paa";
        model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell60.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"WW2\SPE_Assets_t\Weapons\Ammoboxes_t\Mortars\Shell60_Smoke_co.paa"};
        mass = 10;
    };
    class ace_compat_SiP_60mm_lume: vn_mortar_m2_mag_lume_x8
    {
        scope = 2;
        author = "Letlev";
        displayName = "60mm M83 Illum Round";
        displayNameShort = "";
        type = 256;
        count = 1;
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Magazines\Mortars\m_60_illum_ca.paa";
        model = "\WW2\Assets_m\Weapons\Ammoboxes_m\mortars\WW2_shell60.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"SiP\Addons\sip_un_vehicles\static\mortars\data\textures\60mm_illum_mag_co.paa"};
        mass = 10;
    };
    
    class SiP_M2_107mm_mortar_mag_he: vn_mortar_m29_mag_he_x8
    {
        author = "Letlev";
        displayName = "M3 107mm HE (8)";
        displayNameShort = "HE";
        model = "\vn\static_f_vietnam\mortar_m29\vn_shell_81mm_m374_he_ammo.p3d";
		picture = "\z\ace\addons\compat_sog\UI\ammo_1rnd_81mm_ca.paa";
        ammo = "SiP_107mm_Mortar_he_ammo";
        initSpeed = 200;
    };
    class SiP_M2_107mm_mortar_mag_wp: vn_mortar_m29_mag_wp_x8
    {
        author = "Letlev";
        displayName = "M2 107mm WP (8)";
        displayNameShort = "WP";
        model = "\vn\static_f_vietnam\mortar_m29\vn_shell_81mm_m374_he_ammo.p3d";
		picture = "\z\ace\addons\compat_sog\UI\ammo_1rnd_81mm_ca.paa";
        initSpeed = 200;
    };
    
    class ace_compat_SiP_M2_107mm_he: SiP_M2_107mm_mortar_mag_he
    {
        scope = 2;
        displayName = "107mm M3 HE";
        type = 256;
        count = 1;
        mass = 20;
    };
    class ace_compat_SiP_M2_107mm_wp: SiP_M2_107mm_mortar_mag_wp
    {
        scope = 2;
        displayName = "107mm M2 WP";
        type = 256;
        count = 1;
        mass = 20;
    };
    
    class SiP_M30_107mm_mortar_mag_he: SiP_M2_107mm_mortar_mag_he
    {
        displayName = "M328A1 107mm HE (8)";
    };
    class SiP_M30_107mm_mortar_mag_wp: SiP_M2_107mm_mortar_mag_wp
    {
        displayName = "M328A1 107mm WP (8)";
    };
    class SiP_M30_107mm_mortar_mag_lume: vn_mortar_m29_mag_lume_x8
    {
        author = "Letlev";
        displayName = "M325A2 107mm LUME (8)";
        displayNameShort = "Ilum";
        model = "fow\fow_mortars\type97_shell";
        picture = "\fow\fow_mortars_c\ui\m_type97_ca.paa";
        initSpeed = 200;
    };
    
    class ace_compat_SiP_m30_107mm_he: SiP_M30_107mm_mortar_mag_he
    {
        scope = 1;
        scopearsenal = 0;
        displayName = "107mm M328A1  HE";
        type = 256;
        count = 1;
        mass = 12.28;
    };
    class ace_compat_SiP_m30_107mm_wp: SiP_M30_107mm_mortar_mag_wp
    {
        scope = 1;
        scopearsenal = 0;
        displayName = "107mm M328A1 WP";
        type = 256;
        count = 1;
        mass = 12.28;
    };
    class ace_compat_SiP_m30_107mm_lume: SiP_M30_107mm_mortar_mag_lume
    {
        scope = 1;
        scopearsenal = 0;
        displayName = "107mm M325A2 Ilum";
        type = 256;
        count = 1;
        mass = 12.28;
    };
};

class cfgAmmo
{
    class vn_shell_81mm_m374_he_ammo;

    class SiP_107mm_Mortar_he_ammo: vn_shell_81mm_m374_he_ammo
    {
        hit = 210;
        indirectHit = 40;
        indirectHitRange = 20;
        dangerRadiusHit = 120;
        suppressionRadiusHit = 90;
        explosive = 0.8;
        cost = 200;
        caliber = 6;
        whistleOnFire = 1;
        whistleDist = 200;
    };
};

class ACE_CSW_Groups
{
    class ace_compat_SiP_81mm_he
    {
        SPE_8Rnd_81mmHE_M1_M43A1 = 1;
    };
    class ace_compat_SiP_81mm_smoke
    {
        SPE_8rnd_81mm_M1_M57_SmokeShell = 1;
    };
    class ace_compat_SiP_81mm_wp
    {
        SPE_8Rnd_81mmWP_M1_M57 = 1;
    };
    class ace_compat_SiP_81mm_lume
    {
        vn_mortar_m29_mag_lume_x8 = 1;
    };

    class ace_compat_SiP_60mm_he
    {
        vn_mortar_m2_mag_he_x8 = 1;
    };
    class ace_compat_SiP_60mm_wp
    {
        vn_mortar_m2_mag_wp_x8 = 1;
    };
    class ace_compat_SiP_60mm_lume
    {
        vn_mortar_m2_mag_lume_x8 = 1;
    };

    class ace_compat_SiP_M2_107mm_he
    {
        SiP_M2_107mm_mortar_mag_he = 1;
    };
    class ace_compat_SiP_M2_107mm_wp
    {
        SiP_M2_107mm_mortar_mag_wp = 1;
    };
    class ace_compat_SiP_m30_107mm_he
    {
        SiP_M30_107mm_mortar_mag_he = 1;
    };
    class ace_compat_SiP_m30_107mm_wp
    {
        SiP_M30_107mm_mortar_mag_wp = 1;
    };
    class ace_compat_SiP_m30_107mm_lume
    {
        SiP_M30_107mm_mortar_mag_lume = 1;
    };
};

class cfgVehicles
{
    class StaticMortar;
    class Mortar_01_base_F: StaticMortar
    {
        class Turrets;
        class ACE_Actions;
    };
    
    class vn_static_mortar_m29_base: Mortar_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class ACE_CSW;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class assembleInfo;
    };
    class vn_static_mortar_m2_base: vn_static_mortar_m29_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class ACE_CSW;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class assembleInfo;
    };

    class SPE_StaticMortar_base;
    class SPE_US_Mortar_base: SPE_StaticMortar_base
    {
        class Turrets;
        class ACE_Actions;
    };
    class SPE_M1_81: SPE_US_Mortar_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class ACE_CSW;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class assembleInfo;
    };

    class SiP_m2_60mm_mortar: vn_static_mortar_m2_base
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "60mm M2 Mortar";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Mortars_Editor_Subcategory";
        vehicleClass = "SiP_mortars_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_M2_mortar_weapon"};
                soundServo[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};
                soundServoVertical[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_M2_mortar_weapon";
            magazineLocation = "_target selectionPosition 'pohon'";
            disassembleWeapon = "SiP_M2_60mm_tube_carry";
            disassembleTurret = "SiP_M2_60mm_baseplate";
            ammoLoadTime = 1;
            ammoUnloadTime = 3;
            desiredAmmo = 1;
        };
        class assembleInfo: assembleInfo
        {
            dissasembleTo[] = {};
        };
    };
    class SiP_M2_107mm_mortar: vn_static_mortar_m29_base
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "107mm M2 Mortar";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Mortars_Editor_Subcategory";
        vehicleClass = "SiP_mortars_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        model = "\fow\fow_mortars\type97_mortar";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_M2_107mm_mortar_weapon"};
                magazines[] = {"SiP_M2_107mm_mortar_mag_he","SiP_M2_107mm_mortar_mag_he","SiP_M2_107mm_mortar_mag_he","SiP_M2_107mm_mortar_mag_he","SiP_M2_107mm_mortar_mag_he","SiP_M2_107mm_mortar_mag_wp","SiP_M2_107mm_mortar_mag_wp","SiP_M2_107mm_mortar_mag_wp"};
                minElev = -4.2;
                maxElev = 36;
                maxTurn = 180;
                minTurn = -180;
                gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Optics.p3d";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                memoryPointsGetInGunner = "pos_gunner";
                memoryPointsGetInGunnerDir = "pos_gunner_dir";
                gunnerAction = "Mortar_Gunner";
                ejectDeadGunner = 1;
                gunnerGetInAction = "";
                gunnerGetOutAction = "";
                gunnerCanSee = "2+4+8+16+32";
                elevationMode = 3;
                soundServo[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};
                soundServoVertical[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};
                allowTabLock = 0;
                canUseScanners = 0;
                cameraDir = "look";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunneroutview";
                gunnerForceOptics = 0;
            };
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "konec hlavne";
            };
        };
        class ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_M2_107mm_mortar_weapon";
            magazineLocation = "_target selectionPosition 'usti hlavne'";
            disassembleWeapon = "SiP_M2_107mm_tube_carry";
            disassembleTurret = "SiP_M2_107mm_mortar_baseplate";
            ammoLoadTime = 1;
            ammoUnloadTime = 3;
            desiredAmmo = 1;
        };
        class assembleInfo
        {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {};
            displayName = "";
        };
    };
    class SiP_M1_81mm_mortar: SPE_M1_81
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "81mm M1 Mortar";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Mortars_Editor_Subcategory";
        vehicleClass = "SiP_mortars_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_M1_81mm_mortar_weapon"};
                magazines[] = 
                {
                    "SPE_8Rnd_81mmHE_M1_M43A1",
                    "SPE_8Rnd_81mmHE_M1_M43A1",
                    "SPE_8Rnd_81mmHE_M1_M43A1",
                    "SPE_8Rnd_81mmHE_M1_M43A1",
                    "SPE_8Rnd_81mmWP_M1_M57",
                    "SPE_8rnd_81mm_M1_M57_SmokeShell",
                    "vn_mortar_m29_mag_lume_x8"
                };
                soundServo[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};
                soundServoVertical[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};
            };
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "konec hlavne";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_M1_81mm_mortar_weapon";
            magazineLocation = "_target selectionPosition 'usti hlavne'";
            disassembleWeapon = "SiP_M1_81mm_tube_carry";
            disassembleTurret = "SiP_M1_81mm_baseplate";
            ammoLoadTime = 1;
            ammoUnloadTime = 3;
            desiredAmmo = 1;
        };
        class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
			SPE_dissasembleTo[] = {};
			deployTime = 8;
		};
        class UserActions
        {
            class Turn_left
            {
                displayName = "$STR_DIR_LEFT";
                priority = 4;
                radius = 2.5;
                position = "osaveze";
                showWindow = 0;
                onlyForPlayer = 1;
                shortcut = "";
                condition = "(alive this) && (((isNull gunner this) || (call ww2_fnc_findPlayer) == gunner this)) && (this getVariable ['Enable_Dir',true])";
                statement = "this setDir (getDir this - 45);";
            };
            class Turn_right: Turn_left
            {
                displayName = "$STR_DIR_RIGHT";
                statement = "this setDir (getDir this + 45);";
            };
        };
    };

    class SiP_m2_60mm_mortar_marines: SiP_m2_60mm_mortar
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    class SiP_M1_81mm_mortar_marines: SiP_M1_81mm_mortar
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    class SiP_M2_107mm_mortar_marines: SiP_M2_107mm_mortar
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    
    class SiP_M2_107mm_mortar_uk: SiP_M2_107mm_mortar
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_gunner";
        typicalCargo[] = {"SiP_BCFK_gunner"};
    };
};