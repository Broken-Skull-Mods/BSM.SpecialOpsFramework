

["TFT_SPECOPS_GEN_CIV_URBAN_ENABLED", "CHECKBOX", ["Allow Civilians", "Enable/Disable Civilians "], ["Special Ops Framework - Civilian", "Generator: Civilians"], true, 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_URBAN_GARRISON_MIN", "SLIDER",   ["Minimum Urban Civilian Garrisons",   "Minimum of Urban Garrison (Note: Will not scale with player count)."], ["Special Ops Framework - Civilian", "Generator: Civilians"], [1, 5, 2, 0], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_URBAN_PATROL_DT_MIN", "SLIDER",   ["Minimum Urban Civilian Downtown Patrols",   "Minimum of Urban Downtown Patrols (Note: Will not scale with player count)."], ["Special Ops Framework - Civilian", "Generator: Civilians"], [1, 5, 2, 0], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_EGO_ENABLED", "CHECKBOX", ["Civilian Ego", "Enable/Disable Civilians Ego, when damaging building or killing civilian the ego will increase and hostility will rise "], ["Special Ops Framework - Civilian", "Generator: Civilians"], true, 1,
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_EGO_BUILDING_INC", "SLIDER",   ["Ego on Building Damage",   "The increase of ego on building damages."], ["Special Ops Framework - Civilian", "Generator: Civilians"], [0, 1, 0.5, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_EGO_KILL_INC", "SLIDER",   ["Ego on Civilian Death",   "The increase of ego when civilian is killed."], ["Special Ops Framework - Civilian", "Generator: Civilians"], [0, 1, 0.75, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_HOSTILE_ENABLED", "CHECKBOX", ["Enable Hostile Civilians", "Enable/Disable Suicide Bomber "], ["Special Ops Framework - Civilian", "Generator: Civilians"], true, 1,
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_HOSTILE_PROB", "SLIDER",   ["Chance of Hostile Civilian",   "Chances of spawning hostile civilians."], ["Special Ops Framework - Civilian", "Generator: Civilians"], [0, 3, 1, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_URBAN_SVEST_ENABLED", "CHECKBOX", ["Enable S-Vest for Civilians", "Enable/Disable Suicide Bomber "], ["Special Ops Framework - Civilian", "Generator: Civilians"], true, 1,
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_URBAN_SVEST_PROB", "SLIDER",   ["Chance Civilian S-Vest",   "Chances civilian wears svest ready to boom."], ["Special Ops Framework - Civilian", "Generator: Civilians"], [0, 1, 0.08, 2], 1, 
{}, true] call CBA_fnc_addSetting;
