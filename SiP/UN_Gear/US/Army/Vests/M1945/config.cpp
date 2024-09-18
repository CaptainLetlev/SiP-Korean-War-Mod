class cfgPatches
{
    class SiP_Patch_M45_vests
    {
        addonRootClass = "SiP_UN_Gear_Patch";
        requiredAddons[] = 
        {
            "A3_Characters_F",
            "simc_mc_67_assets",
            
            "WW2_SPE_Assets_c_Characters_Americans_c_US_Army_Gear",
            "WW2_SPE_Assets_c_Characters_Americans_U1_c_US_Army_Gear",

            "WW2_Fixes_SPE_Patch_US_Army_Vests_M1923_Cartridge_Belt",
            "WW2_Fixes_SPE_Patch_US_Army_Vests_M1936_Pistol_Belt",
            "WW2_Fixes_SPE_Patch_US_Army_Vests_M1937_BAR_Belt"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m1945_Vest",
            "SiP_m1945_Vest_gpbag",
            "SiP_m1945_Vest_etool",
            "SiP_m1945_Vest_etool_gpbag",
            "SiP_m1945_Vest_jfak",
            "SiP_m1945_Vest_45",
            "SiP_m1945_Vest_gpbag_45",

            "SiP_m1945_Vest_rifleman1_bayo",
            "SiP_m1945_Vest_rifleman1_gpbag",
            "SiP_m1945_Vest_rifleman1_jfak",
            "SiP_m1945_Vest_rifleman1_engi",
            "SiP_m1945_Vest_rifleman1_engi_etool",
            "SiP_m1945_Vest_rifleman1_45",

            "SiP_m1944_Vest_rifleman2",
            "SiP_m1944_Vest_rifleman2_gpbag",
            "SiP_m1944_Vest_rifleman2_etool",
            "SiP_m1944_Vest_rifleman2_jfak",
            "SiP_m1944_Vest_rifleman2_engi",
            "SiP_m1944_Vest_rifleman2_45",
            "SiP_m1944_Vest_rifleman2_45_etool",
            "SiP_m1944_Vest_rifleman2_45_mapcase",
            "SiP_m1944_Vest_rifleman2_45_mapcase_nosus",
            "SiP_m1945_Vest_rifleman2",
            "SiP_m1945_Vest_rifleman2_etool",
            "SiP_m1945_Vest_rifleman2_45",

            "SiP_m1945_Vest_smg",
            "SiP_m1945_Vest_smg_gpbag",
            "SiP_m1945_Vest_smg_etool",
            "SiP_m1945_Vest_smg_gpbag_etool",
            "SiP_m1945_Vest_smg_jfak",
            "SiP_m1945_Vest_smg_45",
            "SiP_m1945_Vest_smg_45_nosus",
            "SiP_m1945_Vest_smg_45_mapcase",
            "SiP_m1945_Vest_smg_45_mapcase_nosus",

            "SiP_m1945_Vest_BAR",
            "SiP_m1945_Vest_BAR_gpbag",
            "SiP_m1945_Vest_BAR_etool",
            "SiP_m1945_Vest_BAR_jfak",

            "SiP_m1945_Vest_MG",

            "SiP_m1945_Vest_shotgun"
        };
    };
};

class cfgWeapons
{
    class V_SPE_Vest_Camo_Base;
    class VestItem;

    class V_SPE_US_Vest_Medic3;
    class V_SPE_US_Vest_AB_Garand_medic;
    class V_SPE_US_Vest_AB_late_1;

    class V_SPE_US_Vest_OD7_Garand;
    class V_SPE_US_Vest_OD7_Garand_M43_gp: V_SPE_Vest_Camo_Base
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_Garand_M43;
    class V_SPE_US_Vest_OD7_Garand_gp: V_SPE_Vest_Camo_Base
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_Garand_mk2;
    class V_SPE_US_Vest_OD7_Garand_eng;
    class V_SPE_US_Vest_OD7_Garand_45;
    class V_SPE_US_Vest_OD7_Grenadier: V_SPE_Vest_Camo_Base
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_Garand_map;

    class V_SPE_US_Vest_OD7_Garand_jfak;
    class V_SPE_US_Vest_OD7_Garand_jfak_M43;
    class V_SPE_US_Vest_OD7_Garand_jfak_gp: V_SPE_US_Vest_OD7_Garand_gp
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_Garand_jfak_knife;
    class V_SPE_US_Vest_OD7_Garand_jfak_eng;
    class V_SPE_US_Vest_OD7_Garand_jfak_45;
    
    //Carbine
    class V_SPE_US_Vest_OD7_Carbine;
    class V_SPE_US_Vest_OD7_Carbine_eng;
    class V_SPE_US_Vest_OD7_Carbine_pick;
    class V_SPE_US_Vest_OD7_Carbine_mk2;
    class V_SPE_US_Vest_OD7_Carbine_m43;
    class V_SPE_US_Vest_OD7_Asst_MG: V_SPE_Vest_Camo_Base
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_Carbine_nco;
    class V_SPE_US_Vest_OD7_Carbine_nco_Radio;
    
    class V_SPE_US_Vest_OD7_Carbine_jfak;
    class V_SPE_US_Vest_OD7_Carbine_jfak_eng;
    class V_SPE_US_Vest_OD7_Asst_MG_jfak: V_SPE_US_Vest_OD7_Asst_MG
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_Carbine_jfak_mk2;
    class V_SPE_US_Vest_OD7_Carbine_jfak_m43;
    class V_SPE_US_Vest_OD7_Carbine_jfak_nco;

    //SMG
    class V_SPE_US_Vest_OD7_Thompson;
    class V_SPE_US_Vest_OD7_Thompson_M43;
    class V_SPE_US_Vest_OD7_Thompson_nco;
    class V_SPE_US_Vest_OD7_Thompson_nco_Radio;
    class V_SPE_US_Vest_AB_late_thompson_45: V_SPE_US_Vest_AB_late_1
	{
        class ItemInfo;
    };

    class V_SPE_US_Vest_OD7_Thompson_jfak;
    class V_SPE_US_Vest_OD7_Thompson_jfak_M43;

    //BAR
    class V_SPE_US_Vest_OD7_Bar;
    class V_SPE_US_Vest_OD7_Bar_assist: V_SPE_US_Vest_OD7_Bar
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_Bar_M43;
    class V_SPE_US_Vest_OD7_Bar_jfak;
    class V_SPE_US_Vest_OD7_Bar_jfak_assist: V_SPE_US_Vest_OD7_Bar_assist
    {
        class ItemInfo;
    };

    //Pistol
    class V_SPE_US_Vest_OD7_45;
    class V_SPE_US_Vest_OD7_M1919: V_SPE_Vest_Camo_Base
    {
        class ItemInfo;
    };
    class V_SPE_US_Vest_OD7_45_off;
    class V_SPE_US_Vest_OD7_45_high;
    class V_SPE_US_Vest_OD7_45_high_off;

    class V_SPE_US_Vest_OD7_45_jfak;
    class V_SPE_US_Vest_OD7_45_jfak_off;
    class V_SPE_US_Vest_OD7_45_jfak_off_m43: V_SPE_US_Vest_OD7_45_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "jfak_chest";
        };
    };
    class V_SPE_US_Vest_OD7_M1919_jfak: V_SPE_US_Vest_OD7_M1919
    {
        class ItemInfo;
    };
    
    class V_Simc_US_Vest_Cartridge_45_OD7;
    class V_Simc_US_Vest_SMG_offzr_OD7;
    class V_Simc_US_Vest_SMG_45_OD7;
    class V_Simc_US_Vest_basic_45_garp_od7;
    class V_Simc_US_Vest_bar_OD7_asst;
    class V_Simc_61_rear;
    class V_Simc_US_Vest_basic_45_OD7;
    class V_Simc_56_ligt;
    class V_Simc_56_60_doppel_ligt;
    

    //Garand-Springfield
    class SiP_US_Vest_OD7_Garand: V_SPE_US_Vest_OD7_Garand
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "standard";
        };
    };
    class SiP_US_Vest_OD7_Garand_M43_gp: V_SPE_US_Vest_OD7_Garand_M43_gp
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "gpbag_etool";
        };
    };
    class SiP_US_Vest_OD7_Garand_M43: V_SPE_US_Vest_OD7_Garand_M43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "etool";
        };
    };
    class SiP_US_Vest_OD7_Garand_gp: V_SPE_US_Vest_OD7_Garand_gp
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "gpbag";
        };
    };
    class SiP_US_Vest_OD7_Garand_mk2: V_SPE_US_Vest_OD7_Garand_mk2
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "grenades";
        };
    };
    class SiP_US_Vest_OD7_Garand_eng: V_SPE_US_Vest_OD7_Garand_eng
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "engi";
        };
    };
    class SiP_US_Vest_OD7_Garand_45: V_SPE_US_Vest_OD7_Garand_45
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "sidearm";
        };
    };
    class SiP_US_Vest_OD7_Grenadier: V_SPE_US_Vest_OD7_Grenadier
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "spare_mag";
        };
    };
    class SiP_US_Vest_OD7_Garand_map: V_SPE_US_Vest_OD7_Garand_map
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "map";
        };
    };
    
    class SiP_m1923_cartridge_Vest_medic: V_SPE_US_Vest_Medic3
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_medic_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "medic";
        };
    };

    class SiP_US_Vest_OD7_Garand_jfak: V_SPE_US_Vest_OD7_Garand_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "jfak";
        };
    };
    class SiP_US_Vest_OD7_Garand_jfak_M43: V_SPE_US_Vest_OD7_Garand_jfak_M43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "jfak_etool";
        };
    };
    class SiP_US_Vest_OD7_Garand_jfak_gp: V_SPE_US_Vest_OD7_Garand_jfak_gp
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "jfak_gpbag";
        };
    };
    class SiP_US_Vest_OD7_Garand_jfak_knife: V_SPE_US_Vest_OD7_Garand_jfak_knife
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "jfak_bayo";
        };
    };
    class SiP_US_Vest_OD7_Garand_jfak_eng: V_SPE_US_Vest_OD7_Garand_jfak_eng
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "jfak_engi";
        };
    };
    class SiP_US_Vest_OD7_Garand_jfak_45: V_SPE_US_Vest_OD7_Garand_jfak_45
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1923_Catridge_Belt";
            shade = "od";
            variant = "jfak_nco";
        };
    };
    
    //Carbine
    class SiP_US_Vest_OD7_Carbine: V_SPE_US_Vest_OD7_Carbine
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "standard";
        };
    };
    class SiP_US_Vest_OD7_Carbine_eng: V_SPE_US_Vest_OD7_Carbine_eng
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "engi";
        };
    };
    class SiP_US_Vest_OD7_Carbine_pick: V_SPE_US_Vest_OD7_Carbine_pick
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "pickaxe";
        };
    };
    class SiP_US_Vest_OD7_Carbine_mk2: V_SPE_US_Vest_OD7_Carbine_mk2
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "grenades";
        };
    };
    class SiP_US_Vest_OD7_Carbine_m43: V_SPE_US_Vest_OD7_Carbine_m43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "etool";
        };
    };
    class SiP_US_Vest_OD7_Asst_MG: V_SPE_US_Vest_OD7_Asst_MG
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "gpbag";
        };
    };
    class SiP_US_Vest_OD7_Carbine_nco: V_SPE_US_Vest_OD7_Carbine_nco
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "nco";
        };
    };
    class SiP_US_Vest_OD7_Carbine_nco_Radio: V_SPE_US_Vest_OD7_Carbine_nco_Radio
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "nco_radio";
        };
    };
    
    class SiP_US_Vest_OD7_Carbine_jfak: V_SPE_US_Vest_OD7_Carbine_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "jfak";
        };
    };
    class SiP_US_Vest_OD7_Carbine_jfak_eng: V_SPE_US_Vest_OD7_Carbine_jfak_eng
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "jfak_engi";
        };
    };
    class SiP_US_Vest_OD7_Asst_MG_jfak: V_SPE_US_Vest_OD7_Asst_MG_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "jfak_gpbag";
        };
    };
    class SiP_US_Vest_OD7_Carbine_jfak_mk2: V_SPE_US_Vest_OD7_Carbine_jfak_mk2
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "jfak_grenades";
        };
    };
    class SiP_US_Vest_OD7_Carbine_jfak_m43: V_SPE_US_Vest_OD7_Carbine_jfak_m43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "jfak_etool";
        };
    };
    class SiP_US_Vest_OD7_Carbine_jfak_nco: V_SPE_US_Vest_OD7_Carbine_jfak_nco
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Carbine_Belt";
            shade = "od";
            variant = "jfak_nco";
        };
    };

    //SMG
    class SiP_US_Vest_OD7_Thompson: V_SPE_US_Vest_OD7_Thompson
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "standard";
        };
    };
    class SiP_US_Vest_OD7_Thompson_M43: V_SPE_US_Vest_OD7_Thompson_M43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "etool";
        };
    };
    class SiP_US_Vest_OD7_Thompson_nco: V_SPE_US_Vest_OD7_Thompson_nco
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "nco";
        };
    };
    class SiP_US_Vest_OD7_Thompson_nco_Radio: V_SPE_US_Vest_OD7_Thompson_nco_Radio
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "nco_radio";
        };
    };
    
    class SiP_US_Vest_Thompson_nco_sidearm: V_SPE_US_Vest_AB_late_thompson_45
    {
        scope = 2;
        scopearsenal = 2;
        Displayname = "US Officer Web Gear, M1936 (SMG/Sidearm)";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo4",
            "padoru"
        };
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\spe_us_pouches_od3_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_co.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[]=
			{
				"camo",
				"camo2",
                "camo4",
				"padoru"
			};
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "khaki";
            variant = "nco_sidearm";
        };
    };
    class SiP_US_Vest_trans_Thompson_nco_sidearm: SiP_US_Vest_Thompson_nco_sidearm
    {
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\spe_us_pouches_od7_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_co.paa",
			""
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "transition";
            variant = "nco_sidearm";
        };
    };
    class SiP_US_Vest_OD7_Thompson_nco_sidearm: SiP_US_Vest_Thompson_nco_sidearm
    {
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa",
			""
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "nco_sidearm";
        };
    };

    class SiP_US_Vest_Thompson_nco_sparemag: SiP_US_Vest_Thompson_nco_sidearm
    {
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od3_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\spe_us_pouches_od3_co.paa",
            "",
			""
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "transition";
            variant = "nco_sparemag";
        };
    };
    class SiP_US_Vest_trans_Thompson_nco_sparemag: SiP_US_Vest_Thompson_nco_sidearm
    {
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\spe_us_pouches_od7_co.paa",
            "",
			""
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "transition";
            variant = "nco_sparemag";
        };
    };
    class SiP_US_Vest_OD7_Thompson_nco_sparemag: SiP_US_Vest_Thompson_nco_sidearm
    {
        hiddenSelectionsTextures[]=
		{
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
			"\\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "",
			""
		};
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "nco_sparemag";
        };
    };

    class SiP_US_Vest_OD7_Thompson_jfak: V_SPE_US_Vest_OD7_Thompson_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "jfak";
        };
    };
    class SiP_US_Vest_OD7_Thompson_jfak_M43: V_SPE_US_Vest_OD7_Thompson_jfak_M43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt";
            shade = "od";
            variant = "jfak_etool";
        };
    };

    //BAR
    class SiP_US_Vest_OD7_Bar: V_SPE_US_Vest_OD7_Bar
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1937_BAR_Belt";
            shade = "od";
            variant = "standard";
        };
    };
    class SiP_US_Vest_OD7_Bar_assist: V_SPE_US_Vest_OD7_Bar_assist
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1937_BAR_Belt";
            shade = "od";
            variant = "gpbag";
        };
    };
    class SiP_US_Vest_OD7_Bar_M43: V_SPE_US_Vest_OD7_Bar_M43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1937_BAR_Belt";
            shade = "od";
            variant = "etool";
        };
    };
    class SiP_US_Vest_OD7_Bar_jfak: V_SPE_US_Vest_OD7_Bar_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1937_BAR_Belt";
            shade = "od";
            variant = "jfak";
        };
    };
    class SiP_US_Vest_OD7_Bar_jfak_assist: V_SPE_US_Vest_OD7_Bar_jfak_assist
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1937_BAR_Belt";
            shade = "od";
            variant = "jfak_gpbag";
        };
    };

    //Pistol
    class SiP_US_Vest_OD7_45: V_SPE_US_Vest_OD7_45
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "sidearm";
        };
    };
    class SiP_US_Vest_OD7_M1919: V_SPE_US_Vest_OD7_M1919
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "gpbag";
        };
    };
    class SiP_US_Vest_OD7_45_off: V_SPE_US_Vest_OD7_45_off
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "sidearm_officer";
        };
    };
    class SiP_US_Vest_OD7_45_high: V_SPE_US_Vest_OD7_45_high
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "chest";
        };
    };
    class SiP_US_Vest_OD7_45_high_off: V_SPE_US_Vest_OD7_45_high_off
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "chest_officer";
        };
    };

    class SiP_US_Vest_OD7_45_jfak: V_SPE_US_Vest_OD7_45_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "jfak";
        };
    };
    class SiP_US_Vest_OD7_45_jfak_off: V_SPE_US_Vest_OD7_45_jfak_off
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "jfak_officer";
        };
    };
    class SiP_US_Vest_OD7_45_jfak_off_m43: V_SPE_US_Vest_OD7_45_jfak_off_m43
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M36_Suspenders_od7_co.paa"
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "jfak_chest";
        };
    };
    class SiP_US_Vest_OD7_M1919_jfak: V_SPE_US_Vest_OD7_M1919_jfak
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_belt_od7_co.paa",
            "\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo1"
            };
        };
        class XtdGearInfo
        {
            model = "WW2_Fixes_SPE_ACEX_US_M1936_Pistol_Belt";
            shade = "od";
            variant = "jfak_gpbag";
        };
    };

    class SiP_m1945_Vest_MG: V_Simc_56_60_doppel_ligt
    {
        displayName = "[US] M1945 MG Gear";
        hiddenSelections[] = {"botol","zusp"};
        hiddenSelectionsTextures[] = {"",""};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_67\belt_56_60.p3d";
            hiddenSelections[] = {"botol","zusp"};
            containerClass = "Supply180";
            mass = 15;
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {
        ////M1936 Pistol Belt - SMG////
        class WW2_Fixes_SPE_ACEX_US_M1936_SMG_Belt
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "shade",
                "variant"
            };
            class shade
            {
                label = "Shade";
                values[]=
                {
                    "khaki",
                    "transition",
                    "od"
                };
                class khaki
                {
                    label = "Khaki";
                };
                class transition
                {
                    label = "Trans";
                };
                class od
                {
                    label = "OD";
                };
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "standard",
                    "etool",
                    "jfak",
                    "jfak_etool",
                    "nco",
                    "nco_radio",
                    "nco_sidearm",
                    "nco_sparemag"
                };
                class standard
                {
                    label = "Standard";
                };
                class etool
                {
                    label = "E-Tool";
                };
                class jfak
                {
                    label = "JFAK";
                };
                class jfak_etool
                {
                    label = "JFAK/E-Tool";
                };
                class nco
                {
                    label = "NCO";
                };
                class nco_sidearm
                {
                    label = "NCO/Sidearm";
                };
                class nco_radio
                {
                    label = "NCO Radio";
                };
                class nco_sparemag
                {
                    label = "Spare Mag";
                };
            };
        };
    };
};