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


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.UndarkenAllSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroSquadSlotsView_C::UndarkenAllSlots()
{
	static auto Func = Class->GetFunction("HeroSquadSlotsView_C", "UndarkenAllSlots");

	Params::UHeroSquadSlotsView_C_UndarkenAllSlots_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HighlightSlotByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadSlotsView_C::HighlightSlotByIndex(int32 Index, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("HeroSquadSlotsView_C", "HighlightSlotByIndex");

	Params::UHeroSquadSlotsView_C_HighlightSlotByIndex_Params Parms;
	Parms.Index = Index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HandleSquadNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SquadSlotId                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadSlotsView_C::HandleSquadNavigation(class FName SquadId, int32 SlotIndex, int32 SquadSlotId, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroSquadSlotsView_C", "HandleSquadNavigation");

	Params::UHeroSquadSlotsView_C_HandleSquadNavigation_Params Parms;
	Parms.SquadId = SquadId;
	Parms.SlotIndex = SlotIndex;
	Parms.SquadSlotId = SquadSlotId;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.CreateAndAddSquadSlotButton
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquadSlot          SquadSlotDefinition                                              (ConstParm, Parm, OutParm, ReferenceParm)
// class UWidget*                     OutSquadSlotButtonHost                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSquadSlotSelectorButton*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush2                                    ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimpleSquadSlotButton_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimpleSquadSlotButton_C*    CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// struct FSlateBrush                 K2Node_Select2_Default                                           ()
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// class USimpleSquadSlotButton_C*    CallFunc_Create_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// TArray<class UWidget*>             K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

class UFortSquadSlotSelectorButton* UHeroSquadSlotsView_C::CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UWidget*>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue2, bool Temp_bool_Variable2, TArray<class UWidget*>& K2Node_MakeArray_Array3, const struct FSlateBrush& K2Node_Select2_Default, bool Temp_bool_Variable3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class FText K2Node_Select3_Default, class USimpleSquadSlotButton_C* CallFunc_Create_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, TArray<class UWidget*>& K2Node_MakeArray_Array5, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("HeroSquadSlotsView_C", "CreateAndAddSquadSlotButton");

	Params::UHeroSquadSlotsView_C_CreateAndAddSquadSlotButton_Params Parms;
	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.SquadSlotDefinition = SquadSlotDefinition;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush2 = K2Node_MakeStruct_SlateBrush2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue3 = CallFunc_GetOwningPlayer_ReturnValue3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = Parms.OutSquadSlotButtonHost;

	return Parms.ReturnValue;

}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHeroSquadSlotsView_C::Construct()
{
	static auto Func = Class->GetFunction("HeroSquadSlotsView_C", "Construct");

	Params::UHeroSquadSlotsView_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadSlotsView.HeroSquadSlotsView_C.ExecuteUbergraph_HeroSquadSlotsView
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadSlotsView_C::ExecuteUbergraph_HeroSquadSlotsView(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroSquadSlotsView_C", "ExecuteUbergraph_HeroSquadSlotsView");

	Params::UHeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
