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

// 0x38 (0x38 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
struct UJournalQuestRewardDetails_C_UpdatePanelInfo_Params
{
public:
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRewardInfo                       CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x8(0x30)()
};

// 0x4 (0x4 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
struct UJournalQuestRewardDetails_C_UpdatePlayButtonState_Params
{
public:
	bool                                         CallFunc_CanGotoQuest_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanPlayQuest_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortQuestState                   CallFunc_GetQuestState_ReturnValue;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
struct UJournalQuestRewardDetails_C_UpdateButtonStates_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnEndSpokenDialog
struct UJournalQuestRewardDetails_C_HandleOnEndSpokenDialog_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnBeginSpokenDialog
struct UJournalQuestRewardDetails_C_HandleOnBeginSpokenDialog_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x8(0x18)(Parm)
	class FText                                  Subtitle;                                          // 0x20(0x18)(Parm)
	enum class EFortAnnouncementDisplayPreference DisplayPreference;                                 // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
struct UJournalQuestRewardDetails_C_Setup_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
struct UJournalQuestRewardDetails_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
struct UJournalQuestRewardDetails_C_HandleCurrentQuestChangedBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
struct UJournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
