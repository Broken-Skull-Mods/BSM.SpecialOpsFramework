// [] call SpecOps_fnc_3denExtractSpawnCodeForMissingBuildings;
_allBuildingTypes = [false] call SpecOps_fnc_3denHighlightBuildings;


private _generatedCode = "[" + (str _allBuildingTypes) + "] call SpecOps_fnc_3denSpawnBuildingFromTypes;";
copyToClipboard _generatedCode;

