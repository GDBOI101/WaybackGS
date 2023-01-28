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
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Mcp Relative Utc Now
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Mcp_Relative_Utc_Now_Params
{
public:
	struct FDateTime                             UtcNow;                                            // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CallFunc_GetMcpRelativeUtcNow_ReturnValue;         // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSuccessChanceTooltipWidget
struct UBP_FortExpeditionBuildSquadWidget_C_GetSuccessChanceTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x60(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)()
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSquadRatingTooltipWidget
struct UBP_FortExpeditionBuildSquadWidget_C_GetSquadRatingTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x28(0x18)()
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x48(0x18)()
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x629 (0x629 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Bonus Display Name and Brush
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Bonus_Display_Name_and_Brush_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         Condition;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       Rarity;                                            // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           OutBrush_Brush_M;                                  // 0x10(0x90)(Parm, OutParm)
	class FText                                  OutDisplayName;                                    // 0xA0(0x18)(Parm, OutParm)
	struct FLinearColor                          OutRarityColor;                                    // 0xB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RarityColor;                                       // 0xC8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           TagBrush;                                          // 0xD8(0x90)(Edit)
	class FText                                  DisplayName;                                       // 0x168(0x18)(Edit)
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x180(0x80)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x200(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x240(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x280(0x10)(ZeroConstructor, ReferenceParm)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x298(0x18)()
	class FText                                  CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName; // 0x2B0(0x18)()
	struct FFortMultiSizeBrush                   CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush; // 0x2C8(0x360)()
	bool                                         CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue; // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Item In Selected Squad Slot
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Item_In_Selected_Squad_Slot_Params
{
public:
	class UFortItem*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Selected_Slot__SAFE__ReturnValue;     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExpeditionSquadSlotButton_C*          K2Node_DynamicCast_AsExpedition_Squad_Slot_Button; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetItemInSquadSlotBP_ReturnValue;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadPicker
struct UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadPicker_Params
{
public:
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Inspect Item for Squad Slot
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Inspect_Item_for_Squad_Slot_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Inspect
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Inspect_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Slot (SAFE)
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Slot__SAFE__Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E (0x1E - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Purchase Slot State
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Purchase_Slot_State_Params
{
public:
	enum class EInputActionState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSquadSlotLocked_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Purchase Slot
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Purchase_Slot_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSquadSlotLocked_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Angle for Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Angle_for_Preview_State_Params
{
public:
	enum class EFortBuffState                    Index;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable2;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable3;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Color for Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Color_for_Preview_State_Params
{
public:
	enum class EFortBuffState                    Index;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    Temp_byte_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Chance Buff Arrow for Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Chance_Buff_Arrow_for_Preview_Params
{
public:
	enum class EFortBuffState                    Index;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue; // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Rating Buff Arrow for Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Rating_Buff_Arrow_for_Preview_Params
{
public:
	enum class EFortBuffState                    Index;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue; // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Visiblity From Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Visiblity_From_Preview_State_Params
{
public:
	enum class EFortBuffState                    Index;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Text Style from Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Text_Style_from_Preview_State_Params
{
public:
	enum class EFortBuffState                    Index;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable2;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable3;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Power and Rating for Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Power_and_Rating_for_Preview_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SlottedItems1;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
	class UFortItem*                             NullItem;                                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x20(0x10)(Edit, ZeroConstructor)
	float                                        PreviewRating;                                     // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviewChance;                                     // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentRating;                                     // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentChance;                                     // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CurrentItem;                                       // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    CallFunc_Determine_Preview_State_State;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue2;                      // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    CallFunc_Determine_Preview_State_State2;           // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue2; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue; // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_CalculateTotalPower_ReturnValue;          // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     CallFunc_GetItemsInSquad_ReturnValue;              // 0xA8(0x10)(ZeroConstructor, ReferenceParm)
	float                                        CallFunc_Get_Current_Rating_CurrentNumericValue;   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Preview_State_Params
{
public:
	float                                        Preview;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Current;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    State;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update For Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_For_Preview_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     CallFunc_Update_Power_and_Rating_for_Preview_SlottedItems1; // 0x8(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back with Squad Clear
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_with_Squad_Clear_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Handle_Back_PassThrough;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Slot Item State
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Slot_Item_State_Params
{
public:
	enum class EInputActionState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable3;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanItemBeComitted_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select2_Default;                            // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Vehicle Selected
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Vehicle_Selected_Params
{
public:
	class FName                                  CurrentSquadId;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Selected_Slot__SAFE__ReturnValue;     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Selected_Slot__SAFE__ReturnValue2;    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Handle_Close_Picker_Action_PassThrough;   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Open Picker
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Open_Picker_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Start Expedition
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Start_Expedition_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Picker Closed
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Picker_Closed_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 CallFunc_Get_Purchase_Slot_State_ReturnValue;      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsExpeditionValidToStart_ReturnValue;     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Slot Selected
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Slot_Selected_Params
{
public:
	enum class EInputActionState                 CallFunc_Get_Slot_Item_State_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Selected Item Committed
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Selected_Item_Committed_Params
{
public:
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     CallFunc_GetItemsInSquad_ReturnValue;              // 0x8(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Close Picker Action
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Close_Picker_Action_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     CallFunc_GetItemsInSquad_ReturnValue;              // 0x10(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Slot Item Action
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Slot_Item_Action_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryCommitSelectedItem_ReturnValue;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Start Expedition Widget State
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Start_Expedition_Widget_State_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsExpeditionValidToStart_ReturnValue;     // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Expedition Expired
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Expedition_Expired_Params
{
public:
	struct FDateTime                             CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow;          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Handle_Back_with_Squad_Clear_PassThrough; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasExpeditionExpired_ReturnValue;         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Try to Auto Select First Vehicle
struct UBP_FortExpeditionBuildSquadWidget_C_Try_to_Auto_Select_First_Vehicle_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_ItemDef;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetRequiredTags_ReturnValue;              // 0x30(0x20)()
	TArray<class FName>                          CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds; // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSquadOnExpedition_ReturnValue;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Item
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Item_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               SelectedItem;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Picker List View
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Picker_List_View_Params
{
public:
	class UFortItemTileView*                     PickerTileView;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadSlotSlotted
struct UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadSlotSlotted_Params
{
public:
	int32                                        CallFunc_Get_Selected_Slot__SAFE__ReturnValue;     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Selected_Slot__SAFE__ReturnValue2;    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExpeditionSquadSlotButton_C*          K2Node_DynamicCast_AsExpedition_Squad_Slot_Button; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18A (0x18A - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Bonus Criteria
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Bonus_Criteria_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SlottedItems;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGameplayTag                          LoopCriteriaTag;                                   // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash)
	int32                                        FoundIndex;                                        // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  MatchedCriteriaTags;                               // 0x28(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CallFunc_GetMatchedCriteriaTags_OutMatchedCriteria; // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortCriteriaRequirementData>  CallFunc_GetBonusCriteriaBP_OutBonusCriteria;      // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	struct FFortCriteriaRequirementData          CallFunc_Array_Get_Item;                           // 0x60(0x20)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconAndNameWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue2;         // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0xA8(0x8)(NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xB0(0x10)(NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M; // 0xC8(0x90)()
	class FText                                  CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName; // 0x158(0x18)()
	struct FLinearColor                          CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor; // 0x170(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Expedition Power
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Expedition_Power_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     CallFunc_GetItemsInSquad_ReturnValue;              // 0x28(0x10)(ZeroConstructor, ReferenceParm)
	float                                        CallFunc_CalculateTotalPower_ReturnValue;          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue; // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Squad Slot Pickers
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Squad_Slot_Pickers_Params
{
public:
	int32                                        SelectedSquadIndex;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSquadSlotLocked_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Expedition Costs
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Expedition_Costs_Params
{
public:
	class UFortExpeditionItemDefinition*         ItemDef;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemAndCount>                 CallFunc_GetExpeditionCosts_OutExpeditionCosts;    // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	struct FItemAndCount                         CallFunc_Array_Get_Item;                           // 0x20(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x48(0x10)(NoDestructor)
	class UItemCountOverCost_C*                  CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x418 (0x418 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Requirements
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Requirements_Params
{
public:
	class UFortExpeditionItemDefinition*         ItemDef;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetRequiredTags_ReturnValue;              // 0x10(0x20)()
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FFortTagUIData                        CallFunc_GetUIDataForTag_OutData;                  // 0x50(0x398)()
	bool                                         CallFunc_GetUIDataForTag_ReturnValue;              // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconAndNameWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x408(0x10)(NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Remaining Expiration Time
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Remaining_Expiration_Time_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Clear Vehicle Widgets
struct UBP_FortExpeditionBuildSquadWidget_C_Clear_Vehicle_Widgets_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Vehicle Name
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Vehicle_Name_Params
{
public:
	struct FHomebaseSquad                        HomebaseSquad;                                     // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x408 (0x408 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Squad Widgets
struct UBP_FortExpeditionBuildSquadWidget_C_Refresh_Squad_Widgets_Params
{
public:
	bool                                         NewLocalVar_0;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseSquad                        CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad; // 0x10(0x88)()
	bool                                         CallFunc_TryGetHomebaseSquadData_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue2;                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                   CallFunc_GetSquadIcon_ReturnValue;                 // 0xA8(0x360)()
};

// 0x39 (0x39 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Change Vehicle
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Change_Vehicle_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FortExpeditionPickVehicleWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Pick_Vehicle_Widget; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rewards
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Rewards_Params
{
public:
	class UFortExpeditionItemDefinition*         ItemDef;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortCardPackItemDefinition*>   CallFunc_GetAllRewards_OutRewards;                 // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCardPackItemDefinition*           CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewardsListEntry_C*                   CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rarity
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Rarity_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x18(0x80)()
};

// 0x50 (0x50 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Duration
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Duration_Params
{
public:
	class UFortExpeditionItemDefinition*         ItemDef;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	struct FTimespan                             CallFunc_FromMinutes_ReturnValue;                  // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTimespanAsText_ReturnValue;            // 0x20(0x18)()
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x38(0x18)()
};

// 0x21 (0x21 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Expedition_Item_Definition_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         ItemDef;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         K2Node_DynamicCast_AsFort_Expedition_Item_Definition; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Item Data
struct UBP_FortExpeditionBuildSquadWidget_C_Refresh_Item_Data_Params
{
public:
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     CallFunc_GetItemsInSquad_ReturnValue;              // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_ItemDef;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rating
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Rating_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTargetPowerLevel_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Description
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Description_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x8(0x18)()
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Name
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Name_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x18)()
};

// 0x70 (0x70 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Setup Input Action Handlers
struct UBP_FortExpeditionBuildSquadWidget_C_Setup_Input_Action_Handlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.DialogResult_B738291040F33B805332A7B633B3ACBD
struct UBP_FortExpeditionBuildSquadWidget_C_DialogResult_B738291040F33B805332A7B633B3ACBD_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWaitingForLatentActionCompletion;                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle WaitingDialogHandle;                               // 0x14(0x4)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Construct
struct UBP_FortExpeditionBuildSquadWidget_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.SetData
struct UBP_FortExpeditionBuildSquadWidget_C_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HandleVechicleSelected
struct UBP_FortExpeditionBuildSquadWidget_C_HandleVechicleSelected_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Destruct
struct UBP_FortExpeditionBuildSquadWidget_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnActivated
struct UBP_FortExpeditionBuildSquadWidget_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK Select Item in Picker
struct UBP_FortExpeditionBuildSquadWidget_C_HACK_Select_Item_in_Picker_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRefreshBuildSquadWidget
struct UBP_FortExpeditionBuildSquadWidget_C_OnRefreshBuildSquadWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpedition
struct UBP_FortExpeditionBuildSquadWidget_C_OnStartExpedition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnGamepadStateChanged
struct UBP_FortExpeditionBuildSquadWidget_C_OnGamepadStateChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpeditionCompleted
struct UBP_FortExpeditionBuildSquadWidget_C_OnStartExpeditionCompleted_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRequestClosePicker
struct UBP_FortExpeditionBuildSquadWidget_C_OnRequestClosePicker_Params
{
public:
};

// 0x2A1 (0x2A1 - 0x0)
// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget
struct UBP_FortExpeditionBuildSquadWidget_C_ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Handle_Close_Picker_Action_PassThrough;   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable3;                               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItem*                   K2Node_Event_InItem;                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_SquadId;                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StartExpedition_ReturnValue;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationDialogAction             K2Node_MakeStruct_ConfirmationDialogAction;        // 0x38(0xD0)()
	TArray<struct FConfirmationDialogAction>     K2Node_MakeArray_Array;                            // 0x108(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsExpeditionValidToStart_ReturnValue;     // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemTileView*                     CallFunc_Get_Picker_List_View_PickerTileView;      // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                     CallFunc_Get_Picker_List_View_PickerTileView2;     // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Get_Selected_Item_ReturnValue;            // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedItem_ReturnValue;              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle Temp_struct_Variable;                              // 0x14C(0x4)(NoDestructor)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInfoWindow_C*                         CallFunc_Create_ReturnValue;                       // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWaitingForLatentActionCompletion; // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle K2Node_CustomEvent_WaitingDialogHandle;            // 0x184(0x4)(NoDestructor)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x188(0x18)()
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_ItemDef;   // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1A8(0x40)(HasGetValueTypeHash)
	TArray<class UFortCardPackItemDefinition*>   CallFunc_GetAllRewards_OutRewards;                 // 0x1E8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x1F8(0x10)(ZeroConstructor, ReferenceParm)
	class UFortItem*                             K2Node_ComponentBoundEvent_SelectedItem;           // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x210(0x18)()
	int32                                        K2Node_ComponentBoundEvent_SquadSlotIndex;         // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x230(0x10)(ZeroConstructor, NoDestructor)
	enum class EInputActionState                 CallFunc_Get_Slot_Item_State_ReturnValue;          // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 CallFunc_Get_Slot_Item_State_ReturnValue2;         // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x248(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Handle_Back_PassThrough;                  // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 CallFunc_Get_Purchase_Slot_State_ReturnValue;      // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 CallFunc_Get_Purchase_Slot_State_ReturnValue2;     // 0x25A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 CallFunc_Get_Purchase_Slot_State_ReturnValue3;     // 0x25B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3500[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x26C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3501[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue;              // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_ComponentBoundEvent_ActiveWidget;           // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue2;             // 0x285(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3502[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ExpeditionSquadSlotsView_C*        K2Node_DynamicCast_AsBP_Expedition_Squad_Slots_View; // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3503[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USquadSlotItemPicker_C*                K2Node_DynamicCast_AsSquad_Slot_Item_Picker;       // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
