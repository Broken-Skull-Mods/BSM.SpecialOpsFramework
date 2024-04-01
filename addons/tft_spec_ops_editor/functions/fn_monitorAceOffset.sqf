params ["_origin"];
_classname = typeOf _origin;


addMissionEventHandler ["EntityCreated", {
	params ["_entity"];
    _name = typeOf _entity;
    _allProxiedEntity = ("inheritsFrom (_x >> 'proxyOf')" configClasses (configFile >> "CfgVehicles"));
     
    if(_name in _allProxiedEntity) then {

    };
}];