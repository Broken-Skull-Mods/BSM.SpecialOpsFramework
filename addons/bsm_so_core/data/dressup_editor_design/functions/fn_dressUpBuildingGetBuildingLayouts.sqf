params ["_building", "_allowGore", ["_maxTier", 3]];

/*
 ["Land_Offices_01_V1_F", true, 2] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts;
*/

private _goreLevel = 0;
if (_allowGore) then { _goreLevel = 1; };
// diag_log format ["SPEC-OPS (AO): Searching for Layouts of %1", _building];
// getNumber (_x >> 'transportSoldier') >= 10
private _layoutsForBuilding = "getText (_x >> 'parentClass') == (typeOf _building) && getNumber (_x >> 'isGoreScene') <= _goreLevel && getNumber (_x >> 'tierLevel') <= _maxTier" 
configClasses (configfile >> "SpecOps_DressUp" >> "Buildings");

// diag_log format ["SPEC-OPS (AO): Found %1", (count _layoutsForBuilding)];

// "(getText (_x >> 'parentClass')) == _buildingName && (getNumber (configFile >> _x >> 'isGoreScene')) <= _goreLevel " 
// configClasses (configfile >> "SpecOpsBuildingDressUp");
_layoutsForBuilding;

