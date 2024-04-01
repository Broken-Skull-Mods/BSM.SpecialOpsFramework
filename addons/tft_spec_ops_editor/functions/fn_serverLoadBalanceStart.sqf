addMissionEventHandler ["PlayerConnected", {
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];
    private _ff = (missionNamespace getVariable ["SpecOps_LoadBalancer_ClientsToGroupCount", createHashMap]);
    _ff set [_owner, []];
    missionNamespace setVariable ["SpecOps_LoadBalancer_ClientsToGroupCount", _ff];
    diag_log format ["SPEC-OPS (Load Balancer): Added Client %1 to LB pool %2", _name, _owner];
}];

addMissionEventHandler ["PlayerDisconnected", {
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];
    private _ff = (missionNamespace getVariable ["SpecOps_LoadBalancer_ClientsToGroupCount", createHashMap]);
    _ff deleteAt _owner;
    missionNamespace setVariable ["SpecOps_LoadBalancer_ClientsToGroupCount", _ff];
    diag_log format ["SPEC-OPS (Load Balancer): Removed Client %1 to LB pool %2", _name, _owner];
}];

[] spawn {
    // Not Multiplayer Instance or Not Server? Load Balancing is useless.
    if (!isMultiplayer || !isServer) exitWith {};
    // wait until CBA settings are available
    waitUntil { uiSleep 0.1; !isNil "SPECOPS_LOAD_BALANCER_ENABLED" };
    // Cancel if load balancer is disabled
    if (!SPECOPS_LOAD_BALANCER_ENABLED) exitWith {};
    waitUntil { uiSleep 0.1; !isNil "SPECOPS_LOAD_BALANCER_LOOP_TIME" };
    // System Loop Cycle
    while {true} do {
        private _loadBlancerRegisteredGroups = missionNamespace getVariable ["SpecOps_LoadBalancer_Registered", []];
        [_loadBlancerRegisteredGroups] call SpecOps_fnc_serverLoadBalanceAssignGroup;
        call SpecOps_fnc_commonSleepFPSBased; // Sleep
        uiSleep SPECOPS_LOAD_BALANCER_LOOP_TIME;
    };
};

