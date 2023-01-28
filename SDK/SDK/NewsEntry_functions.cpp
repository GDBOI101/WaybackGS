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


// Function NewsEntry.NewsEntry_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::SetFocus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("NewsEntry_C", "SetFocus");

	Params::UNewsEntry_C_SetFocus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsEntry.NewsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNewsEntry_C::Construct()
{
	static auto Func = Class->GetFunction("NewsEntry_C", "Construct");

	Params::UNewsEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("NewsEntry_C", "BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature");

	Params::UNewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::ExecuteUbergraph_NewsEntry(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("NewsEntry_C", "ExecuteUbergraph_NewsEntry");

	Params::UNewsEntry_C_ExecuteUbergraph_NewsEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BodyText                                                         (Parm)

void UNewsEntry_C::HandleEntrySelected__DelegateSignature(class FText BodyText)
{
	static auto Func = Class->GetFunction("NewsEntry_C", "HandleEntrySelected__DelegateSignature");

	Params::UNewsEntry_C_HandleEntrySelected__DelegateSignature_Params Parms;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
