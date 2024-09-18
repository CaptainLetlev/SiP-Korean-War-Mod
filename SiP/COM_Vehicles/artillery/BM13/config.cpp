class cfgPatches
{
    class SiP_Patch_BM13
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "WW2_Assets_c_Vehicles_Wheeled_c_US6",
            "WW2_Assets_c_Vehicles_Weapons_c"
        };
        units[] = 
        {
            "SiP_BM13_US6",
            "SiP_KPA_BM13_US6"
        };
        weapons[] = 
        {
            "SiP_BM13_weapon"
        };
    };
};

class cfgWeapons
{
    class RocketPods;
    class LIB_BM13: RocketPods
    {
        class Burst1;
        class Burst2;
        class Burst3;
    };
    class SiP_BM13_weapon: LIB_BM13
    {
        displayName = "BM-13-16 132mm Launcher";
        magazineReloadTime = 5;
        magazines[] = {"SiP_BM13_16rnd_Rocket_Mag"};
        modes[] = {"Firemode1","Firemode2","Firemode3"};
        class Firemode1: Burst1
        {
            displayName = "$STR_LIB_DN_ASSETS_VEHICLES_CLOSE";
            autoFire = 0;
            burst = 16;
            aiBurstTerminable = 1;
            reloadTime = 0.231;
            dispersion = 0.05;
            minRange = 200;
            minRangeProbab = 0.15;
            midRange = 500;
            midRangeProbab = 0.65;
            maxRange = 800;
            maxRangeProbab = 0.05;
            artilleryDispersion = 5;
            artilleryCharge = 0.4;
        };
        class Firemode2: Firemode1
        {
            displayName = "$STR_LIB_DN_ASSETS_VEHICLES_MEDIUM";
            minRange = 1000;
            minRangeProbab = 0.15;
            midRange = 2300;
            midRangeProbab = 0.55;
            maxRange = 3000;
            maxRangeProbab = 0.05;
            artilleryDispersion = 10;
            artilleryCharge = 0.5;
        };
        class Firemode3: Firemode1
        {
            displayName = "$STR_LIB_DN_ASSETS_VEHICLES_FAR";
            minRange = 2000;
            minRangeProbab = 0.15;
            midRange = 3000;
            midRangeProbab = 0.55;
            maxRange = 4000;
            maxRangeProbab = 0.05;
            artilleryDispersion = 15;
            artilleryCharge = 0.6;
        };
    };
};

class cfgVehicles
{
    class Truck_F;
    class LIB_Truck_base: Truck_F
    {
        class Turrets;
    };
    class LIB_US6_base: LIB_Truck_base
    {
        class AnimationSources;
    };
    class LIB_US6_BM13: LIB_US6_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources: AnimationSources
        {
            class Revolving;
            class reloadAnim;
        };
    };

    class SiP_BM13_US6: LIB_US6_BM13
    {
        author = "Letlev";
        displayname = "BM-13 Rocket Launcher";
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        crew = "SiP_PVA_driver";
        typicalCargo[] = {"SiP_PVA_driver","SiP_PVA_gunner","SiP_PVA_gunner"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_PVA_gunner";
                minElev = 0;
                initElev = 11.5;
                maxElev = 87.5;
                weapons[] = {"SiP_BM13_weapon"};
                magazines[] = 
                {
                    "SiP_BM13_16rnd_Rocket_Mag",
                    "SiP_BM13_16rnd_Rocket_Mag",
                    "SiP_BM13_16rnd_Rocket_Mag",
                    "SiP_BM13_16rnd_Rocket_Mag"
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class Revolving: Revolving
            {
                weapon = "SiP_BM13_weapon";
            };
            class reloadAnim: reloadAnim
            {
                weapon = "SiP_BM13_weapon";
            };
        };
    };
    
    class SiP_KPA_BM13_US6: SiP_BM13_US6
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        crew = "SiP_KPA_Driver";
        typicalCargo[] = {"SiP_PVA_driver","SiP_PVA_gunner","SiP_PVA_gunner"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_KPA_gunner";
            };
        };
    };
};

class cfgMagazines
{
    class LIB_16Rnd_BM13;

    class SiP_BM13_16rnd_Rocket_Mag: LIB_16Rnd_BM13
    {
        displayName = "16x 132mm M-13 Rockets";
        ammo = "SiP_BM13_M13_Rocket_Ammo";
    };
};

class CfgAmmo
{
    class LIB_R_BM13_A3;

    class LIB_R_BM13_fly;

    class SiP_BM13_M13_Rocket_Ammo: LIB_R_BM13_A3
	{
        effectFly = "Missile0";
        submunitionAmmo = "SiP_BM13_M13_Rocket_SubAmmo";
        SoundSetExplosion[] = {"SPE_explo_tankShellHE_SoundSet","SPE_exploTail_midImpact_SoundSet","SPE_explo_debris_mid_SoundSet"};
    };
    class SiP_BM13_M13_Rocket_SubAmmo: LIB_R_BM13_fly
	{
        effectFly = "ArtilleryTrails";
        SoundSetExplosion[] = {"SPE_explo_tankShellHE_SoundSet","SPE_exploTail_midImpact_SoundSet","SPE_explo_debris_mid_SoundSet"};
    };
};