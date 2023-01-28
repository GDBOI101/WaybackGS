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

// 0x4 (0x4 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren
struct UMessageCenterListItem_C_DoesItemHaveChildren_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel
struct UMessageCenterListItem_C_GetIndentLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded
struct UMessageCenterListItem_C_IsItemExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.GetData
struct UMessageCenterListItem_C_GetData_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
struct UMessageCenterListItem_C_ShowText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm)
	class UCommonTextBlock*                      TextBlock;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocalTextBlock;                                    // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalText;                                         // 0x28(0x18)(Edit)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
struct UMessageCenterListItem_C_SetMessage_Params
{
public:
	class UFortUINotification*                   MESSAGE;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.OnAcquireFromPool
struct UMessageCenterListItem_C_OnAcquireFromPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.OnReleaseToPool
struct UMessageCenterListItem_C_OnReleaseToPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.Private_OnExpanderArrowShiftClicked
struct UMessageCenterListItem_C_Private_OnExpanderArrowShiftClicked_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked
struct UMessageCenterListItem_C_RegisterOnClicked_Params
{
public:
	UDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded
struct UMessageCenterListItem_C_SetExpanded_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList
struct UMessageCenterListItem_C_SetIndexInList_Params
{
public:
	int32                                        InIndexInList;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.ToggleExpansion
struct UMessageCenterListItem_C_ToggleExpansion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.Reset
struct UMessageCenterListItem_C_Reset_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.SetData
struct UMessageCenterListItem_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.Construct
struct UMessageCenterListItem_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.SetSelected
struct UMessageCenterListItem_C_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3B (0x3B - 0x0)
// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
struct UMessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_Event_Callback;                             // 0x8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bExpanded;                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InIndexInList;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_InData;                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       K2Node_Event_OwningList;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   K2Node_DynamicCast_AsFort_UINotification;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSelected;                            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
