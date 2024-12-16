params ["_name", "_icon", ["_action", {}], ["_skipReCompile", false]];

/*
    _name: Title of The App.
    _icon: path to icon.
    _action: code or dialog.
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_BSM.paa", { [] call SpecOps_fnc_chestPhoneExit; hint "Cracked Skull"; }] call SpecOps_fnc_chestPhoneRegisterApp; 
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_Debug.paa", { hint "For Debugging!!!"; }] call SpecOps_fnc_chestPhoneRegisterApp; 
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_Settings.paa", { hint "For SETTNGS"; }] call SpecOps_fnc_chestPhoneRegisterApp; 
    ["Test App", "\bsm_chest_phone\data\icons\App_Icon_Settings.paa", "BSM_Polyliner_Tool"] call SpecOps_fnc_chestPhoneRegisterApp; 
 
    for "_i" from 0 to 13 do { 
        ["Test App", "\bsm_chest_phone\data\icons\App_Icon_BSM.paa"] call SpecOps_fnc_chestPhoneRegisterApp; 
    };
*/
private _allApplications = missionNamespace getVariable ["BSM_ChestPhone_Applications", []];
_allApplications pushback [[1], [_name, _icon, _action]];
if (!_skipReCompile) then { _allApplications = [_allApplications, [], {(_x select 0) select 0; }, "ASCEND"] call BIS_fnc_sortBy; }; 

missionNamespace setVariable ["BSM_ChestPhone_Applications", _allApplications];
if (!_skipReCompile) then { [] call SpecOps_fnc_chestPhoneRecompilePages; }; 
