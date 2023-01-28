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


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.IsInInvalidSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InInvalidSlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkInCorrectSlot_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeroInSupportSlot_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortHeroSupportPerkWidget_C::IsInInvalidSlot(bool* InInvalidSlot, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsPerkInCorrectSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_IsHeroInSupportSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "IsInInvalidSlot");

	Params::UFortHeroSupportPerkWidget_C_IsInInvalidSlot_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsPerkInCorrectSlot_ReturnValue = CallFunc_IsPerkInCorrectSlot_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_IsHeroInSupportSlot_ReturnValue = CallFunc_IsHeroInSupportSlot_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InInvalidSlot != nullptr)
		*InInvalidSlot = Parms.InInvalidSlot;

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateComparisonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkHighlighted_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortHeroSupportPerkWidget_C::UpdateComparisonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsPerkHighlighted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "UpdateComparisonVisibility");

	Params::UFortHeroSupportPerkWidget_C_UpdateComparisonVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsPerkHighlighted_ReturnValue = CallFunc_IsPerkHighlighted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateEmptyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortHeroSupportPerkWidget_C::UpdateEmptyVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsPerkEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "UpdateEmptyVisibility");

	Params::UFortHeroSupportPerkWidget_C_UpdateEmptyVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsPerkEmpty_ReturnValue = CallFunc_IsPerkEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateActiveDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInInvalidSlot_InInvalidSlot                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInInvalidSlot_InInvalidSlot2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_IsPerkActive_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush2                                    ()
// struct FSlateBrush                 K2Node_Select6_Default                                           (ConstParm)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortHeroSupportPerkWidget_C::UpdateActiveDisplay(bool Temp_bool_Variable, bool Temp_bool_Variable2, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable7, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, bool CallFunc_IsPerkActive_ReturnValue, bool CallFunc_IsInInvalidSlot_InInvalidSlot, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_IsInInvalidSlot_InInvalidSlot2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsPerkActive_ReturnValue2, enum class ESlateVisibility K2Node_Select3_Default, class UClass* K2Node_Select4_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select5_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_Select6_Default, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Select7_Default)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "UpdateActiveDisplay");

	Params::UFortHeroSupportPerkWidget_C_UpdateActiveDisplay_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
	Parms.CallFunc_IsPerkActive_ReturnValue = CallFunc_IsPerkActive_ReturnValue;
	Parms.CallFunc_IsInInvalidSlot_InInvalidSlot = CallFunc_IsInInvalidSlot_InInvalidSlot;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_IsInInvalidSlot_InInvalidSlot2 = CallFunc_IsInInvalidSlot_InInvalidSlot2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsPerkActive_ReturnValue2 = CallFunc_IsPerkActive_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_MakeStruct_SlateBrush2 = K2Node_MakeStruct_SlateBrush2;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateLockedVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select2_Default                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortHeroSupportPerkWidget_C::UpdateLockedVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "UpdateLockedVisibility");

	Params::UFortHeroSupportPerkWidget_C_UpdateLockedVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue2 = CallFunc_IsPerkUnlocked_ReturnValue2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidget_C::UpdateVisibility()
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "UpdateVisibility");

	Params::UFortHeroSupportPerkWidget_C_UpdateVisibility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisplayedOutsideOfHeroSquad                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSupportBonusType   TargetedSupportType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSupportBonusType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSupportBonusType   Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortHeroSupportPerkWidget_C::Update(bool DisplayedOutsideOfHeroSquad, enum class EFortSupportBonusType TargetedSupportType, enum class EFortSupportBonusType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, enum class EFortSupportBonusType Temp_byte_Variable2, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class UTexture2D* K2Node_Select_Default, class FText K2Node_Select2_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "Update");

	Params::UFortHeroSupportPerkWidget_C_Update_Params Parms;
	Parms.DisplayedOutsideOfHeroSquad = DisplayedOutsideOfHeroSquad;
	Parms.TargetedSupportType = TargetedSupportType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnHeroUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidget_C::OnHeroUpdated()
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "OnHeroUpdated");

	Params::UFortHeroSupportPerkWidget_C_OnHeroUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnSupportTypeUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidget_C::OnSupportTypeUpdated()
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "OnSupportTypeUpdated");

	Params::UFortHeroSupportPerkWidget_C_OnSupportTypeUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidget_C::Construct()
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "Construct");

	Params::UFortHeroSupportPerkWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortHeroSupportPerkWidget_C::OnStateChanged()
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "OnStateChanged");

	Params::UFortHeroSupportPerkWidget_C_OnStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.ExecuteUbergraph_FortHeroSupportPerkWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortHeroSupportPerkWidget_C::ExecuteUbergraph_FortHeroSupportPerkWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("FortHeroSupportPerkWidget_C", "ExecuteUbergraph_FortHeroSupportPerkWidget");

	Params::UFortHeroSupportPerkWidget_C_ExecuteUbergraph_FortHeroSupportPerkWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
