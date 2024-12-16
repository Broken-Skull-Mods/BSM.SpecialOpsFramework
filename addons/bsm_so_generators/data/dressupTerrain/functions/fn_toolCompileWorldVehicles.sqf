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
	// class MAA { name = "Anti-Air"; value = 0; };
	// class MTANK { name = "Tank"; value = 1; };
	// class MTECHNICAL { name = "Technical"; value = 2; };
	// class MTROOP { name = "Troop Transporter"; value = 3; };
    private _vehicleType = _x getVariable ["SpecOps_GarageVehicleCategory", -1];
    if (_vehicleType <= -1) then { continue; };
	_objectInfos pushback [_pos, _dir, _up, ((getDir _x)), [_vehicleType]
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
"Vehicles[]=" + _strEnd ; 