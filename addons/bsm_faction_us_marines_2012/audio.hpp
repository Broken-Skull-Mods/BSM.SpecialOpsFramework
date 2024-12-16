// Map Audio
class SpecOpsFactions {
    class BS_B_US_RANGER_2000_BASE {
        class Audio {
            class SoundEffect {
                class NoActor {
                    GarageVehicleSell[] ={
                        SpecOps_Generic_Sell, 1
                    };

                    MedicalBleeding[] ={
                        SpecOps_Generic_Alive_Bleeding_0, 1, 
                        SpecOps_Generic_Alive_Bleeding_1, 1
                    };
                    MedicalStable[] = {
                        SpecOps_Generic_Alive_Stable_0, 1 
                    };
                    MedicalUnstable[] = {
                        SpecOps_Generic_Alive_Unstable_0, 1,
                        SpecOps_Generic_Alive_Unstable_1, 1 
                    };

                    DemoDialExplosion[] = {
                        SpecOps_Generic_Dial_Explosion_0, 1
                    };
                    DemoSyncingTrigger[] = {
                        SpecOps_Generic_Syncing_Trigger, 1
                    };

                    Cuff[] = {
                        SpecOps_Generic_ZipTie_0, 1,
                        SpecOps_Generic_ZipTie_1, 1
                    };
                };
            };

            class PlayerOperator {
                class Kurt {
                    SurrenderShouts[] = {
                        USA_SOCOM_Generic_Player_Voice_Call_Surrender_V0_3, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Surrender_V0_7, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Surrender_V0_8, 1
                    };

                    DemoSyncing[] ={
                        USA_SOCOM_Generic_Player_Voice_Demo_Syncing_0, 1
                    };
                    DemoRigged[] ={
                        USA_SOCOM_Generic_Player_Voice_Demo_Rigged_0, 1,
                        USA_SOCOM_Generic_Player_Voice_Demo_Rigged_1, 1,
                        USA_SOCOM_Generic_Player_Voice_Demo_Rigged_2, 1
                    };

                    MedicalDead[] ={
                        USA_SOCOM_Generic_Player_Voice_Call_Dead_0, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Dead_1, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Dead_2, 1
                    };
                    MedicalAlive[] ={
                        USA_SOCOM_Generic_Player_Voice_Call_Alive_0, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Alive_1, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Alive_2, 1
                    };
                    MedicalAliveBleeding[] ={
                        // USA_SOCOM_Generic_Player_Voice_Call_Alive_Bleeding_0, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Alive_Bleeding_1, 1
                    };
                    MedicalAliveUnstable[] ={
                        USA_SOCOM_Generic_Player_Voice_Call_Alive_Unstable_0, 1
                    };
                    Escort[] ={
                        USA_SOCOM_Generic_Player_Voice_Call_Escort_0, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Escort_1, 1,
                        USA_SOCOM_Generic_Player_Voice_Call_Escort_2, 1
                    };
                    LiberateHostages[] = {
                        USA_SOCOM_Generic_Player_Voice_Liberate_Hostages_V0_0, 1, USA_SOCOM_Generic_Player_Voice_Liberate_Hostages_V0_1, 1,
                        USA_SOCOM_Generic_Player_Voice_Liberate_Hostages_V0_2, 1, USA_SOCOM_Generic_Player_Voice_Liberate_Hostages_V0_3, 1,
                        USA_SOCOM_Generic_Player_Voice_Liberate_Hostages_V0_4, 1, USA_SOCOM_Generic_Player_Voice_Liberate_Hostages_V0_5, 1
                    };

                    JoiningTeamRequired[] = {
                        USA_SOCOM_Generic_Player_Voice_Team_Required_V0_0, 1, USA_SOCOM_Generic_Player_Voice_Team_Required_V0_1, 1,
                        USA_SOCOM_Generic_Player_Voice_Team_Required_V0_2, 0.4
                    };

                    TakingRoleEngineer[] = { USA_SOCOM_Generic_Player_Voice_Role_Engineer_Kurt_0, 1 };
                    TakingRoleMedic[] = { USA_SOCOM_Generic_Player_Voice_Role_Medic_Kurt_0, 1 };
                    TakingRolePilot[] = { USA_SOCOM_Generic_Player_Voice_Role_Pilot_Kurt_0, 1 };
                    TakingRoleRadioExpert[] = { USA_SOCOM_Generic_Player_Voice_Role_Radio_Kurt_0, 1 };
                    TakingRoleTankDriver[] = { USA_SOCOM_Generic_Player_Voice_Role_TankDriver_Kurt_0, 1 };
                    TakingRoleDemoExpert[] = { USA_SOCOM_Generic_Player_Voice_Role_DemoExpert_Kurt_0, 1 };
                    TakingRoleDroneExpert[] = { USA_SOCOM_Generic_Player_Voice_Role_DroneExpert_Kurt_0, 1 };
                    TakingRoleHacker[] = { USA_SOCOM_Generic_Player_Voice_Role_Hacker_Kurt_0, 1 };
                    TakingRoleSubmersibleDriver[] = { USA_SOCOM_Generic_Player_Voice_Role_SubmersibleDriver_Kurt_0, 1 };
                };
            };

            class RadioOperator {
                class Rebecca { 
                    RadioBreak[] = {
                        USA_SOCOM_Generic_Radio_Break_Rebecca_0, 1, USA_SOCOM_Generic_Radio_Break_Rebecca_1, 1
                    };
                    RadioOut[] = {
                        USA_SOCOM_Generic_Radio_Out_Rebecca_0, 1, USA_SOCOM_Generic_Radio_Out_Rebecca_1, 1,
                        USA_SOCOM_Generic_Radio_Out_Rebecca_2, 1
                    };
                    RadioOver[] = {
                        USA_SOCOM_Generic_Radio_Over_Rebecca_0, 1, USA_SOCOM_Generic_Radio_Over_Rebecca_1, 1
                    };
                    HangingRequest[] = {
                        USA_SOCOM_Generic_Support_Request_Hang_V1_0, 1, USA_SOCOM_Generic_Support_Request_Hang_V1_1, 1,
                        USA_SOCOM_Generic_Support_Request_Hang_V1_2, 1, USA_SOCOM_Generic_Support_Request_Hang_V1_3, 1,
                        USA_SOCOM_Generic_Support_Request_Hang_V1_4, 1, USA_SOCOM_Generic_Support_Request_Hang_V1_5, 1
                    };
                    SupportDisabled[] = {
                        USA_SOCOM_Generic_Support_Request_Disabled_V1_0, 1, 
                        USA_SOCOM_Generic_Support_Request_Disabled_V1_1, 1 
                    };
                    SupportHellfireRequest[] = {
                        USA_SOCOM_Generic_Support_Request_Hellfire_V1_0, 1, USA_SOCOM_Generic_Support_Request_Hellfire_V1_1, 1,
                        USA_SOCOM_Generic_Support_Request_Hellfire_V1_2, 1
                    };
                    SupportMortarRequest[] = {
                        USA_SOCOM_Generic_Support_Request_Mortar_V1_0, 1, USA_SOCOM_Generic_Support_Request_Mortar_V1_1, 1,
                        USA_SOCOM_Generic_Support_Request_Mortar_V1_2, 1
                    };
                    SupportSupplyRequest[] = {
                        USA_SOCOM_Generic_Support_Request_Supply_V1_0, 1, USA_SOCOM_Generic_Support_Request_Supply_V1_1, 1,
                        USA_SOCOM_Generic_Support_Request_Supply_V1_2, 1
                    };
                    SupportAirTransportRequest[] = {
                        USA_SOCOM_Generic_Support_Request_Transport_V1_0, 1, USA_SOCOM_Generic_Support_Request_Transport_V1_1, 1,
                        USA_SOCOM_Generic_Support_Request_Transport_V1_2, 1
                    };
                    SupportAirTransportCrash[] = {
                        USA_SOCOM_Generic_Support_Helo_Crash_V1_0, 1, USA_SOCOM_Generic_Support_Helo_Crash_V1_1, 1,
                        USA_SOCOM_Generic_Support_Helo_Crash_V1_2, 1
                    };
                };
            };

            class OperationalCommander {
                class Clyde { 

                    RadioBreak[] = {
                        USA_SOCOM_Generic_Radio_Break_Clyde_0, 1, USA_SOCOM_Generic_Radio_Break_Clyde_1, 1,
                        USA_SOCOM_Generic_Radio_Break_Clyde_2, 1
                    };
                    RadioOut[] = {
                        USA_SOCOM_Generic_Radio_Out_Clyde_0, 1, USA_SOCOM_Generic_Radio_Out_Clyde_1, 1,
                        USA_SOCOM_Generic_Radio_Out_Clyde_2, 1
                    };
                    RadioOver[] = {
                        USA_SOCOM_Generic_Radio_Over_Clyde_0, 1, USA_SOCOM_Generic_Radio_Over_Clyde_1, 1
                    };

                    OperationFailure[] = {
                        USA_SOCOM_Generic_Operation_Failure_No_Next_Clyde_0, 1, 
                        USA_SOCOM_Generic_Operation_Failure_No_Next_Clyde_1, 1,
                        USA_SOCOM_Generic_Operation_Failure_No_Next_Clyde_2, 1, 
                        USA_SOCOM_Generic_Operation_Failure_No_Next_Clyde_3, 1
                    };
                    OperationFailureRedeemable[] = {
                        USA_SOCOM_Generic_Operation_Failure_Next_Clyde_0, 1
                    };
                    OperationSuccess[] = {
                        USA_SOCOM_Generic_Operation_Success_Clyde_0, 1
                    };
                    OperationSuccessExpanded[] = {
                        USA_SOCOM_Generic_Operation_Success_Next_Clyde_0, 1, USA_SOCOM_Generic_Operation_Success_Next_Clyde_1, 1
                    };
                    BudgetExhausted[] = {
                        USA_SOCOM_Generic_Budget_Exceeded_V1_0, 1, USA_SOCOM_Generic_Budget_Exceeded_V1_1, 1,
                        // Bit Harsh
                        USA_SOCOM_Generic_Budget_Exceeded_V1_2, 0.3, 
                        // Harsh Messages
                        USA_SOCOM_Generic_Budget_Exceeded_V1_3, 0.05, USA_SOCOM_Generic_Budget_Exceeded_V1_4, 0.05
                    };
                    ObjectiveHVTCaptureCompleted[] = {
                        USA_SOCOM_Generic_Prisonners_Captured_Clyde_0, 1,
                        USA_SOCOM_Generic_Prisonners_Captured_Clyde_1, 1,
                        USA_SOCOM_Generic_Prisonners_Captured_Clyde_2, 1
                    };
                    ObjectiveHVTCaptureRequired[] = {
                        USA_SOCOM_Generic_Prisonners_Required_Clyde_0, 0.3,
                        USA_SOCOM_Generic_Prisonners_Required_Clyde_1, 0.3,
                        USA_SOCOM_Generic_Prisonners_Required_Clyde_2, 0.3,
                        USA_SOCOM_Generic_Prisonners_Required_Clyde_3, 5,
                        USA_SOCOM_Generic_Prisonners_Required_Clyde_4, 5
                    };
                    ObjectiveCharterUpdateAnnounce[] = {
                        USA_SOCOM_Generic_Objective_Charter_Update_V1_0, 1
                    };

                    ObjectiveCharterUpdateMaxCivDeathNone[] = {
                        USA_SOCOM_Generic_Objective_Charter_0_Civ_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxCivDeathOne[] = {
                        USA_SOCOM_Generic_Objective_Charter_1_Civ_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxCivDeathTwo[] = {
                        USA_SOCOM_Generic_Objective_Charter_2_Civ_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxCivDeathThree[] = {
                        USA_SOCOM_Generic_Objective_Charter_3_Civ_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxCivDeathUnlimited[] = {
                        USA_SOCOM_Generic_Objective_Charter_Unlimited_Civ_Death_V1_0, 1
                    };

                    ObjectiveCharterUpdateMaxDeathNone[] = {
                        USA_SOCOM_Generic_Objective_Charter_0_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxDeathOne[] = {
                        USA_SOCOM_Generic_Objective_Charter_1_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxDeathTwo[] = {
                        USA_SOCOM_Generic_Objective_Charter_2_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxDeathThree[] = {
                        USA_SOCOM_Generic_Objective_Charter_3_Death_V1_0, 1
                    };
                    ObjectiveCharterUpdateMaxDeathUnlimited[] = {
                        USA_SOCOM_Generic_Objective_Charter_Unlimited_Death_V1_0, 1
                    };

                    ObjectiveClearAirstrip[] = {
                        USA_SOCOM_Generic_Objective_Airstrip_V1_0, 1, USA_SOCOM_Generic_Objective_Airstrip_V1_1, 1
                    };
                    ObjectiveAmbush[] = {
                        USA_SOCOM_Generic_Objective_Ambush_V1_0, 1
                    };
                    ObjectiveAssasination[] = {
                        USA_SOCOM_Generic_Objective_Assasination_V1_0, 1, USA_SOCOM_Generic_Objective_Assasination_V1_1, 1
                    };
                    ObjectiveClearTown[] = {
                        USA_SOCOM_Generic_Objective_Clear_Town_V1_0, 1
                    };
                    ObjectiveClearBigtown[] = {
                        USA_SOCOM_Generic_Objective_Clear_Town_V1_0, 1
                    };
                    ObjectiveClearVillage[] = {
                        USA_SOCOM_Generic_Objective_Clear_Village_V1_0, 1
                    };
                    ObjectiveDestroyTransformer[] = {
                        USA_SOCOM_Generic_Objective_CommsTransformer_V1_0, 1
                    };
                    ObjectiveDeadBodyRetrieval[] = {
                        USA_SOCOM_Generic_Objective_FallenBody_V1_0, 1
                    };
                    ObjectiveGatherIntelligence[] = {
                        USA_SOCOM_Generic_Objective_Intel_V1_0, 1
                    };
                    ObjectiveSabotageResources[] = {
                        USA_SOCOM_Generic_Objective_Resource_V1_0, 1
                    };
                };
            };

            class HeloPilot {
                class Walter {
                    ControlKeepEngineCold[] = {
                        USA_SOCOM_Generic_Helicopter_Control_V0_EngineCold_0, 1, 
                        USA_SOCOM_Generic_Helicopter_Control_V0_EngineCold_1, 1
                    };

                    ControlKeepEngineHot[] = {
                        USA_SOCOM_Generic_Helicopter_Control_V0_EngineHot_0, 1, 
                        USA_SOCOM_Generic_Helicopter_Control_V0_EngineHot_1, 1
                    };

                    ControlLanding[] = {
                        USA_SOCOM_Generic_Helicopter_Control_V0_Landing_0, 1
                    };

                    ControlRTB[] = {
                        USA_SOCOM_Generic_Helicopter_Control_V0_RTB_0, 1, USA_SOCOM_Generic_Helicopter_Control_V0_RTB_1, 1,
                        USA_SOCOM_Generic_Helicopter_Control_V0_RTB_3, 0.3,
                        USA_SOCOM_Generic_Helicopter_Control_V0_RTB_2, 0.05, USA_SOCOM_Generic_Helicopter_Control_V0_RTB_4, 0.05
                    };

                    ControlMoveTo[] = {
                        USA_SOCOM_Generic_Helicopter_Control_V0_Travel_0, 1, USA_SOCOM_Generic_Helicopter_Control_V0_Travel_1, 1, 
                        USA_SOCOM_Generic_Helicopter_Control_V0_Travel_2, 1
                    };
                    ControlCrashing[] = {
                        USA_SOCOM_Generic_Helicopter_V0_Crash_0, 1, USA_SOCOM_Generic_Helicopter_V0_Crash_1, 1, 
                        USA_SOCOM_Generic_Helicopter_V0_Crash_2, 1, USA_SOCOM_Generic_Helicopter_V0_Crash_3, 1
                    };
                };
            };

            class ISROperator {
                class Sam {
                    RadioBreak[] = {
                        USA_SOCOM_Generic_Radio_Break_SamIRS_0, 1, USA_SOCOM_Generic_Radio_Break_SamIRS_1, 1
                    };
                    RadioOut[] = {
                        USA_SOCOM_Generic_Radio_Out_SamIRS_0, 1, USA_SOCOM_Generic_Radio_Out_SamIRS_1, 1, 
                        USA_SOCOM_Generic_Radio_Out_SamIRS_2, 1
                    };
                    RadioOver[] = {
                        USA_SOCOM_Generic_Radio_Over_SamIRS_0, 1, USA_SOCOM_Generic_Radio_Over_SamIRS_1, 1
                    };
                    RadioCancelLast[] = {
                        USA_SOCOM_Generic_Cancel_Last_Sam_0, 1
                    };
                    DetectedCivilianInArea[] = {
                        USA_SOCOM_Generic_Civilians_Warning_V0_0, 1, USA_SOCOM_Generic_Civilians_Warning_V0_1, 1, 
                        USA_SOCOM_Generic_Civilians_Warning_V0_2, 1
                    };
                    DetectedCAS[] = {
                        USA_SOCOM_Generic_Reinforcement_Enemy_CAS_V0_0, 1, USA_SOCOM_Generic_Reinforcement_Enemy_CAS_V0_1, 1 
                    };
                    DetectedMortar[] = {
                        USA_SOCOM_Generic_Reinforcement_Enemy_Mortar_V0_0, 1, USA_SOCOM_Generic_Reinforcement_Enemy_Mortar_V0_1, 1, 
                        USA_SOCOM_Generic_Reinforcement_Enemy_Mortar_V0_2, 1, USA_SOCOM_Generic_Reinforcement_Enemy_Mortar_V0_3, 1 
                    };
                    DetectedSniperTeam[] = {
                        USA_SOCOM_Generic_Reinforcement_Enemy_Sniper_V0_0, 1, USA_SOCOM_Generic_Reinforcement_Enemy_Sniper_V0_1, 1 
                    };
                    DetectedSquad[] = {
                        USA_SOCOM_Generic_Reinforcement_Enemy_Squad_V0_0, 1, USA_SOCOM_Generic_Reinforcement_Enemy_Squad_V0_1, 1, 
                        USA_SOCOM_Generic_Reinforcement_Enemy_Squad_V0_2, 1, USA_SOCOM_Generic_Reinforcement_Enemy_Squad_V0_3, 1
                    };
                    DetectedTank[] = {
                        USA_SOCOM_Generic_Reinforcement_Enemy_Tank_V0_0, 1, USA_SOCOM_Generic_Reinforcement_Enemy_Tank_V0_1, 1, 
                        USA_SOCOM_Generic_Reinforcement_Enemy_Tank_V0_2, 1
                    };
                    DetectedTechnical[] = {
                        USA_SOCOM_Generic_Reinforcement_Enemy_Technical_V0_0, 1, USA_SOCOM_Generic_Reinforcement_Enemy_Technical_V0_1, 1, 
                        USA_SOCOM_Generic_Reinforcement_Enemy_Technical_V0_2, 1
                    };
                };
            };

            class HellfireGroundCommander {
                class Scott {
                    SupportSendingHellfire[] = {
                        USA_SOCOM_Generic_Support_Hellfire_Operator_V0_0, 1, USA_SOCOM_Generic_Support_Hellfire_Operator_V0_1, 1,
                        USA_SOCOM_Generic_Support_Hellfire_Operator_V0_2, 1
                    };
                };
            };

            class MortarGroundCommander {
                class Scott {
                    SupportSendingMortars[] = {
                        USA_SOCOM_Generic_Support_Mortar_Operator_V0_0, 1, USA_SOCOM_Generic_Support_Mortar_Operator_V0_1, 1,
                        USA_SOCOM_Generic_Support_Mortar_Operator_V0_2, 1
                    };
                };
            };

            class IntelligenceCommander {
                class Kathleen {
                    RadioBreak[] = {
                        USA_SOCOM_Generic_Radio_Break_Kathleen_0, 1
                    };
                    RadioOut[] = {
                        USA_SOCOM_Generic_Radio_Out_Kathleen_0, 1, USA_SOCOM_Generic_Radio_Out_Kathleen_1, 1,
                        USA_SOCOM_Generic_Radio_Out_Kathleen_2, 1
                    };
                    RadioOver[] = {
                        USA_SOCOM_Generic_Radio_Over_Kathleen_0, 1
                    };
                    ObjectiveHostagePresence[] = {
                        USA_SOCOM_Generic_Objective_Hostage_Presence_Kathleen_0, 1, USA_SOCOM_Generic_Objective_Hostage_Presence_Kathleen_1, 1,
                        USA_SOCOM_Generic_Objective_Hostage_Presence_Kathleen_2, 1
                    };
                    ObjectiveHostageRescued[] = {
                        USA_SOCOM_Generic_Hostage_Rescued_Kathleen_0, 1, USA_SOCOM_Generic_Hostage_Rescued_Kathleen_1, 1,
                        USA_SOCOM_Generic_Hostage_Rescued_Kathleen_2, 1
                    };
                };
            };

        }
    };
    class BS_B_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { };
    class BS_O_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { };
    class BS_I_US_RANGER_2000 : BS_B_US_RANGER_2000_BASE { };
};