params ["_toCopySub", "_objList"];
private _br = toString [13,10];
private _tab = (toString [9]);
private _2tab = _tab + _tab;
private _3tab = _2tab + _tab;
private _4tab = _3tab + _tab;
private _5tab = _4tab + _tab;
private _6tab = _5tab + _tab;
private _colorFallback = "Color6_FD_F";
private _colors = ["Color5_FD_F", "Color3_FD_F", "ColorBlue", "ColorUNKNOWN", "ColorGreen", "ColorBrown", "ColorPink"];
private _objectInfos = [];
{

	private _areaOfEffect = ((synchronizedObjects _x) select { _x isKindOf "EmptyDetector"; }) apply {
        private _area = triggerArea  _x;
        [getPos _x, _area select 0, _area select 1, _area select 2, _area select 3];
    };

    private _isWholeMap = _x getVariable ["bsm_so_wholemap", false];
    if (_isWholeMap) then { _isWholeMap = 1; } else { _isWholeMap = 0;  };

    private _isHackable = _x getVariable ["bsm_so_hack_required", false];
    if (_isHackable) then { _isHackable = 1; } else { _isHackable = 0;  };

    private _hackRange = _x getVariable ["bsm_so_hack_range", 0];
    private _hackSpeed = _x getVariable ["bsm_so_hack_speed", 100];

    private _isDestroyable = _x getVariable ["bsm_so_destroy_required", false];
    if (_isDestroyable) then { _isDestroyable = 1; } else { _isDestroyable = 0;  };

    private _targetBuilding = _x getVariable ["bsm_so_destroy_b_classname", ""];
    private _color = "Color6_FD_F";
    if (count _colors > 0) then {_color = _colors select 0; _colors = _colors - [_color]; };
    private _area = _x getVariable ["objectarea", []];
	_objectInfos pushback [getPos _x, _area, [_isWholeMap, _isHackable, _hackRange, _hackSpeed, _isDestroyable, _targetBuilding, _color], _areaOfEffect];
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

"Hubs[]=" + _strEnd; 
