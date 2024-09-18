params ["_display"];

private _group = _display displayCtrl 170;
private _bar = _group controlsGroupCtrl 180;

private _vehicle = vehicle player;
["vn_armor_f_vietnam_fnc_type63_renderHandler","onEachFrame", {
	params ["_vehicle", "_bar"];
	if (vehicle player != _vehicle || player != gunner _vehicle) exitWith {
		["vn_armor_f_vietnam_fnc_type63_renderHandler","onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};
	private _zeroing = currentZeroing player;
	private _magazine = currentMagazine _vehicle;
	private _ranges = switch (_magazine) do {
		case "SiP_20rnd_BR365K_AP_mag";
		case "SiP_20rnd_O365K_HE_mag": {
			[16.18, 7.5, 3400] // HE (scale 2)
		};
		case "SiP_10rnd_BR367P_APCR_mag": {
			[16.2, 8.4, 2000] // ACPR (scale 1)
		};
		default {[16.18, 7.5, 3400]};
	};
	_ranges params ["_minRange", "_maxRange", "_maxZero"];
	
	private _rangeMultiplier = (_minRange - _maxRange) / _maxZero;
	private _barLevel = _minRange - (_rangeMultiplier * _zeroing);

	_bar ctrlSetPositionY (_barLevel * (0.025 * SafezoneH));
	private _visibility = if (getObjectFov _vehicle < 0.125) then [{0}, {1}];
	_bar ctrlSetFade _visibility; // using setFade because ctrlShow wasn't working
	_bar ctrlCommit 0;
}, [_vehicle, _bar]] call BIS_fnc_addStackedEventHandler;