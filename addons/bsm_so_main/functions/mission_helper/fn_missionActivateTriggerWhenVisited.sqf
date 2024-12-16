params ["_thisCondition", ["_codename", nil]];
/*
	[this] call SpecOps_fnc_missionActivateTriggerWhenVisited;
	[this, "codename"] call SpecOps_fnc_missionActivateTriggerWhenVisited;
	[this, ["codename", "codename]] call SpecOps_fnc_missionActivateTriggerWhenVisited;
*/
if (isNil "_codename") exitWith { _thisCondition; };
if (typename _codename == "STRING") exitWith {
	_thisCondition && (missionNamespace getVariable [format["%1Visited", _codename], false]);
};

if (typename _codename == "ARRAY") exitWith {
	private _isOK = true;
	{ 
		if (!(missionNamespace getVariable [format["%1Visited", _x], false])) exitWith { _isOK = false; }; 
	} forEach (_codename);
	_thisCondition && _isOK;
};

_thisCondition;
