class CfgPatches
{
	class specops_framework_faction_usa_socom
	{
		author = "BloodyMystik™";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
// Map Audio
class SpecOpsFactions {
    class BS_B_US_RANGER_2000_BASE; // Import the Base Voices
    class BS_B_US_DEVGRU_2023_BASE : BS_B_US_RANGER_2000_BASE { };
    class BS_B_US_DEVGRU_2023 : BS_B_US_DEVGRU_2023_BASE { };
    class BS_O_US_DEVGRU_2023 : BS_B_US_DEVGRU_2023_BASE { };
    class BS_I_US_DEVGRU_2023 : BS_B_US_DEVGRU_2023_BASE { };
};