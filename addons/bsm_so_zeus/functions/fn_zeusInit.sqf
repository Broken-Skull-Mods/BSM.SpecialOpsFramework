

if (!hasInterface && isDedicated) exitWith {};



missionNamespace setVariable ["bsm_zeus_rc_cooldown", false];


["Special Ops Framework", "bsm_keybind_zeus_rc", ["Zeus Refresh Curator", "Should be same as Zeus Key"], { }, {
    if ((missionNamespace getVariable ["bsm_zeus_rc_cooldown", false]) || { isNull (getAssignedCuratorLogic player)} ) exitWith {};
    [] spawn {
		missionNamespace setVariable ["bsm_zeus_rc_cooldown", true];
		uiSleep 1;
		missionNamespace setVariable ["bsm_zeus_rc_cooldown", false];
	};
    [] remoteExec ["SpecOps_fnc_updateZeusCurator", 2];
}, [0x15, [false, false, false]]] call CBA_fnc_addKeybind;


["Special Ops Framework", "bsm_keybind_zeus_lockdown", ["Apply Lockdown", "Will attempt to close and lock all the door of the building zeus is looking at."], { }, {
    if (isNull (getAssignedCuratorLogic player)) exitWith { ["Only Zeus can perform this action."] call SpecOps_fnc_zeusLogPrint; };
	if (isNull cursorObject) exitWith { ["Not looking at building"] call SpecOps_fnc_zeusLogPrint; };
	private _hasDoors = (getNumber (configfile >> "CfgVehicles" >> (typeof cursorObject) >> "numberOfDoors")) > 0;
	if (!_hasDoors) exitWith { ["No Doors"] call SpecOps_fnc_zeusLogPrint;  };
	_hasPerformed = false;
	for "_i" from 0 to 30 do {
		if ((cursorObject animationPhase format ["Door_%1_rot", _i]) >= 0) then {
 			cursorObject animate [format ["Door_%1_rot", _i], 0]; 
			cursorObject setVariable [format ["bis_disabled_door_%1", _i], 1, true];
			_hasPerformed = true;
		};
	};
	if (_hasPerformed) then {
		["Lockdown Initiated!"] call SpecOps_fnc_zeusLogPrint;
	};
}] call CBA_fnc_addKeybind;

["Special Ops Framework", "bsm_keybind_zeus_liftlockdown", ["Lift Lockdown", "Will attempt to open and unlock all the door of the building zeus is looking at."], { }, {
    if (isNull (getAssignedCuratorLogic player) ) exitWith { ["Only Zeus can perform this action."] call SpecOps_fnc_zeusLogPrint; };
	if (isNull cursorObject) exitWith { ["Not looking at building"] call SpecOps_fnc_zeusLogPrint; };
	private _hasDoors = (getNumber (configfile >> "CfgVehicles" >> (typeof cursorObject) >> "numberOfDoors")) > 0;
	if (!_hasDoors) exitWith { ["No Doors"] call SpecOps_fnc_zeusLogPrint; };
	_hasPerformed = false;
	for "_i" from 0 to 30 do {
		if ((cursorObject animationPhase format ["Door_%1_rot", _i]) >= 0) then {
 			cursorObject animate [format ["Door_%1_rot", _i], 1]; 
			cursorObject setVariable [format ["bis_disabled_door_%1", _i], 0, true];
			_hasPerformed = true;
		};
	};
	if (_hasPerformed) then {
		["Lockdown lifted!"] call SpecOps_fnc_zeusLogPrint;
	};
}] call CBA_fnc_addKeybind;
