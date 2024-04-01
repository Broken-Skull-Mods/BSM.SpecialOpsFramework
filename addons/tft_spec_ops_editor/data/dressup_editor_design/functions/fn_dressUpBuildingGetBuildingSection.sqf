params ["_buildingInfo", "_section"];

/*
Return all information related to a loaded building

 [buildingInfo, "men"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
 [buildingInfo, "hostages"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
 [buildingInfo, "staticWeapons"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
 [buildingInfo, "furnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
 [buildingInfo, "intelFurnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
 
*/
diag_log format["SPEC-OPS (SpecOps_fnc_dressUpBuildingGetBuildingSection): %1 >> %2", _buildingInfo, _section];
getArray (_buildingInfo >> _section);


// TFT_LOAD_BUILDING = {
//     params ["_building"];
//     _unitPositions = getArray (_building >> "men");
//     _hostagePositions = getArray (_building >> "hostages");
//     _staticMachineGunnerPositions = getArray (_building >> "staticWeapons");
//     _Furnitures = getArray (_building >> "furnitures");
//     _intelFurnitures = getArray (_building >> "intelFurnitures");
// };
