params ["_player", "_role"];
/*
    [player, "RadioExpert"] call SpecOps_fnc_isCurrentPlayerMajorRole
*/

_majorRole = _player getVariable ["majorRole", ""];

if (_majorRole == _role) exitWith { 
    true; 
};
false;


