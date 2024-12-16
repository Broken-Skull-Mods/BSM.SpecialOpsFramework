if (!hasInterface) exitWith { };
private _preRegisteredApp = "true" configClasses (configfile >> "bsm_chest_phone_dt");
{
	private _name = getText (_x >> "name");
	private _icon = getText (_x >> "icon");
	private _isDialog = isText (_x >> "dialog");
	private _isCode = isText (_x >> "code");
	if (_isDialog && _isCode) then { continue; };
	if (_isDialog) then { [_name, _icon, getText (_x >> "dialog"), true] call SpecOps_fnc_chestPhoneRegisterApp; };
	if (_isCode) then { [_name, _icon, (compile (getText (_x >> "code"))), true] call SpecOps_fnc_chestPhoneRegisterApp; };
} forEach (_preRegisteredApp);

private _allApplications = missionNamespace getVariable ["BSM_ChestPhone_Applications", []];
_allApplications = [_allApplications, [], {(_x select 0) select 0; }, "ASCEND"] call BIS_fnc_sortBy;
missionNamespace setVariable ["BSM_ChestPhone_Applications", _allApplications];

[] call SpecOps_fnc_chestPhoneRecompilePages;