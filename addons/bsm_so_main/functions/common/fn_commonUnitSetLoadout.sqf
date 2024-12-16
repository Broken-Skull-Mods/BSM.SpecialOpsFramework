params ["_unit"];
/*
    [unit] call SpecOps_fnc_commonUnitSetLoadout;
*/
diag_log format ["Loading Loadout of Unit;"];
private _configFile = configfile >> 'CfgVehicles' >> (typeof _unit); 
if (hasInterface) then { [_unit] call SpecOps_fnc_dressUpSetIdentity; };
if (local _unit) then {
    _onSpawn = {
        params ["_unit"];
        sleep 0.2; 
        private _configFile = configfile >> 'cfgvehicles' >> (typeof _unit); 
        private _backpack = getText(_configFile >> 'backpack'); 
        // diag_log format ["Waiting for Backpack;"];
        waituntil {sleep 0.2; backpack _unit == _backpack};
        // diag_log format ["Backpack is assign;"];
        if !(_unit getVariable ['ALiVE_OverrideLoadout',false]) then {
            _loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _unit) >> 'ALiVE_orbatCreator_loadout'); 
            _unit setunitloadout _loadout;
            reload _unit;
            _unit setVariable ['ALiVE_OverrideLoadout',true];
        };
    };
    _unit spawn _onSpawn;
    (_unit) addMPEventHandler ['MPRespawn', _onSpawn];
};
