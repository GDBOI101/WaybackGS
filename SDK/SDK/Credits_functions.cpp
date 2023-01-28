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


// Function Credits.Credits_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCredits_C::Reset()
{
	static auto Func = Class->GetFunction("Credits_C", "Reset");

	Params::UCredits_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.CaptureEndPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCredits_C::CaptureEndPoint(float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Credits_C", "CaptureEndPoint");

	Params::UCredits_C_CaptureEndPoint_Params Parms;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.ScrollCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentPosition                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCredits_C::ScrollCredits(float CurrentPosition, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Credits_C", "ScrollCredits");

	Params::UCredits_C_ScrollCredits_Params Parms;
	Parms.CurrentPosition = CurrentPosition;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.ToggleScrollTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableTimer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UCredits_C::ToggleScrollTimer(bool EnableTimer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("Credits_C", "ToggleScrollTimer");

	Params::UCredits_C_ToggleScrollTimer_Params Parms;
	Parms.EnableTimer = EnableTimer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCredits_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("Credits_C", "HandleBack");

	Params::UCredits_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function Credits.Credits_C.HandleFadeInFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCredits_C::HandleFadeInFinished()
{
	static auto Func = Class->GetFunction("Credits_C", "HandleFadeInFinished");

	Params::UCredits_C_HandleFadeInFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCredits_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("Credits_C", "OnDeactivated");

	Params::UCredits_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCredits_C::OnActivated()
{
	static auto Func = Class->GetFunction("Credits_C", "OnActivated");

	Params::UCredits_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCredits_C::Construct()
{
	static auto Func = Class->GetFunction("Credits_C", "Construct");

	Params::UCredits_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.ExecuteUbergraph_Credits
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UCredits_C::ExecuteUbergraph_Credits(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("Credits_C", "ExecuteUbergraph_Credits");

	Params::UCredits_C_ExecuteUbergraph_Credits_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
