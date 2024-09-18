class cfgPatches
{
	class SiP_Patch_Communist_statics_antiair
	{
		addonRootClass = "SiP_Patch_Communist_vehicles";
		requiredAddons[] = 
		{
			"static_f_vietnam_02",
			"static_f_vietnam_02_c",
			"weapons_v_f_vietnam"
		};
		units[] = 
		{
			"SiP_61k_pva",
			"SiP_61k_pva_w"
		};
		weapons[] =
		{
			"SiP_61k_37mm_static_weapon"
		};
		magazines[] = 
		{
			"SiP_61k_37mm_static_magazine"
		};
	};
};

class cfgWeapons
{
	class LIB_61k;
	class SiP_61k_37mm_static_weapon: LIB_61k
	{
		magazines[] = {"SiP_61k_37mm_static_magazine"};
	};
};

class CfgMagazines
{
	class LIB_5x_61k;
	class SiP_61k_37mm_static_magazine: LIB_5x_61k
	{
		ammo = "vn_40x311";
	};
};

class cfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticCannon: StaticWeapon{};

	class LIB_StaticCannon_base: StaticCannon
	{
		class ViewOptics;
		class HitPoints;
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide;
					class Narrow;
				};
			};
		};
	};
	class LIB_61k_base: LIB_StaticCannon_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn: OpticsIn
				{
					class Wide;
					class Narrow;
				};
			};
		};
		class AnimationSources: AnimationSources{};
	};

	class SiP_61k_base: LIB_61k_base
	{
		scope = 1;
		scopeCurator = 1;
		author = "Letlev";
		displayName = "61k AA Gun";
		editorSubcategory = "SiP_AntiAir_Editor_Subcategory";
		vehicleClass = "SiP_AntiAir_vehicle_class";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SiP_61k_37mm_static_weapon"};
				magazines[] = 
				{
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine",
					"SiP_61k_37mm_static_magazine"
				};
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
				minElev = -12;
				maxElev = 90;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerAction = "lib_61k_Gunner";
				gunnerInAction = "lib_61k_Gunner";
				hideWeaponsGunner = 1;
				gunnerForceOptics = 0;
				maxHorizontalRotSpeed = 0.45;
				maxVerticalRotSpeed = 0.45;
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_61k.p3d";
					};
					class Narrow: Narrow
					{
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_61k.p3d";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class LIB_61k_reload_weapon_state
			{
				source = "reload";
				weapon = "SiP_61k_37mm_static_weapon";
			};
			class LIB_61k_reload_magazine_state: LIB_61k_reload_weapon_state
			{
				source = "reloadmagazine";
			};
			class LIB_61k_count_magazine_state: LIB_61k_reload_weapon_state
			{
				source = "revolving";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SiP_61k_37mm_static_weapon";
				Raw = 1;
			};
			class MainTurret_Hide
			{
				source = "user";
				animPeriod = 0;
			};
			class MainGun_Hide: MainTurret_Hide{};
			class left_stop_Hide: MainTurret_Hide{};
			class right_stop_Hide: MainTurret_Hide{};
			class weapon_holder_Hide: MainTurret_Hide{};
			class wheel_1_1_Hide: MainTurret_Hide{};
			class wheel_1_2_Hide: MainTurret_Hide{};
			class wheel_2_1_Hide: MainTurret_Hide{};
			class wheel_2_2_Hide: MainTurret_Hide{};
			class left_stop_rotate
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class right_stop_rotate: left_stop_rotate{};
			class chassis_translate: left_stop_rotate{};
			class left_lift_translate: left_stop_rotate{};
			class right_lift_translate: left_stop_rotate{};
			class front_lift_translate: left_stop_rotate{};
			class back_lift_translate: left_stop_rotate{};
			class front_susp_rotate: left_stop_rotate{};
			class back_susp_rotate: front_susp_rotate{};
			class weapon_holder_rotate: left_stop_rotate{};
			class front_susp_2_rotate: left_stop_rotate{};
			class wheel_1_1: MainTurret_Hide
			{
				animPeriod = 0.01;
			};
			class wheel_2_1: wheel_1_1{};
			class wheel_1_2: wheel_1_1{};
			class wheel_2_2: wheel_1_1{};
		};
	};

	class SiP_61k_pva: SiP_61k_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "SiP_PVA";
		editorCategory = "SiP_PVA_Editor_Category";
		crew = "SiP_PVA_gunner";
		typicalCargo[] = {"SiP_PVA_gunner","SiP_PVA_gunner","SiP_PVA_gunner"};
	};
	class SiP_61k_pva_w: SiP_61k_pva
	{
		faction = "SiP_PVA_w";
		editorCategory = "SiP_PVA_w_Editor_Category";
		crew = "SiP_PVA_gunner_w";
		typicalCargo[] = {"SiP_PVA_gunner_w","SiP_PVA_gunner_w","SiP_PVA_gunner_w"};
	};
};