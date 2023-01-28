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

// 0x70 (0x70 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.CreateButtonAndSetText
struct UPlayerChoiceWidget_C_CreateButtonAndSetText_Params
{
public:
	struct FChoiceDataEntry                      ChoiceData;                                        // 0x0(0x50)(Parm)
	int32                                        ChoiceID;                                          // 0x50(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerChoiceButtonWidget_C*           ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerChoiceButtonWidget_C*           CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.GetText_0
struct UPlayerChoiceWidget_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x0 (0x0 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice3_Text_0
struct UPlayerChoiceWidget_C_Get_TextBlock_Choice3_Text_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice2_Text_0
struct UPlayerChoiceWidget_C_Get_TextBlock_Choice2_Text_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Get_TextBlock_Choice1_Text_0
struct UPlayerChoiceWidget_C_Get_TextBlock_Choice1_Text_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Construct
struct UPlayerChoiceWidget_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ChoiceSelected
struct UPlayerChoiceWidget_C_ChoiceSelected_Params
{
public:
	int32                                        ChoiceID;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SetChoices
struct UPlayerChoiceWidget_C_SetChoices_Params
{
public:
	struct FChoiceData                           ChoiceItems;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.Destruct
struct UPlayerChoiceWidget_C_Destruct_Params
{
public:
};

// 0xD1 (0xD1 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ExecuteUbergraph_PlayerChoiceWidget
struct UPlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ChoiceID;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChoiceData                           K2Node_Event_ChoiceItems;                          // 0x18(0x30)(ConstParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FChoiceDataEntry                      CallFunc_Array_Get_Item;                           // 0x50(0x50)()
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerChoiceButtonWidget_C*           CallFunc_CreateButtonAndSetText_ReturnValue;       // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller2;      // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SurvivorStoryChoiceSelected__DelegateSignature
struct UPlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature_Params
{
public:
	int32                                        SelectedChoice;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
