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


// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegacyPerkTierWidget_C::Construct()
{
	static auto Func = Class->GetFunction("LegacyPerkTierWidget_C", "Construct");

	Params::ULegacyPerkTierWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.OnGeneratePerk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerk                 Perk                                                             (Parm)

void ULegacyPerkTierWidget_C::OnGeneratePerk(const struct FFortUIPerk& Perk)
{
	static auto Func = Class->GetFunction("LegacyPerkTierWidget_C", "OnGeneratePerk");

	Params::ULegacyPerkTierWidget_C_OnGeneratePerk_Params Parms;
	Parms.Perk = Perk;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.ExecuteUbergraph_LegacyPerkTierWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerk                 K2Node_Event_Perk                                                ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULegacyPerkWidget_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)

void ULegacyPerkTierWidget_C::ExecuteUbergraph_LegacyPerkTierWidget(int32 EntryPoint, const struct FFortUIPerk& K2Node_Event_Perk, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULegacyPerkWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static auto Func = Class->GetFunction("LegacyPerkTierWidget_C", "ExecuteUbergraph_LegacyPerkTierWidget");

	Params::ULegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Perk = K2Node_Event_Perk;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
