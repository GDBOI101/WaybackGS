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


// Function ActiveModifiersHUD.ActiveModifiersHUD_C.PopulateModifiers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>InModifiers                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                              AnimationDuration                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DescriptionTextStyle                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NameTextStyle                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActiveModifierItemHUD_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayModifierItemDefinition*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetSmallPreviewImageBrush_ReturnValue                   ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActiveModifiersHUD_C::PopulateModifiers(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers, float AnimationDuration, class UClass* DescriptionTextStyle, class UClass* NameTextStyle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActiveModifierItemHUD_C* CallFunc_Create_ReturnValue, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ActiveModifiersHUD_C", "PopulateModifiers");

	Params::UActiveModifiersHUD_C_PopulateModifiers_Params Parms;
	Parms.InModifiers = InModifiers;
	Parms.AnimationDuration = AnimationDuration;
	Parms.DescriptionTextStyle = DescriptionTextStyle;
	Parms.NameTextStyle = NameTextStyle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImageBrush_ReturnValue = CallFunc_GetSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActiveModifiersHUD.ActiveModifiersHUD_C.OnActiveGameplayModifiersChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>AppliedModifiers                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersHUD_C::OnActiveGameplayModifiersChanged(TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers)
{
	static auto Func = Class->GetFunction("ActiveModifiersHUD_C", "OnActiveGameplayModifiersChanged");

	Params::UActiveModifiersHUD_C_OnActiveGameplayModifiersChanged_Params Parms;
	Parms.AppliedModifiers = AppliedModifiers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActiveModifiersHUD.ActiveModifiersHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActiveModifiersHUD_C::Construct()
{
	static auto Func = Class->GetFunction("ActiveModifiersHUD_C", "Construct");

	Params::UActiveModifiersHUD_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActiveModifiersHUD.ActiveModifiersHUD_C.ExecuteUbergraph_ActiveModifiersHUD
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortGameplayModifierItemDefinition*>K2Node_CustomEvent_AppliedModifiers                              (ConstParm, ZeroConstructor, ReferenceParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortGameplayModifierItemDefinition*>CallFunc_GetActiveModifiers_OutActiveModifiers                   (ZeroConstructor, ReferenceParm)

void UActiveModifiersHUD_C::ExecuteUbergraph_ActiveModifiersHUD(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_AppliedModifiers, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, TArray<class UFortGameplayModifierItemDefinition*>& CallFunc_GetActiveModifiers_OutActiveModifiers)
{
	static auto Func = Class->GetFunction("ActiveModifiersHUD_C", "ExecuteUbergraph_ActiveModifiersHUD");

	Params::UActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_AppliedModifiers = K2Node_CustomEvent_AppliedModifiers;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveModifiers_OutActiveModifiers = CallFunc_GetActiveModifiers_OutActiveModifiers;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
