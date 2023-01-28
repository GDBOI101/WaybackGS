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

// 0x0 (0x0 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ForceHideWidget
struct UResourceAggregationWidget_C_ForceHideWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HideWidget
struct UResourceAggregationWidget_C_HideWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.TriggerAggregateAnimation
struct UResourceAggregationWidget_C_TriggerAggregateAnimation_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.UpdateAggregateResourceCollected
struct UResourceAggregationWidget_C_UpdateAggregateResourceCollected_Params
{
public:
	class UFortItem*                             InPotentialResource;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ResetSourceOfResource
struct UResourceAggregationWidget_C_ResetSourceOfResource_Params
{
public:
	class ABuildingSMActor*                      InResourceObject;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             InPotentialResource;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumInStack_ReturnValue;                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x18(0x90)()
};

// 0xB1 (0xB1 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.HandleDamagedResourceObject
struct UResourceAggregationWidget_C_HandleDamagedResourceObject_Params
{
public:
	class ABuildingSMActor*                      DamagedResourceObject;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             PotentialResource;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Destroyed;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WeakpointDamage;                                   // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LocalDestroyed;                                    // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LocalWeakpointDamage;                              // 0x13(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             LocalPotentialResource;                            // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingSMActor*                      LocalDamagedResourceObject;                        // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x28(0x8)(NoDestructor)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)()
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.Construct
struct UResourceAggregationWidget_C_Construct_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function ResourceAggregationWidget.ResourceAggregationWidget_C.ExecuteUbergraph_ResourceAggregationWidget
struct UResourceAggregationWidget_C_ExecuteUbergraph_ResourceAggregationWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
