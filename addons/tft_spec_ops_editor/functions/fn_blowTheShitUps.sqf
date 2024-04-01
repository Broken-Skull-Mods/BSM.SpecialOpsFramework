params ["_objectToBlows"];
/*
    [building] remoteExec ["SpecOps_fnc_blowTheShitUp", 2];
*/

{ [_x] call SpecOps_fnc_blowTheShitUp; sleep 0.1; } forEach (_objectToBlows);