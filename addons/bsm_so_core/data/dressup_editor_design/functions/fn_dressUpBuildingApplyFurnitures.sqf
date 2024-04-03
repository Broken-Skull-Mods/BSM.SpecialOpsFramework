params ["_building", "_buildingInfo", ["_isLocal", false], ["_skipInteractable", false]];

/*
Return all information related to a loaded building
_layouts = ["Land_Offices_01_V1_F", true] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts;
_buildingLayout = selectRandom _layouts;
[_buildingLayout, "furnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
[testBuilding, _buildingLayout] call SpecOps_fnc_dressUpBuildingApplyFurnitures;
*/
_buildingPosition = getPos _building;
_buildingDir = getDir _building;
_loadedFurniture =  [_buildingInfo, "furnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
_furnitures = [];
{
    private _itemClass = _x select 0;
    private _itemPosition = _x select 1;
    private _itemDir = _x select 2;
    private _itemUp = _x select 3;
    private _itemDirection = _x select 4;
    private _options = _x select 5;
    private _isVisibleFromOutside = (_options select 1 == 1);
    private _isDemoLead = (_options select 2 == 1);
    private _isDemoTrigger = (_options select 3 == 1);
    private _isHackable = (_options select 4 == 1);
    private _isImportant = (_options select 5 == 1);
    private _isVehicle = (_options select 6 == 1);
    private _object = objNull;
    if (_isHackable || _isDemoLead || _isDemoTrigger) then {
        if (_skipInteractable) then { continue; };
        _object = _itemClass createVehicle [0,0,0];
        _object animateSource ["server_hide_source", 1, true];
    }else {
        if (_isVehicle) then {
            _object = _itemClass createVehicle [0,0,0];
        }else {
            _object = createSimpleObject [_itemClass, [0,0,0], _isLocal];
        };
    };
    _object setVariable ["Unit_VisibleFromOutside", _isVisibleFromOutside];
    _object allowdamage false;
    if (!_isLocal) then {
        _object hideObjectGlobal true;
        _object enableSimulationGlobal false;
    } else {
        _object hideObject false;
        _object enableSimulation false;
    };

    [_building, _object, _itemPosition, [_itemDir, _itemUp], false, true] call SpecOps_fnc_commonRelPosObject;
    // [_building, _object, _itemPosition, 0] call BIS_fnc_relPosObject;
    // private _correctedRotation = _buildingDir + _itemDirection;
    // // if 285.73 is lower than 
    // if(_buildingDir < _itemDirection) then {  
    //     _correctedRotation = _buildingDir + _itemDirection;
    // };
  
    // _object setDir _correctedRotation;
    _furnitures pushback _object;
    _object allowdamage true;

} forEach (_loadedFurniture);

_furnitures;
