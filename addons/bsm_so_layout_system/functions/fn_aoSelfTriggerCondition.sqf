params ["_thistrigger", "_this", "_thisList"];
/*
	[thisTrigger, this] call SpecOps_fnc_aoSelfTriggerCondition;

*/

private _theLogic = _thistrigger getVariable ["theLogic", objNull];
private _aircraftOnly = _theLogic getVariable ["SpecOps_ActivateForAircraftOnly", false];
private _theAOName = _thistrigger getVariable ["theAOName", ""];
private _theVisitCondition = _thistrigger getVariable ["theVisitCondition", []];
// diag_log format ["The AO name is %1 | %2", _theAOName, _thistrigger];
// diag_log format ["The AO Conditions are %1 | %2", _theVisitCondition, _this];
private _active = [_theAOName, true, _this, _theVisitCondition] call SpecOps_fnc_missionTriggerVisitCondition;
// diag_log format ["The AO _active %1", _active];
private _actived = true;
if (_aircraftOnly) then {
	_actived = false;
	{
		
		if ((_x isKindOf "Air") && { isPlayer (driver _x) }) exitWith {
			_actived = true;
		};
	} forEach (_thisList);
};
_actived && _active; // Check trigger and custom condition true.