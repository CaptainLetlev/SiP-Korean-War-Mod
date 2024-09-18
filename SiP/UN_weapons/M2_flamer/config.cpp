class cfgPatches
{
    class SiP_Patch_m2_flamethrower
    {
        addonRootClass = "SiP_Patch_un_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons",
            "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c"
        };
        units[] = {};
        weapons[] = {};
        magazines[] = {};
    };
};

class Mode_FullAuto;

class cfgWeapons
{

    class SPE_RIFLE;
    class SPE_Flamethrower_base: SPE_RIFLE
    {
        class FullAuto;
    };

    class SPE_M2_Flamethrower: SPE_Flamethrower_base
    {
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.77828,1.2,1600};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"vn_m10_flamethrower_shot_soundset"};
            };
        };
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "vn_fx_flamethrower_Fire_small_Stream";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class FlameEffect
            {
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
                effectName = "SPE_Flamethrower_Burst";
            };
        };
    };
};

class cfgMagazines
{
    class SPE_Flamethrower_Mag;

    class SPE_M2_Flamethrower_Mag: SPE_Flamethrower_Mag
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Flamethrower Fuel";
        ace_arsenal_hide = -1;
        ammo = "vn_m7_ammo";
        initSpeed = 125;
    };
};