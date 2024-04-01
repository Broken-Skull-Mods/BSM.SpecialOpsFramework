params ["_group"];
/*
    Always use this in a call not spawn.
    [group] call SpecOps_fnc_serverLoadBalanceRegisterGroup;
*/
// cancel is load balancer disabled
if (!SPECOPS_LOAD_BALANCER_ENABLED) exitWith {};
diag_log format ["SPEC-OPS (Load Balancer): Registering Group %1 to be tracked by LB.", _group];
private _loadBlancerRegisteredGroups = missionNamespace getVariable ["SpecOps_LoadBalancer_Registered", []];
_loadBlancerRegisteredGroups = _loadBlancerRegisteredGroups - [objNull];
_loadBlancerRegisteredGroups pushbackUnique _group;
missionNamespace setVariable ["SpecOps_LoadBalancer_Registered", _loadBlancerRegisteredGroups];
