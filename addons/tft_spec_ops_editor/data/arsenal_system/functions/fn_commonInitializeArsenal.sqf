params ["_object"];
if (!hasInterface) exitWith { };
private _allObjects =  nearestObjects [ [worldSize / 2, worldSize / 2], [], worldSize * sqrt 2 / 2, false];

_classAdd = [];
{
    private _useClassForAce  = _x getVariable ["bs_specops_arsenal_applyClass", false];
    private _faction  = _x getVariable ["bs_specops_arsenal", nil];
    if (isNil "_faction") then { continue; };
    if ((typeof _x) in _classAdd) then { continue; };
    if (_useClassForAce) then { _classAdd pushbackUnique (typeof _x);  } ;
    [_x] call SpecOps_fnc_commonAssignFactionArsenal;
} forEach (_allObjects);