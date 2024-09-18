class cfgPatches
{
    class SiP_Patch_un_artillery_m16
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "static_f_vietnam_03_c",
            "WW2_SPE_Assets_c_Vehicles_Weapons_c"
        };
        units[] = 
        {
            "SiP_m16_honeycomb_rocket_launcher",
            "SiP_m16_honeycomb_rocket_launcher_Marines"
        };
        weapons[] = 
        {
            "SiP_M16_Rocket_Weapon"
        };
        magazines[] = 
        {
            "SiP_24Rnd_M8"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;

class cfgWeapons
{
    class SPE_T34_L60;

    class SiP_M16_Rocket_Weapon: SPE_T34_L60
    {
        magazines[]=
        {
            "SiP_24Rnd_M8"
        };
        magazineReloadTime = 30;
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "MLRSFired";
                positionName = "mg1_konec_hlavne";
                directionName = "mg1_usti_hlavne";
            };
        };
    };
};

class cfgMagazines
{
    class SPE_60Rnd_M8;

    class SiP_24Rnd_M8: SPE_60Rnd_M8
    {
        count = 24;
    };
};

class cfgVehicles
{
    class Mortar_01_base_F;

    class vn_static_h12_base: Mortar_01_base_F
    {
        class Turrets;
    };

    class vn_o_nva_static_h12: vn_static_h12_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_m16_honeycomb_rocket_launcher: vn_o_nva_static_h12
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M16 Honeycomb";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                turretInfoType = "SPE_M70f_Gunner_Artillery_Optic";
                weapons[] = {"SiP_M16_Rocket_Weapon"};
                magazines[] = 
                {
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8",
                    "SiP_24Rnd_M8"
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_revolving
            {
                source = "revolving";
                weapon = "SiP_M16_Rocket_Weapon";
            };
        };
    };
    class SiP_m16_honeycomb_rocket_launcher_Marines: SiP_m16_honeycomb_rocket_launcher
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
};