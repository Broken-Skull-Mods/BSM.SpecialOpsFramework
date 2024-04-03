params ["_player"];
/*
    [bob] call SpecOps_fnc_hasPlayerMinorRole;
*/

_minorRoles = _player getVariable ["minorRoles", []];

if (count _minorRoles > 0) exitWith { 
    true; 
};
false;

