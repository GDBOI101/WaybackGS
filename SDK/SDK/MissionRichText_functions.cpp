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


// Function MissionRichText.MissionRichText_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm)

void UMissionRichText_C::Update(class FText Text)
{
	static auto Func = Class->GetFunction("MissionRichText_C", "Update");

	Params::UMissionRichText_C_Update_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRichText.MissionRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionRichText_C::Construct()
{
	static auto Func = Class->GetFunction("MissionRichText_C", "Construct");

	Params::UMissionRichText_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRichText.MissionRichText_C.ExecuteUbergraph_MissionRichText
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRichText_C::ExecuteUbergraph_MissionRichText(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MissionRichText_C", "ExecuteUbergraph_MissionRichText");

	Params::UMissionRichText_C_ExecuteUbergraph_MissionRichText_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
