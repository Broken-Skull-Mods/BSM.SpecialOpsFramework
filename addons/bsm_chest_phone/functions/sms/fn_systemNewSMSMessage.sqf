params ["_name", "_text", ["_id", nil], ["_delay", 0], ["_font", "PuristaLight"]];
/*
	["Todd", "Hey i got a new objective for you."] SpecOps_fnc_systemNewSMSMessage;
*/
uiSleep _delay;
private _sendIt = true;
if (!isNil "_id") then {
	private _smsList = missionNamespace getVariable ["bsm_missionSMSList", []];
	if (!(_id in _smsList)) then { _smsList pushBackUnique _id; _sendIt = true; } else { _sendIt = false; };
	missionNamespace setVariable ["bsm_missionSMSList", _smsList];
	
};
if (_sendIt) then {
	playSound ["OMPhoneRingSMS", 10];
	sleep 1;
	private _txt = format ["<t font='%2' size='1'>Message from %1</t><br />", _name, _font];
	_txt = _txt + format ["<t font='%2' size='0.8'>%1</t>", _text, _font];
	[parseText _txt, true, nil, 7, 0.7, 0] spawn BIS_fnc_textTiles;

	private _smsHistory = missionNamespace getVariable ["bsm_sms", []];
	_smsHistory pushBack [_name, _text, time];
	missionNamespace setVariable ["bsm_sms", _smsHistory];
};
