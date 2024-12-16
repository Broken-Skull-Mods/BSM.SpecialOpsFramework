
params ["_building"];
/*
    [_building] call SpecOps_fnc_dressUpDefineBuildingLayout;
*/


private _buildingType = typeof _building;
private _layout = _building getVariable ["spec_ops_building_layout", nil];
if (!isNil "_layout") exitWith { };
private _layouts = [];
_layouts = [_building, true] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts; 
if (count _layouts <= 0) exitWith { };
private _layout = selectRandom _layouts;
_building setVariable ["spec_ops_building_layout", _layout, true];


private _missionObject = allMissionObjects "All";   
private _boundaries =  [_layout, "Boundaries"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;

private _disabledPosition = false;
{
    
    if (_x inArea [(getPos _building), (_boundaries select 0), (_boundaries select 1), (_boundaries select 2), (_boundaries select 3), (_boundaries select 4), false]) 
    exitWith {
        _disabledPosition = true;
    };
} forEach(_missionObject);
if (_disabledPosition) exitWith {  }; // Skip Building as it is disabled because it contains mission placed objects.
// Set Locks and Door State on the building
private _lockDoors = [_layout, "lockedDoors"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _openDoors = [_layout, "openedDoors"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
{ _building setVariable [format ["bis_disabled_door_%1", _x], 1, true]; } forEach (_lockDoors);
{ _building animate [format ["Door_%1_rot", _x], 1]; } forEach (_openDoors);

// Set if Building is Enterable
private _isEnterable = getNumber (_layout >> "isEnterable");
if (_isEnterable == 0) then { 
    _building setVariable ["tft_is_enterable", false, true]; 
}else {
    _building setVariable ["tft_is_enterable", true, true]; 
};

private _intel = [_layout, "intelFurnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _intelligenceSpawnPoints  = missionNamespace getVariable["bsm_ls_intelligenceSpawnPoints", []];
if (count _intel > 0) then {
    _pickedIntelCandidate = selectRandom _intel;
    _worldPos = [_building, (_pickedIntelCandidate select 1)] call SpecOps_fnc_commonRelToWorldPosition;
    _intelToPush = [_building, _worldPos, _pickedIntelCandidate];
    _intelligenceSpawnPoints pushBack _intelToPush;
    missionNamespace setVariable["bsm_ls_intelligenceSpawnPoints", _intelligenceSpawnPoints, true];
};

private _menPos = [_layout, "men"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _unitGroupSpawnPoints = missionNamespace getVariable["bsm_ls_unitGroupSpawnPoints", []];
{
    if (((_x select 4) select 0) == 1) then { continue; }; // Ignore HVTs Pos
    _worldPos = [_building, (_x select 0)] call SpecOps_fnc_commonRelToWorldPosition;
    _arr = [_building, _worldPos, _x];
    _unitGroupSpawnPoints pushBack _arr;
} forEach (_menPos);
missionNamespace setVariable["bsm_ls_unitGroupSpawnPoints", _unitGroupSpawnPoints, true];

private _hvtSpawnPoints = missionNamespace getVariable["bsm_ls_unitHVT", []];
{
    if (((_x select 4) select 0) != 1) then { continue; }; // Ignore HVTs Pos
    _worldPos = [_building, (_x select 0)] call SpecOps_fnc_commonRelToWorldPosition;
    _arr = [_building, _worldPos, _x];
    _hvtSpawnPoints pushBack _arr;
} forEach (_menPos);
missionNamespace setVariable["bsm_ls_unitHVT", _hvtSpawnPoints, true];

private _hostagesPos = [_layout, "hostages"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _hostageSpawnPoints = missionNamespace getVariable["bsm_ls_hostageSpawnPoints", []];
if (count _hostagesPos > 0) then {
    _pickedHostageCandidate = selectRandom _hostagesPos;
    _worldPos = [_building, (_pickedHostageCandidate select 0)] call SpecOps_fnc_commonRelToWorldPosition;
    _hostageToPush = [_building, _worldPos, _pickedHostageCandidate];
    _hostageSpawnPoints pushBack _hostageToPush;
    missionNamespace setVariable["bsm_ls_hostageSpawnPoints", _hostageSpawnPoints, true];
};



private _staticMachineGunsPosition = [_layout, "staticWeapons"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _staticSpawnPoints = missionNamespace getVariable["bsm_ls_staticSpawnPoints", []];
_staticMachineGunsPosition = _staticMachineGunsPosition apply {
    _worldPos = [_building, (_x select 0)] call SpecOps_fnc_commonRelToWorldPosition;
    _arr = [_building, _worldPos, _x];
};
_staticSpawnPoints append _staticMachineGunsPosition;
missionNamespace setVariable["bsm_ls_staticSpawnPoints", _staticSpawnPoints, true];


// {"APERSMine_Range_Ammo", { 13.7749, -9.48925, 0.443098 }, {0, 1, 0}, {0, 0, 1}, 0} 
private _explosivePositions = [_layout, "explosives"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _explosiveSpawnPoints = missionNamespace getVariable["bsm_ls_explosiveSpawnPoints", []];
if (count _explosivePositions > 0) then {
    _pickedExplosiveCandidate = selectRandom _explosivePositions;
    _worldPos = [_building, (_pickedExplosiveCandidate select 1)] call SpecOps_fnc_commonRelToWorldPosition;
    _explosiveToPush = [_building, _worldPos, _pickedHostageCandidate];
    _explosiveSpawnPoints pushBack _explosiveToPush;
    missionNamespace setVariable["bsm_ls_explosiveSpawnPoints", _explosiveSpawnPoints, true];
};



// { "Land_OfficeCabinet_01_F", { -16.982, -1.95641, 1.26391 }, {-0.999997, 0.00244666, 0}, {0, 0, 1}, 270.14, { 0, 0, 0, 0, 0, 0, 0, 0, 0 } }
private _furnituresPositions = [_layout, "furnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _furnitureSpawnPoints = missionNamespace getVariable["bsm_ls_furnitureSpawnPoints", []];
{
    _worldPos = [_building, (_x select 1)] call SpecOps_fnc_commonRelToWorldPosition;
    _arr = [_building, _worldPos, _x];
    _furnitureSpawnPoints pushBack _arr;
} forEach (_furnituresPositions);
missionNamespace setVariable["bsm_ls_furnitureSpawnPoints", _furnitureSpawnPoints, true];

_layout;