/*
    [_unit] call SpecOps_fnc_commonInitialUnitFaction;
*/


if (local (_this select 0)) then {
    _onSpawn = {
        _this = _this select 0;sleep 0.2; 
        _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); 
        waituntil {sleep 0.2; backpack _this == _backpack};

        if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {
            _loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); 
            _this setunitloadout _loadout;
            [_this, 'CTRG13'] call BIS_fnc_setUnitInsignia;
            reload _this
        };
    };

    _this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];
};