params ["_toCopySub", "_hostages", "_reference"];
private _br = toString [13,10];
private _tab = (toString [9]);
private _2tab = _tab + _tab;
private _3tab = _2tab + _tab;
private _4tab = _3tab + _tab;
private _5tab = _4tab + _tab;
private _6tab = _5tab + _tab;
private _hostagesInfo = [];
{
	private _pos = getPos _x;
	private _dir = vectorDir _x;
	private _up = vectorUp _x;

    private _IsProne = _x getVariable ["TFT_CanProne", false];
    if (_IsProne) then { _IsProne = 1; } else { _IsProne = 0;  };
    private _IsCanCrouch = _x getVariable ["TFT_CanCrouch", false];
    if (_IsCanCrouch) then { _IsCanCrouch = 1; } else { _IsCanCrouch = 0;  };
    private _IsCanStand = _x getVariable ["TFT_CanStand", false];
    if (_IsCanStand) then { _IsCanStand = 1; } else { _IsCanStand = 0;  };
    private _IsCanMove = _x getVariable ["TFT_CanMove", false];
    if (_IsCanMove) then { _IsCanMove = 1; } else { _IsCanMove = 0;  };
    private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
    if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };

	// _toCopy = _toCopy + format ['%17%17%17%17%17{ { %8, %9, %10 }, {%11, %12, %13}, {%14, %15, %16}, %7, { %2, %3, %4, %5, %6 } }', _br, 
	//     _IsProne, _IsCanCrouch, _IsCanStand, _IsCanMove, _IsCanVisibleFromOutside, 
	//     ((getDir _building) + (getDir _x)), _posX, _posY, _posZ, _dirX, _dirY, _dirZ, _upX, _upY, _upZ, _tab
	// ];
		// { { 0,0,0 }, {-0.0546751, -0.998504, 0}, {0, 0, 1}, 183.134, { 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, "", 0, 0, 0, 0, 0, 0, 0 } }
	_hostagesInfo pushback [_pos, _dir, _up, ((getDir _x)), [_IsProne, _IsCanCrouch, _IsCanStand, _IsCanMove, _IsCanVisibleFromOutside]];
} forEach (_hostages);

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
} forEach (_hostagesInfo);
_strEnd = _strEnd +_br + _2tab + "};";
"Hostages[]=" + _strEnd ; 

// _hostagesInfo = (str _hostagesInfo);
// _hostagesInfo = [_hostagesInfo, '[', '{'] call CBA_fnc_replace;
// _hostagesInfo = [_hostagesInfo, ']', '}'] call CBA_fnc_replace;
// "Hostages[]=" + _hostagesInfo + ";" ; 


