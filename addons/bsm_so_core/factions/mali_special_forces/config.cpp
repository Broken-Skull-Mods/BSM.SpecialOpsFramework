class CfgPatches
{
	class specops_framework_faction_mali_special_forces
	{
		author = "BloodyMystik & Orka";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class SpecOpsFactions {
    class mali_special_forces_2023
    {
        canBeEnemy = 0;
        canBePlayer = 0;
        canBeCivilian = 1;
        displayNameEnemy = "Malian - Armed Forces (2023)";
        displayNameCivilian = "Malians Population (2023)";
        displayNamePlayer = "Mali - Autonomous Battalion (2023)";
        Advanced = 0;     
        FortifyItems[] = {
            {"Land_BagFence_Corner_F", 0.25}, {"Land_BagFence_End_F", 0.25}, {"Land_BagFence_Short_F", 0.5}, 
            {"Land_BagFence_Round_F", 0.75}, {"Land_ConcreteHedgehog_01_F", 0.75}
        };

        EngineerItems[] = {
            {"Land_BagBunker_Small_F", 1}, {"Land_HBarrierWall4_lxWS", 2}, {"Land_HBarrierWall_corner_lxWS", 3}, 
            {"Land_HBarrierWall6_lxWS", 4}, {"Land_HBarrierTower_lxWS", 5}, {"Land_Cargo_Patrol_V1_F", 10}
        };

        IdentityFaces[] = {
            "AfricanHead_01", "AfricanHead_02", "AfricanHead_03"
        };
        IdentityVoices[] = {
            "Male01FRE", "Male02FRE", "Male03FRE"
        };
        ObjectiveCodenames[] = {
            "Falcon", "Hurricane", "Twinkle", "Scout", "Roadrunner", "Wasp", "Crystal ", "Foxtail", "Aurora", 
            "Sunburn", "Frostbite", "Nighthawk", "Sandstorm", "Lazy", "Phantom", "Unicorn", "Omega", "Watchdog", 
            "Goose", "Mosquito", "Raven", "Chick", "Ladybug", "Salmon", "Termite", "Seagull", "Vulture", "Grasshopper", 
            "Golden Eye", "Eureka", "Comet", "Lincoln", "Octopus", "Obsidian", "November", "Balloon", "Pigeons", "Preach",
            "Impulse", "Cougar", "Scorpion", "Lightning", "Starburst", "Watchtower", "Cobra"
        };

        CampCodenames[] = {
            "Camp Dignity", "Camp Diamond", "Camp Sundown", "Camp Detention", "Camp Venom", "Camp Enigma", "Camp Dragonfire", 
            "Camp Hazard", "Camp Ambition", "Camp Honesty", "Camp Energy", "Camp Chaos", "Camp Satellite", "Camp Stormgaze", 
            "Camp Solitude", "Camp Fear", "Camp Hurricane", "Camp Murder",  "Camp Carnage", "Camp Salvation"
        };
        
        #include "\tft_so_editor\factions\mali_special_forces\includes\audio.hpp"
        #include "\tft_so_editor\factions\mali_special_forces\includes\loadouts.hpp"
        #include "\tft_so_editor\factions\mali_special_forces\includes\garage.hpp"
        #include "\tft_so_editor\factions\mali_special_forces\includes\when_enemy.hpp"
        #include "\tft_so_editor\factions\mali_special_forces\includes\when_civilian.hpp"

    };
};