class cfgPatches
{
    class SiP_Patch_m26_pershing
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "A3_Soft_F",
            "FA_WW2_Tanks"
        };
        units[] = 
        {
            "SiP_m26_pershing",
            "SiP_m26_pershing_marines"
        };
        weapons[] = 
        {
            "SiP_m1919a4_coax_weapon2",
            "SiP_m1919a4_bow_weapon2",
            "SiP_M3A1_90mm_base",
            "SiP_M3A1_90mm_HE_AI",
            "SiP_M3A1_90mm_APCR_AI",
            "SiP_M3A1_90mm"
        };
        magazines[] = 
        {
            "SiP_40x_M77_AP",
            "SiP_10x_M82_APCR",
            "SiP_20x_M71_HE"
        };
    };
};

class VScrollbar;
class HScrollbar;
class RscControlsGroup;

class RscInGameUI
{
    class RscUnitInfo;
    class SiP_M26_RscOptics_gunner: RscUnitInfo
    {
        onload = "['onLoad', _this, 'RscUnitInfo', 'IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup
        {
            idc = 170;
            class VScrollbar: VScrollbar
            {
                width = 0;
            };
            class HScrollbar: HScrollbar
            {
                height = 0;
            };
            x = "0 * (0.01875 * SafezoneH) + (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * (0.025 * SafezoneH) + (SafezoneY)";
            w = "53.5 * (0.01875 * SafezoneH)";
            h = "40 * (0.025 * SafezoneH)";
        };
    };
};

class cfgVehicles
{
    class LandVehicle;
    class Tank: LandVehicle
    {
        class NewTurret;
    };
    class Tank_F: Tank
    {
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class ViewGunner;
                class Turrets;
            };
        };
        class HitPoints;
    };

    class FA_M26_BASE: Tank_F
    {
        class HitPoints: HitPoints
        {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
            class HitFuel;
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
            class HullTurret;
        };
        class Animationsources;
        class EventHandlers;
    };
    
    class SiP_m26_pershing_base: FA_M26_BASE
    {
        author = "Letlev";
        scope = 1;
        scopeCurator = 1;
        displayname = "M26 Pershing";
        side = 1;
        weapons[] = {"SiP_Heavy_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        armor = 400;
        armorStructural = 7;
        damageResistance = 0.00547;
        editorPreview = "\FA_WW2_Tanks\ui\previews\pre_m26_ca.jpg";
        hiddenSelectionsTextures[] = {"Pershing\data\lambert2SG_CO.paa"};
        driverOpticsModel = "MWB_M24Chaffee\driverOptic.p3d";
        textureList[] = 
        {
            "dark_od",1,
            "OliveStar",1,
            "Olive",1,
            "Tan",1
        };
        class TextureSources
        {
            class dark_od
            {
                displayName = "Dark OD";
                author = "Luca";
                textures[] = {"Pershing\data\lambert2SG_CO.paa"};
                factions[] = 
                {
                    "SiP_US_Army",
                    "SiP_US_Marines"
                };
            };
            class Olive: dark_od
            {
                displayName = "OD";
                textures[] = {"FA_WW2_Tanks\m26\textures\camo1_oliveNoStripes.paa"};
            };
            class OliveStar: dark_od
            {
                displayName = "OD - Markings";
                textures[] = {"FA_WW2_Tanks\m26\textures\camo1_noStripes_co.paa"};
            };
            class Tan: dark_od
            {
                displayName = "Light OD";
                textures[] = {"Pershing\data\Tan\lambert2SG_CO.paa"};
            };
            class Winter: dark_od
            {
                displayName = "Winter";
                textures[] = {"Pershing\data\Winter\lambert2SG_CO.paa"};
            };
        };
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
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
        class HitPoints: HitPoints
        {
            class HitHull: HitHull
            {
                armor = 25;
                material = -1;
                name = "hull";
                visual = "hull";
                passThrough = 1;
                minimalHit = 0.15;
                explosionShielding = 0.2;
                radius = 0.25;
                class DestructionEffects
                {
                    ammoExplosionEffect = "";
                    class SPE_Engine_Smoke
                    {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_smoke";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                    };
                    class SPE_Engine_Fire: SPE_Engine_Smoke
                    {
                        type = "SmallFireFPlace";
                    };
                    class SPE_Engine_Sparks: SPE_Engine_Smoke
                    {
                        type = "FireSparks";
                    };
                    class SPE_Engine_Sounds: SPE_Engine_Smoke
                    {
                        simulation = "sound";
                        type = "Fire";
                    };
                };
            };
            class HitEngine: HitEngine
            {
                armor = 0.6;
                material = -1;
                armorComponent = "engine";
                name = "engine";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.2;
                radius = 0.25;
            };
            class HitFuel: HitFuel
            {
                armor = 2;
                material = -1;
                armorComponent = "palivo";
                name = "palivo";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.2;
                radius = 0.25;
            };
            class HitLTrack: HitLTrack
            {
                armor = 5;
                material = -1;
                armorComponent = "pas_L";
                name = "pas_L";
                visual = "pas_L";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.3;
                radius = 0.25;
            };
            class HitRTrack: HitRTrack
            {
                armor = 5;
                material = -1;
                armorComponent = "pas_P";
                name = "pas_P";
                visual = "pas_P";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.3;
                radius = 0.25;
            };
        };
        enableManualFire = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        soundAttenuationTurret = "TankAttenuation";
                        class OpticsIn
                        {
                            class Near
                            {
                                opticsDisplayName = "$STR_OpticsIn_Near_2_5x";
                                useModelOptics = 1;
                                gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
                                gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.3;
                                minFov = 0.3;
                                maxFov = 0.3;
                                memoryPointGunnerOptics = "commanderview";
                                visionMode[] = {"Normal"};
                                opticsFlare = 1;
                                opticsDisablePeripherialVision = 1;
                                cameraDir = "";
                            };
                        };
                    };
                };
                soundAttenuationTurret = "TankAttenuation";
                weapons[] = {"SiP_M3A1_90mm","SiP_m1919a4_coax_weapon2"};
                magazines[] = 
                {
                    "SiP_40x_M77_AP",
                    "SiP_20x_M71_HE",
                    "SiP_10x_M82_APCR",
                    "SiP_10x_M82_APCR",

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
                turretInfoType = "SiP_M26_RscOptics_gunner";
                class OpticsIn
                {
                    class Periscope
                    {
                        initAngleX = 0;
                        minAngleX = 0;
                        maxAngleX = 0;
                        initAngleY = 0;
                        minAngleY = 0;
                        maxAngleY = 0;
                        initFov = 0.25;
                        minFov = 0.25;
                        maxFov = 0.25;
                        directionStabilized = 0;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {0};
                        gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
                        gunnerOpticsEffect[] = {};
                    };
                    
                    class Sight2: Periscope
                    {
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        gunnerOpticsModel = "vn\armor_f_vietnam_04\m48\vn_armor_m48_gunner_optic2.p3d";
                    };
                    class Sight8: Sight2
                    {
                        initFov = 0.0313;
                        minFov = 0.0313;
                        maxFov = 0.0313;
                        gunnerOpticsModel = "vn\armor_f_vietnam_04\m48\vn_armor_m48_gunner_optic8.p3d";
                    };
                };
                class HitPoints
                {
                    class HitTurret
                    {
                        armor = 10;
                        material = -1;
                        name = "vez";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.02;
                        explosionShielding = 0.3;
                        radius = 0.25;
                    };
                    class HitGun
                    {
                        armor = 10;
                        material = -1;
                        name = "zbran";
                        visual = "";
                        passThrough = 0;
                        minimalHit = 0;
                        explosionShielding = 1;
                        radius = 0.25;
                    };
                };
            };
            class HullTurret: HullTurret
            {
                soundAttenuationTurret = "TankAttenuation";
                gunnerName = "Bow Gunner";
                weapons[] = {"SiP_m1919a4_bow_weapon2"};
                magazines[] = 
                {	
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
                gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_M19A1_Sight.p3d";
            };
        };
        class AnimationSources: AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "SiP_M3A1_90mm";
            };
            class muzzle_rot1
            {
                source = "ammorandom";
                weapon = "SiP_m1919a4_coax_weapon2";
            };
            class muzzle_rot2
            {
                source = "ammorandom";
                weapon = "SiP_m1919a4_bow_weapon2";
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = "SiP_M3A1_90mm";
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
        class Sounds
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
                "SPE_tank_Ext_rain_light_soundSet",
                "SPE_tank_Ext_rain_hard_soundSet",
                "SPE_tank_m4a3_ext_rumble_soundSet",
                "SPE_tank_m4a3_ext_acceleration_soundSet",
                "SPE_tank_ext_internalFire_soundSet",
                "vn_tank_treads_pavn_distance_soundset",
                "vn_m48_track_left_slow_soundset",
                "vn_m48_track_left_fast_soundset",
                "vn_m48_track_right_slow_soundset",
                "vn_m48_track_right_fast_soundset",
                "Tank_General_Collision_SoundSet"
            };
            soundSetsInt[] = 
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
                "SPE_tank_int_internalFire_soundSet",
                "SPE_int_breakingStrain_soundSet",
                "SPE_tankRattling_1_soundSet",
                "SPE_int_vehicleStrainTankHeavy_soundSet",
                "SPE_curveStress_1_soundShader",
                "SPE_tank_Int_rain_light_soundSet",
                "SPE_tank_Int_rain_hard_soundSet",
                "Tank_General_Collision_Int_SoundSet",
                "vn_m48_int_track_slow_soundset",
                "vn_m48_int_track_fast_soundset",
            };
        };
    };

    class SiP_m26_pershing: SiP_m26_pershing_base
    {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_tank_driver";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Army_tank_gunner";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Army_tank_commander";
                    };
                };
            };
            class HullTurret: HullTurret
            {
                gunnerType = "SiP_US_Army_tank_bow";
            };
        };
    };

    class SiP_m26_pershing_marines: SiP_m26_pershing
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
                };
            };
            class HullTurret: HullTurret
            {
                gunnerType = "SiP_US_Marines_tank_bow";
            };
        };
    };
};

class Extended_init_EventHandlers
{
    class SiP_m26_pershing
    {
        class SiP_m26_pershing_init
        {
            init = "[_this select 0] execVM 'SiP\Addons\sip_un_vehicles\tanks\functions\tankcargo.sqf';";
        };
    };
};

class cfgsoundsets
{
    class vn_basic_weapon_heavy_shot_soundset;

    class SiP_M3A1_90mm_shot_soundset: vn_basic_weapon_heavy_shot_soundset
    {
        soundShaders[] = 
        {
            "vn_cannon_85mm_internal_shot_soundshader",
            "SPE_int_cannon_large_shot_fp_SoundShader",
            "SPE_int_cannon_large_shot_close_SoundShader",
            "SPE_int_cannon_large_shot_mid_SoundShader",
            "SPE_int_cannon_large_shot_far_SoundShader"
        };
    };
};

class cfgWeapons
{
    class SPE_TankCannon_base;
    class SPE_KwK36_L56_base: SPE_TankCannon_base
    {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_m1919a4_coax_weapon;
    class SiP_m1919a4_bow_weapon;

    class SiP_m1919a4_coax_weapon2: SiP_m1919a4_coax_weapon
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "MachineGun1";
                positionName = "usti hlavne1";
                directionName = "konec hlavne1";
            };
        };
    };
    class SiP_m1919a4_bow_weapon2: SiP_m1919a4_bow_weapon
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "MachineGun1";
                positionName = "usti hlavne2";
                directionName = "konec hlavne2";
            };
        };
    };

    class SiP_M3A1_90mm_base: SPE_KwK36_L56_base
    {
        displayName = "90mm M3A1";
        magazines[] = 
        {
            "SiP_40x_M77_AP",
            "SiP_10x_M82_APCR",
            "SiP_20x_M71_HE"
        };
        magazineWell[] = {};
        class player: player
        {
            displayName = "90mm Gun M3A1";
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class close: close
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class short: short
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class medium: medium
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class far: far
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "CannonFired75";
                positionName = "usti hlavne";
                directionName = "konec hlavne1";
            };
        };
    };
    class SiP_M3A1_90mm_HE_AI: SiP_M3A1_90mm_base
    {
        magazines[] = {"SiP_20x_M71_HE"};
        magazineWell[] = {};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_M3A1_90mm_APCR_AI: SiP_M3A1_90mm_base
    {
        magazines[] = {"SiP_10x_M82_APCR"};
        magazineWell[] = {};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_M3A1_90mm: SiP_M3A1_90mm_base
    {
        muzzles[] = {"MODE_PLAYER_ALL","MODE_AI_APCR","MODE_AI_HE"};
        class MODE_AI_HE: SiP_M3A1_90mm_HE_AI{};
        class MODE_AI_APCR: SiP_M3A1_90mm_APCR_AI{};
        class MODE_PLAYER_ALL: SiP_M3A1_90mm_base{};
    };
};

class cfgMagazines
{
    class vn_m41_v_4_apc_mag;
    class vn_m41_v_4_hvap_mag;
    class vn_m41_v_18_he_mag;

    class SiP_40x_M77_AP: vn_m41_v_4_apc_mag
    {
        displayName = "M77 90mm AP";
        displaynameshort = "M77 AP";
        count = 40;
        muzzleImpulseFactor[]={1.5,15};
    };

    class SiP_10x_M82_APCR: vn_m41_v_4_hvap_mag
    {
        displayName = "M304 Shell APCR";
        displaynameshort = "M82 APCR";
        count = 10;
        muzzleImpulseFactor[]={1.5,11.81};
    };

    class SiP_20x_M71_HE: vn_m41_v_18_he_mag
    {
        displayName = "M71 Shell HE";
        displaynameshort = "M71 HE";
        count = 20;
        muzzleImpulseFactor[]={1.5,23.75};
    };
};