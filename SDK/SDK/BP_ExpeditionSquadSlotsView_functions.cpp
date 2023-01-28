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


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquadSlot          SquadSlotDefinition                                              (ConstParm, Parm, OutParm, ReferenceParm)
// class UWidget*                     OutSquadSlotButtonHost                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSquadSlotSelectorButton*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExpeditionSquadSlotButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

class UFortSquadSlotSelectorButton* UBP_ExpeditionSquadSlotsView_C::CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UExpeditionSquadSlotButton_C* CallFunc_Create_ReturnValue, TArray<class UWidget*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "CreateAndAddSquadSlotButton");

	Params::UBP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.SquadSlotDefinition = SquadSlotDefinition;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = Parms.OutSquadSlotButtonHost;

	return Parms.ReturnValue;

}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotSelected(int32 SquadSlotIndex)
{
	static auto Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "HandleSquadSlotSelected");

	Params::UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ExpeditionSquadSlotsView_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "PreConstruct");

	Params::UBP_ExpeditionSquadSlotsView_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotOpened()
{
	static auto Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "HandleSquadSlotOpened");

	Params::UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotOpened_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_SquadSlotIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExpeditionSquadSlotsView_C::ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_SquadSlotIndex)
{
	static auto Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "ExecuteUbergraph_BP_ExpeditionSquadSlotsView");

	Params::UBP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_SquadSlotIndex = K2Node_CustomEvent_SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ExpeditionSquadSlotsView_C::OnSquadSlotOpened__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "OnSquadSlotOpened__DelegateSignature");

	Params::UBP_ExpeditionSquadSlotsView_C_OnSquadSlotOpened__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExpeditionSquadSlotsView_C::OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex)
{
	static auto Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "OnSquadSlotSelected__DelegateSignature");

	Params::UBP_ExpeditionSquadSlotsView_C_OnSquadSlotSelected__DelegateSignature_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
