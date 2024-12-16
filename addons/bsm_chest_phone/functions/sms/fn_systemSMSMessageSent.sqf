params ["_id"];
private _sendIt = true;
if (!isNil "_id") then {
	private _smsList = missionNamespace getVariable ["bsm_missionSMSList", []];
	if (!_id in _smsList) then { _sendIt = true; } else { _sendIt = false; };
};

_sendIt;