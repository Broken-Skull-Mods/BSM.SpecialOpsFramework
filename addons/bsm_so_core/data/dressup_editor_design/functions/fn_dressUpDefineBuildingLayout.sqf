
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
_layout = selectRandom _layouts;
_building setVariable ["spec_ops_building_layout", _layout, true];

_layout;