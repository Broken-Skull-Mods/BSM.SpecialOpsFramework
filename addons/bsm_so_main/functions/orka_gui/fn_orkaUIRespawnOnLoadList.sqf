/*
    SpecOps_fnc_orkaUIRespawnOnLoadList

    
    ["SpecOps_fnc_orkaUIRespawnOnLoadList"] call BIS_fnc_recompile;
*/
params ["_ctrl"];
uisleep 0.2;

private _list = missionNamespace getVariable ["moduleListTMP", []];

{
    private _obj = _x;
    private _pos = [];
    private _name = "ERR";
    if (typeName _obj == "ARRAY") then {
        _name = _obj select 1;
        _pos = _obj select 0;
    } else {
        _name = _obj getVariable ["bsm_mr_name", ""];
        _name = _name + "(Field Medical)"; 
        _pos = (getPos _obj);
    };
    private _index = _ctrl lbAdd _name;
    private _indexData = _list find _obj;
    _ctrl lbSetData [_index, str _indexData];
} forEach (_list);


_ctrl ctrlAddEventHandler [ "LBSelChanged", {
    params ["_control", "_lbCurSel", "_lbSelection"];
    private _locations = missionNamespace getVariable ["moduleListTMP", []];
    private _objIndex = _control lbData _lbCurSel;
    private _obj = _locations select (parseNumber (_objIndex));
    private _titleCtrl = findDisplay 1238 displayCtrl 1003;
    private _pos = [];
    private _name = "ERR";
    if (typeName _obj == "ARRAY") then {
        _name = _obj select 1;
        _pos = _obj select 0;
    } else {
        _name = _obj getVariable ["bsm_mr_name", ""];
        _name = _name + "(Field Medical)"; 
        _pos = (getPos _obj);
    };
    _titleCtrl ctrlSetText (_name);
    private _titleCtrl = findDisplay 1238 displayCtrl 1100;
    private _map = findDisplay 1238 displayCtrl 51;
    _map ctrlMapSetPosition [];
    _map ctrlMapAnimAdd [0.5, 0.05, _pos];
    "BSM_Respawn_Picker" setMarkerPosLocal _pos;
    "BSM_Respawn_Picker" setMarkerTextLocal _name;
    ctrlMapAnimCommit _map;
}];

if (count _list > 0) then {
    private _obj = _list select 0;
    private _pos = [];
    private _name = "ERR";
    if (typeName _obj == "ARRAY") then {
        _name = _obj select 1;
        _pos = _obj select 0;
    } else {
        _name = _obj getVariable ["bsm_mr_name", ""];
        _name = _name + "(Field Medical)"; 
        _pos = (getPos _obj);
    };
    lbSetCurSel [1500, 0];
    private _map = findDisplay 1238 displayCtrl 51;
    _map ctrlMapSetPosition [];
    _map ctrlMapAnimAdd [0.5, 0.05, _pos];
    ctrlMapAnimCommit _map;
    "BSM_Respawn_Picker" setMarkerPosLocal _pos;
    "BSM_Respawn_Picker" setMarkerTextLocal _name;
};