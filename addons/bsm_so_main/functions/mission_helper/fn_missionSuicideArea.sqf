params ["_thisTrigger", "_devices", ["_triggerMan", nil]];
/*
	[] call SpecOps_fnc_missionSuicideArea;
*/
if (isDedicated || !hasInterface) exitWith {};
private _killTriggerMan = true;
if (isNil "_triggerMan") then { _triggerMan = _thisTrigger; _killTriggerMan = false; };
private _sound = playSound3D ["\bsm_so_audio\data\sounds\terrorists\Allahu_Akbar_Scream.ogg", _triggerMan, true, getPos _triggerMan, 5, 1];
waitUntil { soundParams _sound isEqualTo [] };

if (alive _triggerMan) then {
	{ _x setDamage 1; } forEach (_devices);
	if (_killTriggerMan) then { _triggerMan setDamage 1; };	
};