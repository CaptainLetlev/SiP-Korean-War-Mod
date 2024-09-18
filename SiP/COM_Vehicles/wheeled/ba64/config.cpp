class cfgPatches
{
    class SiP_Patch_ba_64
    {
        addonRootClass = "SiP_Patch_Communist_vehicles";
        requiredAddons[] = 
        {
            "FA_WW2_Armored_Cars"
        };
        units[] = 
        {
            "SiP_ba64"
        };
        weapons[] = 
        {
            "SiP_dt29_ba64"
        };
    };
};

class cfgWeapons
{
    class SiP_dt29_coax;

    class SiP_dt29_ba64: SiP_dt29_coax
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "MachineGun1";
                positionName = "usti hlavne";
                directionName = "konec hlavne";
            };
        };
    };
};

class cfgVehicles
{
    class Car_F;
    class FA_BA64_Base: Car_F
    {
        class Turrets;
    };
    class FA_BA64: FA_BA64_Base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };

    class SiP_ba64: FA_BA64
    {
        author = "Letlev";
        displayname = "BA-64";
        scope = 2;
        side = 0;
        faction = "SiP_PVA";
        editorSubcategory = "SiP_Armored_Cars_Editor_Subcategory";
        vehicleClass = "SiP_Armored_Cars_vehicle_class";
        crew = "SiP_PVA_driver";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"FA_WW2_Armored_Cars\ba64\textures\hull_clean_co.paa"};
        weapons[] = {"vn_CivCarHorn1"}; 
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_PVA_gunner";
                weapons[] = {"SiP_dt29_ba64"};
                magazines[] = {"SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag","SiP_63rnd_DT_mag"};
            };
        };
    };
};