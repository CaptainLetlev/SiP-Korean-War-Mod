class cfgPatches
{
	class SiP_Patch_misc
	{
		Name = " Suicide Is Painless - Korean War Mod - Misc";
		Author = "Letlev";
		requiredAddons[] = 
		{
			"music_f_vietnam_c"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgSounds
{
	class vn_drmm_song_os_01
	{
		name = "Suicide is Painless";
		titles[] = {};
		sound[] = {"SiP\Misc\music\SuicideIsPainless.ogg","+5db",1};
		duration = 51;
		drm_audio = 1;
		drm_side = 3;
	};
	class vn_drmm_song_os_02: vn_drmm_song_os_01
	{
		name = "Rotation Blues";
		sound[] = {"SiP\Misc\music\Rotation_Blues.ogg","+5db",1};
		duration = 139;
	};
	class vn_drmm_song_os_03: vn_drmm_song_os_01
	{
		name = "Tokyo Shoe Shine Boy";
		sound[] = {"SiP\Misc\music\TokyoShoeShineBoy.ogg","+5db",1};
		duration = 180;
	};
	class vn_drmm_song_os_04: vn_drmm_song_os_01
	{
		name = "My Blue Heaven";
		sound[] = {"SiP\Misc\music\MyBlueHeaven.ogg","+5db",1};
		duration = 122;
	};
	class vn_drmm_song_os_05: vn_drmm_song_os_01
	{
		name = "When I Get Back";
		sound[] = {"SiP\Misc\music\WhenIGetBack.ogg","+5db",1};
		duration = 134;
	};
	class vn_drmm_song_os_06: vn_drmm_song_os_01
	{
		name = "Uncle Sam Called My Number";
		sound[] = {"SiP\Misc\music\UncleSamCalledMyNumber.ogg","+5db",1};
		duration = 125;
	};
	class vn_drmm_song_os_07: vn_drmm_song_os_01
	{
		name = "Goodbye Maria";
		sound[] = {"SiP\Misc\music\Goodbye_Maria.ogg","+5db",1};
		duration = 139;
	};
	class vn_drmm_song_os_08: vn_drmm_song_os_01
	{
		name = "The Voice of Free America";
		sound[] = {"SiP\Misc\music\TheVoiceofFreeAmerica.ogg","+5db",1};
		duration = 137;
	};
	class vn_drmm_song_os_09: vn_drmm_song_os_01
	{
		name = "A Heartsick Soldier on Heartbreak Ridge";
		sound[] = {"SiP\Misc\music\AHeartsickSoldieronHeartbreakRidge.ogg","+5db",1};
		duration = 183;
	};
	class vn_drmm_song_os_10: vn_drmm_song_os_01
	{
		name = "Brother in Korea";
		sound[] = {"SiP\Misc\music\BrotherinKorea.ogg","+5db",1};
		duration = 179;
	};
	class vn_drmm_song_os_11: vn_drmm_song_os_01
	{
		name = "Korea Here We Come";
		sound[] = {"SiP\Misc\music\KoreaHereWeCome.ogg","+5db",1};
		duration = 148;
	};
	class vn_drmm_song_os_12: vn_drmm_song_os_01
	{
		name = "애국가 (Aegukka)";
		sound[] = {"SiP\Misc\music\Aegukga.ogg","+5db",1};
		duration = 37;
	};
	class vn_drmm_song_os_13: vn_drmm_song_os_01
	{
		name = "아리랑 (Arirang)";
		sound[] = {"SiP\Misc\music\Arirang.ogg","+5db",1};
		duration = 177;
	};
	class vn_drmm_song_os_14: vn_drmm_song_os_01
	{
		name = "Seoul City Sue";
		sound[] = {"SiP\Misc\music\SeoulCitySue.ogg","+5db",1};
		duration = 78;
	};
};