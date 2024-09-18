class cfgPatches
{
    class SiP_Patch_un_statics_antitank_un_m1_57mm
    {
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_c_Vehicles_StaticWeapons_c_57mm_M1"
        };
        units[] = 
        {
            "SiP_57mm_M1_US_Army",

            "SiP_m20_recoilless_US_Army",
            "SiP_m20_recoilless_marines"
        };
        weapons[] = {};
        magazines[] = {};
    };
};

class cfgVehicles
{
    class StaticCannon;
    class SPE_StaticCannon_base: StaticCannon
    {
        class Turrets;
    };

    class SPE_57mm_M1_base: SPE_StaticCannon_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CommanderOptics;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
        class AnimationSources;
    };


    class SiP_57mm_M1_base: SPE_57mm_M1_base
    {
        scope = 1;
        scopecurator = 1;
        author = "Letlev";
        displayName = "M1 57mm Gun";
        editorSubcategory = "SiP_Antitank_Editor_Subcategory";
        vehicleClass = "SiP_Antitank_vehicle_class";
        side = 1;
    };

    class SiP_57mm_M1_US_Army: SiP_57mm_M1_base
    {
        scope = 2;
        scopecurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
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
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerType = "SiP_US_Army_gunner";
			};
			class CargoTurret_03: CargoTurret_03{};
        };
    };
    class SiP_57mm_M1_ROK: SiP_57mm_M1_US_Army
    {
        faction = "SiP_ROK_Army";
        editorCategory = "SiP_ROK_Army_Editor_Category";
        crew = "SiP_ROK_Army_gunner";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_ROK_Army_gunner";
            };
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
			class CargoTurret_03: CargoTurret_03
            {
                gunnerType = "SiP_ROK_Army_gunner";
            };
        };
    };
    // class SiP_m20_recoilless_marines: SiP_57mm_M1_US_Army
    // {
    //     faction = "SiP_US_Marines";
    //     editorCategory = "SiP_US_Marines_Editor_Category";
    //     crew = "SiP_US_Marines_gunner";
    //     typicalCargo[] = {"SiP_US_Marines_gunner"};
    // };
};