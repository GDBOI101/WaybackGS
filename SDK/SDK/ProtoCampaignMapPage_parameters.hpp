#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x92 (0x92 - 0x0)
// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForIncompleteQuest-Halloween Event
struct UProtoCampaignMapPage_C_CheckForIncompleteQuest_Halloween_Event_Params
{
public:
	bool                                         TargetQuestFound;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetQuestPageIndex;                              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QuestPageIndex;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QuestFound;                                        // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E93[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestMiniTile_C*                      K2Node_DynamicCast_AsQuest_Mini_Tile;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStateAndFindIncompleteQuest_QuestFound; // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetState_QuestFound;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E96[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue2;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHalloweenMapPage_05_C*                K2Node_DynamicCast_AsHalloween_Map_Page_05;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHalloweenMapPage_04_C*                K2Node_DynamicCast_AsHalloween_Map_Page_04;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHalloweenMapPage_03_C*                K2Node_DynamicCast_AsHalloween_Map_Page_03;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHalloweenMapPage_02_C*                K2Node_DynamicCast_AsHalloween_Map_Page_02;        // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHalloweenMapPage_01_C*                K2Node_DynamicCast_AsHalloween_Map_Page_01;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess6;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage
struct UProtoCampaignMapPage_C_SetBackgroundImage_Params
{
public:
};

// 0x1BA (0x1BA - 0x0)
// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest
struct UProtoCampaignMapPage_C_CheckForMainQuest_Params
{
public:
	bool                                         TargetQuestFound;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetQuestPageIndex;                              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QuestPageIndex;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QuestFound;                                        // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E9D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestMiniTile_C*                      K2Node_DynamicCast_AsQuest_Mini_Tile;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_GetMainQuest_outCurentMainQuest;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetState_QuestFound;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue2;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCampaignMapPage_Plankerton_13_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_13; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_07_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_07; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_12_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_12; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_11_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_11; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_10_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_10; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess6;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_09_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_09; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess7;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_08_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_08; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess8;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_06_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_06; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess9;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_05_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_05; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess10;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_04_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_04; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess11;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_03_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_03; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_02_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_02; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess13;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Plankerton_01_C*      K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_01; // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess14;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_10_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_10; // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess15;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_09_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_09; // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess16;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_08_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_08; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess17;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_07_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_07; // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess18;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_06_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_06; // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess19;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_05_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_05; // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess20;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_04_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_04; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess21;                     // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_03_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_03; // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess22;                     // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_02_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_02; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess23;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampaignMapPage_Stonewood_01_C*       K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_01; // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess24;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest
struct UProtoCampaignMapPage_C_GetMainQuest_Params
{
public:
	class UFortQuestItem*                        OutCurentMainQuest;                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetMainQuest_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct
struct UProtoCampaignMapPage_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct
struct UProtoCampaignMapPage_C_Construct_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage
struct UProtoCampaignMapPage_C_ExecuteUbergraph_ProtoCampaignMapPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckForMainQuest_TargetQuestFound;       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3EB7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CheckForMainQuest_TargetQuestPageIndex;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
