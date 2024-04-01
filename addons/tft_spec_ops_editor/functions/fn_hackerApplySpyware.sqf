params ["_uploadableClasses"];
private _condition = {  
    ([player, "TechSavvy"] call SpecOps_fnc_isCurrentPlayerMajorRole) &&  
     !(cursorObject getVariable ["_hasSpyware", false])
};
private _statement = ["RoleHackerInstallSpyware", "Install Hack", "\tftm\icons\radar_dish.paa", { 
    params ["_target", "_player", "_params"];
    [_target, _player, _params] spawn {
        params ["_target", "_player", "_params"];
        _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "DemoSyncing"] call SpecOps_fnc_voiceSelectFromHashMap;
        _source = player say3D _voiceAudio;
        ["Installing Spyware", 15, { !(player getVariable ["ACE_isUnconscious", false]) }, {
            params ["_params"];
            _target = _params select 0;
            _source = _params select 3;
            _target setVariable ["_hasSpyware", true];
            _target setVariable ["_wasHacked", true];
            _target animateSource ["server_hide_source", 0, true];
        }, {
            params ["_params"];
            _source = _params select 3;
            deleteVehicle _source;
        }, [_target, _player, _params, _source]] call CBA_fnc_progressBar;
    };
 }, _condition] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _statement, true] call ace_interact_menu_fnc_addActionToClass;
} forEach (_uploadableClasses);


