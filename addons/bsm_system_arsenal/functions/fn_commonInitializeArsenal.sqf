if (!hasInterface) exitWith { };
private _allObjects =  nearestObjects [ [worldSize / 2, worldSize / 2], [], worldSize * sqrt 2 / 2, false];

_classAdd = [];
{
    private _faction  = _x getVariable ["bs_specops_arsenal", nil];
    private _isInitial  = _x getVariable ["bsm_so_isFactionInitial", false];
    if (_isInitial) then { missionNamespace setVariable ["bsm_so_factionInitial", _faction];};
    if (isNil "_faction") then { continue; };
    [_x] call SpecOps_fnc_commonAssignFactionArsenal;
    
} forEach (_allObjects);
