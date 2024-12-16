params ["_module"];
diag_log "SPEC-OPS (Module Building): Initializing";
// waitUntil { uiSleep 0.1; (missionNamespace getVariable ["SpecOps_MapLayoutsDone", false]) && {!isNil ""BS_B_US_ARMA_BASE"" } };
diag_log "SPEC-OPS (Module Building): Faction ready";
private _allObjects = synchronizedObjects _module;
if (count _allObjects <= 0) exitWith { };
private _triggers = [];
{ 
    if (_x isKindOf "EmptyDetector") then {
        private _modules = _x getVariable ["AO_Modules", []];
        _modules pushbackUnique _module;
        _x setVariable ["AO_Modules", _modules];
        _triggers pushbackUnique _x; 
    }; 
} forEach (_allObjects);


