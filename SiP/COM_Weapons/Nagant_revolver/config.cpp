class cfgPatches
{
    class SiP_Patch_nagant_revolver
    {
        addonRootClass = "SiP_Patch_Communist_weapons";
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
            "vn_weapons"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
    class vn_pistol;
    class vn_mk22: vn_pistol
	{
        class Single;
    };

    class vn_m1895: vn_mk22
    {
        displayName = "Nagant M1895 Revolver";
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class standardsound
            {
                soundsetshot[] = {"FoW_Webley_Firing","vn_9mm_pistol_tails_soundset","vn_revolver_trigger_reset_soundset"};
            };
        };
    };
};