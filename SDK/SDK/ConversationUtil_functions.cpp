#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ConversationUtil.ConversationUtil_C.StartConversation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*           Conversation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation        (NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_Gen_Quest_Conversation_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConversationUtil_C::StartConversation(class UFortConversation* Conversation, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("ConversationUtil_C", "StartConversation");

	Params::UConversationUtil_C_StartConversation_Params Parms;
	Parms.Conversation = Conversation;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = K2Node_MakeStruct_FortClientAnnouncementData_Conversation;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
