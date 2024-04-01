params ["_transit"];
_isEverPresent = _transit getVariable["TFT_EverPresentEnableOrDisable", ""];
diag_log format ["SPEC-OPS: %1 (%2) Trying to Activate Transit.", _transit, _isEverPresent];
if ((_isEverPresent == "") || { !isNil "TFTSRV_CAMPAIGN_VAR_MISSION_OPERATION" && !isNull TFTSRV_CAMPAIGN_VAR_MISSION_OPERATION && _isEverPresent == (str TFTSRV_CAMPAIGN_VAR_MISSION_OPERATION)}) then {
    diag_log format ["SPEC-OPS: %1 Activate Transit.", _transit];
    _campElements = _transit getVariable["TFT_CampElements", []];
    _spawnedElements = [];
    {
        _xItem = _x select 0;
        _xPos = _x select 1; 
        _xDirection = _x select 2;
        _variables = _x select 3;

        _vec = createVehicle [_xItem, _xPos, [], 0, "NONE"];
        _vec setDir _xDirection;
        _vec allowDamage false;
        _vec enableSimulation false;
        _vec enableSimulationGlobal false;
        {
            _name = _x select 0;
            _value = _x select 1;
            _vec setVariable [_name, _value, true];
        } forEach (_variables);
        _spawnedElements pushback _vec;
    } forEach (_campElements);
    _transit setVariable ["TFT_SpawnedCampElements", _spawnedElements];

};
