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

// 0x630 (0x630 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Bonus Display Name and Brush
struct UBP_FortExpeditionDetailsWidget_C_Get_Bonus_Display_Name_and_Brush_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         Condition;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       Rarity;                                            // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3529[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           OutBrush_Brush_M;                                  // 0x10(0x90)(Parm, OutParm)
	class FText                                  OutDisplayName;                                    // 0xA0(0x18)(Parm, OutParm)
	struct FLinearColor                          OutRarityColor;                                    // 0xB8(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RarityColor;                                       // 0xC8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           TagBrush;                                          // 0xD8(0x90)(Edit)
	class FText                                  DisplayName;                                       // 0x168(0x18)(Edit)
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x180(0x80)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x200(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x240(0x40)(HasGetValueTypeHash)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x288(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName; // 0x298(0x18)()
	struct FFortMultiSizeBrush                   CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush; // 0x2B0(0x360)()
	bool                                         CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue; // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x618(0x18)()
};

// 0x149 (0x149 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Bonus Criteria
struct UBP_FortExpeditionDetailsWidget_C_Set_Bonus_Criteria_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortCriteriaRequirementData>  CallFunc_GetBonusCriteriaBP_OutBonusCriteria;      // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortCriteriaRequirementData          CallFunc_Array_Get_Item;                           // 0x20(0x20)()
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M; // 0x48(0x90)()
	class FText                                  CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName; // 0xD8(0x18)()
	struct FLinearColor                          CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor; // 0xF0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconAndNameWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x118(0x8)(NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x120(0x10)(NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41C (0x41C - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Returns Data
struct UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Returns_Data_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetExpeditionSquadId_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExpeditionInProgress_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetVehicleTagFromSquadId_OutFoundVehicleTag; // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetVehicleTagFromSquadId_ReturnValue;     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3530[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3531[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTagUIData                        CallFunc_GetUIDataForTag_OutData;                  // 0x58(0x398)()
	bool                                         CallFunc_GetUIDataForTag_ReturnValue;              // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3532[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     CallFunc_GetItemsInSquad_ReturnValue;              // 0x400(0x10)(ZeroConstructor, ReferenceParm)
	float                                        CallFunc_CalculateTotalPower_ReturnValue;          // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue; // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set In Progress State
struct UBP_FortExpeditionDetailsWidget_C_Set_In_Progress_State_Params
{
public:
	class UFortExpeditionItem*                   Self2;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsExpeditionInProgress_ReturnValue;       // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3533[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable2;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Remaining Expiration Time
struct UBP_FortExpeditionDetailsWidget_C_Set_Remaining_Expiration_Time_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x418 (0x418 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Requirements
struct UBP_FortExpeditionDetailsWidget_C_Set_Requirements_Params
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
	uint8                                        Pad_3534[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3535[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconAndNameWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x408(0x8)(NoDestructor)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Open Build Expedition Squad
struct UBP_FortExpeditionDetailsWidget_C_Open_Build_Expedition_Squad_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3536[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionBuildSquadWidget*       K2Node_DynamicCast_AsFort_Expedition_Build_Squad_Widget; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rating
struct UBP_FortExpeditionDetailsWidget_C_Set_Rating_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTargetPowerLevel_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rewards
struct UBP_FortExpeditionDetailsWidget_C_Set_Rewards_Params
{
public:
	class UFortExpeditionItemDefinition*         Item_Def;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3537[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortCardPackItemDefinition*>   CallFunc_GetAllRewards_OutRewards;                 // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	class UFortCardPackItemDefinition*           CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3538[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3539[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewardsListEntry_C*                   CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_353A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Duration
struct UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Duration_Params
{
public:
	class UFortExpeditionItemDefinition*         Item_Def;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_FromMinutes_ReturnValue;                  // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_353B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTimespanAsText_ReturnValue;            // 0x18(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
};

// 0x21 (0x21 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionDetailsWidget_C_Get_Expedition_Item_Definition_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         Item_Def;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         K2Node_DynamicCast_AsFort_Expedition_Item_Definition; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Description
struct UBP_FortExpeditionDetailsWidget_C_Set_Description_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x8(0x18)()
};

// 0x98 (0x98 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rarity
struct UBP_FortExpeditionDetailsWidget_C_Set_Rarity_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_353C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x18(0x80)()
};

// 0x20 (0x20 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Name
struct UBP_FortExpeditionDetailsWidget_C_Set_Name_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x18)()
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Refresh Item Data
struct UBP_FortExpeditionDetailsWidget_C_Refresh_Item_Data_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_353D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_Item_Def;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.DialogResult_11B7688B48FDD9A59A2D55A7B4F60124
struct UBP_FortExpeditionDetailsWidget_C_DialogResult_11B7688B48FDD9A59A2D55A7B4F60124_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_353E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWaitingForLatentActionCompletion;                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_353F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle WaitingDialogHandle;                               // 0x14(0x4)(Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.SetData
struct UBP_FortExpeditionDetailsWidget_C_SetData_Params
{
public:
	class UFortExpeditionItem*                   InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleOnExpeditionCompleted
struct UBP_FortExpeditionDetailsWidget_C_HandleOnExpeditionCompleted_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature
struct UBP_FortExpeditionDetailsWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Construct
struct UBP_FortExpeditionDetailsWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleAbandonExpedition
struct UBP_FortExpeditionDetailsWidget_C_HandleAbandonExpedition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.OnAbandonExpeditionCompleted
struct UBP_FortExpeditionDetailsWidget_C_OnAbandonExpeditionCompleted_Params
{
public:
};

// 0x1F9 (0x1F9 - 0x0)
// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.ExecuteUbergraph_BP_FortExpeditionDetailsWidget
struct UBP_FortExpeditionDetailsWidget_C_ExecuteUbergraph_BP_FortExpeditionDetailsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3540[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWaitingForLatentActionCompletion; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3541[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle K2Node_CustomEvent_WaitingDialogHandle;            // 0x14(0x4)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	struct FFortDialogExternalLatentActionHandle Temp_struct_Variable;                              // 0x28(0x4)(NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3542[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3543[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItem*                   K2Node_Event_InItem;                               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItem*                   K2Node_CustomEvent_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3544[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInfoWindow_C*                         CallFunc_Create_ReturnValue;                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortExpeditionItemDefinition*         CallFunc_Get_Expedition_Item_Definition_Item_Def;  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortCardPackItemDefinition*>   CallFunc_GetAllRewards_OutRewards;                 // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x90(0x18)()
	struct FConfirmationDialogAction             K2Node_MakeStruct_ConfirmationDialogAction;        // 0xA8(0xD0)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x178(0x40)(HasGetValueTypeHash)
	TArray<struct FConfirmationDialogAction>     K2Node_MakeArray_Array;                            // 0x1B8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x1C8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1D8(0x18)()
	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue; // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
