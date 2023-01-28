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


// Function PerksList.PerksList_C.ResetVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPerksList_C::ResetVariables()
{
	static auto Func = Class->GetFunction("PerksList_C", "ResetVariables");

	Params::UPerksList_C_ResetVariables_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnGeneratePerkTier
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier             FortPerkTier                                                     (Parm, NoDestructor)
// class UFortPerkTierWidget_NUI*     PerkTierWidget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget)
{
	static auto Func = Class->GetFunction("PerksList_C", "OnGeneratePerkTier");

	Params::UPerksList_C_OnGeneratePerkTier_Params Parms;
	Parms.FortPerkTier = FortPerkTier;
	Parms.PerkTierWidget = PerkTierWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnGeneratePerk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerk                 FortPerk                                                         (Parm)
// class UFortPerkWidget_NUI*         PerkWidget                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerksList_C::OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget)
{
	static auto Func = Class->GetFunction("PerksList_C", "OnGeneratePerk");

	Params::UPerksList_C_OnGeneratePerk_Params Parms;
	Parms.FortPerk = FortPerk;
	Parms.PerkWidget = PerkWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPerksList_C::Construct()
{
	static auto Func = Class->GetFunction("PerksList_C", "Construct");

	Params::UPerksList_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnHeroChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UPerksList_C::OnHeroChanged()
{
	static auto Func = Class->GetFunction("PerksList_C", "OnHeroChanged");

	Params::UPerksList_C_OnHeroChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.OnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UPerksList_C::OnStateChanged()
{
	static auto Func = Class->GetFunction("PerksList_C", "OnStateChanged");

	Params::UPerksList_C_OnStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerkTier             K2Node_Event_FortPerkTier                                        (NoDestructor)
// class UFortPerkTierWidget_NUI*     K2Node_Event_PerkTierWidget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkTierWidgetNew_C*        K2Node_DynamicCast_AsPerk_Tier_Widget_New                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUIPerk                 K2Node_Event_FortPerk                                            ()
// class UFortPerkWidget_NUI*         K2Node_Event_PerkWidget                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkWidgetNew_C*            K2Node_DynamicCast_AsPerk_Widget_New                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerkUnlocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetGrantedAbilityKit_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortGadgetItemDefinition*>CallFunc_BP_GetGadgets_GadgetItemDefinitions                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPerkDivider_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerksList_C::ExecuteUbergraph_PerksList(int32 EntryPoint, const struct FFortUIPerkTier& K2Node_Event_FortPerkTier, class UFortPerkTierWidget_NUI* K2Node_Event_PerkTierWidget, class UPerkTierWidgetNew_C* K2Node_DynamicCast_AsPerk_Tier_Widget_New, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, const struct FFortUIPerk& K2Node_Event_FortPerk, class UFortPerkWidget_NUI* K2Node_Event_PerkWidget, class UPerkWidgetNew_C* K2Node_DynamicCast_AsPerk_Widget_New, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsPerkUnlocked_ReturnValue, class UFortAbilityKit* CallFunc_GetGrantedAbilityKit_ReturnValue, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable3, class UPerkDivider_C* CallFunc_Create_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue3, bool CallFunc_HasAnyChildren_ReturnValue4, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select4_Default, enum class ESlateVisibility Temp_byte_Variable10, bool Temp_bool_Variable5, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, enum class ESlateVisibility K2Node_Select5_Default, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3, bool Temp_bool_Variable6, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue4, enum class ESlateVisibility K2Node_Select6_Default)
{
	static auto Func = Class->GetFunction("PerksList_C", "ExecuteUbergraph_PerksList");

	Params::UPerksList_C_ExecuteUbergraph_PerksList_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FortPerkTier = K2Node_Event_FortPerkTier;
	Parms.K2Node_Event_PerkTierWidget = K2Node_Event_PerkTierWidget;
	Parms.K2Node_DynamicCast_AsPerk_Tier_Widget_New = K2Node_DynamicCast_AsPerk_Tier_Widget_New;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_FortPerk = K2Node_Event_FortPerk;
	Parms.K2Node_Event_PerkWidget = K2Node_Event_PerkWidget;
	Parms.K2Node_DynamicCast_AsPerk_Widget_New = K2Node_DynamicCast_AsPerk_Widget_New;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsPerkUnlocked_ReturnValue = CallFunc_IsPerkUnlocked_ReturnValue;
	Parms.CallFunc_GetGrantedAbilityKit_ReturnValue = CallFunc_GetGrantedAbilityKit_ReturnValue;
	Parms.CallFunc_BP_GetGadgets_GadgetItemDefinitions = CallFunc_BP_GetGadgets_GadgetItemDefinitions;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue2 = CallFunc_HasAnyChildren_ReturnValue2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_AddChild_ReturnValue2 = CallFunc_AddChild_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue3 = CallFunc_HasAnyChildren_ReturnValue3;
	Parms.CallFunc_HasAnyChildren_ReturnValue4 = CallFunc_HasAnyChildren_ReturnValue4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue2 = CallFunc_AddChildToVerticalBox_ReturnValue2;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue3 = CallFunc_AddChildToVerticalBox_ReturnValue3;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue4 = CallFunc_AddChildToVerticalBox_ReturnValue4;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
