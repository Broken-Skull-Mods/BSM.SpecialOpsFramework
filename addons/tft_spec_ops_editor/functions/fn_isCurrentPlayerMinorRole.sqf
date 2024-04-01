params ["_player", "_role"];
/*
    [bob, "TankDriver"] call SpecOps_fnc_isCurrentPlayerMinorRole;
*/

_minorRoles = _player getVariable ["minorRoles", []];

if (_role in _minorRoles) exitWith { 
    true; 
};
false;

