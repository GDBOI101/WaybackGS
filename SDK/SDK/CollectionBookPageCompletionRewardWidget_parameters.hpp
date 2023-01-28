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

// 0x1 (0x1 - 0x0)
// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged
struct UCollectionBookPageCompletionRewardWidget_C_OnRewardStatusChanged_Params
{
public:
	enum class ECollectionBookRewardStatus       NewStatus;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget
struct UCollectionBookPageCompletionRewardWidget_C_ExecuteUbergraph_CollectionBookPageCompletionRewardWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollectionBookRewardStatus       Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollectionBookRewardStatus       K2Node_Event_NewStatus;                            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27F3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
