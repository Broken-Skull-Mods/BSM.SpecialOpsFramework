params ["_classes"];
_handleMedicBayHealOnAction = { 
    [] spawn {     
        ["Healing...", 0.3, { !(player getVariable ["ACE_isUnconscious", false]) }, {
            [player] call ACE_medical_treatment_fnc_fullHealLocal;
        }, {}, []] call CBA_fnc_progressBar;
    }; 
};
_lobbyMedicBayHeal = ["LobbyMedicBayHeal", "Heal", "\tftm\icons\healing.paa", _handleMedicBayHealOnAction, {true}] call ace_interact_menu_fnc_createAction;
{ 
    [_x, 0, ["ACE_MainActions"], _lobbyMedicBayHeal] call ace_interact_menu_fnc_addActionToClass; 
} forEach (_classes);


_handleMedicBayHealGroupOnAction = { 
    params ["_target", "_player", "_params"];
    _players = allPlayers inAreaArray [(getPos _target), 10, 10, 0];
    [_players] remoteExec ["SpecOps_fnc_applyHealToGroupOfPlayer", -2];
};

_lobbyMedicBayGroupHeal = ["LobbyMedicBayGroupHeal", "Heal Around", "\tftm\icons\healing.paa", _handleMedicBayHealGroupOnAction, {
    ([player, "Medic"] call SpecOps_fnc_isCurrentPlayerMajorRole)
}] call ace_interact_menu_fnc_createAction;
{     
    [_x, 0, ["ACE_MainActions"], _lobbyMedicBayGroupHeal] call ace_interact_menu_fnc_addActionToClass; 
} forEach (_classes);