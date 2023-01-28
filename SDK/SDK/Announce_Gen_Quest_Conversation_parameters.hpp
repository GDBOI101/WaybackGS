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
// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript
struct AAnnounce_Gen_Quest_Conversation_C_UserConstructionScript_Params
{
public:
};

// 0xB4 (0xB4 - 0x0)
// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished
struct AAnnounce_Gen_Quest_Conversation_C_OnConversationFinished_Params
{
public:
	struct FFortConversationSentence             FinishingSentence;                                 // 0x0(0xB0)(Parm)
	int32                                        FinishingSentenceSentenceIndex;                    // 0xB0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation
struct AAnnounce_Gen_Quest_Conversation_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortConversationSentence             K2Node_Event_FinishingSentence;                    // 0x8(0xB0)()
	int32                                        K2Node_Event_FinishingSentenceSentenceIndex;       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
