if (!hasInterface) exitWith {};

[] spawn {
	while { uiSleep 1; true } do {
		waitUntil { uiSleep 0.1; alive player };
		try
		{
			_isRadioExpert = [player, "RadioExpert"] call SpecOps_fnc_isCurrentPlayerMajorRole;
			_vehicle = vehicle player;
			if(_vehicle != player) then {
				_driver = driver _vehicle;
				if(_driver == player && _vehicle isKindOf "Air" && !([player, "Pilot"] call SpecOps_fnc_isCurrentPlayerMajorRole)) then {
					_vehicle engineOn false;
					_vehicle setFuel 0;
				} else {
					if (_driver == player && _vehicle isKindOf "Air" && ([player, "Pilot"] call SpecOps_fnc_isCurrentPlayerMajorRole)) then {
						_vehicle setFuel 1;
					};
				};

				if(_driver == player && _vehicle isKindOf "B_SDV_01_F" && !([player, "VehicleOperator"] call SpecOps_fnc_isCurrentPlayerMajorRole)) then {
					_vehicle engineOn false;
					_vehicle setFuel 0;
				} else {
					if (_driver == player && _vehicle isKindOf "B_SDV_01_F" && ([player, "VehicleOperator"] call SpecOps_fnc_isCurrentPlayerMajorRole)) then {
						_vehicle setFuel 1;
					};
				};
				
				if(_driver == player && _vehicle isKindOf "Tank_F" && !([player, "VehicleOperator"] call SpecOps_fnc_isCurrentPlayerMajorRole)) then {
					_vehicle engineOn false;
					_vehicle setFuel 0;
				} else {
					if (_driver == player && _vehicle isKindOf "Tank_F" && ([player, "VehicleOperator"] call SpecOps_fnc_isCurrentPlayerMajorRole)) then {
						_vehicle setFuel 1;
					};
				};
			};
			if(!([player, "TechSavvy"] call SpecOps_fnc_isCurrentPlayerMajorRole)) then {
				private _currentGPS = (player getSlotItemName 612);   
				if(_currentGPS == "B_UavTerminal") then { 
					player unlinkItem _currentGPS; 
				};
			};
		}
		catch
		{

		};
	};

};
