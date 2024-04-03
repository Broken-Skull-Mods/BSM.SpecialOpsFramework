params ["_faction", "_section", "_actor", "_property"];

/*
Return a sound
 ["usa_socom", "RadioOperator", "Ricky", "HangingRequest"] call SpecOps_fnc_voiceSelectRandomLine;
*/
private _voices = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Audio" >> _section >> _actor >> _property);
if (count _voices <= 0) exitWith { ""; };
selectRandomWeighted (_voices);
