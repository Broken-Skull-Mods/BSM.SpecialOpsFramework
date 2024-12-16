params ["_display", ["_config", configNull]];
if (isNull _display) exitWith { };
uiNamespace setVariable ["SpecOps_OrkaUI_Current", _display];
private _factText = _display displayCtrl 1100;
[_display, _factText] spawn SpecOps_fnc_goodiesSpawnFunFactLoop;
_display displayAddEventhandler["KeyDown", { (_this select 1) != 1; }];

player setVariable ["bsmRespawnScreenOn", true];
private _isEnabled = false;

private _startButtonCtrl = _display displayCtrl 1602;
if (!isNull _startButtonCtrl) then { _startButtonCtrl ctrlEnable true; };

private _listCtrl = _display displayCtrl 1500;
if (!isNull _listCtrl) then {  

    private _marker = createMarkerLocal ["BSM_Respawn_Picker", getPos player];
    _marker setMarkerShapeLocal "ICON";			
    _marker setMarkerTypeLocal "Select";		
    _marker setMarkerAlphaLocal 1;
    _marker setMarkerColorLocal format ["Color%1", side (group player)];
    _marker setMarkerPosLocal (getPos player);
};


// Remove Player
player enableSimulationGlobal false;
player hideObjectGlobal true;

waitUntil { sleep 0.1; isNull (uiNamespace getVariable ["SpecOps_OrkaUI_Current",  objNull]) };

player enableSimulationGlobal true;
player hideObjectGlobal false;