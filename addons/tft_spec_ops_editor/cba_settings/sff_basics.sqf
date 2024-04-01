["TFTSRV_SAVEDVAR_PLAYER_FACTION_CAMO", "LIST",     ["Environment",     "Set the player faction."], ["Special Ops Framework - Basics", "General Settings"], 
[
    ["WL", "DT", "WT"], ["Woodland Camo", "Desert Camo", "Winter Camo"], 0
], 1, {}, true] call CBA_fnc_addSetting;

["TFTSRV_SAVEDVAR_PLAYER_FACTION", "LIST",     ["Player Faction",     "Set the player faction."], ["Special Ops Framework - Basics", "General Settings"], 
[
    ("getNumber (_x >> 'side') == 1 && isNumber  (_x >> 'useForSpecOps')" configClasses (configfile >> "CfgFactionClasses") apply { configName _x }), 
    "getNumber (_x >> 'side') == 1 && isNumber  (_x >> 'useForSpecOps')" configClasses (configfile >> "CfgFactionClasses")  apply { getText (_x >> "displayName") }, 0
], 1, {}, true] call CBA_fnc_addSetting;





["TFTSRV_SAVEDVAR_ENEMY_FACTION", "LIST",     ["Enemy Faction",     "Set the player faction."],  ["Special Ops Framework - Basics", "General Settings"], 
[
    ("getNumber (_x >> 'side') == 0 && isNumber  (_x >> 'useForSpecOps')" configClasses (configfile >> "CfgFactionClasses") apply { configName _x }), 
    "getNumber (_x >> 'side') == 0 && isNumber  (_x >> 'useForSpecOps')" configClasses (configfile >> "CfgFactionClasses")  apply { getText (_x >> "displayName") }, 0
], 1, {}, true] call CBA_fnc_addSetting;




["TFTSRV_SAVEDVAR_CIVILIAN_FACTION", "LIST",     ["Civilian Faction",     "Set the player faction."],  ["Special Ops Framework - Basics", "General Settings"], 
[
    ("getNumber (_x >> 'side') == 3 && isNumber  (_x >> 'useForSpecOps')" configClasses (configfile >> "CfgFactionClasses") apply { configName _x }), 
    "getNumber (_x >> 'side') == 3 && isNumber  (_x >> 'useForSpecOps')" configClasses (configfile >> "CfgFactionClasses")  apply { getText (_x >> "displayName") }, 0
], 1, {}, true] call CBA_fnc_addSetting;

["TFT_SUPP_FAST_TRAVEL_ENABLED", "CHECKBOX", ["Enable Fast Travel", "Enable/Disable Fast Travel "], ["Special Ops Framework - Basics", "Fast Travel"], true, 1, {}, true] call CBA_fnc_addSetting;
["TFT_FAST_TRAVEL_FOOT_SPEED", "SLIDER",   ["Speed on Foot",   "Number of Meter per second, Closer to 0 the longer the journey."], ["Special Ops Framework - Basics", "Fast Travel"], [50, 500, 50, 0], 1, {}] call CBA_fnc_addSetting;
["TFT_FAST_TRAVEL_VEHICLE_SPEED", "SLIDER",   ["Speed in Vehicle",   "Number of Meter per second, Closer to 0 the longer the journey."], ["Special Ops Framework - Basics", "Fast Travel"], [50, 500, 50, 0], 1, {}] call CBA_fnc_addSetting;


["SPECOPS_LOAD_BALANCER_ENABLED", "CHECKBOX", ["Enable Load Balancing", "When Enable System will automatically transfer ownership of group units to local clients"], ["Special Ops Framework - Basics", "Load Balancer"], true, 1, {}, true] call CBA_fnc_addSetting;
["SPECOPS_LOAD_BALANCER_LOOP_TIME", "TIME",   ["Loop Timing",   "How often should load balancer automatically transfer groups (eg: zeus spawns units...)."], ["Special Ops Framework - Basics", "Load Balancer"], [5, 60, 15, 0], 1, {}] call CBA_fnc_addSetting;

