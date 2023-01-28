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

// 0xB0 (0xB0 - 0x0)
// Function PickupMessageItem.PickupMessageItem_C.Setup
struct UPickupMessageItem_C_Setup_Params
{
public:
	class UFortItem*                             Picked_Up_Item;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x18)()
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x20(0x90)()
};

// 0x5 (0x5 - 0x0)
// Function PickupMessageItem.PickupMessageItem_C.Refresh Count
struct UPickupMessageItem_C_Refresh_Count_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function PickupMessageItem.PickupMessageItem_C.OnStackSizeChanged
struct UPickupMessageItem_C_OnStackSizeChanged_Params
{
public:
	int32                                        OldStackSize;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PickupMessageItem.PickupMessageItem_C.OnBeginRemove
struct UPickupMessageItem_C_OnBeginRemove_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PickupMessageItem.PickupMessageItem_C.OnReturnedToPool
struct UPickupMessageItem_C_OnReturnedToPool_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PickupMessageItem.PickupMessageItem_C.ExecuteUbergraph_PickupMessageItem
struct UPickupMessageItem_C_ExecuteUbergraph_PickupMessageItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_OldStackSize;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
