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

// 0x0 (0x0 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.StopCurrentConversation
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_StopCurrentConversation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.PlayCurrentConversation
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_PlayCurrentConversation_Params
{
public:
	bool                                         CallFunc_PlayConversation_ReturnValue;             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.UserConstructionScript
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_UserConstructionScript_Params
{
public:
};

// 0xB4 (0xB4 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnConversationFinished
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnConversationFinished_Params
{
public:
	struct FFortConversationSentence             FinishingSentence;                                 // 0x0(0xB0)(Parm)
	int32                                        FinishingSentenceSentenceIndex;                    // 0xB0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB4 (0xB4 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnSentenceStarted
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnSentenceStarted_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm)
	int32                                        SentenceIndex;                                     // 0xB0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x174 (0x174 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortConversationSentence             K2Node_Event_FinishingSentence;                    // 0x8(0xB0)()
	int32                                        K2Node_Event_FinishingSentenceSentenceIndex;       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortConversationSentence             K2Node_Event_Sentence;                             // 0xC0(0xB0)(ConstParm)
	int32                                        K2Node_Event_SentenceIndex;                        // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnCurrentConversationFinished__DelegateSignature
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnCurrentConversationFinished__DelegateSignature_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnNewSentence__DelegateSignature
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnNewSentence__DelegateSignature_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xB0)(Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
