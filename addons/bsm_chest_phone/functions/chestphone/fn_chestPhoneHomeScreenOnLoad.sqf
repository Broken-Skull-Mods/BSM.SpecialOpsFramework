params ["_display"];


private _allApplications = missionNamespace getVariable ["BSM_ChestPhone_Applications", []];
private _totalPages = missionNamespace getVariable ["BSM_ChestPhone_HomeMaxPages", 1];
private _currentPage = missionNamespace getVariable ["BSM_ChestPhone_HomeCurrentPage", 1];


private _appSlotsInOrder = [   
    1703,1704,1705,1706,1707,   
    1708,1709,1710,1711,1712,   
    1713,1714,1715,1716,1717,   
    1718,1719,1720,1721,1722,   
    1723,1724,1725,1726,1727,   
    1728,1729,1730   
];    
   
_startX = 0.233;   
_startY  = 0.32;   
_stepX = 0.073;   
_stepY = 0.125;   
_row = 3;   
_col = 6;   
_countX = 0;   
_countY = 0;   
{    
    private _control = _display displayCtrl _x;    
    private _controlBtn = _display displayCtrl (_x + 1000);    
    _controlBtn setVariable ["bsm_appInfo", nil];
    _controlBtn setVariable ["bsm_appOptions", nil];
    private _controlToUpdate = [_control, _controlBtn];
    {
        _x ctrlShow false;
        _x ctrlSetTooltip "";
        _x ctrlCommit 0;   
        private _posY =  (_startY + (_countY * _stepY)) * safezoneH + safezoneY;   
        private _posX = (_startX + (_countX * _stepX)) * safezoneW + safezoneX;    
        private _posW = 0.062 * safezoneW;   
        private _posH = 0.11 * safezoneH;   
        _x ctrlSetPosition [_posX, _posY, _posW, _posH];     
        _x ctrlCommit 0.2;  
    } forEach (_controlToUpdate);
    _countX = _countX + 1;   
    if (_countX > _col) then { _countX = 0; _countY = _countY + 1;};   
} forEach (_appSlotsInOrder); 




// Hide All Icons at start;
// { 
//     private _idc = _x;
//     private _ctrl = (_display displayCtrl _idc);
//     private _ctrl2 = (_display displayCtrl (_idc + 1000));
//     _ctrl2 ctrlShow false;
//     _ctrl ctrlShow false;
//     _ctrl2 ctrlSetTooltip "";
//     _ctrl2 setVariable ["bsm_appInfo", nil];
//     _ctrl2 setVariable ["bsm_appOptions", nil];  
// } forEach (_appSlotsInOrder);

// Compile Pages


private _lastPage = -1;
private _countedApps = count _allApplications;
if (_countedApps <= 0 ) exitWith { diag_log "BSM (Chest Phone): No Registered Apps."; };

while {uiSleep 0.05; !isNull _display;} do {
    private _currentPage = missionNamespace getVariable ["BSM_ChestPhone_HomeCurrentPage", 1];
    if (_lastPage == _currentPage) then { continue; };
    _lastPage = _currentPage;
    // if page is not changed ignored and continue;
    { 
        private _ctrl = (_display displayCtrl _x);
        private _ctrl2 = (_display displayCtrl (_x + 1000));
        _ctrl2 ctrlShow false;
        _ctrl ctrlShow false; 
        _ctrl2 ctrlSetTooltip "";
        _ctrl2 setVariable ["bsm_appInfo", nil];
        _ctrl2 setVariable ["bsm_appOptions", nil]; 
    } forEach (_appSlotsInOrder);
    private _toAssign = _appSlotsInOrder;
    private _currentPageApp = _allApplications select { ((_x select 0) select 0) == _currentPage; };
    // diag_log format ["BSM (Chest Phone): Loading App Listing: %1", _currentPageApp];
    { // 
        // No more app space? Cancel populating
        if (count _toAssign <= 0) then { break; };
        private _idc = _toAssign select 0;
        private _ctrl2 = (_display displayCtrl (_idc + 1000));
        private _ctrl = (_display displayCtrl _idc);
        _toAssign = _toAssign - [_idc];

        private _appOptions = _x select 0;
        private _appInfo = _x select 1;
        private _name = _appInfo select 0;
        private _icon = _appInfo select 1;
        _action = format["[%1] call SpecOps_fnc_chestPhoneHomeScreenClickApp;", (_idc + 1000)];
        _ctrl ctrlSetText _icon;
        _ctrl2 ctrlSetTooltip _name;
        _ctrl ctrlShow true;
        _ctrl2 ctrlShow true;
        _ctrl2 buttonSetAction _action;
        _ctrl2 setVariable ["bsm_appInfo", _appInfo];
        _ctrl2 setVariable ["bsm_appOptions", _appOptions];
    } forEach (_currentPageApp);
};