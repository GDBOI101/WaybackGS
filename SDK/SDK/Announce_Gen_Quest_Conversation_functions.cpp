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


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_Gen_Quest_Conversation_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "UserConstructionScript");

	Params::AAnnounce_Gen_Quest_Conversation_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   FinishingSentence                                                (Parm)
// int32                              FinishingSentenceSentenceIndex                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_C::OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "OnConversationFinished");

	Params::AAnnounce_Gen_Quest_Conversation_C_OnConversationFinished_Params Parms;
	Parms.FinishingSentence = FinishingSentence;
	Parms.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortConversationSentence   K2Node_Event_FinishingSentence                                   ()
// int32                              K2Node_Event_FinishingSentenceSentenceIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "ExecuteUbergraph_Announce_Gen_Quest_Conversation");

	Params::AAnnounce_Gen_Quest_Conversation_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FinishingSentence = K2Node_Event_FinishingSentence;
	Parms.K2Node_Event_FinishingSentenceSentenceIndex = K2Node_Event_FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
