params ["_groups"];
/*
    Always use this in a call not spawn.
    [[group]] call SpecOps_fnc_serverLoadBalanceAssignGroup;
*/
// cancel is load balancer disabled
if (!SPECOPS_LOAD_BALANCER_ENABLED) exitWith {};
if (true) exitWith {};



private _clientToGroupCount = missionNamespace getVariable ["SpecOps_LoadBalancer_ClientsToGroupCount", createHashMap];
private _arrayMap = _clientToGroupCount toArray false;
// Clean up hash and array
{
    private _key = _x select 0;
    private _value = _x select 1;
    
    if (isNil "_key" || _key == 2) then { 
        _arrayMap = _arrayMap - [_x]; 
        _clientToGroupCount deleteAt _key;
    };
} forEach (_arrayMap);
// No Clients? Only Dedicated Server and/or Host
if (count _arrayMap <= 1) exitWith { };

private _loadBalancerLocked = missionNamespace getVariable ["SpecOps_LoadBalancer_Locked", false];
// If Load Balancer is busy cancel next request.
if (_loadBalancerLocked) exitWith {diag_log "SPEC-OPS (Load Balancer): Load balancer is currently busy and locked.";};
missionNamespace setVariable ["SpecOps_LoadBalancer_Locked", true];
private _countOffloaded = 0;
private _maxOffloaded = 0;
{

    private _group = _x;
    private _isIgnored = _group getVariable ["SpecOps_Load_Balancer_Ignored", false];
    if (_isIgnored) then {continue;};
    if (typeName _group != "GROUP") then { continue; };
    // Only run on group assigned to server.
    if (!(groupOwner _group == 2)) then { _countOffloaded = _countOffloaded + 1; continue; };
    
    private _sorted = [_arrayMap, [], { count (_x select 1) }, "ASCEND"] call BIS_fnc_sortBy;
    private _chosenClient = _sorted select 0;
    if (isNil "_chosenClient") then { continue; };
    _arrayMap = _arrayMap - [_chosenClient];
    private _nextInlineKey = _chosenClient select 0; // server is default
    if (isNil "_nextInlineKey") then { continue; };
    private _nextInlineValue = _chosenClient select 1; // server is default


    _nextInlineValue - [objNull];
    _group setGroupOwner _nextInlineKey;
    _nextInlineValue pushbackUnique _group;
    _chosenClient = [_nextInlineKey, _nextInlineValue];
    _arrayMap pushback _chosenClient;
    _clientToGroupCount set [_nextInlineKey, _nextInlineValue];
    diag_log format ["SPEC-OPS (Load Balancer): Assigning %1 to %2", _group, _nextInlineKey];
} forEach (_groups);

//

missionNamespace setVariable ["SpecOps_LoadBalancer_ClientsToGroupCount", _clientToGroupCount];
// Unlock Balancer
missionNamespace setVariable ["SpecOps_LoadBalancer_Locked", false];
