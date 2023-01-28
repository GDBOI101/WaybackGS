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

// 0x28 (0x470 - 0x448)
// BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C
class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  OnNewSentence;                                     // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnCurrentConversationFinished;                     // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_Gen_Quest_Conversation_FrontEndRewards_C");
		return Clss;
	}

	void StopCurrentConversation();
	void PlayCurrentConversation(bool CallFunc_PlayConversation_ReturnValue);
	void UserConstructionScript();
	void OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex);
	void OnSentenceStarted(struct FFortConversationSentence& Sentence, int32 SentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex, const struct FFortConversationSentence& K2Node_Event_Sentence, int32 K2Node_Event_SentenceIndex);
	void OnCurrentConversationFinished__DelegateSignature();
	void OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
