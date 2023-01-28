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


// Function Lightbox.Lightbox_C.RemoveContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightbox_C::RemoveContent(bool CallFunc_HasAnyChildren_ReturnValue)
{
	static auto Func = Class->GetFunction("Lightbox_C", "RemoveContent");

	Params::ULightbox_C_RemoveContent_Params Parms;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.AddContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*           Content                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightbox_C::AddContent(class UCommonUserWidget* Content, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("Lightbox_C", "AddContent");

	Params::ULightbox_C_AddContent_Params Parms;
	Parms.Content = Content;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULightbox_C::Outro()
{
	static auto Func = Class->GetFunction("Lightbox_C", "Outro");

	Params::ULightbox_C_Outro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULightbox_C::Intro()
{
	static auto Func = Class->GetFunction("Lightbox_C", "Intro");

	Params::ULightbox_C_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULightbox_C::Destruct()
{
	static auto Func = Class->GetFunction("Lightbox_C", "Destruct");

	Params::ULightbox_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULightbox_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Lightbox_C", "BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::ULightbox_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULightbox_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Lightbox_C", "BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::ULightbox_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightbox_C::ExecuteUbergraph_Lightbox(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Lightbox_C", "ExecuteUbergraph_Lightbox");

	Params::ULightbox_C_ExecuteUbergraph_Lightbox_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULightbox_C::OutroEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("Lightbox_C", "OutroEnded__DelegateSignature");

	Params::ULightbox_C_OutroEnded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULightbox_C::IntroEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("Lightbox_C", "IntroEnded__DelegateSignature");

	Params::ULightbox_C_IntroEnded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
