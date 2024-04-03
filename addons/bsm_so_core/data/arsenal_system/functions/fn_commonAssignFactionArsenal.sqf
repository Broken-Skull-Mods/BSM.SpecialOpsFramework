params ["_object", ["_extraItems", []]];
// , "_faction", "_camo", "_arsenalItems", "_arsenalClasses"

/*
    [_object] call BrokenSkullMods_fnc_commonAssignFactionArsenal;
*/
private _useClassForAce  = _object getVariable ["bs_specops_arsenal_applyClass", false];
private _camo  = _object getVariable ["bs_specops_arsenal_camo", "WL"]; 
private _faction  = _object getVariable ["bs_specops_arsenal", nil];
if (isNil "_faction") exitWith { };
private _presetFactions = "isArray (_x >> 'ALiVE_orbatCreator_loadout') && getNumber (_x >> 'side') == 1 && getText (_x >> 'bsCamo') == _camo  && getText (_x >> 'faction') == _faction" configClasses (configFile >> "CfgVehicles");
private _commonItems = getArray (configFile >> "CfgFactionClasses" >> _faction >> "brokenSkullArsenal");
private _allItems = _extraItems;
{ _allItems pushbackUnique _x; } forEach (_commonItems);
{
    private _loadout = getArray (_x >> "ALiVE_orbatCreator_loadout");
    if (count _loadout <= 0) then { continue; };
    private _extracted  = [_loadout] call SpecOps_fnc_commonExtractUnitGearnStuff;
    { _allItems pushbackUnique _x; } forEach (_extracted);
} forEach(_presetFactions);
_allItems;

[player, _allItems, true] call ace_arsenal_fnc_addVirtualItems;

private _rifleman = format ['%1_Rifleman_%2', _faction, _camo];
private _grenadier = format ['%1_GL_%2', _faction, _camo];
private _radioOperator = format ['%1_RTO_%2', _faction, _camo];
private _machinegunner = format ['%1_AR_%2', _faction, _camo];
private _sniper = format ['%1_SNP_%2', _faction, _camo];
private _medic = format ['%1_Medic_%2', _faction, _camo];
private _diver = format ['%1_DIVER_%2', _faction, _camo];

_customArsenalAction = { [player, player, false] call ace_arsenal_fnc_openBox; };
_presetsParent = ["ArsenalPresets", "Arsenal", "\tftm\icons\steyr_aug.paa",  {}, {true}] call ace_interact_menu_fnc_createAction;
_arsenalCustom = ["ArsenalOpen", "Custom", "\tftm\icons\ammo_box.paa", _customArsenalAction, {true}] call ace_interact_menu_fnc_createAction;



if (_useClassForAce) then {
    [(typeof _object), 0, ["ACE_MainActions"], _presetsParent] call ace_interact_menu_fnc_addActionToClass;
    [(typeof _object), 0, ["ACE_MainActions", "ArsenalPresets"], _arsenalCustom] call ace_interact_menu_fnc_addActionToClass;
} else {
    [_object, 0, ["ACE_MainActions"], _presetsParent] call ace_interact_menu_fnc_addActionToObject;
    [_object, 0, ["ACE_MainActions", "ArsenalPresets"], _arsenalCustom] call ace_interact_menu_fnc_addActionToObject;
};

private _keyPair = [
    [_rifleman, "Rifleman"],
    [_grenadier, "Grenadier"],
    [_radioOperator, "Radio"],
    [_machinegunner, "Autorifleman"],
    [_sniper, "Sniper"],
    [_medic, "Medic"],
    [_diver, "Diver"]
];

{
    _unitClass = _x select 0;
    _name = _x select 1;
    _handleResetAction = {
        params["_target","_player","_params"];
        _unitClass = _params select 0;
        [_unitClass] spawn {
            params ["_unitClass"];
            profileNamespace setVariable [_unitClass, nil];
            saveProfileNamespace;
        };
    };

    _handleSaveAction = {
        params["_target","_player","_params"];
        _unitClass = _params select 0;
        profileNamespace setVariable [_unitClass, (getUnitLoadout [player, true])];
    };
    
    _saveCustomPresets = [format["%1_save", _unitClass], "Save", "\tftm\icons\save.paa",  {}, { true }] call ace_interact_menu_fnc_createAction;
    _confirmsaveCustomPresets = [format["%1_save_confirm", _unitClass], "Confirm", "\tftm\icons\check_mark.paa", _handleSaveAction, {true}, {}, [_unitClass]] call ace_interact_menu_fnc_createAction;

    _handleLoadPresetAction = {
        params["_target","_player","_params"];
        private _unitClass = _params select 0;
        private _customPreset = profileNamespace getVariable [_unitClass, nil];
        if(!isNil "_customPreset") exitWith { player setUnitLoadout _customPreset; player setVariable ["SpecOps_Selected_Loadout", _customPreset]; };
        private _unitLoadout = getArray (configFile >> "CfgVehicles" >> _unitClass >> "ALiVE_orbatCreator_loadout");
        player setUnitLoadout _unitLoadout;
        player setVariable ["SpecOps_Selected_Loadout", _unitLoadout];
    };
    _handleLoadPreset = [_unitClass, format["%1", _name], "", _handleLoadPresetAction, {true}, {}, [_unitClass]] call ace_interact_menu_fnc_createAction;
    _resetCustomPresets = [format["%1_reset", _unitClass], "Reset", "\tftm\icons\trash_can.paa",  {}, { true }] call ace_interact_menu_fnc_createAction;
    _confirmResetCustomPresets = [format["%1_reset_confirm", _unitClass], "Confirm", "\tftm\icons\check_mark.paa", _handleResetAction, { true }, {}, [_unitClass]] call ace_interact_menu_fnc_createAction;
    if (_useClassForAce) then {
            [(typeof _object), 0, ["ACE_MainActions", "ArsenalPresets"], _handleLoadPreset] call ace_interact_menu_fnc_addActionToClass;
            [(typeof _object), 0, ["ACE_MainActions", "ArsenalPresets", _unitClass], _saveCustomPresets] call ace_interact_menu_fnc_addActionToClass;
            [(typeof _object), 0, ["ACE_MainActions", "ArsenalPresets", _unitClass, format["%1_save", _unitClass]], _confirmsaveCustomPresets] call ace_interact_menu_fnc_addActionToClass;
            [(typeof _object), 0, ["ACE_MainActions", "ArsenalPresets", _unitClass], _resetCustomPresets] call ace_interact_menu_fnc_addActionToClass;
            [(typeof _object), 0, ["ACE_MainActions", "ArsenalPresets", _unitClass, format["%1_reset", _unitClass]], _confirmResetCustomPresets] call ace_interact_menu_fnc_addActionToClass; 
    } else {
            [_object, 0, ["ACE_MainActions", "ArsenalPresets"], _handleLoadPreset] call ace_interact_menu_fnc_addActionToObject;
            [_object, 0, ["ACE_MainActions", "ArsenalPresets", _unitClass], _saveCustomPresets] call ace_interact_menu_fnc_addActionToObject;
            [_object, 0, ["ACE_MainActions", "ArsenalPresets", _unitClass, format["%1_save", _unitClass]], _confirmsaveCustomPresets] call ace_interact_menu_fnc_addActionToObject;
            [_object, 0, ["ACE_MainActions", "ArsenalPresets", _unitClass], _resetCustomPresets] call ace_interact_menu_fnc_addActionToObject;
            [_object, 0, ["ACE_MainActions", "ArsenalPresets", _unitClass, format["%1_reset", _unitClass]], _confirmResetCustomPresets] call ace_interact_menu_fnc_addActionToObject; 
    };
} forEach (_keyPair); 

