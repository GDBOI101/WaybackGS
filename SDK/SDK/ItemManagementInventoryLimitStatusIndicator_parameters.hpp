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

// 0x178 (0x178 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshStorageInventoryStatus
struct UItemManagementInventoryLimitStatusIndicator_C_RefreshStorageInventoryStatus_Params
{
public:
	int32                                        MaxCount;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentCount;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable;                              // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue2;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDeployableBaseItemCounts_ItemsCount;   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDeployableBaseItemCounts_MaxItemsCount; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDeployableBaseItemCounts_ItemsCount2;  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDeployableBaseItemCounts_MaxItemsCount2; // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount2; // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStorageNumItems_ReturnValue;           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStorageCapacity_ReturnValue;           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Get_Theme_Color_Theme_Color;              // 0x54(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select2_Default;                            // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select3_Default;                            // 0x70(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x80(0x28)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xA8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xF8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x110(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x150(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x160(0x18)()
};

// 0x38 (0x38 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackStorageInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackStorageInventory_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDeployableBaseManager*            CallFunc_GetCurrent_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.RefreshWorldInventoryStatus
struct UItemManagementInventoryLimitStatusIndicator_C_RefreshWorldInventoryStatus_Params
{
public:
	struct FLinearColor                          Temp_struct_Variable;                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Theme_Color_Theme_Color;              // 0x20(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBackpackItemCounts_ItemsCount;         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBackpackItemCounts_MaxItemsCount;      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetBackpackItemCounts_OverflowItemsCount; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Theme_Color_Theme_Color2;             // 0x3C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x90(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0xE0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xF0(0x18)()
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x108(0x18)()
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue2;             // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_188F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x134(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select2_Default;                            // 0x144(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1890[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x158(0x28)()
};

// 0x18 (0x18 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackAccountInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackAccountInventory_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.TrackWorldInventory
struct UItemManagementInventoryLimitStatusIndicator_C_TrackWorldInventory_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleVaultItemLimitStateChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleVaultItemLimitStateChanged_Params
{
public:
	struct FLinearColor                          Temp_struct_Variable;                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable2;                             // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue2;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVaultItemLimitStatus             CallFunc_GetVaultItemLimitStatus_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1891[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCountOfVaultLimitedItems_ReturnValue;  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVaultItemLimit_ReturnValue;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1892[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x80(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0xD0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)()
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0xF8(0x18)()
	struct FLinearColor                          Temp_struct_Variable3;                             // 0x110(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVaultItemLimitStatus             Temp_byte_Variable;                                // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1893[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x124(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1894[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x138(0x28)()
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Construct
struct UItemManagementInventoryLimitStatusIndicator_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.Destruct
struct UItemManagementInventoryLimitStatusIndicator_C_Destruct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleWorldItemListChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleWorldItemListChanged_Params
{
public:
	TArray<class UFortWorldItem*>                ItemsAdded;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                ItemsRemoved;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleOutpostItemListChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleOutpostItemListChanged_Params
{
public:
	TArray<class UFortWorldItem*>                ItemsAdded;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                ItemsRemoved;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.HandleDeployableBaseInventoryChanged
struct UItemManagementInventoryLimitStatusIndicator_C_HandleDeployableBaseInventoryChanged_Params
{
public:
	class ADeployableBasePlot*                   Plot;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C.ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator
struct UItemManagementInventoryLimitStatusIndicator_C_ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1895[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADeployableBasePlot*                   K2Node_CustomEvent_Plot;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	TArray<class UFortWorldItem*>                K2Node_CustomEvent_ItemsAdded2;                    // 0x20(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                K2Node_CustomEvent_ItemsRemoved2;                  // 0x30(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortWorldItem*>                K2Node_CustomEvent_ItemsAdded;                     // 0x58(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                K2Node_CustomEvent_ItemsRemoved;                   // 0x68(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue2;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1897[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue3;                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
