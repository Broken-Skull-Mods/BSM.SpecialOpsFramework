if (!hasInterface || is3DEN) exitWith { };


_customArsenalAction = { 
    params ["_target", "_player", "_params"];
    private _camo  = _target getVariable ["bs_specops_arsenal_camo", "WL"]; 
    private _faction  = _target getVariable ["bs_specops_arsenal", ""];
    // [player, player, false] call ace_arsenal_fnc_openBox;
    if (_faction == "preset_1" || _faction == "preset_2" || _faction == "preset_3" || _faction == "preset_4") then {
        private _presets = (missionNamespace getVariable ["bsm_so_session_presets", []]) select { (_x select 0) == _faction; };
        private _allItems = [];
        { _allItems append ([_x select 2] call SpecOps_fnc_commonExtractUnitGearnStuff); } forEach (_presets);
        [_target, _allItems, false] call ace_arsenal_fnc_addVirtualItems;
        [_target, player] call ace_arsenal_fnc_openBox;
    } else {
        private _allItems = [_target, _faction, _camo] call SpecOps_fnc_commonArsenalFactionItems;
        [_target, _allItems, false] call ace_arsenal_fnc_addVirtualItems;
        [_target, player] call ace_arsenal_fnc_openBox;
    };

 };


 _arsenalCondition = {
    params ["_target"];
    private _faction = _target getVariable ["bs_specops_arsenal", ""];
    !isNil "_faction" && { _faction != "" }
 };
_presetsParent = ["ArsenalPresets", "Arsenal", "\tftm\icons\steyr_aug.paa",  {}, _arsenalCondition] call ace_interact_menu_fnc_createAction;
_arsenalCustom = ["ArsenalOpen", "Custom", "\tftm\icons\ammo_box.paa", _customArsenalAction, {true}, {}] call ace_interact_menu_fnc_createAction;


["All", 0, ["ACE_MainActions"], _presetsParent, true] call ace_interact_menu_fnc_addActionToClass;
["All", 0, ["ACE_MainActions", "ArsenalPresets"], _arsenalCustom, true] call ace_interact_menu_fnc_addActionToClass;


private _keyPair = [
    ["Rifleman", "Rifleman"],
    ["GL", "Grenadier"],
    ["AR", "Autorifleman"],
    ["SNP", "Sniper"],
    ["Medic", "Medic"],
    ["RTO", "AT"],
    ["DIVER", "Special"]
];


player setVariable ["bsm_so_faction_keypair", _keyPair];

{
    _unitClass = _x select 0;
    _name = _x select 1;
    _handleResetAction = {
        params["_target","_player","_params"];
        private _camo  = _target getVariable ["bs_specops_arsenal_camo", "WL"]; 
        private _faction  = _target getVariable ["bs_specops_arsenal", nil];
        private _role = _params select 0;
        private _unitClass = format ['%1_%3_%2', _faction, _camo, _role];
        [_unitClass] spawn {
            params ["_unitClass"];
            profileNamespace setVariable [_unitClass, nil];
            saveProfileNamespace;
        };
    };

    _handleSaveAction = {
        params["_target","_player","_params"];
        private _camo  = _target getVariable ["bs_specops_arsenal_camo", "WL"]; 
        private _faction  = _target getVariable ["bs_specops_arsenal", nil];
        private _role = _params select 0;
        private _unitClass = format ['%1_%3_%2', _faction, _camo, _role];
        profileNamespace setVariable [_unitClass, (getUnitLoadout [player, true])];
    };
    _advancedFeatureCondition = {
        params ["_target"];
        private _faction = _target getVariable ["bs_specops_arsenal", ""];
        _faction != "" && { _faction != "preset_1" && _faction != "preset_2" && _faction != "preset_3" && _faction != "preset_4" };
    };
    _saveCustomPresets = [format["%1_save", _unitClass], "Save", "\tftm\icons\save.paa",  {}, _advancedFeatureCondition] call ace_interact_menu_fnc_createAction;
    _confirmsaveCustomPresets = [format["%1_save_confirm", _unitClass], "Confirm", "\tftm\icons\check_mark.paa", _handleSaveAction, {true}, {}, [_unitClass]] call ace_interact_menu_fnc_createAction;
    _resetCustomPresets = [format["%1_reset", _unitClass], "Reset", "\tftm\icons\trash_can.paa",  {}, _advancedFeatureCondition] call ace_interact_menu_fnc_createAction;
    _confirmResetCustomPresets = [format["%1_reset_confirm", _unitClass], "Confirm", "\tftm\icons\check_mark.paa", _handleResetAction, { true }, {}, [_unitClass]] call ace_interact_menu_fnc_createAction;


    _handleLoadPresetAction = {
        params["_target","_player","_params"];
        private _camo  = _target getVariable ["bs_specops_arsenal_camo", "WL"]; 
        private _faction  = _target getVariable ["bs_specops_arsenal", ""];
        private _role = _params select 0;
        private _presetName = _params select 0;
        if (_faction == "preset_1" || _faction == "preset_2" || _faction == "preset_3" || _faction == "preset_4") then {
            private _presets = (missionNamespace getVariable ["bsm_so_session_presets", []]) select { (_x select 0) == _faction; };
            private _preset = _presets select { _x select 1 == _presetName };
            if (count _preset <= 0) then { systemChat format ["The loadout for '%1' is missing from '%2' loadout... mission marker forgot or left that type of loadout unset.", _presetName, _faction]; };
            private _first = _preset select 0;
            private _unitLoadout = _first select 2;
            player setVariable ["SpecOps_Selected_Loadout", _unitLoadout];
            player setUnitLoadout _unitLoadout;
        } else {

            private _unitClass = format ['%1_%3_%2', _faction, _camo, _role];
            private _customPreset = profileNamespace getVariable [_unitClass, nil];
            if(!isNil "_customPreset") exitWith { 
                player setUnitLoadout _customPreset; 
                player setVariable ["SpecOps_Selected_Loadout", _customPreset]; 
            };
            private _unitLoadout = getArray (configFile >> "CfgVehicles" >> _unitClass >> "ALiVE_orbatCreator_loadout");
            player setUnitLoadout _unitLoadout;
            player setVariable ["SpecOps_Selected_Loadout", _unitLoadout];
            profileNamespace setVariable ["bsm_so_lastLoadout", _presetName];
        };


    };

    _handleLoadPreset = [_unitClass, format["%1", _name], "", _handleLoadPresetAction, {
        params["_target","_player","_params"];

        private _camo  = _target getVariable ["bs_specops_arsenal_camo", "WL"]; 
        private _faction  = _target getVariable ["bs_specops_arsenal", ""];
        // Skip if not on the fly.
        if (_faction != "preset_1" && _faction != "preset_2" && _faction != "preset_3" && _faction != "preset_4") exitWith {true;};
        private _presetName = _params select 0;
        private _presets = (missionNamespace getVariable ["bsm_so_session_presets", []]) select { (_x select 0) isEqualTo _faction; };
        private _preset = _presets select { (_x select 1) isEqualTo _presetName };
        if (count _preset <= 0) then { false; } else { true; };
    }, {}, [_unitClass, _name]] call ace_interact_menu_fnc_createAction;

    ["All", 0, ["ACE_MainActions", "ArsenalPresets"], _handleLoadPreset, true] call ace_interact_menu_fnc_addActionToClass;
    ["All", 0, ["ACE_MainActions", "ArsenalPresets", _unitClass], _saveCustomPresets, true] call ace_interact_menu_fnc_addActionToClass;
    ["All", 0, ["ACE_MainActions", "ArsenalPresets", _unitClass, format["%1_save", _unitClass]], _confirmsaveCustomPresets, true] call ace_interact_menu_fnc_addActionToClass;
    ["All", 0, ["ACE_MainActions", "ArsenalPresets", _unitClass], _resetCustomPresets, true] call ace_interact_menu_fnc_addActionToClass;
    ["All", 0, ["ACE_MainActions", "ArsenalPresets", _unitClass, format["%1_reset", _unitClass]], _confirmResetCustomPresets, true] call ace_interact_menu_fnc_addActionToClass; 
} forEach (_keyPair); 

