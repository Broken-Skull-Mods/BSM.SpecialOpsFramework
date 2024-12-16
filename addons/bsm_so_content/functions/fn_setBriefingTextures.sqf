params ["_board"];

private _slides = _board getVariable ["bsm_so_texture_code", []];
if (count _slides <= 0) exitWith { };

(_board) setobjecttexture [0, (_slides select 0)];