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


// Function LegacyPerksWidget.LegacyPerksWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegacyPerksWidget_C::Construct()
{
	static auto Func = Class->GetFunction("LegacyPerksWidget_C", "Construct");

	Params::ULegacyPerksWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyPerksWidget.LegacyPerksWidget_C.OnGeneratePerkTier
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier             FortPerkTier                                                     (Parm, NoDestructor)

void ULegacyPerksWidget_C::OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier)
{
	static auto Func = Class->GetFunction("LegacyPerksWidget_C", "OnGeneratePerkTier");

	Params::ULegacyPerksWidget_C_OnGeneratePerkTier_Params Parms;
	Parms.FortPerkTier = FortPerkTier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyPerksWidget.LegacyPerksWidget_C.ExecuteUbergraph_LegacyPerksWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerkTier             K2Node_Event_FortPerkTier                                        (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULegacyPerkTierWidget_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyPerksWidget_C::ExecuteUbergraph_LegacyPerksWidget(int32 EntryPoint, const struct FFortUIPerkTier& K2Node_Event_FortPerkTier, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULegacyPerkTierWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyPerksWidget_C", "ExecuteUbergraph_LegacyPerksWidget");

	Params::ULegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FortPerkTier = K2Node_Event_FortPerkTier;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
