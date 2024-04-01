params ["_uploadableClasses"];
// Hacking Grid
private _roleHackerUploadTrojanCondition = {  
    ([player, "TechSavvy"] call SpecOps_fnc_isCurrentPlayerMajorRole) &&
     !(cursorObject getVariable ["_hasTrojan", false])
};
private _roleHackerUploadTrojan = ["RoleHackerUploadTrojan", "Upload Trojan", "\tftm\icons\radar_dish.paa", { 
    params ["_target", "_player", "_params"];
    [_target, _player, _params] spawn {
        params ["_target", "_player", "_params"];
        _parent = _target getVariable ["originClass", objNull];
        if (isNull _parent) exitWith {};
        _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "DemoSyncing"] call SpecOps_fnc_voiceSelectFromHashMap;
        _source = player say3D _voiceAudio;
        ["Uploading Trojan Horse...", 15, { !(player getVariable ["ACE_isUnconscious", false]) }, {
            params ["_params"];
            _target = _params select 0;
            _source = _params select 3;
            _parent = _params select 4;
            _allTrojans = player getVariable ["hackTrojans", []];
            _allTrojans pushback _parent;
            [_target] spawn { 
                params ["_target"];
                sleep 300;
                _target setVariable ["_hasTrojan", false];
                
            };
            _target setVariable ["_hasTrojan", true];
            player setVariable ["hackTrojans", _allTrojans];
        }, {
            params ["_params"];
            _source = _params select 3;
            deleteVehicle _source;
        }, [_target, _player, _params, _source, _parent]] call CBA_fnc_progressBar;
    };
 }, _roleHackerUploadTrojanCondition] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _roleHackerUploadTrojan] call ace_interact_menu_fnc_addActionToClass;
} forEach (_uploadableClasses);




private _roleHackerActivateTrojanCondition = {  
    ([player, "TechSavvy"] call SpecOps_fnc_isCurrentPlayerMajorRole) && {
       count (player getVariable ["hackTrojans", []]) > 0
    }
};
private _roleHackerActivateTrojanStatement = { 
    params ["_target", "_player", "_params"];
    [_target, _player, _params] spawn {
        params ["_target", "_player", "_params"];
        _time = _params select 0;
        _trojans = player getVariable ["hackTrojans", []];
        if (count _trojans <= 0) exitWith {};
        _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "SoundEffect", "DemoDialExplosion"] call SpecOps_fnc_voiceSelectFromHashMap;
        _source = player say3D _voiceAudio;
        ["Activating Trojan", 6.2, { !(player getVariable ["ACE_isUnconscious", false]) }, {
            params ["_params"];
            _time = _params select 1;
            _trojans = player getVariable ["hackTrojans", []];
            player setVariable ["hackTrojans", []];
            [_trojans, _time] remoteExec ["SpecOps_fnc_powerlinesShutdown", 2];
        }, {
            params ["_params"];
            _source = _params select 0;
            deleteVehicle _source;
        }, [_source, _time]] call CBA_fnc_progressBar;
    };
 };
private _roleHackerActivateTrojan = ["RoleHackerActivateTrojan", "Activate Trojans", "\tftm\icons\time_bomb.paa", {}, _roleHackerActivateTrojanCondition] call ace_interact_menu_fnc_createAction;
private _roleHackerActivateTrojan_30s = ["RoleHackerActivateTrojan30", "For 30 sec", "\tftm\icons\time_bomb.paa", _roleHackerActivateTrojanStatement, _roleHackerActivateTrojanCondition, {}, [30]] call ace_interact_menu_fnc_createAction;
private _roleHackerActivateTrojan_60s = ["RoleHackerActivateTrojan60", "For 60 sec", "\tftm\icons\time_bomb.paa", _roleHackerActivateTrojanStatement, _roleHackerActivateTrojanCondition, {}, [60]] call ace_interact_menu_fnc_createAction;
private _roleHackerActivateTrojan_10m = ["RoleHackerActivateTrojan300", "For 10 min", "\tftm\icons\time_bomb.paa", _roleHackerActivateTrojanStatement, _roleHackerActivateTrojanCondition, {}, [600]] call ace_interact_menu_fnc_createAction;
private _roleHackerActivateTrojan_30m = ["RoleHackerActivateTrojan1800", "For 30 min", "\tftm\icons\time_bomb.paa", _roleHackerActivateTrojanStatement, _roleHackerActivateTrojanCondition, {}, [1800]] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Role"], _roleHackerActivateTrojan] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "Role", "RoleHackerActivateTrojan"], _roleHackerActivateTrojan_30s] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "Role", "RoleHackerActivateTrojan"], _roleHackerActivateTrojan_60s] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "Role", "RoleHackerActivateTrojan"], _roleHackerActivateTrojan_10m] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "Role", "RoleHackerActivateTrojan"], _roleHackerActivateTrojan_30m] call ace_interact_menu_fnc_addActionToObject;
