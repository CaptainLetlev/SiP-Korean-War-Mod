class cfgPatches
{
    class SiP_Patch_tt33
    {
        addonRootClass = "SiP_Patch_Communist_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam","weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "sounds_f_vietnam_c",
            "sounds_f_vietnam_02_c",
            "sounds_f_vietnam_03_c",
            "sounds_f_vietnam_04_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
    class vn_pistol;
    class vn_pm: vn_pistol
	{
        class Single;
    };
    class vn_tt33: vn_pm
    {
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_TT33_Shot_soundSet","NORTH_TT33_Tail_soundSet","Makarov_InteriorTail_SoundSet"};
            };
        };
    };
};
