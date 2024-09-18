class cfgPatches
{
    class SiP_Patch_m4a3e8_sherman
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "sounds_f_vietnam_c",
            "WW2_Assets_c_Vehicles_Tanks_c_M4A3_75",
            "WW2_Assets_c_Vehicles_Tanks_c_M4_Sherman",
            "WW2_SPE_Assets_c_Vehicles_Weapons_c"
        };
        units[] = 
        {
            "SiP_m4a3e8_sherman",

            "SiP_m4a3e8_sherman_can_sqdC",
            "SiP_m4a3e8_sherman_can_sqdB",
            "SiP_m4a3e8_sherman_can_sqdA",

            "SiP_m4a3e8_sherman_marines"
        };
        weapons[] = 
        {
            "SiP_M1_76mm_base",
            "SiP_M1_76mm_HE_AI",
            "SiP_M1_76mm_APCR_AI",
            "SiP_M1_76mm_SMK_AI",
            "SiP_M1_76mm_L55"
        };
        magazines[] =
        {
            "SiP_24x_76mm_M1_M93_APCR"
        };
    };
};

class cfgsoundsets
{
    class vn_basic_weapon_heavy_shot_soundset;

    class SiP_M1_76mm_shot_soundset: vn_basic_weapon_heavy_shot_soundset
    {
        soundShaders[] = 
        {
            "vn_cannon_76mm_internal_shot_soundshader",
            "SPE_int_cannon_med_shot_fp_SoundShader",
            "SPE_int_cannon_med_shot_close_SoundShader",
            "SPE_int_cannon_med_shot_mid_SoundShader",
            "SPE_int_cannon_med_shot_far_SoundShader"
        };
    };
};

class cfgMagazines
{
    class SPE_6x_76mm_M1_M93_APCR;

    class SiP_24x_76mm_M1_M93_APCR: SPE_6x_76mm_M1_M93_APCR
    {
        count = 24;
    };
};

class CfgWeapons
{
    class SPE_TankCannon_base;
    class SPE_M1_76mm_base: SPE_TankCannon_base
    {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    class SPE_TankMGun_base;
    class SPE_M1919A4_coax: SPE_TankMGun_base
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };
    
    class SiP_M1_76mm_base: SPE_M1_76mm_base
    {
        magazines[] = 
        {
            "SPE_30x_76mm_M1_M62_APCBC",
            "SPE_20x_76mm_M1_HC_M62_APCBC",
            "SPE_30x_76mm_M1_M79_AP",
            "SPE_20x_76mm_M1_HC_M79_AP",
            "SPE_6x_76mm_M1_M93_APCR",
            "SPE_5x_76mm_M1_HC_M93_APCR",
            "SiP_24x_76mm_M1_M93_APCR",
            "SPE_28x_76mm_M1_M42_HE",
            "SPE_15x_76mm_M1_HC_M42_HE",
            "SPE_7x_76mm_M1_M89_SMK",
            "SPE_5x_76mm_M1_HC_M89_SMK",
            "SPE_76mm_M1_M93_APCR",
            "SPE_76mm_M1_M62_APCBC",
            "SPE_76mm_M1_M79_AP",
            "SPE_76mm_M1_M42_HE",
            "SPE_76mm_M1_M89_SMK",
            "SPE_76mm_M1_HC_M93_APCR",
            "SPE_76mm_M1_HC_M62_APCBC",
            "SPE_76mm_M1_HC_M79_AP",
            "SPE_76mm_M1_HC_M42_HE",
            "SPE_76mm_M1_HC_M89_SMK"
        };
        class player: player
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_M1_76mm_shot_soundset","SPE_cannon_med_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class close: close
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_M1_76mm_shot_soundset","SPE_cannon_med_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class short: short
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_M1_76mm_shot_soundset","SPE_cannon_med_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class medium: medium
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_M1_76mm_shot_soundset","SPE_cannon_med_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class far: far
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_M1_76mm_shot_soundset","SPE_cannon_med_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
    };
    class SiP_M1_76mm_HE_AI: SiP_M1_76mm_base
    {
        magazines[] = {"SPE_28x_76mm_M1_M42_HE","SPE_15x_76mm_M1_HC_M42_HE","SPE_76mm_M1_M42_HE","SPE_76mm_M1_HC_M42_HE"};
        magazineWell[] = {"SPE_76x539mm_M1_HE"};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_M1_76mm_APCR_AI: SiP_M1_76mm_base
    {
        magazines[] = {"SPE_6x_76mm_M1_M93_APCR","SPE_5x_76mm_M1_HC_M93_APCR","SiP_24x_76mm_M1_M93_APCR"};
        magazineWell[] = {"SPE_76x539mm_M1_APCR"};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_M1_76mm_SMK_AI: SiP_M1_76mm_base
    {
        magazines[] = {"SPE_7x_76mm_M1_M89_SMK","SPE_5x_76mm_M1_HC_M89_SMK"};
        magazineWell[] = {"SPE_76x539mm_M1_SMK"};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_M1_76mm_L55: SiP_M1_76mm_base
    {
        muzzles[] = {"MODE_PLAYER_ALL","MODE_AI_APCR","MODE_AI_SMOKE","MODE_AI_HE"};
        class MODE_AI_HE: SiP_M1_76mm_HE_AI{};
        class MODE_AI_APCR: SiP_M1_76mm_APCR_AI{};
        class MODE_AI_SMOKE: SiP_M1_76mm_SMK_AI{};
        class MODE_PLAYER_ALL: SiP_M1_76mm_base{};
    };

    class SiP_m1919a4_coax_weapon: SPE_M1919A4_coax
    {
        scope = 1;
        displayName = "Browning M1919A4 Coax";
        magazines[] = 
        {
            "SiP_m1919_v_250_mag",
            "SiP_m1919_v_100_mag",
            "SiP_m1919_v_50_mag"
        };
        magazineReloadTime = 3.6;
    };
    class SiP_m1919a4_bow_weapon: SiP_m1919a4_coax_weapon
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "RifleAssaultCloud";
                positionName = "kulas_kursMG";
                directionName = "kulas_kursMG";
            };
        };
    };
};

class CfgVehicles
{
    class LIB_Tank_base;
    class LIB_M4A3_75_base: LIB_Tank_base
    {
        class Turrets;
    };
    class LIB_M4A3_75: LIB_M4A3_75_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class LIB_M4A3_76: LIB_M4A3_75
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class LIB_M4A3_76_HVSS: LIB_M4A3_76
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                    class Loader_place;
                };
            };
            class kurs_MG_turret;
        };
        class AnimationSources;
        class Sounds;
        class EventHandlers;
    };

    class SiP_m4a3e8_sherman: LIB_M4A3_76_HVSS
    {
        scope = 2;
        scopecurator = 2;
        author = "Letlev";
        displayname = "M4A3E8 Sherman";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_tank_driver";
        armor = 600;
        armorStructural = 250;
        unitInfoType = "RscUnitInfoTank_SPE";
        hiddenSelectionsTextures[] = {"\simc_uaf_44_panzers\sjerman\hvss\hvsssherman_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstside_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstracks_co.paa","\simc_uaf_44_panzers\sjerman\hvss\alpha_co.paa"};
        weapons[] = {"SiP_Medium_Horn_weapon"};
        magazines[] = {"vn_ship_horn_mag"};
        ace_cargo_space = 8;
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
        textureList[] = {"standard",1,"standard_2",1,"camo_2AD",1,"olive",1};
        class textureSources
        {
            class standard
            {
                displayName = "Standard";
                author = "Casper";
                textures[] = {"\simc_uaf_44_panzers\sjerman\hvss\hvsssherman_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstside_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstracks_co.paa","\simc_uaf_44_panzers\sjerman\hvss\alpha_co.paa"};
                factions[] = 
                {
                    "SiP_US_Army",
                    "SiP_US_Army_w",
                    "SiP_US_Marines",
                    "SiP_US_Marines_w"
                };
            };
            class standard_2: standard
            {
                displayName = "Standard (Light)";
                author = "I44";
                textures[] = {"\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsssherman_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsstside_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsstracks_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\alpha_co.paa"};
            };
            class camo_2AD: standard
            {
                displayName = "Camo";
                author = "Brainfag";
                textures[] = {"\simc_uaf_44_panzers\sjerman\hvss\hvsssherman_2AD_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstside_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstracks_co.paa","\simc_uaf_44_panzers\sjerman\hvss\alpha_co.paa"};
            };
            class olive: standard_2
            {
                displayName = "Olive";
                textures[] = {"\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsssherman_dak_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsstside_dak_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsstracks_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\alpha_dak_co.paa"};
            };
            class winter: standard
            {
                displayName = "Winter US";
                textures[] = {"\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsssherman_w_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsstside_w_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\hvsstracks_w_co.paa","\WW2\assets_t\vehicles\Tanks_t\I44_m4_sherman\hvss\alpha_w_co.paa"};
                factions[] = 
                {
                    "SiP_US_Army_w",
                    "SiP_US_Marines_w"
                };
            };
        };

        soundEngineOnInt[]=
		{
			"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_U1_s\m4a3\int_start",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_U1_s\m4a3\ext_start",
			1,
			1,
			450
		};
		soundEngineOffInt[]=
		{
			"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_U1_s\m4a3\int_stop",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_U1_s\m4a3\ext_stop",
			1,
			1,
			450
		};
		class Sounds: Sounds
		{
			soundSetsExt[]=
			{
				"SPE_tank_m4a3_ext_onLoad_rpm0_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm1_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm2_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm3_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm4_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm5_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm6_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm7_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm8_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm9_soundSet",
				"SPE_tank_m4a3_ext_onLoad_rpm10_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm0_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm1_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm2_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm3_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm4_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm5_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm6_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm7_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm8_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm9_soundSet",
				"SPE_tank_m4a3_ext_offLoad_rpm10_soundSet",
				"SPE_tank_m4a3_ext_tracks_slow_soundSet",
				"SPE_tank_m4a3_ext_tracks_mid_soundSet",
				"SPE_tank_m4a3_ext_tracks_fast_soundSet",
				"SPE_tank_m4a3_ext_rumble_soundSet",
				"SPE_tank_m4a3_ext_acceleration_soundSet",
				"SPE_tank_ext_internalFire_soundSet",
				"SPE_trackSurfaceSound_ext_soft_soundSet",
				"SPE_trackSurfaceSound_ext_hard_soundSet",
				"SPE_trackSurfaceSound_ext_sand_soundSet",
				"SPE_tank_Ext_rain_light_soundSet",
				"SPE_tank_Ext_rain_hard_soundSet",
				"Tank_General_Collision_SoundSet"
			};
			soundSetsInt[]=
			{
				"SPE_tank_m4a3_int_onLoad_rpm0_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm1_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm2_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm3_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm4_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm5_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm6_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm7_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm8_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm9_soundSet",
				"SPE_tank_m4a3_int_onLoad_rpm10_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm0_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm1_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm2_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm3_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm4_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm5_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm6_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm7_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm8_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm9_soundSet",
				"SPE_tank_m4a3_int_offLoad_rpm10_soundSet",
				"SPE_tank_m4a3_int_acceleration_soundSet",
				"SPE_tank_m4a3_ext_tracks_slow_soundSet",
				"SPE_tank_m4a3_ext_tracks_mid_soundSet",
				"SPE_tank_m4a3_ext_tracks_fast_soundSet",
				"SPE_tank_m4a3_ext_rumble_soundSet",
				"SPE_tank_int_internalFire_soundSet",
				"SPE_int_breakingStrain_soundSet",
				"SPE_tankRattling_1_soundSet",
				"SPE_int_vehicleStrainTankHeavy_soundSet",
				"SPE_curveStress_1_soundShader",
				"SPE_tank_Int_rain_light_soundSet",
				"SPE_tank_Int_rain_hard_soundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
		};
        SPE_System_VehicleLoadout_AvailableAmmunition[] = 
        {
            "SiP_24x_76mm_M1_M93_APCR",
            "SiP_24x_76mm_M1_M93_APCR",

            "SPE_30x_76mm_M1_M62_APCBC",

            "SPE_7x_76mm_M1_M89_SMK",
            "SPE_7x_76mm_M1_M89_SMK",

            "SPE_28x_76mm_M1_M42_HE",
            "SPE_28x_76mm_M1_M42_HE"
        };
        class RenderTargets
        {
            class CommanderPeriscope
            {
                renderTarget = "rendertarget0";
                class CameraView1
                {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderQuality = 2;
                    renderVisionMode = 0;
                    fov = 0.7;
                };
            };
        };
        class TransportItems
        {
            class _xx_vn_b_item_toolkit
            {
                name = "vn_b_item_toolkit";
                count = 1;
            };
            class _xx_SPE_US_FirstAidKit
            {
                name = "SPE_US_FirstAidKit";
                count = 10;
            };
            class _xx_vn_b_item_medikit_01
            {
                name = "vn_b_item_medikit_01";
                count = 1;
            };
        };
        class TransportBackpacks
        {
            class _xx_SiP_m1945_gpbag_spe_OD
            {
                backpack = "SiP_m1945_gpbag_spe_OD";
                count = 5;
            };
        };
        class Attributes
        {
            class Nickname
            {
                control = "EditShort";
                defaultValue = "-1";
                displayName = "$STR_SPE_Assets_Vehicles_displayName_Tank_Nickname";
                tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_2";
                expression = "[_this,_value,'SPE_nickname'] spawn SPE_Fnc_Nickname_update;";
                property = "SPE_Nickname_attribute";
                typeName = "STRING";
                validate = "STRING";
            };
            class SPE_UnitNumber
            {
                control = "EditShort";
                defaultValue = "-1";
                displayName = "$STR_SPE_Assets_Vehicles_displayName_Unit_Number";
                tooltip = "$STR_SPE_Assets_Vehicles_tooltip_Leave_blank_to_disable_1";
                expression = "[_this,_value,'SPE_numbers'] spawn SPE_Fnc_System_Vehicle_Numbers_update;";
                property = "SPE_Unit_Number_attribute";
                typeName = "STRING";
                validate = "STRING";
            };
            class SPE_HideTurret
            {
                displayName = "$STR_SPE_DN_ASSETS_VEHICLES_SPE_HideTurret";
                property = "SPE_HideTurret";
                control = "CheckboxNumber";
                expression = "_this animate ['SPE_HideTurret',_value,true]; _this setDamage [_value,false];";
                defaultValue = "0";
            };
            class SPE_VehicleLoadout
            {
                displayName = "";
                tooltip = "";
                property = "SPE_System_TankLoadout";
                control = "SPE_System_TankLoadout";
                expression = "[_this,_value] spawn SPE_fnc_System_ammunition_updateAmmoLoadout;";
                defaultValue = "0";
            };
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                turretInfoType = "SPE_M71D_Gunner_Optic";
                SPE_Vertical[] = {"reticle_v",0.01};
                SPE_Horizontal[] = {"reticle_h",0.001};
                SPE_Source_V[] = {"SPE_Vertical"};
                SPE_Source_H[] = {"SPE_Horizontal"};
                gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Optics_Scripted.p3d";
                gunnerType = "SiP_US_Army_tank_gunner";
                minElev = -10;
				maxElev = 25;
                weapons[] = 
                {
                    "SiP_M1_76mm_L55",
                    "SiP_m1919a4_coax_weapon"
                };
                magazines[] = 
                {
                    "SiP_24x_76mm_M1_M93_APCR",
                    "SiP_24x_76mm_M1_M93_APCR",

                    "SPE_30x_76mm_M1_M62_APCBC",

                    "SPE_7x_76mm_M1_M89_SMK",
                    "SPE_7x_76mm_M1_M89_SMK",

                    "SPE_28x_76mm_M1_M42_HE",
                    "SPE_28x_76mm_M1_M42_HE",

                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag"
                };
                class OpticsIn
                {
                    class Wide
                    {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        opticsDisplayName = "PERISCOPE";
                        gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
                        visionMode[] = {"Normal"};
                        initFov = 0.75;
                        minFov = 0.75;
                        maxFov = 0.75;
                        opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                        opticsDisablePeripherialVision = 1;
                    };
                    class Medium: Wide
                    {
                        opticsDisplayName = "TELESCOPE";
                        gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_M4_Sherman_Reticle.p3d";
                        initFov = 0.187;
                        minFov = 0.187;
                        maxFov = 0.187;
                        opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                        opticsDisablePeripherialVision = 1;
                    };
                    class Narrow: Medium
                    {
                        opticsDisplayName = "DIRECT";
                        initFov = 0.0833;
                        minFov = 0.0833;
                        maxFov = 0.0833;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {0,1};
                        gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Optics_Scripted.p3d";
                        opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                        OpticsFlare = 1;
                        camPos = "gunnerview";
                        camDir = "";
                        SPE_DefaultOptic = 1;
                    };
                };
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Army_tank_commander";
                        gunnerInAction="SPE_M4A1_76_commander_in";
						gunnerAction="SPE_M4A1_76_commander_Out";
						personTurretAction="SPE_M4A1_76_commander_turnout_2";
                        class OpticsIn
                        {
                            class Wide
                            {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                opticsDisplayName = "PERISCOPE";
                                gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Commander_Optic.p3d";
                                visionMode[] = {"Normal"};
                                initFov = 0.75;
                                minFov = 0.75;
                                maxFov = 0.75;
                                opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                                opticsDisablePeripherialVision = 1;
                            };
                        };
                    };
                    class Loader_place: Loader_place
                    {
                        SPE_LoaderTurret = 1;
                        gunnerType = "SiP_US_Army_tank_gunner";
                    };
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerName = "Bow Gunner";
                gunnerType = "SiP_US_Army_tank_bow";
                weapons[] = {"SiP_m1919a4_bow_weapon"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
                proxyIndex = 2;
            };
        };
        class Tower_Settings
        {
            class Weapons
            {
                class Main_Weapon
                {
                    SPE_Modes[] = {"SiP_M1_76mm_L55"};
                };
                class Coaxial_Machine_Gun
                {
                    SPE_Modes[] = {"SiP_m1919a4_coax_weapon"};
                };
            };
        };
        class AnimationSources: Animationsources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "SiP_M1_76mm_L55";
            };
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "SiP_M1_76mm_L55";
            };
            class muzzle_rot_coax
            {
                source = "ammorandom";
                weapon = "SiP_m1919a4_coax_weapon";
            };
            class muzzle_hide_coax
            {
                source = "reload";
                weapon = "SiP_m1919a4_coax_weapon";
            };
            class reticle_v_source
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0.1;
            };
            class reticle_h_source
            {
                source = "user";
                animPeriod = 1;
                initPhase = 0.5;
            };
            class SPE_HideTurret
            {
                source = "user";
                animPeriod = 1e-05;
                initPhase = 0;
            };
        };
        LIB_Layers_Array[] = {};
        LIB_Preload_Proxy[] = {};
        LIB_HitPoints[] = {};
        LIB_ArmorPoints[] = {};
        LIB_CrewPoints[] = {};
        LIB_Cargo_Dir[] = {};
        class Layers{};
        SPE_Layers_Array[] = {"Background","Engine_Status","Fuel_Status","Fuel_Arrow","Speed_Arrow","Vehicle","Compass","Commander_View","Hit_Indicator"};
        class SPE_Veh_HudLayers
        {
            SPE_Layers_Array[] = {"Background","Engine_Status","Fuel_Status","Fuel_Arrow","Speed_Arrow","Vehicle","Compass","Commander_View"};
            class Background
            {
                Type[] = {1,0,1,0};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Base.paa";
                Color[] = {{"text",{},"hudcolor"},"SPE_Get_Control_Parameter"};
                Angle = 0;
                x = "0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                w = "((safeZoneW*0.43)/(getResolution select 4)*(getResolution select 5))";
                h = "((safeZoneH*0.43)*(getResolution select 5))";
            };
            class Compass: Background
            {
                Type[] = {1,0,1,1};
                Color[] = {{"text",{},"hudcolor"},"SPE_Get_Control_Parameter"};
                Angle[] = {{"angle","hud_compass"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Compass.paa";
            };
            class Engine_Status: Background
            {
                Color[] = {{"color",{},"enginestatus"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Engine.paa";
            };
            class Fuel_Status: Background
            {
                Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{1,1,1,0.15}},"fuel"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Fuel.paa";
            };
            class Fuel_Arrow: Background
            {
                Type[] = {1,0,1,1};
                Color[] = {{"text",{},"hudcolor"},"SPE_Get_Control_Parameter"};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Needle_R.paa";
                Angle[] = {{"angle",{42,-85},"fuelgauge"},"SPE_Get_Control_Parameter"};
            };
            class Speed_Arrow: Fuel_Arrow
            {
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Needle_L.paa";
                Angle[] = {{"angle",{-42,85},"speed"},"SPE_Get_Control_Parameter"};
            };
            class Throttle_Arrow: Speed_Arrow
            {
                Angle[] = {{"angle",{-42,85},"throttle"},"SPE_Get_Control_Parameter"};
            };
            class Commander_View: Fuel_Arrow
            {
                x = "0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                y = "0 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Base\Comm_View.paa";
                Color[] = {{"color",{},"commander_view_direction"},"SPE_Get_Control_Parameter"};
                Angle[] = {{"angle_turret","commander_view_direction"},"SPE_Get_Control_Parameter"};
            };
            class Hit_Indicator: Fuel_Arrow
            {
                Type[] = {1,0,1,1};
                Text = "\WW2\SPE_Core_t\System_Tank_Interface_t\UI\Tanks\Hit_Direction.paa";
                Color[] = {{"color",{},"hit_indicator"},"SPE_Get_Control_Parameter"};
                Angle[] = {{"angle","hit_indicator"},"SPE_Get_Control_Parameter"};
            };
            class Vehicle
            {
                SPE_Layers_Array[] = {"ltrack","rtrack","hull","engine","turret","gun"};
                class SPE_Veh_HudLayers
                {
                    class ltrack: Background
                    {
                        Type[] = {1,0,1,1};
                        x = "1.85 * (((safezoneW / safezoneH) min 1.2) / 40) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
                        y = "1.85 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profileNamespace getVariable ['IGUI_SPE_VEHICLE_HUD_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                        w = "(((safeZoneW*0.43)/(getResolution select 4)*(getResolution select 5))*0.65)";
                        h = "(((safeZoneH*0.43)*(getResolution select 5))*0.65)";
                        Text="\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\M4A3_76\LTrack.paa";
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"ltrack"},"SPE_Get_Control_Parameter"};
                        Angle[] = {{"angle","hull"},"SPE_Get_Control_Parameter"};
                    };
                    class rtrack: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"rtrack"},"SPE_Get_Control_Parameter"};
                        Text="\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\M4A3_76\RTrack.paa";
                    };
                    class hull: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"hull"},"SPE_Get_Control_Parameter"};
                        Text="\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\M4A3_76\Hull.paa";
                    };
                    class engine: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"engine"},"SPE_Get_Control_Parameter"};
                        Text="\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\M4A3_76\Engine.paa";
                    };
                    class turret: ltrack
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"turret"},"SPE_Get_Control_Parameter"};
                        Angle[] = {{"angle","turret"},"SPE_Get_Control_Parameter"};
                        Text="\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\M4A3_76\Turret.paa";
                    };
                    class gun: turret
                    {
                        Color[] = {{"color",{{0.71,0.71,0.71,1},{0.706,0.0745,0.0196,1},{0.2,0.2,0.2,1}},"gun"},"SPE_Get_Control_Parameter"};
                        Text="\SiP\UN_Vehicles\tanks\m4a3e8_sherman\data\extended_ui\m4a3_gun.paa";
                    };
                };
            };
        };
    };

    class SiP_m4a3e8_sherman_can_sqdC: SiP_m4a3e8_sherman
    {
        displayname = "M4A3E8 'Squadron C'";
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_can_tank_driver";
        hiddenSelectionsTextures[] = {"\SiP\UN_Vehicles\tanks\m4a3e8_sherman\data\can_hvsssherman_sqd_c_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstside_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstracks_co.paa","\simc_uaf_44_panzers\sjerman\hvss\alpha_co.paa"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_BCFK_can_tank_gunner";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_BCFK_can_tank_commander";
                    };
                    class Loader_place: Loader_place
                    {
                        gunnerType = "SiP_BCFK_can_tank_gunner";
                    };
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerType = "SiP_BCFK_can_tank_bow";
            };
        };
    };
    class SiP_m4a3e8_sherman_can_sqdB: SiP_m4a3e8_sherman_can_sqdC
    {
        displayname = "M4A3E8 'Squadron B'";
        hiddenSelectionsTextures[] = {"\SiP\UN_Vehicles\tanks\m4a3e8_sherman\data\can_hvsssherman_sqd_b_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstside_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstracks_co.paa","\simc_uaf_44_panzers\sjerman\hvss\alpha_co.paa"};
    };
    class SiP_m4a3e8_sherman_can_sqdA: SiP_m4a3e8_sherman_can_sqdC
    {
        displayname = "M4A3E8 'Squadron A'";
        hiddenSelectionsTextures[] = {"\SiP\UN_Vehicles\tanks\m4a3e8_sherman\data\can_hvsssherman_sqd_a_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstside_co.paa","\simc_uaf_44_panzers\sjerman\hvss\hvsstracks_co.paa","\simc_uaf_44_panzers\sjerman\hvss\alpha_co.paa"};
    };

    class SiP_m4a3e8_sherman_marines: SiP_m4a3e8_sherman
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_tank_driver";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Marines_tank_gunner";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Marines_tank_commander";
                    };
                    class Loader_place: Loader_place
                    {
                        gunnerType = "SiP_US_Marines_tank_gunner";
                    };
                };
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerType = "SiP_US_Marines_tank_bow";
            };
        };
    };
};

class Extended_init_EventHandlers
{
    class SiP_m4a3e8_sherman
    {
        class SiP_m4a3e8_sherman_init
        {
            init = "[_this select 0] execVM 'SiP\Addons\sip_un_vehicles\tanks\functions\tankcargo.sqf';";
        };
    };
};