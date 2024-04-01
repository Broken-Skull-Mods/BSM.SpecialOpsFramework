params ["_unit", "_initialPos", "_rotation", "_fixedAnimation"];

/*
  [_unit, _initialPos, _rotation, _fixedAnimation] call fn_dressUpEnemyUpdateFixedPosition;
  [_unit, _initialPos, _rotation, _fixedAnimation] remoteExec ["fn_dressUpEnemyUpdateFixedPosition", _owner];
*/
_unit setPosATL _initialPos;
_unit setDir _rotation;
_unit switchMove _fixedAnimation;
_unit playMoveNow _fixedAnimation;