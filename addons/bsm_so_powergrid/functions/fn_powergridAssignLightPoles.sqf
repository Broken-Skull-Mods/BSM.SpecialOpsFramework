if (!isServer || is3DEN) exitWith {};
[] spawn {
	private _layout = missionNamespace getVariable ["bms_so_powergrid_layout", []];
	if (count _layout <= 0) exitWith {};

	waitUntil {sleep 1; !isNil "bsm_so_powrgrid_marker_enabled"};



	private _arr = [
		"Land_LampStreet_F", "Land_LampStreet_small_F", "Land_LampShabby_F", "Land_LampHarbour_F", 
		"Land_LampHalogen_F", "Land_LampDecor_F", "Land_LampAirport_F", "Land_LampIndustrial_01_F", 
		"Land_LampIndustrial_02_F", "Land_LampStreet_02_double_F", "Land_LampStreet_02_amplion_F", "Land_LampStreet_02_triple_F", 
		"Land_LampStreet_02_F", "Land_PowerLine_02_pole_small_lamp_F", "Land_fs_roof_F", "Land_FuelStation_01_roof_malevil_F", 
		"Land_FuelStation_01_roof_F", "Land_FuelStation_02_roof_F", "Land_PowerPoleWooden_L_F", "Land_PowerLine_01_pole_lamp_F",
		"Land_FuelStation_02_roof_lxWS", "Land_Lampa_sidl"
	];
	private _centerposition = [worldSize / 2, worldsize / 2, 0];
	private _lights = 63 allObjects 0;
	_lights = _lights select { (typeof _x) in _arr };
	private _colors = ["Color5_FD_F", "Color3_FD_F", "Color2_FD_F", "ColorUNKNOWN", "ColorBrown", "ColorPink"];

	private _pwrgrdHackable = missionNamespace getVariable ["bsm_hackable_pwr", []];

	{
		private _layoutArr = _x;
		private _pos = _layoutArr select 0;
		private _areaLayout = _layoutArr select 1;
		private _options = _layoutArr  select 2;
		private _affectWholeMap = (_options select 0) == 1;
		private _canHack = (_options select 1) == 1;
		private _hackRange = (_options select 2);
		private _hackSpeed = (_options select 3);
		private _canDestroy = (_options select 4) == 1;
		private _colorName = (_options select 6);
		private _objectType = (_options select 5);
		private _areaOfAffect = _layoutArr select 3;
		private _transformer = nearestObject [_pos, _objectType];



		if (isNull _transformer) then { continue; };
		
		private _color = "Color6_FD_F";
		if (count _colors > 0) then {_color = selectRandom _colors; _colors = _colors - [_color]; };

		private _markerName = hashValue (format ["powergrid_%1", getPos _transformer]);
		_transformer setVariable ["bsm_power_name", _markerName];
		_markerName = createMarkerLocal [_markerName, getPos _transformer];
		_markerName setMarkerShapeLocal "ICON";
		_markerName setMarkerTypeLocal "TFT_SM_TARGETING_OL";
		_markerName setMarkerTextLocal "Power Station";
		_markerName setMarkerColor _color;
		_markerName setMarkerDrawPriority 3;

		private _linkedLights = [];
		{
			private _light = _x;
			if (_affectWholeMap && bsm_so_powrgrid_marker_enabled) then {
				private _markerLight = hashValue (format ["light_%1", getPos _light]);
				_markerLight = createMarkerLocal [_markerLight, getPos _light];
				_markerLight setMarkerShapeLocal "ICON";
				_markerLight setMarkerTypeLocal "TFT_SM_LIGHT_BULB_OL";
				_markerLight setMarkerColorLocal _color;
				_markerLight setMarkerSize [0.2, 0.2];
				_markerLight setMarkerDrawPriority 3;
			};


			if (!_affectWholeMap) then {
				{
					private _area = _x;
					private _fixedArea = [_area select 0, _area select 1, _area select 2, _area select 3, (_area select 4) == "true"];
					if (_light inArea _fixedArea) then {
						_linkedLights pushBackUnique _light;
						if (bsm_so_powrgrid_marker_enabled) then {
							private _markerLight = hashValue (format ["light_%1", getPos _light]);
							_markerLight = createMarkerLocal [_markerLight, getPos _light];
							_markerLight setMarkerShapeLocal "ICON";
							_markerLight setMarkerTypeLocal "TFT_SM_LIGHT_BULB_OL";
							_markerLight setMarkerColorLocal _color;
							_markerLight setMarkerSize [0.2, 0.2];
							_markerLight setMarkerDrawPriority 3;
						};
					};
				} forEach (_areaOfAffect);
			}else{
				_linkedLights pushBackUnique _light;
			};

		} forEach (_lights);



		_linkedLights = [_linkedLights, [], { _x distance _transformer }, "ASCEND"] call BIS_fnc_sortBy;
		_transformer setVariable ["lampLinked", _linkedLights];
		// diag_log format ["SPEC-OPS (SpecOps_fnc_loadPowerline) : _transformer %1 | %4 | %2 | %3", _transformer, getPos _transformer, _linkedLights, count _layout];
		_transformer setVariable ["bsm_can_destroy", _canDestroy];

		if (_canHack) then { _pwrgrdHackable pushBack [_transformer, _hackRange, _hackSpeed]; };

	} forEach (_layout);
	missionNamespace setVariable ["bsm_hackable_pwr", _pwrgrdHackable, true];


	missionNamespace setVariable ["isPowerlineReady", true, true];






};