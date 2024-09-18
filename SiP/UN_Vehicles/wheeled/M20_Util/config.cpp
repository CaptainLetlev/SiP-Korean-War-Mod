class cfgPatches
{
    class SiP_Patch_M20_Utility
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_m_Vehicles_ArmoredCar_U1_c_M20_AUC"
        };
        units[] = 
        {
            "SiP_m20_Utility"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class SPE_ArmoredCar_base;

    class SPE_M20_AUC_Base: SPE_ArmoredCar_base
    {
        class Turrets;
    };

    class SPE_M20_AUC: SPE_M20_AUC_Base
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class kurs_MG_turret;
        };
        class UserActions;
        class AnimationSources;
    };

    class SiP_m20_Utility: SPE_M20_AUC
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Light_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Army_gunner";
                weapons[]=
                {
                    "SiP_M2_m20"
                };
                magazines[]=
                {
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag",
                    "SiP_m2_v_100_mag"
                }; 
            };
            class kurs_MG_turret: kurs_MG_turret
            {
                gunnerType = "SiP_US_Army_driver";
            };
        };
        class AnimationSources: AnimationSources
        {
            class comm_mg_ammoRandom
			{
				source="ammorandom";
				weapon="SiP_M2_m20";
			};
			class comm_mg_reloadmagazine
			{
				source="reloadmagazine";
				weapon="SiP_M2_m20";
			};
			class comm_mg_reloadanim
			{
				source="reload";
				weapon="SiP_M2_m20";
			};
			class comm_mg_revolving
			{
				source="revolving";
				weapon="SiP_M2_m20";
			};
        };
        class UserActions: UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
    };
};

class cfgWeapons
{
    class SiP_M2_m5;

    class SiP_M2_m20: SiP_M2_m5
    {
        class GunParticles
        {
            class FireEffect
            {
                positionName="comm_mg_gun_end";
                directionName="comm_mg_gun_start";
                effectName="MachineGunCloud";
            };
            class EjectEffect
            {
                positionName="machinegun_eject_pos";
                directionName="machinegun_eject_dir";
                effectName="MachineGunCartridge2";
            };
            class AmmoBeltEject
            {
                effectName="MachineGunEject1";
                positionName="Nabojnicestart";
                directionName="Nabojniceend";
            };
            class RifleAmmoCloud
            {
                positionName="machinegun_eject_pos";
                directionName="machinegun_eject_dir";
                effectName="SPE_RifleAmmoCloud";
            };
        };
    };
};