params ["_player"];
/*
    [bob] call SpecOps_fnc_hasPlayerMajorRole;
*/

_majorRole = _player getVariable ["majorRole", ""];

if (_majorRole != "") exitWith { 
    true; 
};
false;

