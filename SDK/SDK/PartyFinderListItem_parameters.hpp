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

// 0x11 (0x11 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.UnbindSocialItemDelegates
struct UPartyFinderListItem_C_UnbindSocialItemDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.UpdateStateText
struct UPartyFinderListItem_C_UpdateStateText_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x18(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x30(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x48(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x60(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x78(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0x90(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xA8(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xC0(0x18)()
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             Temp_byte_Variable;                                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortPartyRestriction             CallFunc_CanBeJoined_FailReason;                   // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBeJoined_ReturnValue;                  // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xE8(0x18)()
};

// 0x10 (0x10 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.SetupExpansion
struct UPartyFinderListItem_C_SetupExpansion_Params
{
public:
	bool                                         Expanded;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable2;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.HandlePresenceUpdated
struct UPartyFinderListItem_C_HandlePresenceUpdated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.BindSocialItemDelegates
struct UPartyFinderListItem_C_BindSocialItemDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.InitializeItem
struct UPartyFinderListItem_C_InitializeItem_Params
{
public:
	class FText                                  CallFunc_GetLocation_ReturnValue;                  // 0x0(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x18)()
	struct FUniqueNetIdRepl                      CallFunc_GetUniquePlayerId_ReturnValue;            // 0x30(0x18)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.OnSocialItemSet
struct UPartyFinderListItem_C_OnSocialItemSet_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.ExpansionChanged
struct UPartyFinderListItem_C_ExpansionChanged_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.Construct
struct UPartyFinderListItem_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.Destruct
struct UPartyFinderListItem_C_Destruct_Params
{
public:
};

// 0x7 (0x7 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.ExecuteUbergraph_PartyFinderListItem
struct UPartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bExpanded;                            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsItemExpanded_ReturnValue;               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinderListItem.PartyFinderListItem_C.InviteJoinChanged__DelegateSignature
struct UPartyFinderListItem_C_InviteJoinChanged__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
