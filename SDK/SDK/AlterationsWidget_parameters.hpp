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

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.Construct
struct UAlterationsWidget_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
struct UAlterationsWidget_C_OnGenerateAlteration_Params
{
public:
	struct FFortUIAlteration                     AlterationInfo;                                    // 0x0(0x18)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
struct UAlterationsWidget_C_OnItemChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
struct UAlterationsWidget_C_OnItemToCompareWithChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
struct UAlterationsWidget_C_OnStateChanged_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
struct UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3373[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAlterationWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlterationUnlocked_ReturnValue;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3374[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIAlteration                     K2Node_Event_AlterationInfo;                       // 0x28(0x18)(NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3375[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue3;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkDivider_C*                        CallFunc_Create_ReturnValue2;                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkDivider_C*                        CallFunc_Create_ReturnValue3;                      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue2;       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue3;       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue4;       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
