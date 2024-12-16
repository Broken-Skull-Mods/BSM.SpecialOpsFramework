params ["_pos", ["_altitude", 2500], ["_player", player]];
halo_position = _pos;
halo_position = [ _pos select 0, _pos select 1, _altitude];
// playSound "parasound";
// Remove and Save Current Player Backpack
_backpack = backpack _player;
_backpackcontents = [];
if ( _backpack != "" && _backpack != "B_Parachute" ) then {
    _backpackcontents = backpackItems _player;
    removeBackpack _player;
};
// Add Parachute backpacks
_player addBackpack "B_Parachute";
_player setpos halo_position;

waitUntil { uiSleep 0.1; !alive _player || isTouchingGround _player };
_player allowDamage false;
// Restore Player's Backpack
if ( _backpack != "" && _backpack != "B_Parachute" ) then {
    removeBackpack _player;
    uiSleep 0.3;
    _player addBackpack _backpack;
    clearAllItemsFromBackpack player;
    { 
        _player addItemToBackpack _x; 
    } foreach _backpackcontents;
};
uiSleep 1;
_player allowDamage true;
