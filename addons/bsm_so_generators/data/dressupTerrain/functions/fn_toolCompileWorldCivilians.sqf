params ["_toCopySub", "_objects", "_reference"];
private _br = toString [13,10];
private _tab = (toString [9]);
private _2tab = _tab + _tab;
private _3tab = _2tab + _tab;
private _4tab = _3tab + _tab;
private _5tab = _4tab + _tab;
private _6tab = _5tab + _tab;
private _objectInfo = [];
{
	private _groupUnits = [];
	{
		private _pos = getPos _x;
		private _dir = vectorDir _x;
		private _up = vectorUp _x;



		private _isHiddenDuringDay = _x getVariable ["SpecOps_HideAtDay", false];
		if (_isHiddenDuringDay) then { _isHiddenDuringDay = 1; } else { _isHiddenDuringDay = 0;  };

		private _isHiddenDuringNight = _x getVariable ["SpecOps_HideAtNight", false];
		if (_isHiddenDuringNight) then { _isHiddenDuringNight = 1; } else { _isHiddenDuringNight = 0;  };
		
		_groupUnits pushBack [_pos, _dir, _up, ((getDir _x)), [_isHiddenDuringDay, _isHiddenDuringNight]
		];
	} forEach (units _x);
	_objectInfo pushback _groupUnits;
} forEach (_objects);

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
} forEach (_objectInfo);
_strEnd = _strEnd +_br + _2tab + "};";
// _objectInfo = (str _objectInfo);
// _objectInfo = [_objectInfo, '[', '{'] call CBA_fnc_replace;
// _objectInfo = [_objectInfo, ']', '}'] call CBA_fnc_replace;
"Civilians[]=" + _strEnd; 


