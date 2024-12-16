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
	private _pos = getPos _x;
	private _dir = vectorDir _x;
	private _up = vectorUp _x;

    private _staticType = _x getVariable ["SpecOps_StaticGunCategory", -1];
	if (_staticType <= -1) then { continue; };
    if (_staticType == 3) then { _staticType = 0; };
    if (_staticType == 4) then { _staticType = 1; };
    if (_staticType == 2) then { _staticType = 2; };
    if (_staticType == 1) then { _staticType = 3; };
    if (_staticType == 0) then { _staticType = 4; };
    if (_staticType == 5) then { _staticType = 5; };

    private _isHiddenDuringDay = _x getVariable ["SpecOps_HideAtDay", false];
    if (_isHiddenDuringDay) then { _isHiddenDuringDay = 1; } else { _isHiddenDuringDay = 0;  };

    private _isHiddenDuringNight = _x getVariable ["SpecOps_HideAtNight", false];
    if (_isHiddenDuringNight) then { _isHiddenDuringNight = 1; } else { _isHiddenDuringNight = 0;  };

	_objectInfos pushback [
		_pos, _dir, _up, ((getDir _x)), [_staticType, _isHiddenDuringDay, _isHiddenDuringNight]
	];
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
"StaticWeapons[]=" + _strEnd ; 

// _objectInfos = (str _objectInfos);
// _objectInfos = [_objectInfos, '[', '{'] call CBA_fnc_replace;
// _objectInfos = [_objectInfos, ']', '}'] call CBA_fnc_replace;
// "StaticWeapons[]=" + _objectInfos + ";" ; 


