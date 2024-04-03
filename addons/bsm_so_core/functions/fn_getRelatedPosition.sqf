params ["_parent", "_related"];

/*
 [testBuilding, [0,0,0]] call SpecOps_fnc_getRelatedPosition;
*/
// private _placeholderForUnits  = missionNamespace getVariable ["spawnPlaceholder", objNull];
// if (isNull _placeholderForUnits) then {
//   _placeholderForUnits = "#lightpoint" createVehicleLocal [0,0,0];
//   _placeholderForUnits hideObject true;
//   missionNamespace setVariable ["spawnPlaceholder", _placeholderForUnits];
// };

// [_parent, _placeholderForUnits, _related, 0] call BIS_fnc_relPosObject;
_parent modelToWorld _related;
// private _XY = _placeholderForUnits worldToModelVisual getPosATL _x;
// private _Z = (_building vectorWorldToModelVisual ASLToAGL getPosASL _x) select 2;    