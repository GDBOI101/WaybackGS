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

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C
class AAnnounce_Gen_Quest_Conversation_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_Gen_Quest_Conversation_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
