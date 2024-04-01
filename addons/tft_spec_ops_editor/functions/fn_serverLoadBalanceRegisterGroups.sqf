params ["_groups"];
/*
    Always use this in a call not spawn.
    [groups] call SpecOps_fnc_serverLoadBalanceRegisterGroups;
*/
// cancel is load balancer disabled
if (!SPECOPS_LOAD_BALANCER_ENABLED) exitWith {};
{ [_x] call SpecOps_fnc_serverLoadBalanceRegisterGroup; } forEach (_groups);