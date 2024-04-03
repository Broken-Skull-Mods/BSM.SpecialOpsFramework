params ["_transformer", "_time"];
/*
    [buildings, 30] remoteExec ["SpecOps_fnc_powerlineActivateTrojan", 2];
*/

_lampLinked = _transformer getVariable ["lampLinked", []];

diag_log format ["SPEC-OPS (Hacked Powerline Restored): Restoring %1 Powerlines.", (count _lampLinked)]; 
{ _x setDamage 0.9; sleep 0.05; } forEach (_lampLinked);

[_transformer, _time] spawn {
    params ["_transformer", "_time"];
    sleep _time;
    if(!alive _transformer) exitWith {};
    _lampLinked = _transformer getVariable ["lampLinked", []];
    diag_log format ["SPEC-OPS (Hacked Powerline Restored): Restoring %1 Powerlines.", (count _lampLinked)]; 
    { 
        _x setDamage 0; 
        sleep 0.05;
    } forEach (_lampLinked);
};