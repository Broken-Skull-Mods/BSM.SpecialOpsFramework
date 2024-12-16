private _selected = (get3DENSelected "object") + (get3DENSelected "trigger") + (get3DENSelected "logic");

if (count _selected <= 0) exitWith { systemChat "Must select one object"; };
if (count _selected > 1) exitWith { systemChat "Must select only one object"; };

private _data = missionNamespace getVariable ["bsm_dev_pos_rot_copy", nil];
if (isNil "_data") exitWith { systemChat "No copied data."; };
private _object = _selected select 0;
private _pos = _object set3DENAttribute ["position", (_data select 0)];
private _rot = _object set3DENAttribute ["rotation", (_data select 1)];