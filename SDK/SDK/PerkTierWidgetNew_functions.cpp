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


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIncludeName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIncludeDescription                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          IconSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerkTier             FortPerkTier                                                     (Parm, NoDestructor)

void UPerkTierWidgetNew_C::InitializeSettings(bool bIncludeName, bool bIncludeDescription, enum class EFortBrushSize IconSize, const struct FFortUIPerkTier& FortPerkTier)
{
	static auto Func = Class->GetFunction("PerkTierWidgetNew_C", "InitializeSettings");

	Params::UPerkTierWidgetNew_C_InitializeSettings_Params Parms;
	Parms.bIncludeName = bIncludeName;
	Parms.bIncludeDescription = bIncludeDescription;
	Parms.IconSize = IconSize;
	Parms.FortPerkTier = FortPerkTier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPerkTierWidgetNew_C::Construct()
{
	static auto Func = Class->GetFunction("PerkTierWidgetNew_C", "Construct");

	Params::UPerkTierWidgetNew_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerk                 Perk                                                             (Parm)
// class UFortPerkWidget_NUI*         PerkWidget                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkTierWidgetNew_C::OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget)
{
	static auto Func = Class->GetFunction("PerkTierWidgetNew_C", "OnGeneratePerk");

	Params::UPerkTierWidgetNew_C_OnGeneratePerk_Params Parms;
	Parms.Perk = Perk;
	Parms.PerkWidget = PerkWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkDivider_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIPerk                 K2Node_Event_Perk                                                ()
// class UFortPerkWidget_NUI*         K2Node_Event_PerkWidget                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkWidgetNew_C*            K2Node_DynamicCast_AsPerk_Widget_New                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkTierWidgetNew_C::ExecuteUbergraph_PerkTierWidgetNew(int32 EntryPoint, class UPerkDivider_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFortUIPerk& K2Node_Event_Perk, class UFortPerkWidget_NUI* K2Node_Event_PerkWidget, class UPerkWidgetNew_C* K2Node_DynamicCast_AsPerk_Widget_New, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue2)
{
	static auto Func = Class->GetFunction("PerkTierWidgetNew_C", "ExecuteUbergraph_PerkTierWidgetNew");

	Params::UPerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_Event_Perk = K2Node_Event_Perk;
	Parms.K2Node_Event_PerkWidget = K2Node_Event_PerkWidget;
	Parms.K2Node_DynamicCast_AsPerk_Widget_New = K2Node_DynamicCast_AsPerk_Widget_New;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChild_ReturnValue2 = CallFunc_AddChild_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
