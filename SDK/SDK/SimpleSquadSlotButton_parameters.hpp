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
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.UpdateTypeIconOffset
struct USimpleSquadSlotButton_C_UpdateTypeIconOffset_Params
{
public:
	float                                        VerticalOffset;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x4(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform;                 // 0xC(0x1C)(NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Glow
struct USimpleSquadSlotButton_C_Update_SubType_Icon_Glow_Params
{
public:
	bool                                         GlowIcon;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3798[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0x30(0x28)()
	struct FSlateColor                           K2Node_Select_Default;                             // 0x58(0x28)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x80(0x90)()
};

// 0x0 (0x0 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Image
struct USimpleSquadSlotButton_C_Update_SubType_Icon_Image_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.IsSlotEmpty
struct USimpleSquadSlotButton_C_IsSlotEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3799[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInSquadSlotBP_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Mark Squad Slot Seen State
struct USimpleSquadSlotButton_C_Mark_Squad_Slot_Seen_State_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_379A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseNodeItem*                 CallFunc_GetHomebaseNodeItemForSquadSlot_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update Bang State
struct USimpleSquadSlotButton_C_Update_Bang_State_Params
{
public:
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSquadSlotUnseen_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.GetSimpleSquadButtonTooltipWidget
struct USimpleSquadSlotButton_C_GetSimpleSquadButtonTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.PreConstruct
struct USimpleSquadSlotButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Construct
struct USimpleSquadSlotButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
struct USimpleSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.SquadSlotWidgetUpdated
struct USimpleSquadSlotButton_C_SquadSlotWidgetUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.OnSelected
struct USimpleSquadSlotButton_C_OnSelected_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.ExecuteUbergraph_SimpleSquadSlotButton
struct USimpleSquadSlotButton_C_ExecuteUbergraph_SimpleSquadSlotButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_379D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 Temp_byte_Variable3;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_379E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetActiveCombatSquadId_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable2;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable3;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable4;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable5;                              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable6;                              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable7;                              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_379F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select2_Default;                            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
