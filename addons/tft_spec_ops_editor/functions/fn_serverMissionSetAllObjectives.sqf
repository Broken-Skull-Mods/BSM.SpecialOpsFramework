params ["_area", "_codenames"];
/*
    Set all the objective markers
    [_area, _codenames] call SpecOps_fnc_serverMissionSetAllObjectives;
*/

private _connections = synchronizedObjects _area;
diag_log format["%1 = Connections (%2)", _area, _connections];
private _entryObj = [];
// Find Entry Point
{
    _isModules = _x isKindOf "TFT_Module";
    if(_isModules) then {
        _isMission = _x isKindOf "TFT_Module_Mission" || _x isKindOf "TFT_Module_Mission_Clear_City"; 
        if (_isMission) exitWith {
            _entryObj pushback _x;
        };

    };
} forEach (_connections);
if(count _entryObj <= 0) exitWith { diag_log format["SPEC-OPS (Mission): Could not find the entry objective for mission %1 (%2)", _area, _connections]; };

// Loop until no more objective is found.
for "_i" from 0 to ((count _entryObj) - 1) do {
    private _item = _entryObj select _i;
    private _onSuccess = _item getVariable ["TFT_NextMissionOnSuccess", ""];
    private _onSuccessCamp = _item getVariable ["TFT_TransitOnSuccess", ""];
    private _onFailure = _item getVariable ["TFT_NextMissionOnFailure", ""];
    private _onFailureCamp = _item getVariable ["TFT_TransitOnFailure", ""];
    if (_onSuccess != "") then {
        private _onSuccessItem = missionNamespace getVariable [_onSuccess, objNull];
        if (!isNull _onSuccessItem) then { _entryObj pushBackUnique _onSuccessItem; };
    };

    if (_onSuccessCamp != "") then {
        private _onSuccessCampItem = missionNamespace getVariable [_onSuccessCamp, objNull];
        if (!isNull _onSuccessCampItem) then { _entryObj pushBackUnique _onSuccessCampItem; };
    };

    if (_onFailure != "") then {
        private _onFailureItem = missionNamespace getVariable [_onFailure, objNull];
        if (!isNull _onFailureItem) then { _entryObj pushBackUnique _onFailureItem; };
    };

    if (_onFailureCamp != "") then {
        private _onFailureCampItem = missionNamespace getVariable [_onFailureCamp, objNull];
        if (!isNull _onFailureCampItem) then { _entryObj pushBackUnique _onFailureCampItem; };
    };

    private _isFailurePos = _item isKindOf "TFTE_SystemFallbackFailure";
    if (_isFailurePos) then { continue; };

    private _isTransit = _item isKindOf "TFTE_SystemSuccessTransit";
    if (_isTransit) then { continue; };

    private _isMajorLandMark = _item getVariable ["TFT_MajorLandmark", false];
    diag_log format["%1 = Landmark (%2)", _item, _isMajorLandMark];
    if(_isMajorLandMark) then {
        private _landMarkOnMission = missionNamespace getVariable[(_item getVariable ["TFT_LandMarkCondition", "nomissionerr"]), objNull];
        private _landMarkOnSorF = _item getVariable ["TFT_LandMarkMissionSuccessOrFailure", -1];
        private _landMarkOnEorD = _item getVariable ["TFT_LandMarkEnableOrDisable", false];
        private _name = vehicleVarName _item;
        private _codename = selectRandom _codenames;
        _codenames = _codenames - [_codename];
        private _marker = createMarkerLocal [_name, getPos _item];
        _marker setMarkerShapeLocal "ICON";
        _marker setMarkerTypeLocal "hd_objective";
        _marker setMarkerColorLocal "ColorBrown";
        _marker setMarkerAlphaLocal 0;
        
        private _markers = missionNamespace getVariable ["spec_ops_operation_markers", []];
        _markers pushback _marker;
        missionNamespace setVariable ["spec_ops_operation_markers", _markers];

        diag_log format["%1 = %2", _item, _landMarkOnMission];
        if (isNull _landMarkOnMission || !isNull _landMarkOnMission && !_landMarkOnEorD) then { _marker setMarkerAlphaLocal 1; };
        _marker setMarkerText _codename;
        private _allMissions = missionNamespace getVariable ["spec_ops_allMissions", []];
        if(!isNull _landMarkOnMission) then {
            _objectiveInfo = [_item, _marker, [_landMarkOnMission, _landMarkOnSorF, _landMarkOnEorD]];

            _allMissions pushback _objectiveInfo;
        } else {
            _objectiveInfo = [_item, _marker, []];
            _allMissions pushback _objectiveInfo;
        };    
        missionNamespace setVariable ["spec_ops_allMissions", _allMissions];
        uiSleep 0.1;                
    };

};