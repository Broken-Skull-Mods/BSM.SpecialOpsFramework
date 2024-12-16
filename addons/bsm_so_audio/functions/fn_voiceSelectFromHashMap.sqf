/*
Return a sound
 ["usa_socom","ANYHASHMAP", "RadioOperator", "Ricky", "HangingRequest"] call SpecOps_fnc_voiceSelectFromHashMap;
*/
params ["_faction", "_hashMap", "_section", "_property"];
_actor = _hashMap get _section;
if (isNil "_actor") exitWith { ""; };
selectRandomWeighted (getArray (configfile >> "SpecOpsFactions" >> _faction >> "Audio" >> _section >> _actor >> _property));
