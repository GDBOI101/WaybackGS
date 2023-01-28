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


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_NameHomeBase_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Announce_NameHomeBase_C", "UserConstructionScript");

	Params::AAnnounce_NameHomeBase_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_NameHomeBase_C::InitAnnouncement()
{
	static auto Func = Class->GetFunction("Announce_NameHomeBase_C", "InitAnnouncement");

	Params::AAnnounce_NameHomeBase_C_InitAnnouncement_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SentenceIdx                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_NameHomeBase_C::HandleSentenceStart_UI(int32 SentenceIdx)
{
	static auto Func = Class->GetFunction("Announce_NameHomeBase_C", "HandleSentenceStart_UI");

	Params::AAnnounce_NameHomeBase_C_HandleSentenceStart_UI_Params Parms;
	Parms.SentenceIdx = SentenceIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SentenceIdx                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_NameHomeBase_C::HandleSentenceStop_UI(int32 SentenceIdx)
{
	static auto Func = Class->GetFunction("Announce_NameHomeBase_C", "HandleSentenceStop_UI");

	Params::AAnnounce_NameHomeBase_C_HandleSentenceStop_UI_Params Parms;
	Parms.SentenceIdx = SentenceIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SentenceIdx2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_SentenceIdx                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger2_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAnnounce_NameHomeBase_C::ExecuteUbergraph_Announce_NameHomeBase(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Event_SentenceIdx2, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_Event_SentenceIdx, bool K2Node_SwitchInteger2_CmpSuccess)
{
	static auto Func = Class->GetFunction("Announce_NameHomeBase_C", "ExecuteUbergraph_Announce_NameHomeBase");

	Params::AAnnounce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_SentenceIdx2 = K2Node_Event_SentenceIdx2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Event_SentenceIdx = K2Node_Event_SentenceIdx;
	Parms.K2Node_SwitchInteger2_CmpSuccess = K2Node_SwitchInteger2_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
