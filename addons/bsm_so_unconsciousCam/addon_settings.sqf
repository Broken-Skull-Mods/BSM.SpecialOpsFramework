// Medical Settings

["BSM_ALLOW_UNCONCAM_ENABLED", "CHECKBOX", ["Allow Spectator", "Enable/Disable Spectator when unconscious."], ["Special Ops Framework", "Unconscious Cam Settings"], true, 0, 
{}, true] call CBA_fnc_addSetting;

["BSM_ALLOW_UNCONCAM_ALLOW_DAMAGE", "CHECKBOX", ["Allow Damage", "Enable/Disable damages when on spectator cam."], ["Special Ops Framework", "Unconscious Cam Settings"], true, 1, 
{}, true] call CBA_fnc_addSetting;

["bsm_unconcam_allow_tps", "CHECKBOX", ["Allow TPS", "Enable/Disable 3rd camera for spectator while unconscious."], ["Special Ops Framework", "Unconscious Cam Settings"], false, 0, 
{}, true] call CBA_fnc_addSetting;

["bsm_unconcam_allow_fcam", "CHECKBOX", ["Allow Free View", "Enable/Disable free camera for spectator while unconscious."], ["Special Ops Framework", "Unconscious Cam Settings"], false, 0, 
{}, true] call CBA_fnc_addSetting;

["bsm_unconcam_allow_ai", "CHECKBOX", ["Allow AI View", "Enable/Disable watch AI for spectator while unconscious."], ["Special Ops Framework", "Unconscious Cam Settings"], false, 0, 
{}, true] call CBA_fnc_addSetting;
