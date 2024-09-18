class cfgPatches
{
    class SiP_Patch_us_radio
    {
        Name = "Suicide Is Painless - Korean War Mod - US Radios";
        addonRootClass = "SiP_Patch_misc";
        requiredAddons[] = 
        {
            "weapons_f_vietnam_c",
            "WW2_Radios_SR_BC611_Patch"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_radio_us_prc6",
            "SiP_radio_us_prc6_ind"
        };
    };
};

class RscText;
class RscTitle;
class RscPictureKeepAspect;
class RscControlsGroup;
class RscButton;
class RscPicture;
class RscActivePicture;
class RscControlsGroupNoScrollbars;
class RscButtonMenu;
class ScrollBar;
class HiddenButton;
class HiddenRotator;

class WW2_Radios_RscText;
class WW2_Radios_RscPicture;
class WW2_Radios_RscButton;
class WW2_Radios_RscEdit;

class SiP_Radios_prc6_radio_dialogue
{
    idd = 200812;
    onUnload = "['OnRadioOpen', [player, TF_sw_dialog_radio, false, 'WW2_Radios_BC611_radio_dialogue', false]] call TFAR_fnc_fireEventHandlers;";
    onLoad = "if (sunOrMoon < 0.2) then {((_this select 0) displayCtrl 67676) ctrlSetText '\WW2_Radios_SPE_NoFOW\addons\WW2_Radios\Short-Range\BC_611\Allied\data\BC611_radio_notes.paa';};";
    class controlsBackground
    {
        class RadioImage: RscPicture
        {
            idc = -1;
            text = "SiP\Misc\items\Radios\UI\PRC6_radio_background_ca.paa";
            colorText[] = {1,1,1,1};
            x = "(((11*-1) + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((11*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(11 * (((getResolution select 4) min 1.2) / 40))";
            h = "(22 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
        };
        class NotepadImage: RadioImage
        {
            idc = -1;
            text = "\WW2_Radios_SPE_NoFOW\addons\WW2_Radios\Short-Range\BC_611\Allied\data\BC611_radio_notes.paa";
            x = "((0.5 + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((9*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(10 * (((getResolution select 4) min 1.2) / 40))";
            h = "(20 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
        };
    };
    class controls
    {
        class volume_Switch: HiddenRotator
        {
            idc = -1;
            x = "(((2.1*-1) + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((-3.3*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(1.25 * (((getResolution select 4) min 1.2) / 40))";
            h = "(1.2 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
            tooltip = "$STR_tfar_core_rotator_volume";
            onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
        };
        class stereo: HiddenButton
        {
            idc = 1607;
            x = "(((4.45*-1) + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((-5.3*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(2.0 * (((getResolution select 4) min 1.2) / 40))";
            h = "(3.5 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
            action = "[TF_sw_dialog_radio,((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod 3] call TFAR_fnc_setSwStereo; [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume;";
            tooltip = "$STR_tfar_core_stereo_settings";
            colorBackground[] = {0,0,0,0};
            colorBackgroundActive[] = {0,0,0,0};
            colorBackgroundDisabled[] = {0,0,0,0};
            colorBorder[] = {0,0,0,0};
            colorDisabled[] = {0,0,0,0};
            colorFocused[] = {0,0,0,0};
            colorShadow[] = {0,0,0,0};
            colorText[] = {0,0,0,0};
            shadow = 0;
            font = "WW2_Radios_Font_Base";
            sizeEx = "(((((getResolution select 4) min 1.2) / 1.2) / 25) * 0.8)";
            url = "";
            offsetX = 0;
            offsetY = 0;
            offsetPressedX = 0;
            offsetPressedY = 0;
            borderSize = 0;
        };
        class ChannelRotator: stereo
        {
            idc = 103;
            tooltip = "Previous Channel | Next Channel";
            x = "(((4.15*-1) + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((3.5*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(1.3 * (((getResolution select 4) min 1.2) / 40))";
            h = "(1.2 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
            onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setChannelViaDialog;";
        };

        class Channel: WW2_Radios_RscText
        {
            idc = 1604;
            text = "Ch.1";
            x = "((1.6 + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((5*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(4.7 * (((getResolution select 4) min 1.2) / 40))";
            h = "(1 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
            font = "WW2_Radios_Font_Bold";
            colorText[] = {0,0,0,1};
        };
        class Frequency: WW2_Radios_RscEdit
        {
            idc = 1400;
            style = "0x01 + 0x200";
            colorBackground[] = {0,0,0,0};
            shadow = 1;
            colorText[] = {0,0,0,1};
            sizeEx = "(((((getResolution select 4) min 1.2) / 1.2) / 25) * 1.1)";
            font = "Caveat";
            x = "((3.1 + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((7.1*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(4.7 * (((getResolution select 4) min 1.2) / 40))";
            h = "(1 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
            maxChars = 5;
            canModify = 1;
            onKeyUp = "if (_this select 1 in [28,156]) then { [((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter; };";
        };
        class Set: WW2_Radios_RscButton
        {
            idc = 106;
            style = 2;
            text = "Set";
            font = "Caveat";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0,0,0,0};
            tooltip = "$STR_tfar_core_set_frequency";
            x = "((1.7 + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((6*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(4.3 * (((getResolution select 4) min 1.2) / 40))";
            h = "(1 * ((((getResolution select 4) min 1.2) / 1.2) / 25))";
            onButtonClick = "[((ctrlParent (_this select 0))) displayCtrl 1400] call TFAR_handhelds_fnc_onButtonClick_Enter;";
            action = "";
            shadow = 1;
        };
        class Clear: Set
        {
            idc = 107;
            text = "Clear";
            tooltip = "Clear Frequency";
            x = "((6 + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            w = "(4.4 * (((getResolution select 4) min 1.2) / 40))";
            action = "ctrlSetText [1400,'']; ctrlSetFocus ((findDisplay 1333) displayCtrl 1400);";
            shadow = 1;
        };
        class Additional: Set
        {
            idc = 108;
            text = "Additional";
            tooltip = "Additional Frequency";
            x = "((3.6 + 20) * (((getResolution select 4) min 1.2) / 40) + (safezoneX + (safezoneW - ((getResolution select 7) min 1.2))/2))";
            y = "(((5*-1) + 12.5) * ((((getResolution select 4) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((getResolution select 7) min 1.2) / 1.2))/2))";
            w = "(5 * (((getResolution select 4) min 1.2) / 40))";
            action = "[TF_sw_dialog_radio, TF_sw_dialog_radio call TFAR_fnc_getSwChannel] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [TF_sw_dialog_radio, false] call TFAR_fnc_showRadioInfo;";
            shadow = 1;
        };
    };
};

class cfgWeapons
{
    class vn_b_item_radio_urc10;

    class SiP_radio_us_prc6: vn_b_item_radio_urc10
    {
        author = "Letlev";
        scope = 2;
        scopearsenal = 2;
        displayname = "AN/PRC-6";
        descriptionshort = "Korean War Era SR Radio";
        model = "simc_lcd_43\rajio_handi_fore.p3d";
		hiddenSelections[] = {"cap"};
		hiddenSelectionsTextures[] = {""};
        editorPreview = "";
        picture = "\SiP\Misc\items\Radios\UI\PRC6_UI_ca.paa";
        tf_parent = "SiP_radio_us_prc6";
        tf_dialog = "SiP_Radios_prc6_radio_dialogue";
    };
    
    class SiP_radio_us_prc6_1: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 1";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_2: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 2";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_3: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 3";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_4: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 4";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_5: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 5";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_6: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 6";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_7: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 7";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_8: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 8";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_9: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 9";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_10: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 10";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_11: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 11";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_12: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 12";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_13: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 13";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_14: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 14";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_15: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 15";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_16: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 16";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_17: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 17";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_18: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 18";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_19: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 19";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_20: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 20";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_21: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 21";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_22: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 22";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_23: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 23";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_24: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 24";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_25: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 25";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_26: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 26";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_27: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 27";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_28: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 28";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_29: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 29";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_30: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 30";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_31: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 31";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_32: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 32";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_33: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 33";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_34: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 34";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_35: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 35";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_36: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 36";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_37: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 37";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_38: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 38";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_39: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 39";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_40: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 40";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_41: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 41";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_42: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 42";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_43: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 43";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_44: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 44";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_45: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 45";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_46: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 46";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_47: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 47";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_48: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 48";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_49: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 49";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_50: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 50";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_51: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 51";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_52: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 52";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_53: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 53";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_54: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 54";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_55: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 55";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_56: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 56";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_57: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 57";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_58: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 58";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_59: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 59";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_60: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 60";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_61: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 61";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_62: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 62";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_63: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 63";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_64: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 64";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_65: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 65";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_66: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 66";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_67: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 67";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_68: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 68";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_69: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 69";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_70: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 70";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_71: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 71";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_72: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 72";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_73: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 73";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_74: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 74";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_75: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 75";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_76: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 76";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_77: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 77";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_78: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 78";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_79: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 79";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_80: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 80";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_81: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 81";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_82: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 82";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_83: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 83";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_84: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 84";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_85: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 85";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_86: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 86";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_87: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 87";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_88: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 88";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_89: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 89";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_90: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 90";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_91: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 91";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_92: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 92";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_93: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 93";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_94: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 94";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_95: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 95";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_96: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 96";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_97: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 97";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_98: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 98";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_99: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 99";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_100: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 100";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_101: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 101";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_102: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 102";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_103: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 103";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_104: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 104";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_105: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 105";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_106: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 106";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_107: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 107";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_108: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 108";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_109: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 109";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_110: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 110";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_111: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 111";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_112: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 112";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_113: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 113";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_114: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 114";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_115: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 115";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_116: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 116";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_117: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 117";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_118: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 118";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_119: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 119";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_120: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 120";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_121: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 121";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_122: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 122";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_123: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 123";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_124: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 124";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_125: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 125";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_126: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 126";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_127: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 127";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_128: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 128";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_129: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 129";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_130: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 130";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_131: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 131";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_132: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 132";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_133: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 133";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_134: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 134";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_135: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 135";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_136: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 136";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_137: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 137";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_138: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 138";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_139: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 139";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_140: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 140";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_141: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 141";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_142: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 142";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_143: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 143";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_144: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 144";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_145: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 145";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_146: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 146";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_147: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 147";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_148: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 148";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_149: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 149";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_150: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 150";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_151: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 151";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_152: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 152";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_153: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 153";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_154: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 154";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_155: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 155";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_156: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 156";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_157: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 157";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_158: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 158";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_159: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 159";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_160: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 160";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_161: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 161";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_162: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 162";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_163: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 163";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_164: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 164";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_165: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 165";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_166: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 166";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_167: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 167";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_168: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 168";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_169: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 169";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_170: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 170";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_171: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 171";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_172: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 172";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_173: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 173";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_174: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 174";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_175: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 175";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_176: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 176";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_177: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 177";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_178: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 178";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_179: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 179";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_180: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 180";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_181: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 181";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_182: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 182";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_183: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 183";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_184: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 184";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_185: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 185";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_186: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 186";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_187: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 187";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_188: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 188";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_189: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 189";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_190: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 190";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_191: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 191";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_192: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 192";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_193: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 193";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_194: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 194";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_195: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 195";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_196: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 196";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_197: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 197";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_198: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 198";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_199: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 199";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_200: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 200";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_201: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 201";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_202: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 202";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_203: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 203";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_204: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 204";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_205: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 205";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_206: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 206";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_207: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 207";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_208: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 208";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_209: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 209";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_210: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 210";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_211: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 211";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_212: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 212";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_213: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 213";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_214: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 214";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_215: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 215";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_216: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 216";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_217: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 217";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_218: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 218";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_219: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 219";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_220: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 220";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_221: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 221";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_222: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 222";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_223: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 223";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_224: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 224";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_225: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 225";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_226: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 226";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_227: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 227";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_228: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 228";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_229: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 229";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_230: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 230";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_231: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 231";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_232: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 232";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_233: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 233";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_234: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 234";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_235: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 235";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_236: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 236";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_237: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 237";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_238: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 238";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_239: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 239";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_240: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 240";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_241: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 241";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_242: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 242";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_243: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 243";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_244: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 244";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_245: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 245";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_246: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 246";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_247: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 247";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_248: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 248";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_249: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 249";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_250: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 250";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_251: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 251";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_252: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 252";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_253: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 253";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_254: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 254";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_255: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 255";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_256: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 256";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_257: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 257";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_258: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 258";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_259: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 259";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_260: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 260";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_261: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 261";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_262: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 262";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_263: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 263";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_264: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 264";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_265: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 265";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_266: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 266";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_267: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 267";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_268: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 268";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_269: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 269";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_270: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 270";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_271: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 271";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_272: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 272";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_273: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 273";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_274: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 274";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_275: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 275";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_276: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 276";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_277: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 277";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_278: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 278";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_279: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 279";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_280: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 280";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_281: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 281";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_282: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 282";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_283: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 283";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_284: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 284";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_285: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 285";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_286: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 286";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_287: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 287";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_288: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 288";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_289: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 289";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_290: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 290";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_291: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 291";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_292: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 292";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_293: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 293";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_294: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 294";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_295: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 295";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_296: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 296";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_297: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 297";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_298: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 298";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_299: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 299";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_300: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 300";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_301: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 301";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_302: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 302";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_303: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 303";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_304: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 304";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_305: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 305";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_306: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 306";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_307: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 307";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_308: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 308";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_309: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 309";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_310: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 310";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_311: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 311";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_312: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 312";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_313: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 313";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_314: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 314";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_315: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 315";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_316: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 316";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_317: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 317";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_318: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 318";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_319: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 319";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_320: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 320";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_321: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 321";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_322: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 322";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_323: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 323";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_324: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 324";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_325: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 325";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_326: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 326";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_327: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 327";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_328: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 328";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_329: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 329";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_330: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 330";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_331: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 331";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_332: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 332";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_333: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 333";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_334: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 334";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_335: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 335";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_336: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 336";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_337: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 337";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_338: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 338";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_339: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 339";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_340: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 340";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_341: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 341";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_342: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 342";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_343: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 343";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_344: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 344";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_345: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 345";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_346: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 346";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_347: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 347";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_348: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 348";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_349: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 349";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_350: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 350";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_351: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 351";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_352: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 352";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_353: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 353";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_354: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 354";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_355: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 355";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_356: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 356";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_357: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 357";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_358: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 358";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_359: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 359";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_360: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 360";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_361: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 361";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_362: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 362";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_363: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 363";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_364: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 364";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_365: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 365";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_366: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 366";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_367: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 367";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_368: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 368";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_369: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 369";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_370: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 370";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_371: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 371";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_372: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 372";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_373: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 373";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_374: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 374";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_375: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 375";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_376: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 376";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_377: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 377";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_378: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 378";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_379: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 379";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_380: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 380";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_381: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 381";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_382: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 382";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_383: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 383";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_384: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 384";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_385: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 385";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_386: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 386";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_387: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 387";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_388: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 388";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_389: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 389";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_390: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 390";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_391: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 391";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_392: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 392";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_393: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 393";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_394: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 394";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_395: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 395";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_396: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 396";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_397: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 397";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_398: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 398";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_399: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 399";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_400: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 400";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_401: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 401";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_402: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 402";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_403: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 403";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_404: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 404";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_405: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 405";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_406: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 406";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_407: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 407";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_408: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 408";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_409: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 409";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_410: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 410";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_411: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 411";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_412: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 412";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_413: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 413";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_414: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 414";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_415: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 415";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_416: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 416";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_417: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 417";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_418: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 418";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_419: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 419";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_420: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 420";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_421: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 421";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_422: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 422";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_423: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 423";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_424: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 424";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_425: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 425";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_426: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 426";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_427: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 427";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_428: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 428";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_429: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 429";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_430: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 430";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_431: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 431";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_432: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 432";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_433: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 433";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_434: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 434";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_435: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 435";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_436: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 436";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_437: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 437";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_438: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 438";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_439: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 439";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_440: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 440";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_441: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 441";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_442: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 442";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_443: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 443";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_444: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 444";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_445: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 445";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_446: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 446";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_447: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 447";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_448: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 448";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_449: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 449";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_450: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 450";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_451: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 451";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_452: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 452";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_453: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 453";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_454: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 454";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_455: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 455";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_456: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 456";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_457: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 457";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_458: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 458";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_459: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 459";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_460: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 460";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_461: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 461";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_462: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 462";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_463: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 463";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_464: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 464";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_465: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 465";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_466: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 466";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_467: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 467";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_468: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 468";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_469: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 469";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_470: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 470";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_471: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 471";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_472: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 472";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_473: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 473";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_474: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 474";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_475: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 475";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_476: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 476";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_477: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 477";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_478: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 478";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_479: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 479";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_480: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 480";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_481: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 481";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_482: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 482";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_483: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 483";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_484: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 484";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_485: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 485";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_486: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 486";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_487: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 487";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_488: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 488";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_489: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 489";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_490: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 490";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_491: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 491";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_492: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 492";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_493: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 493";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_494: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 494";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_495: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 495";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_496: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 496";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_497: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 497";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_498: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 498";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_499: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 499";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_500: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 500";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_501: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 501";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_502: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 502";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_503: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 503";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_504: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 504";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_505: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 505";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_506: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 506";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_507: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 507";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_508: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 508";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_509: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 509";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_510: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 510";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_511: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 511";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_512: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 512";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_513: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 513";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_514: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 514";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_515: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 515";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_516: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 516";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_517: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 517";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_518: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 518";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_519: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 519";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_520: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 520";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_521: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 521";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_522: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 522";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_523: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 523";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_524: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 524";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_525: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 525";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_526: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 526";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_527: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 527";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_528: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 528";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_529: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 529";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_530: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 530";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_531: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 531";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_532: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 532";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_533: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 533";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_534: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 534";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_535: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 535";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_536: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 536";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_537: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 537";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_538: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 538";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_539: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 539";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_540: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 540";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_541: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 541";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_542: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 542";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_543: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 543";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_544: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 544";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_545: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 545";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_546: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 546";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_547: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 547";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_548: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 548";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_549: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 549";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_550: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 550";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_551: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 551";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_552: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 552";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_553: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 553";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_554: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 554";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_555: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 555";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_556: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 556";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_557: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 557";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_558: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 558";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_559: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 559";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_560: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 560";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_561: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 561";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_562: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 562";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_563: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 563";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_564: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 564";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_565: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 565";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_566: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 566";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_567: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 567";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_568: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 568";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_569: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 569";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_570: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 570";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_571: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 571";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_572: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 572";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_573: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 573";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_574: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 574";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_575: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 575";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_576: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 576";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_577: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 577";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_578: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 578";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_579: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 579";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_580: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 580";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_581: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 581";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_582: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 582";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_583: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 583";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_584: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 584";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_585: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 585";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_586: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 586";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_587: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 587";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_588: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 588";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_589: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 589";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_590: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 590";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_591: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 591";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_592: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 592";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_593: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 593";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_594: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 594";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_595: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 595";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_596: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 596";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_597: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 597";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_598: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 598";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_599: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 599";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_600: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 600";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_601: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 601";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_602: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 602";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_603: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 603";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_604: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 604";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_605: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 605";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_606: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 606";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_607: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 607";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_608: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 608";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_609: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 609";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_610: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 610";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_611: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 611";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_612: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 612";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_613: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 613";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_614: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 614";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_615: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 615";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_616: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 616";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_617: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 617";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_618: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 618";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_619: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 619";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_620: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 620";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_621: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 621";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_622: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 622";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_623: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 623";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_624: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 624";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_625: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 625";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_626: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 626";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_627: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 627";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_628: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 628";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_629: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 629";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_630: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 630";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_631: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 631";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_632: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 632";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_633: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 633";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_634: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 634";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_635: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 635";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_636: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 636";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_637: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 637";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_638: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 638";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_639: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 639";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_640: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 640";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_641: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 641";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_642: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 642";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_643: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 643";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_644: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 644";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_645: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 645";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_646: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 646";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_647: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 647";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_648: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 648";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_649: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 649";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_650: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 650";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_651: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 651";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_652: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 652";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_653: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 653";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_654: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 654";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_655: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 655";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_656: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 656";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_657: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 657";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_658: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 658";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_659: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 659";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_660: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 660";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_661: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 661";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_662: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 662";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_663: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 663";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_664: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 664";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_665: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 665";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_666: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 666";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_667: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 667";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_668: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 668";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_669: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 669";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_670: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 670";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_671: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 671";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_672: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 672";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_673: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 673";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_674: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 674";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_675: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 675";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_676: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 676";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_677: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 677";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_678: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 678";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_679: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 679";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_680: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 680";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_681: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 681";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_682: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 682";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_683: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 683";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_684: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 684";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_685: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 685";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_686: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 686";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_687: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 687";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_688: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 688";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_689: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 689";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_690: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 690";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_691: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 691";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_692: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 692";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_693: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 693";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_694: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 694";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_695: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 695";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_696: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 696";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_697: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 697";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_698: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 698";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_699: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 699";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_700: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 700";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_701: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 701";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_702: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 702";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_703: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 703";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_704: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 704";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_705: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 705";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_706: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 706";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_707: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 707";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_708: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 708";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_709: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 709";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_710: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 710";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_711: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 711";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_712: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 712";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_713: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 713";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_714: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 714";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_715: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 715";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_716: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 716";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_717: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 717";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_718: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 718";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_719: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 719";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_720: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 720";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_721: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 721";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_722: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 722";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_723: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 723";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_724: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 724";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_725: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 725";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_726: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 726";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_727: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 727";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_728: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 728";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_729: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 729";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_730: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 730";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_731: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 731";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_732: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 732";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_733: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 733";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_734: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 734";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_735: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 735";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_736: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 736";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_737: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 737";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_738: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 738";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_739: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 739";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_740: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 740";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_741: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 741";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_742: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 742";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_743: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 743";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_744: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 744";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_745: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 745";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_746: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 746";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_747: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 747";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_748: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 748";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_749: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 749";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_750: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 750";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_751: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 751";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_752: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 752";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_753: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 753";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_754: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 754";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_755: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 755";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_756: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 756";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_757: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 757";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_758: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 758";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_759: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 759";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_760: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 760";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_761: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 761";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_762: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 762";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_763: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 763";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_764: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 764";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_765: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 765";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_766: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 766";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_767: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 767";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_768: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 768";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_769: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 769";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_770: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 770";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_771: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 771";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_772: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 772";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_773: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 773";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_774: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 774";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_775: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 775";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_776: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 776";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_777: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 777";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_778: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 778";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_779: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 779";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_780: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 780";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_781: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 781";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_782: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 782";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_783: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 783";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_784: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 784";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_785: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 785";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_786: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 786";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_787: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 787";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_788: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 788";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_789: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 789";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_790: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 790";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_791: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 791";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_792: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 792";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_793: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 793";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_794: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 794";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_795: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 795";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_796: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 796";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_797: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 797";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_798: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 798";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_799: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 799";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_800: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 800";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_801: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 801";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_802: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 802";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_803: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 803";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_804: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 804";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_805: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 805";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_806: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 806";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_807: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 807";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_808: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 808";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_809: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 809";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_810: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 810";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_811: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 811";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_812: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 812";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_813: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 813";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_814: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 814";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_815: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 815";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_816: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 816";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_817: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 817";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_818: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 818";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_819: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 819";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_820: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 820";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_821: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 821";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_822: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 822";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_823: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 823";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_824: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 824";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_825: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 825";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_826: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 826";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_827: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 827";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_828: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 828";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_829: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 829";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_830: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 830";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_831: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 831";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_832: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 832";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_833: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 833";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_834: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 834";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_835: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 835";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_836: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 836";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_837: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 837";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_838: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 838";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_839: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 839";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_840: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 840";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_841: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 841";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_842: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 842";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_843: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 843";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_844: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 844";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_845: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 845";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_846: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 846";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_847: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 847";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_848: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 848";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_849: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 849";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_850: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 850";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_851: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 851";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_852: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 852";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_853: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 853";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_854: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 854";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_855: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 855";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_856: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 856";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_857: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 857";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_858: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 858";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_859: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 859";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_860: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 860";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_861: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 861";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_862: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 862";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_863: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 863";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_864: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 864";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_865: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 865";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_866: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 866";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_867: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 867";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_868: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 868";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_869: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 869";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_870: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 870";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_871: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 871";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_872: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 872";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_873: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 873";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_874: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 874";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_875: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 875";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_876: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 876";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_877: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 877";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_878: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 878";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_879: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 879";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_880: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 880";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_881: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 881";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_882: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 882";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_883: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 883";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_884: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 884";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_885: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 885";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_886: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 886";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_887: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 887";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_888: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 888";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_889: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 889";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_890: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 890";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_891: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 891";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_892: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 892";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_893: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 893";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_894: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 894";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_895: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 895";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_896: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 896";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_897: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 897";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_898: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 898";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_899: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 899";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_900: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 900";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_901: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 901";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_902: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 902";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_903: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 903";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_904: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 904";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_905: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 905";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_906: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 906";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_907: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 907";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_908: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 908";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_909: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 909";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_910: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 910";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_911: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 911";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_912: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 912";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_913: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 913";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_914: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 914";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_915: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 915";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_916: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 916";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_917: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 917";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_918: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 918";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_919: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 919";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_920: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 920";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_921: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 921";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_922: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 922";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_923: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 923";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_924: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 924";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_925: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 925";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_926: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 926";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_927: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 927";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_928: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 928";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_929: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 929";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_930: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 930";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_931: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 931";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_932: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 932";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_933: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 933";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_934: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 934";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_935: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 935";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_936: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 936";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_937: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 937";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_938: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 938";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_939: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 939";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_940: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 940";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_941: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 941";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_942: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 942";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_943: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 943";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_944: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 944";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_945: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 945";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_946: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 946";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_947: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 947";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_948: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 948";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_949: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 949";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_950: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 950";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_951: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 951";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_952: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 952";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_953: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 953";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_954: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 954";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_955: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 955";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_956: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 956";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_957: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 957";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_958: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 958";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_959: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 959";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_960: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 960";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_961: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 961";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_962: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 962";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_963: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 963";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_964: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 964";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_965: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 965";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_966: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 966";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_967: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 967";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_968: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 968";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_969: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 969";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_970: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 970";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_971: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 971";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_972: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 972";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_973: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 973";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_974: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 974";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_975: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 975";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_976: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 976";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_977: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 977";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_978: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 978";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_979: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 979";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_980: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 980";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_981: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 981";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_982: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 982";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_983: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 983";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_984: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 984";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_985: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 985";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_986: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 986";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_987: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 987";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_988: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 988";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_989: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 989";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_990: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 990";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_991: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 991";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_992: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 992";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_993: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 993";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_994: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 994";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_995: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 995";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_996: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 996";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_997: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 997";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_998: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 998";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_999: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 999";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_1000: SiP_radio_us_prc6
    {
        displayName = "AN/PRC-6 1000";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    
    //Independent
    class SiP_radio_us_prc6_ind: SiP_radio_us_prc6
    {
        displayname = "AN/PRC-6 (Independent)";
        tf_parent = "SiP_radio_us_prc6_ind";
        tf_encryptionCode = "tf_guer_radio_code";
    };
    class SiP_radio_us_prc6_ind_1: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 1";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_2: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 2";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_3: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 3";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_4: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 4";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_5: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 5";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_6: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 6";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_7: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 7";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_8: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 8";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_9: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 9";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_10: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 10";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_11: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 11";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_12: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 12";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_13: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 13";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_14: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 14";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_15: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 15";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_16: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 16";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_17: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 17";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_18: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 18";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_19: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 19";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_20: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 20";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_21: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 21";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_22: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 22";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_23: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 23";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_24: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 24";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_25: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 25";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_26: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 26";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_27: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 27";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_28: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 28";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_29: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 29";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_30: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 30";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_31: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 31";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_32: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 32";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_33: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 33";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_34: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 34";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_35: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 35";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_36: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 36";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_37: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 37";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_38: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 38";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_39: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 39";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_40: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 40";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_41: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 41";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_42: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 42";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_43: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 43";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_44: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 44";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_45: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 45";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_46: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 46";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_47: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 47";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_48: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 48";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_49: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 49";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_50: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 50";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_51: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 51";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_52: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 52";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_53: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 53";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_54: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 54";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_55: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 55";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_56: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 56";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_57: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 57";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_58: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 58";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_59: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 59";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_60: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 60";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_61: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 61";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_62: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 62";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_63: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 63";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_64: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 64";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_65: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 65";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_66: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 66";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_67: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 67";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_68: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 68";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_69: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 69";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_70: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 70";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_71: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 71";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_72: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 72";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_73: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 73";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_74: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 74";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_75: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 75";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_76: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 76";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_77: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 77";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_78: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 78";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_79: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 79";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_80: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 80";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_81: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 81";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_82: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 82";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_83: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 83";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_84: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 84";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_85: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 85";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_86: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 86";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_87: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 87";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_88: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 88";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_89: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 89";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_90: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 90";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_91: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 91";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_92: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 92";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_93: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 93";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_94: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 94";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_95: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 95";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_96: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 96";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_97: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 97";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_98: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 98";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_99: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 99";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_100: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 100";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_101: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 101";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_102: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 102";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_103: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 103";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_104: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 104";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_105: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 105";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_106: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 106";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_107: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 107";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_108: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 108";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_109: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 109";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_110: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 110";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_111: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 111";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_112: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 112";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_113: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 113";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_114: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 114";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_115: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 115";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_116: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 116";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_117: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 117";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_118: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 118";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_119: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 119";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_120: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 120";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_121: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 121";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_122: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 122";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_123: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 123";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_124: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 124";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_125: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 125";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_126: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 126";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_127: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 127";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_128: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 128";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_129: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 129";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_130: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 130";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_131: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 131";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_132: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 132";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_133: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 133";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_134: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 134";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_135: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 135";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_136: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 136";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_137: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 137";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_138: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 138";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_139: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 139";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_140: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 140";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_141: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 141";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_142: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 142";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_143: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 143";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_144: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 144";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_145: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 145";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_146: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 146";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_147: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 147";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_148: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 148";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_149: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 149";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_150: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 150";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_151: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 151";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_152: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 152";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_153: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 153";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_154: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 154";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_155: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 155";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_156: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 156";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_157: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 157";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_158: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 158";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_159: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 159";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_160: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 160";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_161: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 161";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_162: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 162";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_163: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 163";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_164: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 164";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_165: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 165";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_166: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 166";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_167: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 167";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_168: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 168";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_169: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 169";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_170: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 170";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_171: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 171";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_172: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 172";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_173: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 173";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_174: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 174";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_175: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 175";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_176: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 176";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_177: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 177";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_178: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 178";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_179: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 179";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_180: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 180";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_181: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 181";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_182: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 182";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_183: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 183";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_184: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 184";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_185: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 185";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_186: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 186";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_187: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 187";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_188: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 188";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_189: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 189";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_190: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 190";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_191: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 191";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_192: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 192";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_193: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 193";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_194: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 194";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_195: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 195";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_196: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 196";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_197: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 197";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_198: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 198";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_199: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 199";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_200: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 200";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_201: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 201";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_202: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 202";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_203: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 203";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_204: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 204";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_205: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 205";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_206: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 206";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_207: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 207";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_208: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 208";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_209: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 209";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_210: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 210";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_211: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 211";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_212: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 212";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_213: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 213";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_214: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 214";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_215: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 215";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_216: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 216";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_217: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 217";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_218: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 218";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_219: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 219";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_220: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 220";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_221: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 221";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_222: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 222";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_223: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 223";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_224: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 224";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_225: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 225";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_226: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 226";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_227: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 227";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_228: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 228";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_229: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 229";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_230: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 230";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_231: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 231";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_232: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 232";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_233: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 233";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_234: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 234";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_235: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 235";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_236: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 236";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_237: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 237";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_238: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 238";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_239: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 239";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_240: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 240";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_241: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 241";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_242: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 242";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_243: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 243";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_244: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 244";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_245: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 245";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_246: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 246";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_247: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 247";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_248: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 248";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_249: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 249";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_250: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 250";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_251: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 251";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_252: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 252";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_253: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 253";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_254: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 254";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_255: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 255";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_256: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 256";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_257: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 257";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_258: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 258";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_259: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 259";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_260: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 260";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_261: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 261";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_262: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 262";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_263: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 263";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_264: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 264";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_265: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 265";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_266: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 266";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_267: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 267";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_268: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 268";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_269: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 269";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_270: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 270";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_271: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 271";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_272: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 272";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_273: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 273";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_274: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 274";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_275: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 275";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_276: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 276";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_277: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 277";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_278: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 278";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_279: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 279";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_280: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 280";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_281: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 281";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_282: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 282";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_283: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 283";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_284: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 284";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_285: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 285";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_286: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 286";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_287: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 287";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_288: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 288";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_289: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 289";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_290: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 290";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_291: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 291";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_292: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 292";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_293: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 293";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_294: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 294";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_295: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 295";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_296: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 296";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_297: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 297";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_298: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 298";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_299: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 299";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_300: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 300";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_301: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 301";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_302: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 302";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_303: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 303";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_304: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 304";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_305: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 305";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_306: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 306";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_307: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 307";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_308: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 308";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_309: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 309";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_310: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 310";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_311: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 311";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_312: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 312";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_313: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 313";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_314: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 314";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_315: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 315";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_316: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 316";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_317: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 317";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_318: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 318";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_319: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 319";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_320: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 320";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_321: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 321";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_322: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 322";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_323: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 323";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_324: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 324";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_325: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 325";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_326: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 326";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_327: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 327";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_328: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 328";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_329: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 329";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_330: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 330";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_331: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 331";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_332: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 332";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_333: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 333";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_334: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 334";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_335: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 335";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_336: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 336";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_337: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 337";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_338: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 338";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_339: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 339";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_340: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 340";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_341: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 341";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_342: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 342";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_343: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 343";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_344: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 344";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_345: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 345";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_346: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 346";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_347: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 347";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_348: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 348";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_349: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 349";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_350: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 350";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_351: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 351";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_352: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 352";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_353: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 353";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_354: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 354";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_355: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 355";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_356: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 356";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_357: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 357";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_358: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 358";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_359: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 359";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_360: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 360";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_361: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 361";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_362: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 362";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_363: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 363";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_364: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 364";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_365: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 365";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_366: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 366";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_367: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 367";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_368: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 368";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_369: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 369";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_370: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 370";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_371: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 371";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_372: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 372";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_373: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 373";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_374: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 374";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_375: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 375";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_376: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 376";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_377: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 377";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_378: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 378";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_379: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 379";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_380: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 380";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_381: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 381";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_382: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 382";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_383: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 383";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_384: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 384";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_385: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 385";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_386: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 386";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_387: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 387";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_388: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 388";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_389: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 389";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_390: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 390";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_391: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 391";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_392: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 392";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_393: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 393";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_394: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 394";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_395: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 395";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_396: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 396";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_397: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 397";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_398: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 398";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_399: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 399";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_400: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 400";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_401: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 401";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_402: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 402";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_403: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 403";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_404: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 404";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_405: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 405";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_406: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 406";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_407: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 407";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_408: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 408";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_409: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 409";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_410: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 410";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_411: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 411";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_412: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 412";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_413: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 413";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_414: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 414";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_415: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 415";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_416: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 416";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_417: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 417";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_418: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 418";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_419: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 419";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_420: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 420";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_421: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 421";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_422: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 422";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_423: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 423";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_424: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 424";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_425: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 425";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_426: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 426";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_427: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 427";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_428: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 428";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_429: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 429";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_430: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 430";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_431: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 431";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_432: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 432";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_433: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 433";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_434: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 434";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_435: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 435";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_436: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 436";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_437: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 437";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_438: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 438";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_439: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 439";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_440: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 440";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_441: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 441";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_442: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 442";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_443: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 443";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_444: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 444";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_445: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 445";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_446: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 446";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_447: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 447";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_448: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 448";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_449: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 449";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_450: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 450";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_451: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 451";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_452: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 452";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_453: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 453";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_454: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 454";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_455: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 455";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_456: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 456";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_457: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 457";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_458: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 458";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_459: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 459";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_460: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 460";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_461: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 461";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_462: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 462";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_463: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 463";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_464: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 464";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_465: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 465";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_466: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 466";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_467: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 467";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_468: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 468";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_469: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 469";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_470: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 470";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_471: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 471";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_472: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 472";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_473: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 473";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_474: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 474";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_475: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 475";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_476: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 476";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_477: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 477";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_478: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 478";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_479: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 479";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_480: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 480";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_481: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 481";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_482: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 482";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_483: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 483";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_484: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 484";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_485: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 485";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_486: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 486";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_487: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 487";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_488: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 488";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_489: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 489";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_490: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 490";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_491: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 491";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_492: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 492";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_493: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 493";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_494: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 494";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_495: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 495";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_496: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 496";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_497: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 497";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_498: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 498";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_499: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 499";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_500: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 500";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_501: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 501";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_502: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 502";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_503: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 503";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_504: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 504";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_505: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 505";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_506: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 506";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_507: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 507";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_508: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 508";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_509: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 509";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_510: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 510";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_511: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 511";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_512: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 512";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_513: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 513";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_514: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 514";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_515: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 515";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_516: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 516";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_517: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 517";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_518: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 518";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_519: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 519";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_520: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 520";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_521: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 521";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_522: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 522";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_523: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 523";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_524: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 524";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_525: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 525";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_526: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 526";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_527: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 527";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_528: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 528";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_529: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 529";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_530: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 530";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_531: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 531";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_532: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 532";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_533: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 533";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_534: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 534";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_535: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 535";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_536: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 536";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_537: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 537";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_538: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 538";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_539: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 539";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_540: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 540";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_541: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 541";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_542: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 542";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_543: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 543";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_544: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 544";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_545: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 545";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_546: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 546";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_547: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 547";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_548: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 548";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_549: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 549";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_550: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 550";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_551: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 551";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_552: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 552";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_553: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 553";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_554: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 554";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_555: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 555";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_556: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 556";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_557: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 557";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_558: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 558";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_559: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 559";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_560: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 560";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_561: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 561";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_562: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 562";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_563: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 563";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_564: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 564";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_565: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 565";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_566: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 566";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_567: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 567";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_568: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 568";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_569: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 569";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_570: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 570";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_571: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 571";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_572: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 572";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_573: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 573";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_574: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 574";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_575: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 575";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_576: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 576";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_577: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 577";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_578: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 578";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_579: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 579";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_580: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 580";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_581: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 581";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_582: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 582";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_583: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 583";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_584: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 584";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_585: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 585";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_586: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 586";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_587: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 587";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_588: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 588";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_589: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 589";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_590: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 590";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_591: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 591";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_592: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 592";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_593: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 593";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_594: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 594";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_595: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 595";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_596: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 596";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_597: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 597";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_598: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 598";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_599: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 599";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_600: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 600";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_601: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 601";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_602: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 602";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_603: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 603";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_604: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 604";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_605: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 605";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_606: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 606";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_607: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 607";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_608: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 608";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_609: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 609";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_610: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 610";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_611: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 611";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_612: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 612";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_613: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 613";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_614: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 614";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_615: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 615";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_616: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 616";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_617: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 617";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_618: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 618";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_619: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 619";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_620: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 620";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_621: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 621";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_622: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 622";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_623: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 623";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_624: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 624";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_625: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 625";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_626: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 626";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_627: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 627";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_628: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 628";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_629: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 629";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_630: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 630";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_631: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 631";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_632: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 632";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_633: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 633";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_634: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 634";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_635: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 635";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_636: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 636";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_637: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 637";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_638: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 638";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_639: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 639";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_640: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 640";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_641: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 641";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_642: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 642";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_643: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 643";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_644: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 644";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_645: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 645";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_646: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 646";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_647: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 647";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_648: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 648";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_649: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 649";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_650: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 650";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_651: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 651";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_652: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 652";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_653: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 653";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_654: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 654";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_655: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 655";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_656: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 656";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_657: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 657";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_658: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 658";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_659: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 659";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_660: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 660";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_661: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 661";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_662: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 662";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_663: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 663";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_664: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 664";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_665: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 665";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_666: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 666";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_667: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 667";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_668: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 668";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_669: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 669";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_670: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 670";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_671: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 671";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_672: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 672";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_673: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 673";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_674: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 674";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_675: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 675";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_676: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 676";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_677: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 677";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_678: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 678";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_679: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 679";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_680: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 680";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_681: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 681";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_682: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 682";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_683: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 683";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_684: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 684";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_685: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 685";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_686: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 686";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_687: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 687";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_688: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 688";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_689: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 689";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_690: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 690";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_691: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 691";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_692: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 692";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_693: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 693";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_694: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 694";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_695: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 695";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_696: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 696";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_697: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 697";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_698: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 698";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_699: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 699";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_700: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 700";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_701: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 701";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_702: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 702";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_703: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 703";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_704: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 704";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_705: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 705";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_706: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 706";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_707: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 707";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_708: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 708";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_709: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 709";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_710: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 710";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_711: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 711";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_712: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 712";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_713: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 713";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_714: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 714";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_715: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 715";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_716: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 716";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_717: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 717";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_718: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 718";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_719: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 719";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_720: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 720";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_721: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 721";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_722: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 722";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_723: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 723";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_724: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 724";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_725: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 725";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_726: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 726";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_727: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 727";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_728: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 728";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_729: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 729";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_730: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 730";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_731: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 731";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_732: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 732";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_733: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 733";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_734: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 734";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_735: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 735";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_736: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 736";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_737: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 737";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_738: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 738";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_739: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 739";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_740: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 740";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_741: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 741";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_742: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 742";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_743: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 743";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_744: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 744";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_745: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 745";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_746: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 746";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_747: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 747";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_748: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 748";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_749: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 749";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_750: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 750";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_751: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 751";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_752: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 752";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_753: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 753";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_754: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 754";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_755: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 755";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_756: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 756";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_757: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 757";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_758: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 758";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_759: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 759";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_760: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 760";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_761: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 761";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_762: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 762";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_763: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 763";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_764: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 764";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_765: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 765";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_766: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 766";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_767: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 767";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_768: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 768";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_769: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 769";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_770: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 770";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_771: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 771";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_772: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 772";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_773: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 773";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_774: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 774";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_775: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 775";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_776: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 776";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_777: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 777";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_778: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 778";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_779: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 779";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_780: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 780";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_781: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 781";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_782: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 782";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_783: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 783";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_784: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 784";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_785: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 785";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_786: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 786";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_787: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 787";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_788: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 788";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_789: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 789";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_790: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 790";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_791: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 791";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_792: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 792";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_793: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 793";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_794: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 794";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_795: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 795";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_796: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 796";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_797: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 797";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_798: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 798";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_799: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 799";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_800: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 800";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_801: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 801";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_802: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 802";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_803: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 803";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_804: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 804";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_805: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 805";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_806: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 806";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_807: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 807";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_808: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 808";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_809: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 809";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_810: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 810";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_811: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 811";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_812: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 812";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_813: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 813";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_814: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 814";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_815: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 815";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_816: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 816";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_817: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 817";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_818: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 818";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_819: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 819";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_820: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 820";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_821: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 821";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_822: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 822";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_823: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 823";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_824: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 824";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_825: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 825";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_826: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 826";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_827: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 827";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_828: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 828";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_829: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 829";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_830: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 830";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_831: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 831";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_832: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 832";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_833: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 833";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_834: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 834";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_835: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 835";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_836: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 836";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_837: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 837";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_838: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 838";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_839: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 839";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_840: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 840";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_841: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 841";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_842: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 842";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_843: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 843";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_844: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 844";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_845: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 845";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_846: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 846";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_847: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 847";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_848: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 848";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_849: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 849";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_850: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 850";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_851: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 851";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_852: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 852";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_853: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 853";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_854: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 854";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_855: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 855";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_856: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 856";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_857: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 857";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_858: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 858";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_859: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 859";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_860: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 860";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_861: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 861";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_862: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 862";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_863: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 863";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_864: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 864";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_865: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 865";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_866: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 866";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_867: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 867";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_868: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 868";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_869: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 869";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_870: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 870";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_871: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 871";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_872: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 872";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_873: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 873";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_874: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 874";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_875: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 875";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_876: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 876";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_877: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 877";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_878: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 878";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_879: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 879";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_880: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 880";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_881: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 881";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_882: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 882";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_883: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 883";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_884: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 884";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_885: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 885";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_886: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 886";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_887: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 887";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_888: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 888";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_889: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 889";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_890: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 890";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_891: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 891";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_892: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 892";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_893: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 893";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_894: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 894";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_895: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 895";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_896: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 896";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_897: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 897";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_898: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 898";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_899: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 899";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_900: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 900";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_901: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 901";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_902: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 902";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_903: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 903";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_904: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 904";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_905: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 905";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_906: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 906";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_907: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 907";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_908: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 908";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_909: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 909";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_910: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 910";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_911: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 911";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_912: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 912";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_913: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 913";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_914: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 914";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_915: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 915";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_916: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 916";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_917: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 917";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_918: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 918";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_919: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 919";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_920: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 920";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_921: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 921";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_922: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 922";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_923: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 923";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_924: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 924";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_925: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 925";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_926: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 926";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_927: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 927";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_928: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 928";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_929: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 929";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_930: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 930";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_931: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 931";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_932: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 932";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_933: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 933";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_934: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 934";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_935: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 935";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_936: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 936";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_937: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 937";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_938: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 938";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_939: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 939";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_940: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 940";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_941: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 941";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_942: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 942";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_943: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 943";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_944: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 944";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_945: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 945";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_946: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 946";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_947: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 947";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_948: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 948";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_949: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 949";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_950: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 950";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_951: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 951";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_952: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 952";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_953: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 953";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_954: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 954";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_955: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 955";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_956: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 956";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_957: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 957";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_958: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 958";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_959: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 959";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_960: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 960";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_961: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 961";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_962: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 962";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_963: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 963";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_964: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 964";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_965: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 965";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_966: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 966";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_967: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 967";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_968: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 968";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_969: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 969";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_970: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 970";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_971: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 971";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_972: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 972";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_973: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 973";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_974: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 974";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_975: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 975";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_976: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 976";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_977: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 977";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_978: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 978";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_979: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 979";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_980: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 980";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_981: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 981";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_982: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 982";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_983: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 983";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_984: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 984";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_985: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 985";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_986: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 986";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_987: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 987";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_988: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 988";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_989: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 989";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_990: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 990";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_991: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 991";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_992: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 992";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_993: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 993";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_994: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 994";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_995: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 995";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_996: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 996";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_997: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 997";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_998: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 998";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_999: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 999";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
    class SiP_radio_us_prc6_ind_1000: SiP_radio_us_prc6_ind
    {
        displayName = "AN/PRC-6 1000";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
        tf_prototype = 0;
        tf_radio = 1;
    };
};
