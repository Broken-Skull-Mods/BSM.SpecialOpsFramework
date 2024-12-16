private _selected = (get3DENSelected "object") + (get3DENSelected "trigger") + (get3DENSelected "logic");

if (count _selected != 2) exitWith { systemChat "Must select only 2 objects"; };
private _a = _selected select 0;
private _b = _selected select 1;

private _posA = _a get3DENAttribute "position";
private _rotA = _a get3DENAttribute "rotation";

private _posB = _b get3DENAttribute "position";
private _rotB = _b get3DENAttribute "rotation";

_a set3DENAttribute ["position", _posB select 0];
_a set3DENAttribute ["rotation", _rotB select 0];

_b set3DENAttribute ["position", _posA select 0];
_b set3DENAttribute ["rotation", _rotA select 0];