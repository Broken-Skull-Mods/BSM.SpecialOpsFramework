params ["_transformer", ["_time", -1]];
/*
    Shutdown after transformer explosion.
    [provider] remoteExec ["SpecOps_fnc_powerlineShutdown", 2];
    
    Call to Hack for a specific period of time.
    [provider, 30] remoteExec ["SpecOps_fnc_powerlineShutdown", 2];
*/

// Permanently Destroyed Power Transformer.
private _lampLinked = _transformer getVariable ["lampLinked", []];
_lampLinked = _lampLinked - [objNull];

{ _x setDamage 0.9; sleep 0.05; } forEach (_lampLinked);

if (_time > 9) then {
    [_transformer, _time, _lampLinked] spawn {
        params ["_transformer", "_time", "_lampLinked"];
        sleep _time;
        if(!alive _transformer) exitWith {};
        { _x setDamage 0; sleep 0.05; } forEach (_lampLinked);
    };
};