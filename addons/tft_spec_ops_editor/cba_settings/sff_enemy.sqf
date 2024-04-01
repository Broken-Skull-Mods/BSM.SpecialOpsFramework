["TFT_SPECOPS_GEN_PLAYER_SCALE", "SLIDER",   ["Enemy to Player Mult",   "Scalability of number of enemy per player."], ["Special Ops Framework - Enemy", "Generator: Scalability"], [0, 1, 0.25, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_PLAYER_SCALE_CAP", "SLIDER",   ["Enemy to Player Cap",   "Multiply Enemy based on player but up to a maximum (prevents if you have 16 player to have 16x enemies)."], ["Special Ops Framework - Enemy", "Generator: Scalability"], [1, 4, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_SECTOR_WILD_ENEMY_DIST", "SLIDER",   ["Wild Enemy Activation Distance",   "Activation distance for wild enemy."],  ["Special Ops Framework - Enemy", "Generator Settings"], [100, 1500, 100, 0], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_WILD_ENEMIES_MULT", "SLIDER",   ["Map Patrol Enemies Multiplier",   "Multiply the number of enemy patrol randomly place on the map."], ["Special Ops Framework - Enemy", "Generator: Enemies"], [0.1, 3, 1, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_SECTOR_AA_COOLDOWN", "SLIDER",   ["AA Cooldown",   "AA cooldown seconds"],  ["Special Ops Framework - Enemy", "Generator Settings"], [20, 500, 20, 0], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_SECTOR_AA_RADIUS", "SLIDER",   ["AA RANGE",   "Range of Anti-Air System, for insurgent it should be low to simulate RPG"],  ["Special Ops Framework - Enemy", "Generator Settings"], [500, 2000, 500, 0], 1, 
{}, true] call CBA_fnc_addSetting;

// Default Generator
["TFT_SPECOPS_GEN_GARRISON_MIN", "SLIDER",   ["Garrison Ratio",   "Garrison to Patrol Ratio."], ["Special Ops Framework - Enemy", "Generator: Enemies"], [0.25, 0.7, 0.7, 0], 1, 
{}, true] call CBA_fnc_addSetting;
