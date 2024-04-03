/*
call SpecOps_fnc_goodiesLoadFunFacts;
*/

private _didYouKownClasses = "true" configClasses (configFile >> "SpecOps_Goodies" >> "FunFact" >> "DidYouKnow");

private _didYallKnow = [];
{ _didYallKnow append (getArray (_x >> "list")); } forEach (_didYouKownClasses);
missionNamespace setVariable ["SpecOps_FunFacts_DidYouKnow", _didYallKnow];