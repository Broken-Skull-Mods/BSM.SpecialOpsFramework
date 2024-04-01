params ["_transformers", "_time"];
/*
    [[buildings], 30] remoteExec ["SpecOps_fnc_powerlinesShutdown", 2];
*/

{ 
    [_x, _time] call SpecOps_fnc_powerlineShutdown;
} forEach (_transformers);

            
