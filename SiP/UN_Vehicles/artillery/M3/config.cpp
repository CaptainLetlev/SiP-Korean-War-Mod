class cfgPatches
{
    class SiP_Patch_un_artillery_m3
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_c_Vehicles_StaticWeapons_U1_c_105mm_M3"
        };
        units[] = 
        {
            "SiP_m101_105mm_howitzer",
            "SiP_m3_105mm_howitzer_ROK"
        };
        weapons[] = {};
        magazines[] = {};
    };
};

class Mode_SemiAuto;
class Mode_Burst;

class cfgVehicles
{
    class SPE_StaticCannon_base;
    class SPE_105mm_M3_base: SPE_StaticCannon_base
    {
        class Turrets;
    };

    class SPE_105mm_M3: SPE_105mm_M3_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CommanderOptics;
            class CargoTurret_01;
            class CargoTurret_02;
        };
        class AnimationSources;
    };

    class SiP_m3_105mm_howitzer: SPE_105mm_M3
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M3 105mm Howitzer";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner","SiP_US_Army_gunner","SiP_US_Army_gunner"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Army_gunner";
            };
            class CommanderOptics: CommanderOptics
            {
                gunnerType = "SiP_US_Army_gunner";
            };
            class CargoTurret_01: CargoTurret_01
            {
                gunnerType = "SiP_US_Army_gunner";
            };
            class CargoTurret_02: CargoTurret_02
            {
                gunnerType = "SiP_US_Army_gunner";
            };
        };
    };
    class SiP_m3_105mm_howitzer_ROK: SiP_m3_105mm_howitzer
    {
        faction = "SiP_ROK_Army";
        editorCategory = "SiP_ROK_Army_Editor_Category";
        crew = "SiP_ROK_Army_gunner";
        typicalCargo[] = {"SiP_ROK_Army_gunner","SiP_ROK_Army_gunner","SiP_ROK_Army_gunner"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class CommanderOptics: CommanderOptics
                {
                    gunnerType = "SiP_ROK_Army_gunner";
                };
                class CargoTurret_01: CargoTurret_01
                {
                    gunnerType = "SiP_ROK_Army_gunner";
                };
                class CargoTurret_02: CargoTurret_02
                {
                    gunnerType = "SiP_ROK_Army_gunner";
                };
            };
        };
    };
};