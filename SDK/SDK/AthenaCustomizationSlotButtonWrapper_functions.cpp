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


// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButtonWrapper_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "PreConstruct");

	Params::UAthenaCustomizationSlotButtonWrapper_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationSlotButtonWrapper_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationSlotButtonWrapper_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "Construct");

	Params::UAthenaCustomizationSlotButtonWrapper_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowSlotType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationSlotButtonWrapper_C::ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_CanShowSlotType_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");

	Params::UAthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CanShowSlotType_ReturnValue = CallFunc_CanShowSlotType_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationSlotButtonWrapper_C::OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
