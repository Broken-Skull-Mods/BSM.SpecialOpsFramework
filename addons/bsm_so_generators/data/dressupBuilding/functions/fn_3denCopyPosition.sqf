private _selected = (get3DENSelected "object") + (get3DENSelected "trigger") + (get3DENSelected "logic");

if (count _selected <= 0) exitWith { systemChat "Must select one object"; };
if (count _selected > 1) exitWith { systemChat "Must select only one object"; };

private _object = _selected select 0;
private _pos = _object get3DENAttribute "position";
private _rot = _object get3DENAttribute "rotation";
missionNamespace setVariable ["bsm_dev_pos_rot_copy", [(_pos select 0), (_rot select 0)]];
