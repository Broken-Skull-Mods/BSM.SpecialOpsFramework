params ["_players"];
{
    [_x] call ACE_medical_treatment_fnc_fullHealLocal;     
} forEach (_players);