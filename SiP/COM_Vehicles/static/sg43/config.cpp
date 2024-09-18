class cfgPatches
{
	class SiP_Patch_sg43_static
	{
		addonRootClass = "SiP_Patch_Communist_vehicles";
		requiredAddons[] = 
		{
			"static_f_vietnam",
			"static_f_vietnam_c",
			"static_f_vietnam_03",
			"static_f_vietnam_03_c",
			"weapons_v_f_vietnam_03"
		};
		units[] = 
		{
			"SiP_sg43_high",
			"SiP_KPA_sg43_high",
			"SiP_PVA_w_sg43_high",
			"SiP_sg43_low",
			"SiP_KPA_sg43_low",
			"SiP_PVA_w_sg43_low"
		};
		weapons[] = {"SiP_sg43_weapon"};
	};
};

class cfgWeapons
{
	class vn_pk_v_01;
	class vn_sgm_v_01: vn_pk_v_01
	{
		class FullAuto;
		class AImode1;
		class AImode2;
		class AImode3;
		class AImode4;
	};

	class SiP_sg43_weapon: vn_sgm_v_01
	{
		displayName = "SG-43";
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"",0.562341,1,10};
				closure2[] = {"",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPE_fg42_Shot_SoundSet",
					"vn_762x39mm_lmg_tails_soundset",
					"SPE_fg42_stereoLayer_SoundSet"
				};
			};
		};
		class AImode1: AImode1
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"",0.562341,1,10};
				closure2[] = {"",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPE_fg42_Shot_SoundSet",
					"vn_762x39mm_lmg_tails_soundset",
					"SPE_fg42_stereoLayer_SoundSet"
				};
			};
		};
		class AImode2: AImode2
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPE_fg42_Shot_SoundSet",
					"vn_762x39mm_lmg_tails_soundset",
					"SPE_fg42_stereoLayer_SoundSet"
				};
			};
		};
		class AImode3: AImode3
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPE_fg42_Shot_SoundSet",
					"vn_762x39mm_lmg_tails_soundset",
					"SPE_fg42_stereoLayer_SoundSet"
				};
			};
		};
		class AImode4: AImode4
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPE_fg42_Shot_SoundSet",
					"vn_762x39mm_lmg_tails_soundset",
					"SPE_fg42_stereoLayer_SoundSet"
				};
			};
		};
	};
};

class cfgVehicles
{
	class StaticMGWeapon;
	class vn_static_sgm_base: StaticMGWeapon
	{
		class AnimationSources;
	};
	class vn_static_sgm_high_base: vn_static_sgm_base
	{
		class Turrets
		{
			class MainTurret;
		};
		class AnimationSources: AnimationSources
		{
			class mg1_reload;
		};
	};

	class vn_static_sgm_low_base: vn_static_sgm_high_base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};

	class SiP_sg43_high_base: vn_static_sgm_high_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SiP_sg43_weapon"};
				magazines[] = {"vn_sgm_v_250_mag","vn_sgm_v_250_mag","vn_sgm_v_250_mag","vn_sgm_v_250_mag","vn_sgm_v_250_mag"};
				ejectDeadGunner = 1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class mg1_reload
			{
				source = "reload";
				weapon = "SiP_sg43_weapon";
			};
			class mg1_reloadmagazine: mg1_reload
			{
				source = "reloadmagazine";
			};
			class mg1_revolving: mg1_reload
			{
				source = "revolving";
			};
			class mg1_muzzleflash_rot: mg1_reload
			{
				source = "ammoRandom";
			};
			class ladder_fold
			{
				displayName = "$STR_VN_STATIC_SGM_LADDERSIGHT_FOLD_DN";
				author = "$STR_VN_AUTHORSAVAGE";
				dlc = "VN";
				appId = 1227700;
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
			class hide_spider_sight
			{
				displayName = "$STR_VN_STATIC_SGM_SPIDERSIGHT_HIDE_DN";
				author = "$STR_VN_AUTHORSAVAGE";
				dlc = "VN";
				appId = 1227700;
				source = "user";
				animPeriod = 0.0001;
				initPhase = 1;
			};
		};
	};

	class SiP_sg43_low_base: vn_static_sgm_low_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SiP_sg43_weapon"};
				magazines[] = {"vn_sgm_v_250_mag","vn_sgm_v_250_mag","vn_sgm_v_250_mag","vn_sgm_v_250_mag","vn_sgm_v_250_mag"};
				ejectDeadGunner = 1;
				gunnerAction = "gunner_hmg02_low";
			};
		};
		class AnimationSources: AnimationSources
		{
			class mg1_reload
			{
				weapon = "SiP_sg43_weapon";
				source = "reload";
			};
			class mg1_reloadmagazine: mg1_reload
			{
				source = "reloadmagazine";
			};
			class mg1_revolving: mg1_reload
			{
				source = "revolving";
			};
			class mg1_muzzleflash_rot: mg1_reload
			{
				source = "ammoRandom";
			};
		};
	};

	class SiP_sg43_high: SiP_sg43_high_base
	{
		displayName = "SG-43 Goryunov (High)";
		author = "Letlev";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "SiP_PVA";
		editorCategory = "SiP_PVA_Editor_Category";
		editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
		crew = "SiP_PVA_gunner";
		typicalCargo[] = {"SiP_PVA_gunner"};
	};
	class SiP_KPA_sg43_high: SiP_sg43_high
	{
		faction = "SiP_KPA";
		editorCategory = "SiP_KPA_Editor_Category";
		crew = "SiP_KPA_gunner";
	};
	class SiP_PVA_w_sg43_high: SiP_sg43_high
	{
		faction = "SiP_PVA_w";
		editorCategory = "SiP_PVA_w_Editor_Category";
		crew = "SiP_PVA_gunner_w";
	};

	class SiP_sg43_low: SiP_sg43_low_base
	{
		displayName = "SG-43 Goryunov (Low)";
		author = "Letlev";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "SiP_PVA";
		editorCategory = "SiP_PVA_Editor_Category";
		editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
		crew = "SiP_PVA_gunner";
		typicalCargo[] = {"SiP_PVA_gunner"};
	};
	class SiP_KPA_sg43_low: SiP_sg43_low
	{
		faction = "SiP_KPA";
		editorCategory = "SiP_KPA_Editor_Category";
		crew = "SiP_KPA_gunner";
	};
	class SiP_PVA_w_sg43_low: SiP_sg43_low
	{
		faction = "SiP_PVA_w";
		editorCategory = "SiP_PVA_w_Editor_Category";
		crew = "SiP_PVA_gunner_w";
	};
};
