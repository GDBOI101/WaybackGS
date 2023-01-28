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


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.UpdatePerkWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroSquadBonusesDetailWidget_C::UpdatePerkWidgets()
{
	static auto Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "UpdatePerkWidgets");

	Params::UHeroSquadBonusesDetailWidget_C_UpdatePerkWidgets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadBonusesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	Params::UHeroSquadBonusesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.ExecuteUbergraph_HeroSquadBonusesDetailWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadBonusesDetailWidget_C::ExecuteUbergraph_HeroSquadBonusesDetailWidget(int32 EntryPoint, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "ExecuteUbergraph_HeroSquadBonusesDetailWidget");

	Params::UHeroSquadBonusesDetailWidget_C_ExecuteUbergraph_HeroSquadBonusesDetailWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
