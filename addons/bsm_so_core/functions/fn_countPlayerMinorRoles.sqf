params ["_player"];
/*
    Count player current minor roles.
    [bob, "Engineer", true] call SpecOps_fnc_applyRoleToPlayer;
*/

_minorRoles = _player getVariable ["minorRoles", []];
count _minorRoles;

