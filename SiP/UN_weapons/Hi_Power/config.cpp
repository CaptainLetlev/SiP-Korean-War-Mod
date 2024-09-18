class cfgPatches
{
    class SiP_Patch_High_Power
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
            "sounds_f_vietnam_c",
            "sounds_f_vietnam_02_c",
            "sounds_f_vietnam_03_c",
            "sounds_f_vietnam_04_c",
            "vn_weapons",
            "fow_sounds"
        };
        units[] = {};
        weapons[] = {};
        magazines[] = {};
    };

};
class cfgWeapons
{
    class vn_pistol;
    class vn_m1911: vn_pistol
	{
        class Single;
    };

    class vn_hp: vn_m1911
	{
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"FoW_M1911_Firing","FoW_SMG_EFX","FoW_Interior_Reverb_45ACP"};
            };
        };
    };
};