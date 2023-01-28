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


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSupportPerkWidgetStateInState                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportHeroSquadBonusesDetailWidget_C::SetState(enum class EFortSupportPerkWidgetState InState)
{
	static auto Func = Class->GetFunction("SupportHeroSquadBonusesDetailWidget_C", "SetState");

	Params::USupportHeroSquadBonusesDetailWidget_C_SetState_Params Parms;
	Parms.InState = InState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdatePerkWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSupportBonusType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSupportBonusType   Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSupportBonusType   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportHeroSquadBonusesDetailWidget_C::UpdatePerkWidgets(bool Temp_bool_Variable, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, enum class EFortSupportBonusType Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EFortSupportBonusType Temp_byte_Variable2, enum class EFortSupportBonusType K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SupportHeroSquadBonusesDetailWidget_C", "UpdatePerkWidgets");

	Params::USupportHeroSquadBonusesDetailWidget_C_UpdatePerkWidgets_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdateVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquad              CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad                ()
// bool                               CallFunc_TryGetHomebaseSquadData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportHeroSquadBonusesDetailWidget_C::UpdateVisibility(class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId3, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex3, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SupportHeroSquadBonusesDetailWidget_C", "UpdateVisibility");

	Params::USupportHeroSquadBonusesDetailWidget_C_UpdateVisibility_Params Parms;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId2;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId3 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId3;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex3 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad = CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad;
	Parms.CallFunc_TryGetHomebaseSquadData_ReturnValue = CallFunc_TryGetHomebaseSquadData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USupportHeroSquadBonusesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("SupportHeroSquadBonusesDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	Params::USupportHeroSquadBonusesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USupportHeroSquadBonusesDetailWidget_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto Func = Class->GetFunction("SupportHeroSquadBonusesDetailWidget_C", "HandlePostDifferentSquadSlotSetBP");

	Params::USupportHeroSquadBonusesDetailWidget_C_HandlePostDifferentSquadSlotSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USupportHeroSquadBonusesDetailWidget_C::Construct()
{
	static auto Func = Class->GetFunction("SupportHeroSquadBonusesDetailWidget_C", "Construct");

	Params::USupportHeroSquadBonusesDetailWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USupportHeroSquadBonusesDetailWidget_C::ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget(int32 EntryPoint, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("SupportHeroSquadBonusesDetailWidget_C", "ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget");

	Params::USupportHeroSquadBonusesDetailWidget_C_ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
