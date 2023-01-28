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

// 0x28 (0x28 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Send to Skill Tree
struct UExpeditionSquadSlotButton_C_Send_to_Skill_Tree_Params
{
public:
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSquadSlotLockedBP_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.Get Squad Data
struct UExpeditionSquadSlotButton_C_Get_Squad_Data_Params
{
public:
	class FName                                  OutSquadId;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OutSquadSlotIndex;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             ItemTypes;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseSquad                        CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad; // 0x38(0x88)()
	bool                                         CallFunc_TryGetHomebaseSquadData_ReturnValue;      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseSquadSlot                    CallFunc_Array_Get_Item;                           // 0xC8(0x60)()
};

// 0x1 (0x1 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.PreConstruct
struct UExpeditionSquadSlotButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnClicked
struct UExpeditionSquadSlotButton_C_OnClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.SquadSlotWidgetUpdated
struct UExpeditionSquadSlotButton_C_SquadSlotWidgetUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
struct UExpeditionSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnDoubleClicked
struct UExpeditionSquadSlotButton_C_OnDoubleClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSelected
struct UExpeditionSquadSlotButton_C_OnSelected_Params
{
public:
};

// 0x81 (0x81 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.ExecuteUbergraph_ExpeditionSquadSlotButton
struct UExpeditionSquadSlotButton_C_ExecuteUbergraph_ExpeditionSquadSlotButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable2;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable3;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable4;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable5;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable6;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable7;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSquadSlotLockedBP_ReturnValue;          // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32CE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInSquadSlotBP_ReturnValue;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue2;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInSquadSlotBP_ReturnValue2;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSquadSlotLockedBP_ReturnValue2;         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotOpened__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotOpened__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotUpdated__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotUpdated__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C.OnSquadSlotSelected__DelegateSignature
struct UExpeditionSquadSlotButton_C_OnSquadSlotSelected__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
