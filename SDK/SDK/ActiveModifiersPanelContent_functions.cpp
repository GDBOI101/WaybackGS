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


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>InModifiers                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersPanelContent_C::Init(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers)
{
	static auto Func = Class->GetFunction("ActiveModifiersPanelContent_C", "Init");

	Params::UActiveModifiersPanelContent_C_Init_Params Parms;
	Parms.InModifiers = InModifiers;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
