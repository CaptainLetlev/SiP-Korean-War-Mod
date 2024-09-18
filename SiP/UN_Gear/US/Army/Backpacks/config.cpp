class cfgPatches
{
    class SiP_Patch_us_backpacks
    {
        Name = "Suicide Is Painless - Korean War Mod - US Backpacks";
        addonRootClass = "SiP_UN_Gear_Patch";
        requiredAddons[] = 
        {
            "simc_uaf_44_assets",
            "simc_uaf_44_gare",
            "simc_mc_67_assets"
        };
        units[] = 
        {
            "SiP_m1945_backpack_roll",
            "SiP_m1945_backpack_roll_etool",

            "SiP_m1945_backpack_roll_etool_gren",
            "SiP_m1945_backpack_roll_etool_bar",
            "SiP_m1945_backpack_roll_etool_mg",
            "SiP_m1945_backpack_roll_etool_sniper",
            "SiP_m1945_backpack_roll_etool_shotgun_pistol",
            "SiP_m1945_backpack_roll_etool_shotgun",

            "SiP_m1945_packboard_mortars",

            "SiP_m1945_packboard_m20bazooka",
            "SiP_m1945_packboard_m9bazooka",

            "SiP_m1945_packboard_prc10_radio",

            "SiP_m1945_gpbag",
            "SiP_m1945_gpbag_od",
            "SiP_m1945_gpbag_left",
            "SiP_m1945_gpbag_left_od",
            "SiP_m1945_gpbag_spe",
            "SiP_m1945_gpbag_spe_OD",

            "SiP_m1945_gpbag_left_od_45",
            "SiP_m1945_gpbag_gren",
            "SiP_m1945_gpbag_bar",
            "SiP_m1945_gpbag_mg",
            "SiP_m1945_gpbag_45",
            "SiP_m1945_gpbag_45_od",
            "SiP_m1945_gpbag_shotgun",
            "SiP_m1945_gpbag_shotgun_pistol",
            "SiP_m1945_gpbag_od_shotgun_pistol",

            "SiP_m1945_sabag",

            "SiP_m1941_marine_backpack_bar",
            "SiP_m1941_marine_backpack_mg",
            "SiP_m1941_marine_backpack_shotgun",
            "SiP_m1941_marine_backpack_grenadier",
            "SiP_m1941_marine_backpack_smg_pistol",
            "SiP_m1941_marine_backpack_pistol",

            "SiP_SCR300_radio_pack"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class ACE_NonSteerableParachute;

    class B_SPE_US_T5_M7;

    class B_simc_US_m1945;
    
    class B_simc_packboard_flak_mortar_1;

    class B_simc_packboard_roket_2;
    class B_simc_packboard_flak_roket_2;

    class B_simc_MC_packboard_rajio_3;
    class B_simc_MC_packboard_flak_rajio_3;

    class B_simc_packboard_flak_MG_1;

    class B_simc_US_GP_left;
    class B_simc_USMC51_M41_flat_roll;
    class B_simc_USMC51_M41_M43_roll;
    class B_simc_USMC51_M41_flat_M43_roll;

    class B_simc_pack_med_m3;

    class B_SPE_US_Radio;
    class B_SPE_US_Radio_packboard_light;
    class B_SPE_US_packboard_ammo;
    class B_SPE_US_packboard_mortar;
    class B_SPE_US_packboard_eng;

    class B_SPE_US_GP_Bag;
    class B_SPE_US_MGbag;

    class SiP_m1945_backpack: B_simc_US_m1945
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Letlev";
        displayName = "[US] M1945 Backpack";
        maximumLoad = 120;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "standard";
        };
    };
    class SiP_m1945_backpack_bando: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - Bandolier";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
        maximumLoad = 130;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "bandolier";
        };
    };
    class SiP_m1945_backpack_etool: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - E-Tool";
        model = "\simc_uaf_44\paket_m44_m43.p3d";
        hiddenSelections[] = {"bright"};
        hiddenSelectionsTextures[] = {""};
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "etool";
        };
    };
    class SiP_m1945_backpack_etool_bando: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - E-Tool/Bandolier";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "etool_bando";
        };
    };
    class SiP_m1945_backpack_roll: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - Roll";
        model = "\simc_uaf_44\paket_m44_roll.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "roll";
        };
    };
    class SiP_m1945_backpack_roll_etool: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - Roll/E-Tool";
        model = "\simc_uaf_44\paket_m44_m43_roll.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "roll_etool";
        };
    };
    class SiP_m1945_suspenders: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Suspenders";
        picture = "\simc_uaf_44_preview\icons\zusp_ca.paa";
        hiddenSelections[] = {"bright","paket"};
        hiddenSelectionsTextures[] = {""};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "suspenders";
        };
    };
    class SiP_m1945_suspenders_bando: SiP_m1945_suspenders
    {
        displayName = "[US] M1945 Suspenders - Bandolier";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\bandolier_co.paa",""};
        maximumLoad = 130;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "suspenders_bando";
        };
    };

    class SiP_m1945_backpack_roll_etool_gren: SiP_m1945_backpack_roll_etool
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_22mm_m17_frag_mag
            {
                magazine = "vn_22mm_m17_frag_mag";
                count = 2;
            };
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 3;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 1;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 1;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_bar: SiP_m1945_backpack_roll_etool
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 4;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_mg: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 4;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_sniper: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_shotgun_pistol: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 4;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_shotgun: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
    };
    
    class SiP_m1945_packboard_mortars: B_SPE_US_packboard_mortar
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Mortar";
        maximumLoad = 160;
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_board_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "mortars";
            adjustment = "none";
        };
    };
    class SiP_m1945_packboard_mortars_flak: B_simc_packboard_flak_mortar_1
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - Mortar";
        maximumLoad = 160;
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "mortars";
            adjustment = "flak";
        };
    };

    class SiP_m1945_packboard_ammo: B_SPE_US_packboard_ammo
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Ammo";
        maximumLoad = 150;
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_board_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "ammo";
            adjustment = "none";
        };
    };
    class SiP_m1945_packboard_ammo_flak: B_simc_packboard_flak_MG_1
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - Ammo";
        maximumLoad = 150;
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "ammo";
            adjustment = "flak";
        };
    };

    class SiP_m1945_packboard_engi: B_SPE_US_packboard_eng
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Engineer";
        maximumLoad = 140;
        hiddenSelectionsTextures[] = 
        {
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_board_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"
        };
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "engi";
            adjustment = "none";
        };
    };
    
    class SiP_m1945_packboard_SCR300_radio: B_SPE_US_Radio_packboard_light
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - SCR300";
        maximumLoad = 130;
        mass = 21.2;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
        class TransportMagazines
        {
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "scr300_radio";
            adjustment = "none";
        };
    };
    
    class SiP_m1945_packboard_m20bazooka: B_simc_packboard_roket_2
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Bazooka";
        maximumLoad = 130;
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "bazooka";
            adjustment = "none";
        };
    };
    class SiP_m1945_packboard_m20bazooka_flak: B_simc_packboard_flak_roket_2
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - Bazooka";
        maximumLoad = 130;
        ace_trenches_entrenchingTool = 1;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "bazooka";
            adjustment = "flak";
        };
    };

    class SiP_m1945_packboard_m20bazooka_full: SiP_m1945_packboard_m20bazooka
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m20a1b1_heat_mag
            {
                magazine = "vn_m20a1b1_heat_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_packboard_m9bazooka: SiP_m1945_packboard_m20bazooka
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_SPE_1Rnd_60mm_M6A3
            {
                magazine = "SPE_1Rnd_60mm_M6A3";
                count = 6;
            };
        };
    };
    
    class SiP_m1945_packboard_prc10_radio: B_simc_MC_packboard_rajio_3
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - PRC10";
        maximumLoad = 120;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "vn_radiodialog_prc77";
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "prc10_radio";
            adjustment = "none";
        };
        class TransportMagazines
        {
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
    };
    class SiP_m1945_packboard_prc10_radio_flak: B_simc_MC_packboard_flak_rajio_3
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - PRC10";
        maximumLoad = 120;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "vn_radiodialog_prc77";
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "prc10_radio";
            adjustment = "flak";
        };
    };
    
    //GP Bag
    class SiP_m1945_gpbag: B_simc_US_GP_left
    {
        author = "Letlev";
        displayName = "[US] M1 Ammo Bag - Khaki";
        model = "\simc_uaf_44\garp.p3d";
        hiddenSelections[] = {"garp_left","garp_regt"};
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_co.paa",""};
        maximumLoad = 80;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "khaki";
            variant = "standard";
        };
    };
    class SiP_m1945_gpbag_od: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag - OD";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_od7_co.paa",""};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "od";
            variant = "standard";
        };
    };
    class SiP_m1945_gpbag_front: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Front - Khaki";
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_co.paa"};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "khaki";
            variant = "front";
        };
    };
    class SiP_m1945_gpbag_od_front: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Front - OD";
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_od7_co.paa"};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "od";
            variant = "front";
        };
    };
    class SiP_m1945_gpbag_double: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Double - Khaki";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_co.paa","simc_uaf_44\data\gear_pouche_co.paa"};
        maximumLoad = 150;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "khaki";
            variant = "double";
        };
    };
    class SiP_m1945_gpbag_od_double: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Double - OD";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_od7_co.paa","simc_uaf_44\data\gear_pouche_od7_co.paa"};
        maximumLoad = 150;
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "od";
            variant = "double";
        };
    };
    class SiP_m1945_gpbag_left: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Alt - Khaki";
        model = "\simc_uaf_44\garp_2.p3d";
        hiddenSelections[] = {"garp_top","garp_low"};
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_co.paa"};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "khaki";
            variant = "alt";
        };
    };
    class SiP_m1945_gpbag_left_od: SiP_m1945_gpbag_left
    {
        displayName = "[US] M1 Ammo Bag Alt - OD";
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_od7_co.paa"};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "od";
            variant = "alt";
        };
    };
    class SiP_m1945_gpbag_spe: B_SPE_US_GP_Bag
    {
        author = "Letlev";
        displayName = "[US] M1 Ammo Bag - Khaki";
        class TransportMagazines{};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "khaki";
            variant = "spe";
        };
    };
    class SiP_m1945_gpbag_spe_OD: SiP_m1945_gpbag_spe
    {
        displayName = "[US] M1 Ammo Bag - OD";
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SPE_US_sack_od7_co.paa"};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_gpbag";
            shade = "od";
            variant = "spe";
        };
    };

    class SiP_m1945_smbag: B_SPE_US_MGbag
    {
        displayName = "[US] Spare Magazine Bag";
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_smbag";
            shade = "khaki";
        };
    };
    class SiP_m1945_smbag_od: SiP_m1945_smbag
    {
        displayName = "[US] Spare Magazine Bag - OD";
        hiddenSelectionsTextures[] = {"\SiP\UN_Gear\US\Army\Vests\M1945\Textures\od7_gear_pouches_co.paa"};
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m1945_smbag";
            shade = "od";
        };
    };

    class SiP_m1945_gpbag_left_od_45: SiP_m1945_gpbag_left_od
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_gpbag_gren: SiP_m1945_gpbag_left_od
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_22mm_m17_frag_mag
            {
                magazine = "vn_22mm_m17_frag_mag";
                count = 2;
            };
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 3;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 1;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 1;
            };
        };
    };
    class SiP_m1945_gpbag_bar: SiP_m1945_gpbag
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 4;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
        maximumLoad = 120;
    };
    class SiP_m1945_gpbag_mg: SiP_m1945_gpbag
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 4;
            };
        };
    };
    class SiP_m1945_gpbag_45: SiP_m1945_gpbag
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_gpbag_45_od: SiP_m1945_gpbag_od
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_gpbag_shotgun: SiP_m1945_gpbag_left_od
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
    };
    class SiP_m1945_gpbag_shotgun_pistol: SiP_m1945_gpbag
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 4;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
    };
    class SiP_m1945_gpbag_od_shotgun_pistol: SiP_m1945_gpbag_od
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 4;
            };
            class _xx_SPE_US_Mk_2
            {
                magazine = "SPE_US_Mk_2";
                count = 4;
            };
        };
    };
    
    class SiP_m1941_marine_backpack_bar: B_simc_USMC51_M41_flat_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 8;
            };
        };
    };
    class SiP_m1941_marine_backpack_mg: B_simc_USMC51_M41_M43_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 8;
            };
        };
    };
    class SiP_m1941_marine_backpack_shotgun: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_grenadier: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 5;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 5;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_smg_pistol: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 10;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_pistol: B_simc_USMC51_M41_flat_M43_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    
    class SiP_SCR300_radio_pack: B_SPE_US_Radio
    {
        author = "Letlev";
        displayName = "[US] SCR-300 Radiopack";
        maximumLoad = 120;
        hiddenSelectionsTextures[] = 
        {
            "\SiP\UN_Gear\US\Army\Backpacks\textures\spe_us_pack_1928_od7_co.paa",
            "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\SCR300_co.paa"
        };
        mass = 21.2;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
    };

    class ACE_ReserveParachute: ACE_NonSteerableParachute
    {
        model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_QAC_Parachute.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Airforce\SPE_US_B3_harness_co.paa"};
        ParachuteClass = "SPE_US_Parachute_T5_M7";
    };

    class SiP_T7_Parachute: B_SPE_US_T5_M7
    {
        author = "Letlev";
        displayName = "[US] T-7 Parachute";
    };
    
    class SiP_m1945_m3_medicbag: B_simc_pack_med_m3
    {
        author = "Letlev";
        displayName = "[US] M3 Aid Bag - Front";
        maximumLoad = 150;
        class TransportItems
        {
            class _xx_SiP_ACE_Items_surgicalKit
            {
                name = "SiP_ACE_Items_surgicalKit";
                count = 1;
            };
            class _xx_SiP_ACE_Items_packingBandage
            {
                name = "SiP_ACE_Items_packingBandage";
                count = 10;
            };
        };
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m3_medicbag";
            adjustment = "front";
        };
    };
    class SiP_m1945_m3_medicbag_back: SiP_m1945_m3_medicbag
    {
        displayName = "[US] M3 Aid Bag - Rear";
        model =  "\simc_uaf_67\belt_56_med.p3d";
        hiddenSelections[] = {"camo","camo2","ass","zusp"};
        hiddenSelectionsTextures[] = 
        {
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            model = "B_hssn_SiP_m3_medicbag";
            adjustment = "back";
        };
    };
};

class XtdGearModels
{
    class CfgVehicles 
    {		
        class B_hssn_SiP_m1945_backpack
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "variant"
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "standard",
                    "bandolier",
                    "etool",
                    "etool_bando",
                    "roll",
                    "roll_etool",
                    "suspenders",
                    "suspenders_bando"					
                };
                class standard         {label = "Standard";};
                class bandolier        {label = "Bandolier";};
                class etool            {label = "E-Tool";};
                class etool_bando      {label = "E-Tool/Bando";};
                class roll             {label = "Roll";};
                class roll_etool       {label = "Roll/E-tool";};
                class suspenders       {label = "Suspenders";};
                class suspenders_bando {label = "Sus/Bando";};
            };
        };
        class B_hssn_SiP_m1945_gpbag
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
                    "od"
                };
                class khaki
                {
                    label = "Khaki";
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
                    "alt",
                    "front",
                    "double",
                    "spe"
                };
                class standard
                {
                    label = "Standard";
                };
                class alt
                {
                    label = "Alt";
                };
                class front
                {
                    label = "Front";
                };
                class double
                {
                    label = "Double";
                };
                class spe
                {
                    label = "SPE";
                };
            };
        };
        class B_hssn_SiP_m1945_smbag
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "shade"
            };
            class shade
            {
                label = "Shade";
                values[]=
                {
                    "khaki",
                    "od"
                };
                class khaki
                {
                    label = "Khaki";
                };
                class od
                {
                    label = "OD";
                };
            };
        };
        class B_hssn_SiP_m1945_packboard
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "variant",
                "adjustment"
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "engi",
                    "ammo",
                    "mortars",
                    "bazooka",
                    "prc10_radio",
                    "scr300_radio"
                };
                class engi
                {
                    label = "Engineer";
                };
                class ammo
                {
                    label = "Ammo";
                };
                class mortars
                {
                    label = "Mortars";
                };
                class bazooka
                {
                    label = "Bazooka";
                };
                class prc10_radio
                {
                    label = "PRC10";
                };
                class scr300_radio
                {
                    label = "SCR300";
                };
            };	
            class adjustment
            {
                label= "Strap adjustment";
                values[]=
                {
                    "none",
                    "flak"
                };
                class none
                {
                    label = "None";
                    actionLabel = "No adjustment";
                };
                class flak
                {
                    label = "Flak Vest";
                    actionLabel = "Adjust pack for vest";
                };
            };
        };
        class B_hssn_SiP_m3_medicbag
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "adjustment"
            };
            class adjustment
            {
                label= "Adjustment";
                changeingame = 1;
                changedelay = 1;
                values[]=
                {
                    "front",
                    "back"
                };
                class front
                {
                    label = "Front";
                    actionLabel = "Adjust to the Front";
                };
                class back
                {
                    label = "Back";
                    actionLabel = "Adjust to the Back";
                };
            };
        };
    };
};