params ["_toCopySub", "_objList", "_reference"];

private _objectInfos = [];
{
	private _pos = getPos _x;
	private _dir = vectorDir _x;
	private _up = vectorUp _x;

    private _isImportantDecoration = _x getVariable ["SpecOps_Furniture_Important", false];
    if (_isImportantDecoration) then { _isImportantDecoration = 1; } else { _isImportantDecoration = 0;  };
    
    private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
    if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };

	_objectInfos pushback [
        (typeOf _x), _pos, _dir, _up, ((getDir _x)), [_isImportantDecoration, _IsCanVisibleFromOutside]
	];
} forEach (_objList);


_objectInfos = (str _objectInfos);
_objectInfos = [_objectInfos, '[', '{'] call CBA_fnc_replace;
_objectInfos = [_objectInfos, ']', '}'] call CBA_fnc_replace;
"Furnitures[]=" + _objectInfos + ";" ; 


