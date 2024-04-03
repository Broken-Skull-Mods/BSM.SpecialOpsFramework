params ["_faction", "_camo"];

/*
 [TFTSRV_SAVEDVAR_PLAYER_FACTION, TFTSRV_SAVEDVAR_PLAYER_FACTION_CAMO] call SpecOps_fnc_getFactionUnit;
*/

[
    getArray (configfile >> "SpecOpsFactions" >> _faction >> format['%1_Rifleman_%2',_faction, _camo]),
    getArray (configfile >> "SpecOpsFactions" >> _faction >> format['%1_AR_%2',_faction, _camo]),
    getArray (configfile >> "SpecOpsFactions" >> _faction >> format['%1_GL_%2',_faction, _camo]),
    getArray (configfile >> "SpecOpsFactions" >> _faction >> format['%1_Rifleman_%2',_faction, _camo]),
    getArray (configfile >> "SpecOpsFactions" >> _faction >> format['%1_SNP_%2',_faction, _camo]),
    getArray (configfile >> "SpecOpsFactions" >> _faction >> format['%1_Officer_%2',_faction, _camo])
];