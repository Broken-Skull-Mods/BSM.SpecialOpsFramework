params ["_building", "_buildingInfo"];

/*
Return all information related to a loaded building
_layouts = ["Land_Offices_01_V1_F", true] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts;
_buildingLayout = selectRandom _layouts;
[_buildingLayout, "furnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
[testBuilding, _buildingLayout] call SpecOps_fnc_dressUpBuildingApplyIntel;
*/


private _buildingPosition = getPos _building;
private _buildingDir = getDir _building;
private _loadedFurniture =  [_buildingInfo, "intelFurnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _selectedIntelSpot = selectRandom _loadedFurniture;
private _itemClass = _selectedIntelSpot select 0;
private _itemPosition = _selectedIntelSpot select 1;
private _itemDir = _selectedIntelSpot select 2;
private _itemUp = _selectedIntelSpot select 3;
private _itemDirection = _selectedIntelSpot select 4;

private _options = _selectedIntelSpot select 5;
private _isVisibleFromOutside = (_options select 1) == 1;
private _object = _itemClass createVehicle [0,0,0];
if (isNil "_object") exitWith { nil; };
diag_log format["SPEC-OPS (AO): Fucking Variable Test %1", 0];
_object setVariable ["TFT_IsSearchable", true, true];
diag_log format["SPEC-OPS (AO): Fucking Variable VALUE  %1", (_object getVariable ["TFT_IsSearchable", 0])];
_object setVariable ["Unit_VisibleFromOutside", _isVisibleFromOutside];
_object hideObjectGlobal true;
_object enableSimulation false;

[_building, _object, _itemPosition, [_itemDir, _itemUp], false, true] call SpecOps_fnc_commonRelPosObject;
// [_building, _object, _itemPosition, 0] call BIS_fnc_relPosObject;
// private _correctedRotation = _buildingDir + _itemDirection;
// _object setDir _correctedRotation;
_object;
