/*
Return a sound
 ["usa_socom","ANYHASHMAP", "RadioOperator", "Ricky", "HangingRequest"] call SpecOps_fnc_voiceSelectFromHashMap;
*/
params ["_faction", "_hashMap", "_section", "_property"];
_actor = _hashMap get _section;
if (isNil "_actor") exitWith { ""; };
diag_log format["getArray (configfile >> ""SpecOpsFactions"" >> %1 >> ""Audio"" >> %2 >> %3 >> %4)", str _faction, str _section, str _actor, str _property];
diag_log format["%1 => %2", _actor, _hashMap];
selectRandomWeighted (getArray (configfile >> "SpecOpsFactions" >> _faction >> "Audio" >> _section >> _actor >> _property));
