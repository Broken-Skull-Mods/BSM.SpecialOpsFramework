class bsm_so_zeus_lockdown_module : Module_F {
    scope = 2;
    displayName = "Lockdown Building";
    icon = "\tftm\icons\key_lock.paa";	// Map icon. Delete this entry to use the default icon.
    category = "SpecOps_Modules";
    function = "SpecOps_fnc_lockdownBuildingModule";	// Name of function triggered once conditions are met
    functionPriority = 1;
    isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
    isTriggerActivated = 1;				// 1 for module waiting until all synced triggers are activated
    isDisposable = 1;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
    curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
    canSetArea = 1;						// Allows for setting the area values in the Attributes menu in 3DEN
    canSetAreaShape = 1;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
    canSetAreaHeight = 1;				// Allows 1for setting height or Z value in Attributes menu in 3DEN
    is3DEN = 0;							// 1 to run init function in Eden Editor as well
    class AttributeValues {
        size3[] = {12, 12, -1};
        IsRectangle = 1;
    };
    

};
