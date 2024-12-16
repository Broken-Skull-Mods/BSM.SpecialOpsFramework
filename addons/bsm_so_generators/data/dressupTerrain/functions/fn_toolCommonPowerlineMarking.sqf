
private _allTerrainObjects = nearestTerrainObjects [[worldSize / 2, worldSize / 2], [], worldSize * sqrt 2 / 2, false];
private _rr = _allTerrainObjects select { (typeof (_x) in ["Land_PowerLine_01_pole_tall_F", "Land_PowerLine_01_pole_junction_F", "Land_PowerLine_01_pole_small_F", "Land_PowerLine_03_pole_junction_F", "Land_PowerLine_03_pole_F", "Land_HighVoltageColumn_F", "Land_HighVoltageTower_large_F", "Land_Misc_PowerStation", "Land_Ind_PowerStation_EP1"]) };
{ 
	create3DENEntity ["marker", "mil_dot", getPosATL _x]; 

} forEach (_rr);

private _allTerrainObjects = nearestTerrainObjects [[worldSize / 2, worldSize / 2], [], worldSize * sqrt 2 / 2, false];
private _rr = _allTerrainObjects select { (typeof (_x) in ["Land_TBox_F", "Land_spp_Transformer_F"]) };
{ 
	create3DENEntity ["marker", "mil_dot", getPosATL _x]; 

} forEach (_rr);

