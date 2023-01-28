#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// WidgetBlueprintGeneratedClass ConversationUtil.ConversationUtil_C
class UConversationUtil_C : public UFortJournalQuestDetails
{
public:
	class UFortConversation*                     Conversation;                                      // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConversationUtil_C");
		return Clss;
	}

	void StartConversation(class UFortConversation* Conversation, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
