
if (is3DEN || !hasInterface || !isMultiplayer) exitWith {};

[] spawn {
	private _zeusLogs = missionNamespace getVariable ["bsm_zeus_log", []];
	while {true} do {
		_zeusLogs = missionNamespace getVariable ["bsm_zeus_log", []];
		{

			// Update Queue and Remove Current from queue
			_zeusLogs = missionNamespace getVariable ["bsm_zeus_log", []];
			_zeusLogs = _zeusLogs - [_x];
			missionNamespace setVariable ["bsm_zeus_log", _zeusLogs];

			// Save History for potential phone app
			_logHistory = missionNamespace getVariable ["bsm_zeus_log_history", []];
			_logHistory pushback (_x select 0);
			missionNamespace setVariable ["bsm_zeus_log_history", _logHistory];
			[(_x select 0)] call SpecOps_fnc_zeusLogPrint;
			sleep (_x select 1);
		} forEach (_zeusLogs);
		sleep 0.1;
	};
};