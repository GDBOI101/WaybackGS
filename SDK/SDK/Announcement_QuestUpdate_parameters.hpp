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

// 0x8 (0x8 - 0x0)
// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
struct UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params
{
public:
	class AFortClientAnnouncement*               Announcement;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished
struct UAnnouncement_QuestUpdate_C_AllUpdatesFinished_Params
{
public:
	class UQuestUpdateEntry_C*                   UpdateWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
struct UAnnouncement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3751[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestUpdateEntry_C*                   K2Node_CustomEvent_UpdateWidget;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class AFortClientAnnouncement*               K2Node_Event_Announcement;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_QuestUpdate_C*               K2Node_DynamicCast_AsAnnounce_Quest_Update;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_OnReceiveQuestUpdate_Success;             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
