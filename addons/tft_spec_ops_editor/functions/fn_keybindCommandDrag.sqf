/*
    [] spawn SpecOps_fnc_keybindCommandDrag;
*/
call SpecOps_fnc_keybindCommandYouAlive;
_target = cursorObject;
if (isNull _target) exitWith {};
isMan = _target isKindOf "Man";
if (!isMan) exitWith {};
_distance = player distance _target;
if(_distance > 3) exitWith {};

_canDrag = [player, _target] call ace_dragging_fnc_canDrag;
if (!_canDrag) exitWith {};
// [player, _target] call ace_dragging_fnc_dragObject;
[player, _target] call ace_dragging_fnc_startDrag;
