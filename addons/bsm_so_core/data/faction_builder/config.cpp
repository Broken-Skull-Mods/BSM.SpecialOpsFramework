class CfgPatches
{
	class bsm_so_faction_builder
	{
		author = "Broken Skull Mods™";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
		};
	};
};

class CfgFunctions {
	class SpecOps {
		class FactionBuilderTool {
			file = "tft_so_editor\data\faction_builder\functions\faction_builder_tool";
            class toolCreateFactionAndUnitsFromTrigger {};
            class toolCreateCivFactionAndUnitsFromTrigger {};
		}
	};
};

 