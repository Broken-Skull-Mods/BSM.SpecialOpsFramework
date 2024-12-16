params ["_idc"];
diag_log format ["BSM (APP CLICK): (this = %1);", this];
_display = findDisplay 9999;

if (isNull _display) exitWith { diag_log format ["BSM (APP CLICK): _display (%1);", _display]; };
_btnCtrl = _display displayCtrl _idc;
if (isNull _btnCtrl) exitWith { diag_log format ["BSM (APP CLICK): NO FRAME ICON (%1);", _iconFrameIdc]; };
private _appInfo = _btnCtrl getVariable ["bsm_appInfo", []];
if (isNil "_appInfo" || {count _appInfo <= 0}) exitWith { diag_log "BSM (APP CLICK): NO APP INFO;"; };
// [[1],[""Test App"",""\bsm_chest_phone\data\icons\App_Icon_BSM.paa"",{ hint ""Cracked Skull""; }]]
diag_log format ["BSM (APP CLICK): (_appInfo = %1);", _appInfo];
private _name = _appInfo select 0;
private _icon = _appInfo select 1;
private _action = _appInfo select 2;
diag_log "BSM (APP CLICK): CLICKING";
diag_log format ["BSM (APP CLICK): (_action = %1);", _action];
if (typeName _action == "STRING") exitWith { 
    createDialog _action;
};
if (typeName _action == "CODE") exitWith { [] spawn _action; };