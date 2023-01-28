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

// 0x19 (0x19 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
struct UItemTransformKeyPickerTileButton_C_Get_Fort_PC_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
struct UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm)
	class UFortAccountItem*                      CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*  K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetRequiredCatalysts_ReturnValue;         // 0x40(0x20)()
};

// 0x61 (0x61 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item as Seen
struct UItemTransformKeyPickerTileButton_C_Mark_Item_as_Seen_Params
{
public:
	struct FGameplayTagContainer                 CatalystTags;                                      // 0x0(0x20)(Edit)
	class AFortPlayerController*                 CallFunc_Get_Fort_PC_FortPC;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_Get_Transform_Key_Catalysts_ReturnValue;  // 0x28(0x20)()
	class UFortHomebaseNodeItem*                 CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5E (0x5E - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
struct UItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable_Params
{
public:
	bool                                         bConsumedOnConversion;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*  K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetRequiredCatalysts_ReturnValue;         // 0x28(0x20)()
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
struct UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Params
{
public:
	class UFortAccountItem*                      AsFort_Account_Item;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetData_ReturnValue;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      K2Node_DynamicCast_AsFort_Account_Item;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x62 (0x62 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
struct UItemTransformKeyPickerTileButton_C_Update_Bang_State_Params
{
public:
	struct FGameplayTagContainer                 CatalystTags;                                      // 0x0(0x20)(Edit)
	class AFortPlayerController*                 CallFunc_Get_Fort_PC_FortPC;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseNodeItem*                 CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_Get_Transform_Key_Catalysts_ReturnValue;  // 0x38(0x20)()
	class UFortAccountItem*                      CallFunc_Get_Transform_Key_AsFort_Account_Item;    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue2;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData
struct UItemTransformKeyPickerTileButton_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnSelected
struct UItemTransformKeyPickerTileButton_C_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnHovered
struct UItemTransformKeyPickerTileButton_C_OnHovered_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
struct UItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldUseNewItemCards_ReturnValue;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_InData;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       K2Node_Event_OwningList;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetCardDimensions_ReturnValue;            // 0x28(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
