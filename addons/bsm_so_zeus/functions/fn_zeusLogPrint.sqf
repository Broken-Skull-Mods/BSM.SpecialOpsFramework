params ["_message"];
/*
	[] call SpecOps_fnc_zeusLogPrint;
*/
private _lastSound = missionNamespace getVariable ["bsm_zeus_log_last_sound", ""];
if (_lastSound == "SpecOps_Message_Ring_1") then { 
	_lastSound = "SpecOps_Message_Ring_4"; 
} 
else {
	_lastSound = "SpecOps_Message_Ring_1"; 
};
missionNamespace setVariable ["bsm_zeus_log_last_sound", _lastSound];
systemChat format [_message];
playSound [_lastSound, 10];