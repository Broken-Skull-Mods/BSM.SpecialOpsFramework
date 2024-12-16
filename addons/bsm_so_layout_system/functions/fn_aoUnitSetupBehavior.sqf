params ["_logic", "_units"];
// _logic = ee;
// _units = _logic getVariable ["AO_Patrol_Enemy_Units", []];
private _skillBehavior = _logic getVariable ["SpecOps_SkillRandomization", 5];
private _skillGeneralMin = _logic getVariable ["SpecOps_GroupSKillGeneral", 0.5];
private _skillGeneralMax = _logic getVariable ["SpecOps_GroupSKillGeneral", 0.5];
private _skillCourageMin = _logic getVariable ["SpecOps_GroupSKillCourage", 0.5];
private _skillCourageMax = _logic getVariable ["SpecOps_GroupSKillCourage", 0.5];
private _skillAccuracyMin = _logic getVariable ["SpecOps_GroupSKillAccurancy", 0.5];
private _skillAccuracyMax = _logic getVariable ["SpecOps_GroupSKillAccurancy", 0.5];
private _skillShakeMin = _logic getVariable ["SpecOps_GroupSKillShake", 0.5];
private _skillShakeMax = _logic getVariable ["SpecOps_GroupSKillShake", 0.5];
private _skillAimSpeedMin = _logic getVariable ["SpecOps_GroupSKillAimSpeed", 0.5];
private _skillAimSpeedMax = _logic getVariable ["SpecOps_GroupSKillAimSpeed", 0.5];
private _skillCommandingMin = _logic getVariable ["SpecOps_GroupSKillCommanding", 0.5];
private _skillCommandingMax = _logic getVariable ["SpecOps_GroupSKillCommanding", 0.5];
private _skillEnduranceMin = _logic getVariable ["SpecOps_GroupSKillEndurance", 0.5];
private _skillEnduranceMax = _logic getVariable ["SpecOps_GroupSKillEndurance", 0.5];
private _skillSpotDistanceMin = _logic getVariable ["SpecOps_GroupSKillSpotDistance", 0.5];
private _skillSpotDistanceMax = _logic getVariable ["SpecOps_GroupSKillSpotDistance", 0.5];
private _skillSpotTimeMin = _logic getVariable ["SpecOps_GroupSKillSpotTime", 0.5];
private _skillSpotTimeMax = _logic getVariable ["SpecOps_GroupSKillSpotTime", 0.5];
private _skillReloadSpeedMin = _logic getVariable ["SpecOps_GroupSKillReloadSpeed", 0.5];
private _skillReloadSpeedMax = _logic getVariable ["SpecOps_GroupSKillReloadSpeed", 0.5];
private _ROE = _logic getVariable ["SpecOps_GroupROE", "YELLOW"];
if (isNil "_ROE" || { _ROE == "nil" }) then { _ROE = "YELLOW"; };
private _groupBehaviour = _logic getVariable ["SpecOps_GroupBehavior", "Balanced"];
private _groupBehaviorTable = [];
if (_groupBehaviour == "Careless") then { _groupBehaviorTable append ["Careless", 150]; } else { _groupBehaviorTable append ["Careless", 50]; };
if (_groupBehaviour == "Safe") then { _groupBehaviorTable append ["Safe", 150]; } else { _groupBehaviorTable append ["Safe", 25]; };
if (_groupBehaviour == "Aware") then { _groupBehaviorTable append ["Aware", 150]; } else { _groupBehaviorTable append ["Aware", 50]; };
if (_groupBehaviour == "Combat") then { _groupBehaviorTable append ["Combat", 150]; } else { _groupBehaviorTable append ["Combat", 25]; };
if (_groupBehaviour == "Stealth") then { _groupBehaviorTable append ["Stealth", 150]; } else { _groupBehaviorTable append ["Stealth", 1]; };
selectRandomWeighted _groupBehaviorTable;

if (_skillBehavior != 10) then {
    if (_skillBehavior == 0) then {
        _skillGeneralMin = 0.1; 
        _skillGeneralMax = 0.8;
        
        _skillCourageMin = 0.1; 
        _skillCourageMax = 0.8;
        
        _skillAccuracyMin = 0.1; 
        _skillAccuracyMax = 0.8;
        
        _skillShakeMin = 0.1; 
        _skillShakeMax = 0.8;
        
        _skillAimSpeedMin = 0.1; 
        _skillAimSpeedMax = 0.8;
        
        _skillCommandingMin = 0.1; 
        _skillCommandingMax = 0.8;
        
        _skillEnduranceMin = 0.1; 
        _skillEnduranceMax = 0.8;
        
        _skillSpotDistanceMin = 0.1; 
        _skillSpotDistanceMax = 0.8;
        
        _skillSpotTimeMin = 0.1; 
        _skillSpotTimeMax = 0.8;
        
        _skillReloadSpeedMin = 0.1; 
        _skillReloadSpeedMax = 0.8;
    } else {
        private _skillValue = 0.9;
        if (_skillBehavior == 1) then { _skillValue = 0.9; };
        if (_skillBehavior == 2) then { _skillValue = 0.8; };
        if (_skillBehavior == 3) then { _skillValue = 0.7; };
        if (_skillBehavior == 4) then { _skillValue = 0.6; };
        if (_skillBehavior == 5) then { _skillValue = 0.5; };
        if (_skillBehavior == 6) then { _skillValue = 0.4; };
        if (_skillBehavior == 7) then { _skillValue = 0.3; };
        if (_skillBehavior == 8) then { _skillValue = 0.2; };
        if (_skillBehavior == 9) then { _skillValue = 0.1; };
        _skillGeneralMin = if ((_skillGeneralMin - _skillValue) <= 0.1) then {0.1;} else { (_skillGeneralMin - _skillValue); }; 
        _skillGeneralMax = if ((_skillGeneralMax + _skillValue) >= 1) then {1;} else { (_skillGeneralMax + _skillValue); };
        _skillCourageMin = if ((_skillCourageMin - _skillValue) <= 0.1) then {0.1;} else { (_skillCourageMin - _skillValue); }; 
        _skillCourageMax = if ((_skillCourageMax + _skillValue) >= 1) then {1;} else { (_skillCourageMax + _skillValue); };
        _skillAccuracyMin = if ((_skillAccuracyMin - _skillValue) <= 0.1) then {0.1;} else { (_skillAccuracyMin - _skillValue); };  
        _skillAccuracyMax = if ((_skillAccuracyMax + _skillValue) >= 1) then {1;} else { (_skillAccuracyMax + _skillValue); };
        _skillShakeMin = if ((_skillShakeMin - _skillValue) <= 0.1) then {0.1;} else { (_skillShakeMin - _skillValue); }; 
        _skillShakeMax = if ((_skillShakeMax + _skillValue) >= 1) then {1;} else { (_skillShakeMax + _skillValue); };
        _skillAimSpeedMin = if ((_skillAimSpeedMin - _skillValue) <= 0.1) then {0.1;} else { (_skillAimSpeedMin - _skillValue); };  
        _skillAimSpeedMax = if ((_skillAimSpeedMax + _skillValue) >= 1) then {1;} else { (_skillAimSpeedMax + _skillValue); };
        _skillCommandingMin = if ((_skillCommandingMin - _skillValue) <= 0.1) then {0.1;} else { (_skillCommandingMin - _skillValue); };  
        _skillCommandingMax = if ((_skillCommandingMax + _skillValue) >= 1) then {1;} else { (_skillCommandingMax + _skillValue); };
        _skillEnduranceMin = if ((_skillEnduranceMin - _skillValue) <= 0.1) then {0.1;} else { (_skillEnduranceMin - _skillValue); };  
        _skillEnduranceMax = if ((_skillEnduranceMax + _skillValue) >= 1) then {1;} else { (_skillEnduranceMax + _skillValue); };
        _skillSpotDistanceMin = if ((_skillSpotDistanceMin - _skillValue) <= 0.1) then {0.1;} else { (_skillSpotDistanceMin - _skillValue); }; 
        _skillSpotDistanceMax = if ((_skillSpotDistanceMax + _skillValue) >= 1) then {1;} else { (_skillSpotDistanceMax + _skillValue); };
        _skillSpotTimeMin = if ((_skillSpotTimeMin - _skillValue) <= 0.1) then {0.1;} else { (_skillSpotTimeMin - _skillValue); }; 
        _skillSpotTimeMax = if ((_skillSpotTimeMax + _skillValue) >= 1) then {1;} else { (_skillSpotTimeMax + _skillValue); };
        _skillReloadSpeedMin = if ((_skillReloadSpeedMin - _skillValue) <= 0.1) then {0.1;} else { (_skillReloadSpeedMin - _skillValue); }; 
        _skillReloadSpeedMax = if ((_skillReloadSpeedMax + _skillValue) >= 1) then {1;} else { (_skillReloadSpeedMax + _skillValue); };
    };
};


if (typename _units == "OBJECT") then {
	_x setSKill ["general", ([_skillGeneralMin, _skillGeneralMax] call BIS_fnc_randomNum)];
	_x setSKill ["courage", ([_skillCourageMin, _skillCourageMax] call BIS_fnc_randomNum)];
	_x setSKill ["aimingAccuracy", ([_skillAccuracyMin, _skillAccuracyMax] call BIS_fnc_randomNum)];
	_x setSKill ["aimingShake", ([_skillShakeMin, _skillShakeMax] call BIS_fnc_randomNum)];
	_x setSKill ["aimingSpeed", ([_skillAimSpeedMin, _skillAimSpeedMax] call BIS_fnc_randomNum)];
	_x setSKill ["commanding", ([_skillCommandingMin, _skillCommandingMax] call BIS_fnc_randomNum)];
	_x setSKill ["endurance", ([_skillEnduranceMin, _skillEnduranceMax] call BIS_fnc_randomNum)];
	_x setSKill ["spotDistance", ([_skillSpotDistanceMin, _skillSpotDistanceMax] call BIS_fnc_randomNum)];
	_x setSKill ["spotTime", ([_skillSpotTimeMin, _skillSpotTimeMax] call BIS_fnc_randomNum)];
	_x setSKill ["reloadSpeed", ([_skillReloadSpeedMin, _skillReloadSpeedMax] call BIS_fnc_randomNum)];
	(group _x) setCombatBehaviour (selectRandomWeighted _groupBehaviorTable);
	(group _x) setCombatMode _ROE;
} else {
	private _processedGroups = [];
	{
		_x setSKill ["general", ([_skillGeneralMin, _skillGeneralMax] call BIS_fnc_randomNum)];
		_x setSKill ["courage", ([_skillCourageMin, _skillCourageMax] call BIS_fnc_randomNum)];
		_x setSKill ["aimingAccuracy", ([_skillAccuracyMin, _skillAccuracyMax] call BIS_fnc_randomNum)];
		_x setSKill ["aimingShake", ([_skillShakeMin, _skillShakeMax] call BIS_fnc_randomNum)];
		_x setSKill ["aimingSpeed", ([_skillAimSpeedMin, _skillAimSpeedMax] call BIS_fnc_randomNum)];
		_x setSKill ["commanding", ([_skillCommandingMin, _skillCommandingMax] call BIS_fnc_randomNum)];
		_x setSKill ["endurance", ([_skillEnduranceMin, _skillEnduranceMax] call BIS_fnc_randomNum)];
		_x setSKill ["spotDistance", ([_skillSpotDistanceMin, _skillSpotDistanceMax] call BIS_fnc_randomNum)];
		_x setSKill ["spotTime", ([_skillSpotTimeMin, _skillSpotTimeMax] call BIS_fnc_randomNum)];
		_x setSKill ["reloadSpeed", ([_skillReloadSpeedMin, _skillReloadSpeedMax] call BIS_fnc_randomNum)];
		if (!((group _x) in _processedGroups)) then {
			(group _x) setCombatBehaviour (selectRandomWeighted _groupBehaviorTable);
			(group _x) setBehaviour (selectRandomWeighted _groupBehaviorTable);
			(group _x) setCombatMode _ROE;
			_processedGroups pushback (group _x);
		};
	} forEach (_units);
};