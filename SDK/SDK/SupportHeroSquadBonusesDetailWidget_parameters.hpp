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
// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.SetState
struct USupportHeroSquadBonusesDetailWidget_C_SetState_Params
{
public:
	enum class EFortSupportPerkWidgetState       InState;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdatePerkWidgets
struct USupportHeroSquadBonusesDetailWidget_C_UpdatePerkWidgets_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3031[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortSupportBonusType             Temp_byte_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortSupportBonusType             Temp_byte_Variable2;                               // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortSupportBonusType             K2Node_Select_Default;                             // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD7 (0xD7 - 0x0)
// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdateVisibility
struct USupportHeroSquadBonusesDetailWidget_C_UpdateVisibility_Params
{
public:
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3032[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3033[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId3;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex3; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseSquad                        CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad; // 0x38(0x88)()
	bool                                         CallFunc_TryGetHomebaseSquadData_ReturnValue;      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3034[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero;                    // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet
struct USupportHeroSquadBonusesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentSquadSlotSetBP
struct USupportHeroSquadBonusesDetailWidget_C_HandlePostDifferentSquadSlotSetBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.Construct
struct USupportHeroSquadBonusesDetailWidget_C_Construct_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget
struct USupportHeroSquadBonusesDetailWidget_C_ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3035[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
