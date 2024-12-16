params ["_areaCode", "_setVisit", ["_triggerThisCondition", true], ["_visit", nil]];
/*
	["exfiltration", true, this] call SpecOps_fnc_missionTriggerVisitCondition;
	["exfiltration", true, this, ["objective_1"]] call SpecOps_fnc_missionTriggerVisitCondition;
*/

private _bool = false;
if (!isNil "_visit") then {
	_bool = ([_triggerThisCondition, _visit] call SpecOps_fnc_missionActivateTriggerWhenVisited);
}else{
	_bool = ([_triggerThisCondition] call SpecOps_fnc_missionActivateTriggerWhenVisited);
};

if (_bool && _setVisit) then {
	missionNamespace setVariable [format["%1Visited", _areaCode], true];	
};

_bool;

// [_triggerThisCondition, ["typhoonVisited", "blackjackVisited", "plagueVisited"]] call SpecOps_fnc_missionActivateTriggerWhenVisited