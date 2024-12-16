params [["_reportBackTo", { params ["_player", "_nextPos"]; _player setPos _nextPos; }]];
private _ctrl = (findDisplay 1238) displayCtrl 1500;
if (isNull _ctrl) exitWith { };

private _selection = lbCurSel _ctrl;
private _objIndex = _ctrl lbData _selection;
private _locations = missionNamespace getVariable ["moduleListTMP", []];
private _obj = _locations select parseNumber (_objIndex);
if (isNil "_obj") then { _obj = player;  };
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
diag_log format ["SPEC-OPS: %1 | POS RESPAWN", _pos];


private _nextPos = [[_pos, 5]] call BIS_fnc_randomPosTrigger;
if ((_nextPos select 0) == 0 && (_nextPos select 1) == 0) exitWith { player setVariable ["bsmRespawnUsed", true]; [] spawn SpecOps_fnc_uiTdaButtonExit; };

[player, _nextPos] call _reportBackTo;

player setVariable ["bsmRespawnUsed", true];
[] spawn SpecOps_fnc_uiTdaButtonExit;
missionNamespace setVariable ["hasDeployed", true];