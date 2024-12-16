params ["_toCopySub", "_objList", "_reference"];
private _br = toString [13,10];
private _tab = (toString [9]);
private _2tab = _tab + _tab;
private _3tab = _2tab + _tab;
private _4tab = _3tab + _tab;
private _5tab = _4tab + _tab;
private _6tab = _5tab + _tab;
private _objectInfos = [];
{
	private _pos = getPosATL _x;
    
	private _dir = vectorDir _x;
	private _up = vectorUp _x;

    private _isVehicle = _x getVariable ["SpecOps_Spawn_As_Vehicle", false];
    if (_isVehicle) then { _isVehicle = 1; } else { _isVehicle = 0;  };

    private _isImportantDecoration = _x getVariable ["SpecOps_Furniture_Important", false];
    if (_isImportantDecoration) then { _isImportantDecoration = 1; } else { _isImportantDecoration = 0;  };

    private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
    if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };

    private _isDemoLead = _x getVariable ["TFT_IsDemoLead", false];
    if (_isDemoLead) then { _isDemoLead = 1; } else { _isDemoLead = 0;  };

    private _isDemoTrigger = _x getVariable ["TFT_IsDemoTrigger", false];
    if (_isDemoTrigger && _isDemoLead == 0) then { _isDemoTrigger = 1; } else { _isDemoTrigger = 0;  };

    private _isHackable = _x getVariable ["TFT_IsHacking", false];
    if (_isHackable) then { _isHackable = 1; } else { _isHackable = 0;  };

    private _isHiddenDuringDay = _x getVariable ["SpecOps_HideAtDay", false];
    if (_isHiddenDuringDay) then { _isHiddenDuringDay = 1; } else { _isHiddenDuringDay = 0;  };

    private _isHiddenDuringNight= _x getVariable ["SpecOps_HideAtNight", false];
    if (_isHiddenDuringNight) then { _isHiddenDuringNight = 1; } else { _isHiddenDuringNight = 0;  };

	_objectInfos pushback [(typeOf _x), _pos, _dir, _up, ((getDir _x)), [_IsCanVisibleFromOutside, _isDemoLead, _isDemoTrigger, _isHackable, _isImportantDecoration, _isVehicle, _isHiddenDuringDay, _isHiddenDuringNight]];
} forEach (_objList);

private _strEnd = "{" + _br;
private _passedFirst = false;
{
	if (_passedFirst) then {
        _strEnd = _strEnd + ',' + _br; 
    };

	private _group = _3tab;
	 _group = _group + (str _x);
	_group = [_group, '[', '{'] call CBA_fnc_replace;
	_group = [_group, ']', '}'] call CBA_fnc_replace;
	_strEnd = _strEnd + _group;
	_passedFirst = true;
} forEach (_objectInfos);
_strEnd = _strEnd +_br + _2tab + "};";

// _objectInfo = (str _objectInfo);
// _objectInfo = [_objectInfo, '[', '{'] call CBA_fnc_replace;
// _objectInfo = [_objectInfo, ']', '}'] call CBA_fnc_replace;
// "Enemies[]=" + _strEnd; 
// _objectInfos = (str _objectInfos);
// _objectInfos = [_objectInfos, '[', '{'] call CBA_fnc_replace;
// _objectInfos = [_objectInfos, ']', '}'] call CBA_fnc_replace;
"Furnitures[]=" + _strEnd; 


