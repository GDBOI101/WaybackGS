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


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.IntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::IntroAnimation()
{
	static auto Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "IntroAnimation");

	Params::UFrontEndRewardWrapperWidget_C_IntroAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.AddToWrapper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (Parm)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewardWrapperWidget_C::AddToWrapper(class UWidget* Widget, class FText DisplayName, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "AddToWrapper");

	Params::UFrontEndRewardWrapperWidget_C_AddToWrapper_Params Parms;
	Parms.Widget = Widget;
	Parms.DisplayName = DisplayName;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "Construct");

	Params::UFrontEndRewardWrapperWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Go_Trigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::Go_Trigger()
{
	static auto Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "Go_Trigger");

	Params::UFrontEndRewardWrapperWidget_C_Go_Trigger_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.ExecuteUbergraph_FrontEndRewardWrapperWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewardWrapperWidget_C::ExecuteUbergraph_FrontEndRewardWrapperWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "ExecuteUbergraph_FrontEndRewardWrapperWidget");

	Params::UFrontEndRewardWrapperWidget_C_ExecuteUbergraph_FrontEndRewardWrapperWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.EventDispatcher_Go_Trigger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::EventDispatcher_Go_Trigger__DelegateSignature()
{
	static auto Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "EventDispatcher_Go_Trigger__DelegateSignature");

	Params::UFrontEndRewardWrapperWidget_C_EventDispatcher_Go_Trigger__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
