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

// 0x27 (0x27 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text
struct UCollectionBookItemPicker_C_Get_Type_Text_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Type;                                              // 0x8(0x18)(Parm, OutParm)
	enum class EFortInventoryFilter              CallFunc_GetFilterCategory_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue4;         // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue5;         // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction
struct UCollectionBookItemPicker_C_HandleCommitAction_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryCommitSelectedItem_ReturnValue;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected
struct UCollectionBookItemPicker_C_HandleItemSelected_Params
{
public:
	class UObject*                               ItemSelected;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030
struct UCollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWaitingForLatentActionCompletion;                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle WaitingDialogHandle;                               // 0x14(0x4)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct
struct UCollectionBookItemPicker_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation
struct UCollectionBookItemPicker_C_ShowSlotItemConfirmation_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x590 (0x590 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker
struct UCollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle Temp_struct_Variable;                              // 0x10(0x4)(NoDestructor)
	uint8                                        Pad_30A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_Type_Text_Type;                       // 0x18(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)()
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	class UFortItem*                             K2Node_CustomEvent_SelectedItem;                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDONOTUSE_C*                           CallFunc_Create_ReturnValue;                       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommonInputActionData                CallFunc_GetDataTableRowFromName_OutRow;           // 0xE0(0x2D0)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationDialogAction             K2Node_MakeStruct_ConfirmationDialogAction;        // 0x3B8(0xD0)()
	TArray<struct FConfirmationDialogAction>     K2Node_MakeArray_Array2;                           // 0x488(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWaitingForLatentActionCompletion; // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle K2Node_CustomEvent_WaitingDialogHandle;            // 0x4AC(0x4)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x4B0(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x4C8(0x10)(ZeroConstructor, NoDestructor)
	class UCollectionBookRecycleSlotResultsWidget_C* CallFunc_Create_ReturnValue2;                      // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      CallFunc_GetCurrentSlottedItem_ReturnValue;        // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      CallFunc_GetCurrentSlottedItem_ReturnValue2;       // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue2;             // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue; // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Get_Type_Text_Type2;                      // 0x508(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x520(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0x560(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x578(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
