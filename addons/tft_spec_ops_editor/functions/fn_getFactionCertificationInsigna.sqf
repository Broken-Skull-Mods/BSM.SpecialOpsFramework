params ["_faction", "_certification"];

/*
 [TFTSRV_SAVEDVAR_PLAYER_FACTION, "Slacker"] call SpecOps_fnc_getFactionCertificationInsigna;
*/


private _roleFormat = format["Certification%1Insigna", _certification];
private _insignaName = getText (configfile >> "SpecOpsFactions" >> _faction >> _roleFormat);
// Return Insigna Image Path
getText (configfile >> "CfgUnitInsignia" >> _insignaName >> "texture");