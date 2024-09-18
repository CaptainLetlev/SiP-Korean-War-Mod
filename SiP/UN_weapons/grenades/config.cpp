class cfgPatches
{
    class SiP_Patch_un_grenades
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
            "EAW_WeaponConfig",
            "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c"
        };
        units[] = {};
        weapons[] = {};
        magazines[] = 
        {
            "SiP_Chinese_Frag_mag"
        };
        ammo[] = 
        {
            "SiP_Chinese_Frag_ammo"
        };
    };
};

class CfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] += {"SiP_Chinese_Frag_muzzle"};

        class ThrowMuzzle: GrenadeLauncher{};
        class SPE_ThrowMuzzle: ThrowMuzzle{};
        
        class SiP_Chinese_Frag_muzzle: SPE_ThrowMuzzle
        {
            aiRateOfFire = 5;
            magazines[] = {"SiP_Chinese_Frag_mag"};
        };
    };
};

class cfgMagazines
{
    class SPE_HandGrenade_base;
    class EAW_Chinese_Grenade_Mag;

    class SiP_Chinese_Frag_mag: EAW_Chinese_Grenade_Mag
    {
        author = "Letlev";
        displayName = "Chinese Stick Grenade";
        descriptionShort = "Sino Stick";
        shortNameMagazine = "Sino Stick";
        ammo = "SiP_Chinese_Frag_ammo";
        mass = 5;
    };

    class SPE_US_Mk_2: SPE_HandGrenade_base
	{
        mass = 5;
    };
};

class cfgAmmo
{
    class EAW_Chinese_Grenade_Ammo;

    class SiP_Chinese_Frag_ammo: EAW_Chinese_Grenade_Ammo
    {
        hit = 32;
        indirectHit = 5;
        indirectHitRange = 8;
        dangerRadiusHit = 40;
        suppressionRadiusHit = 30;
        deflecting = 30;
        explosionTime = 3;
        explosionSoundEffect = "DefaultExplosion";
        explosionEffects = "vn_fx_exp_g_frag_01";
        CraterEffects = "vn_grenadecrater_01";
        CraterWaterEffects = "ImpactEffectsWaterExplosion";
        soundsetexplosion[] = 
        {
            "vn_small_frag_epl_soundset",
            "vn_epl_shock_soundset",
            "vn_small_explosion_tails_soundset",
            "vn_debris_small_soundset"
        };
        class HitEffects
        {
            hitWater = "ImpactEffectsWaterRocket";
        };
    };
};