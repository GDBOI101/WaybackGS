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
// Function Announce_NameHomeBase.Announce_NameHomeBase_C.UserConstructionScript
struct AAnnounce_NameHomeBase_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement
struct AAnnounce_NameHomeBase_C_InitAnnouncement_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
struct AAnnounce_NameHomeBase_C_HandleSentenceStart_UI_Params
{
public:
	int32                                        SentenceIdx;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
struct AAnnounce_NameHomeBase_C_HandleSentenceStop_UI_Params
{
public:
	int32                                        SentenceIdx;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
struct AAnnounce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3866[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_SentenceIdx2;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3867[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_SentenceIdx;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger2_CmpSuccess;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
