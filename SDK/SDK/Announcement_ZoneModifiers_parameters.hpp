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
// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
struct UAnnouncement_ZoneModifiers_C_UpdateWidgetData_Params
{
public:
	class AFortClientAnnouncement*               Announcement;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
struct UAnnouncement_ZoneModifiers_C_OnDisplayTimerFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationDelayFinished
struct UAnnouncement_ZoneModifiers_C_OnConversationDelayFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.WidgetCachingHack
struct UAnnouncement_ZoneModifiers_C_WidgetCachingHack_Params
{
public:
};

// 0xF0 (0xF0 - 0x0)
// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
struct UAnnouncement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_289F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue2;         // 0x38(0x8)(NoDestructor)
	class AFortClientAnnouncement*               K2Node_Event_Announcement;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortClientAnnouncement_ZoneModifiers* K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortClientAnnouncementData_Conversation K2Node_MakeStruct_FortClientAnnouncementData_Conversation; // 0x58(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x68(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue3;         // 0x80(0x8)(NoDestructor)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array;                            // 0x98(0x10)(ZeroConstructor, ReferenceParm)
	uint8                                        Pad_28A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xB0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortClientAnnouncement_Conversation*  CallFunc_FinishSpawningActor_ReturnValue;          // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
