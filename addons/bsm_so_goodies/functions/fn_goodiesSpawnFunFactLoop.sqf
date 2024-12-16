params ["_displayCtrl", "_textCtrl"];

/*
[] spawn SpecOps_fnc_goodiesSpawnFunFactLoop;
*/

private _allFacts = missionNamespace getVariable ["SpecOps_FunFacts_DidYouKnow", []];
_textCtrl ctrlSetText "It's Orka's Fault if there's no more fun facts!";
while { !isNull _displayCtrl && { count _allFacts > 0 } } do {
    private _facts = selectRandom _allFacts;
    _allFacts = _allFacts - [_facts];
    _textCtrl ctrlSetText format ["DID YOU KNOW? %1", _facts];
    uiSleep 30;
};