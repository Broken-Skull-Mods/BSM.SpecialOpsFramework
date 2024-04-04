// /*
//     [player, "backpack", [], 100] call SpecOps_fnc_toolFillCargoWithPercentageTable;
// */
//     params ["_unit", "_cargoType", "_percentTable", "_targetAmount"];
//     private _unitCargo = switch (_cargoType) do {
//         case "backpack": { backpack _unit; };
//         case "uniform": { uniform _unit;  };
//         case "vest": { vest _unit;  };
//     };
//     diag_log format ["_unitCargo %1", _unitCargo];

//     private _unitCargoContainer = switch (_cargoType) do {
//         case "backpack": { backpackContainer _unit; };
//         case "uniform": { uniformContainer _unit;  };
//         case "vest": { vestContainer _unit;  };
//     };
//     diag_log format ["_unitCargoContainer %1", _unitCargoContainer];

//     private _totalSupplies = _targetAmount;
//     diag_log format ["_totalSupplies %1", _totalSupplies];
//     private _clearList = _percentTable apply { _x select 0; };
//     diag_log format ["_clearList %1", _clearList];
//     private _cargoItems = switch (_cargoType) do {
//         case "backpack": { backpackItems _unit; };
//         case "uniform": { uniformItems _unit;  };
//         case "vest": { vestItems _unit;  };
//     };
//     diag_log format ["_cargoItems %1", _cargoItems];
//     switch (_cargoType) do {
//         case "backpack": { clearAllItemsFromBackpack _unit; };
//         case "uniform": { { _unit removeItemFromUniform _x; } forEach (uniformItems _unit); };
//         case "vest": { { _unit removeItemFromVest _x; } forEach (vestItems _unit);  };
//     };
//     private _nonTabledItems = [];
//     diag_log format ["_nonTabledItems %1", _nonTabledItems];
//     { if (!(_x in _clearList)) then { _nonTabledItems pushback _x; }; } forEach (_cargoItems);
//     diag_log format ["_nonTabledItems %1", _nonTabledItems];

//     private _currentLoad = ceil (loadAbs _unitCargoContainer);
//     diag_log format ["_currentLoad %1", _currentLoad];
//     private _maxLoad = getContainerMaxLoad _unitCargo;
//     diag_log format ["_maxLoad %1", _maxLoad];
//     for "_i" from 1 to 0 step -0.01 do {
//         { _unitCargoContainer addItemCargo [_x, 1]; } forEach (_nonTabledItems); 
//         _totalSupplies = _totalSupplies * _i;
//         diag_log format ["_totalSupplies %1", _totalSupplies];
//         {
//                 private _item = _x select 0;
//                 private _percent = _x select 1;
//                 private _amount = floor (_totalSupplies * _percent);
//                 _unitCargoContainer addItemCargo [_item, _amount];
//         } forEach (_percentTable);
//         if ((ceil (loadAbs _unitCargoContainer)) > (getContainerMaxLoad _unitCargo)) then {
//             switch (_cargoType) do {
//                 case "backpack": { clearAllItemsFromBackpack _unit; };
//                 case "uniform": { { _unit removeItemFromUniform _x; } forEach (uniformItems _unit); };
//                 case "vest": { { _unit removeItemFromVest _x; } forEach (vestItems _unit);  };
//             };
//         } 
//         else {
//             break;
//         };
//     };
//     true;