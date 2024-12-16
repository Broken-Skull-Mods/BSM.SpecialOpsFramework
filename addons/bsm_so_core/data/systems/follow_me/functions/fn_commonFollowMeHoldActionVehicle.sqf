// #include "\A3\Missions_F_Oldman\Systems\defines\escortAIDefines.inc";
// params["_vehicle", ["_toggleHoldAction", true], ["_codeOnEnd", {}], ["_toggleOn", true]];
// if (!_toggleHoldAction) exitWith {
// 	[_vehicle, false] call SpecOps_fnc_escortAIVehicle;
// 	[_vehicle, _vehicle getVariable "_idHoldAction"] call BIS_fnc_holdActionRemove;
// 	_vehicle setVariable ["_idHoldAction", nil];
// 	player setVariable ["_vehicleToggle", nil];
// 	// private _idDeletedHandler = _unit getVariable ["_idDeletedHandler", -1];
// 	// if (_idDeletedHandler > -1) then { _unit removeEventHandler ["Deleted", _idDeletedHandler]; };
// 	// _unit setVariable ["_idDeletedHandler", nil];
// 	true
// };
// private _idHoldAction = ESCORT_AI_HOLDACTION(_vehicle, "true", "true", SpecOps_fnc_escortAIVehicle, SpecOps_fnc_holdActionVehicle, _toggleOn, {}, false);
// _vehicle setVariable ["_idHoldAction", _idHoldAction];
// player setVariable ["_vehicleToggle", _toggleOn];