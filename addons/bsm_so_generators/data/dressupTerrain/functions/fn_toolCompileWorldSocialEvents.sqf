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
	if (!(_x isKindOf "bsm_so_ao_social_event")) then { continue; };
	private _pos = getPos _x;
    private _vehicleType = (_x getVariable ["SpecOps_Social_Event", "None"]);
    if (_vehicleType isEqualTo "None") then { continue; };
    if (!(_vehicleType isEqualTo "Random_Event") && !(_vehicleType isEqualTo "Random_Camp") && !(_vehicleType isEqualTo "Random_Any")) then { continue; };
	_objectInfos pushback [_pos, (getDir _x), _vehicleType];
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
"SocialEvents[]=" + _strEnd; 