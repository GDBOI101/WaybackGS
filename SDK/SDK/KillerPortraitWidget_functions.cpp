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


// Function KillerPortraitWidget.KillerPortraitWidget_C.Init
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortKillerVisualInfo       KillerVisualInfo                                                 (Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKillerPortraitWidget_C::Init(struct FFortKillerVisualInfo& KillerVisualInfo, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("KillerPortraitWidget_C", "Init");

	Params::UKillerPortraitWidget_C_Init_Params Parms;
	Parms.KillerVisualInfo = KillerVisualInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
