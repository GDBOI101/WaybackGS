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

// 0x8 (0x8 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.HandleAbilitySystemChanged
struct USquadStatsWidget_C_HandleAbilitySystemChanged_Params
{
public:
	class UFortAbilitySystemContext*             CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8D (0x8D - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.BindToAttributeChanges
struct USquadStatsWidget_C_BindToAttributeChanges_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilitySystemContext*             CallFunc_GetContext_ReturnValue2;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRegisteredPlayerInfo*             CallFunc_GetRegisteredPlayerInfo_ReturnValue;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayAttribute>            CallFunc_GetTooltipAttributes_ReturnValue;         // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                    CallFunc_Array_Get_Item;                           // 0x68(0x20)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.HandleActivityChanged
struct USquadStatsWidget_C_HandleActivityChanged_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.HandleAttributeChanged
struct USquadStatsWidget_C_HandleAttributeChanged_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat
struct USquadStatsWidget_C_HighlightStat_Params
{
public:
	int32                                        InStatIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll
struct USquadStatsWidget_C_RefreshScroll_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonBorder*                         Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates
struct USquadStatsWidget_C_UnbindDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemContext*             CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRegisteredPlayerInfo*             CallFunc_GetRegisteredPlayerInfo_ReturnValue;      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats
struct USquadStatsWidget_C_ToggleBetweenStats_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates
struct USquadStatsWidget_C_BindDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRegisteredPlayerInfo*             CallFunc_GetRegisteredPlayerInfo_ReturnValue;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray
struct USquadStatsWidget_C_InitCoreStatsWidgetArray_Params
{
public:
	TArray<class UFortAttributeListItem_NUI*>    K2Node_MakeArray_Array;                            // 0x0(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.Construct
struct USquadStatsWidget_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct USquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature
struct USquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.Destruct
struct USquadStatsWidget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.HandleSquadSlottingPreviewStateChanged
struct USquadStatsWidget_C_HandleSquadSlottingPreviewStateChanged_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget
struct USquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SquadStatsWidget.SquadStatsWidget_C.DetailedStatsClosed__DelegateSignature
struct USquadStatsWidget_C_DetailedStatsClosed__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
