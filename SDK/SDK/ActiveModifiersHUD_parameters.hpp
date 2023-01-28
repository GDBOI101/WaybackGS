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

// 0xFD (0xFD - 0x0)
// Function ActiveModifiersHUD.ActiveModifiersHUD_C.PopulateModifiers
struct UActiveModifiersHUD_C_PopulateModifiers_Params
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> InModifiers;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                        AnimationDuration;                                 // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DescriptionTextStyle;                              // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NameTextStyle;                                     // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x34(0x10)(NoDestructor)
	uint8                                        Pad_3E5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActiveModifierItemHUD_C*              CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*   CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetSmallPreviewImageBrush_ReturnValue;    // 0x68(0x90)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ActiveModifiersHUD.ActiveModifiersHUD_C.OnActiveGameplayModifiersChanged
struct UActiveModifiersHUD_C_OnActiveGameplayModifiersChanged_Params
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ActiveModifiersHUD.ActiveModifiersHUD_C.Construct
struct UActiveModifiersHUD_C_Construct_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function ActiveModifiersHUD.ActiveModifiersHUD_C.ExecuteUbergraph_ActiveModifiersHUD
struct UActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortGameplayModifierItemDefinition*> K2Node_CustomEvent_AppliedModifiers;               // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortGameplayModifierItemDefinition*> CallFunc_GetActiveModifiers_OutActiveModifiers;    // 0x48(0x10)(ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
