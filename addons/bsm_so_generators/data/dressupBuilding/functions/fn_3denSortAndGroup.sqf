params ["_selected"];
// _selected = (get3DENSelected 'trigger');
private _units = [];
private _hostages = [];
private _building = objNull;
private _trigger = objNull;
private _tier = "T1";
private _entry = false;
private _isGore = false;
private _intelligence = [];
private _explosives = [];
private _statics = [];
private _importantFurnitures = [];
private _nonImportantFurnitures = [];
private _daynnite = [];
private _nightOnly = [];
private _dayOnly = [];
private _errorObj = [];
private _failed = false;
{
	private _object = _x;
	if (_x isKindOf "EmptyDetector") then { _trigger = _object; continue; };
	private _areaType = (_object get3DENAttribute "SpecOps_Area_Type") select 0;
	private _isEnterable = (_object get3DENAttribute "TFT_BuildingIsEnterable") select 0;
	private _tierTMP = (_object get3DENAttribute "SpecOps_Area_TierLevel") select 0;
	private _isImportant = (_object get3DENAttribute "SpecOps_Furniture_Important") select 0;
	private _staticType = (_object get3DENAttribute "SpecOps_StaticGunCategory") select 0;
	private _isGoreTmp = (_object get3DENAttribute "TFT_IsGore") select 0;
	if (_areaType == 1 && !isNull _building) exitWith {_failed = true; systemChat "Two or more building are in the selection this function will only handle a single building set at any time."; };
	if (_areaType == 1 && _isEnterable) then {	_entry = true; };
	if (_areaType == 1 && _isGoreTmp) then {	_isGore = true; };
	if (_tierTMP == 1 && _areaType == 1) then { tier = "T1"; };
	if (_tierTMP == 2 && _areaType == 1) then { tier = "T2"; };
	if (_tierTMP == 3 && _areaType == 1) then { tier = "T3"; };
	if (_areaType == 1) then { _building = _object; continue; };

	private _hidenite = (_object get3DENAttribute "SpecOps_HideAtNight") select 0;
	if (_hidenite) then { _dayOnly pushBackUnique _object; };
	private _hideday = (_object get3DENAttribute "SpecOps_HideAtDay") select 0;
	if (_hideday) then { _nightOnly pushBackUnique _object; };
	if (!_hidenite && !_hideday) then { _daynnite pushBackUnique _object; };
	private _isUnit = _object isKindOf "Man" && (side _object)== WEST;
	private _isHostage = (_object isKindOf "Man" && (side _object) == CIVILIAN) || (_object isKindOf "Man" && _areaType == 5);
	if (_isUnit) then { _units pushBack _object; continue; };
	if (_isHostage) then { _hostages pushBack _object; continue; };
	if (_areaType == 4 && _isImportant) then { _importantFurnitures pushBackUnique _object; };
	if (_areaType == 4 && !_isImportant) then { _nonImportantFurnitures pushBackUnique _object; };
	private _isIntelSearchable = (_object get3DENAttribute "TFT_IsIntelSearchable") select 0;
	if (_areaType == 4 && _isIntelSearchable) then { _intelligence pushback _object; };
	if (_areaType == 6) then { _explosives pushback _object; };
	if (_staticType != -1) then { _statics pushback _object; };
	if (!_isUnit && !_isHostage && _areaType != 1 && _areaType != 6 && !_isIntelSearchable && _areaType != 4) then {_errorObj pushback _object;};
} forEach (_selected);



if (isNull _building) exitWith { systemChat "No Building Selected"; };
if (isNull _trigger) exitWith { systemChat "No Trigger Selected"; };
private _grp = grpNull;
{
	if (isNull _grp) then { _grp = group _x; continue; };
	if (_grp != group _x) exitWith { _failed = true; systemChat format ["%1 contains ungrouped units", typeof _building]; };
} forEach (_units);

private _grp = grpNull;
{
	if (isNull _grp) then { _grp = group _x; continue; };
	if (_grp != group _x) exitWith { _failed = true; systemChat format ["%1 contains ungrouped units", typeof _building]; };
} forEach (_hostages);

if (_failed)  exitWith { systemChat "Failed to Arrange"; };

private _buildingName = getText(configfile >> "CfgVehicles" >> typeof _building >> "displayName");
private _nameExt = "(" + _tier;
if (_entry) then {_nameExt = _nameExt + " | E"; };
if (_isGore) then {_nameExt = _nameExt + " | G"; };
_nameExt = _nameExt + ")";


_layerTopLevel = -1 add3DENLayer (format ["%1 %2", _buildingName, _nameExt]);
_layerBuilding = _layerTopLevel add3DENLayer "Building";
_building set3DENLayer _layerBuilding;
_layerBuildingTrigger = _layerBuilding add3DENLayer "Trigger";
_trigger set3DENLayer _layerBuildingTrigger;

_layerFurnitures = _layerTopLevel add3DENLayer "Furnitures";
_layerFurnitureDayImportant = _layerFurnitures add3DENLayer "Important";
_layerFurnitureDaynNight = _layerFurnitureDayImportant add3DENLayer "Day & Night";
_layerFurnitureDay = _layerFurnitureDayImportant add3DENLayer "Day Only";
_layerFurnitureNight = _layerFurnitureDayImportant add3DENLayer "Night Only";

{
 if (_x in _daynnite) then { _x set3DENLayer _layerFurnitureDaynNight; continue; };
 if (_x in _nightOnly) then { _x set3DENLayer _layerFurnitureNight; continue; };
 if (_x in _dayOnly) then { _x set3DENLayer _layerFurnitureDay; continue; };
} forEach (_importantFurnitures);

_layerFurnitureDayNotImportant = _layerFurnitures add3DENLayer "Not Important";
_layerFurnitureDayNotImportantDaynNight = _layerFurnitureDayNotImportant add3DENLayer "Day & Night";
_layerFurnitureDayNotImportantDay = _layerFurnitureDayNotImportant add3DENLayer "Day Only";
_layerFurnitureDayNotImportantNight = _layerFurnitureDayNotImportant add3DENLayer "Night Only";

{
 if (_x in _daynnite) then { _x set3DENLayer _layerFurnitureDayNotImportantDaynNight; continue; };
 if (_x in _nightOnly) then { _x set3DENLayer _layerFurnitureDayNotImportantNight; continue; };
 if (_x in _dayOnly) then { _x set3DENLayer _layerFurnitureDayNotImportantDay; continue; };
} forEach (_nonImportantFurnitures);


_layerIntelligence = _layerTopLevel add3DENLayer "Intelligence";
{
_x set3DENLayer _layerIntelligence;
} forEach (_intelligence);
_layerErr = _layerTopLevel add3DENLayer "_ERROR_";
{
_x set3DENLayer _layerErr;
} forEach (_errorObj);
_layerIED = _layerTopLevel add3DENLayer "Explosives";
_layerIEDDaynNight = _layerIED add3DENLayer "Day & Night";
_layerIEDDay = _layerIED add3DENLayer "Day Only";
_layerIEDNight = _layerIED add3DENLayer "Night Only";
{
 if (_x in _daynnite) then { _x set3DENLayer _layerIEDDaynNight; continue; };
 if (_x in _nightOnly) then { _x set3DENLayer _layerIEDNight; continue; };
 if (_x in _dayOnly) then { _x set3DENLayer _layerIEDDay; continue; };
} forEach (_explosives);

_layerUnits = _layerTopLevel add3DENLayer "Units";
if (count _units > 0) then { (group (_units select 0)) set3DENLayer _layerUnits; };

_layerStatics = _layerTopLevel add3DENLayer "Statics";
_layerStaticDaynNight = _layerStatics add3DENLayer "Day & Night";
_layerStatictDay = _layerStatics add3DENLayer "Day Only";
_layerStaticNight = _layerStatics add3DENLayer "Night Only";
{
 if (_x in _daynnite) then { _x set3DENLayer _layerStaticDaynNight; continue; };
 if (_x in _nightOnly) then { _x set3DENLayer _layerStaticNight; continue; };
 if (_x in _dayOnly) then { _x set3DENLayer _layerStatictDay; continue; };
} forEach (_statics);

_layerHostages = _layerTopLevel add3DENLayer "Hostages";
if (count _hostages > 0) then { (group (_hostages select 0)) set3DENLayer _layerUnits; };

