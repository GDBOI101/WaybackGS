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


// Function SubgameSelect.SubgameSelect_C.UpdateHeaderAndFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideHeader                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideFooter                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelect_C::UpdateHeaderAndFooter(bool HideHeader, bool HideFooter, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("SubgameSelect_C", "UpdateHeaderAndFooter");

	Params::USubgameSelect_C_UpdateHeaderAndFooter_Params Parms;
	Parms.HideHeader = HideHeader;
	Parms.HideFooter = HideFooter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelect.SubgameSelect_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USubgameSelect_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelect_C", "PopContentWidgetInternal");

	Params::USubgameSelect_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SubgameSelect.SubgameSelect_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelect_C::Initialize()
{
	static auto Func = Class->GetFunction("SubgameSelect_C", "Initialize");

	Params::USubgameSelect_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelect.SubgameSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USubgameSelect_C::Construct()
{
	static auto Func = Class->GetFunction("SubgameSelect_C", "Construct");

	Params::USubgameSelect_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelect.SubgameSelect_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelect_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("SubgameSelect_C", "OnEnterState");

	Params::USubgameSelect_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelect.SubgameSelect_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (Parm, NoDestructor)

void USubgameSelect_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("SubgameSelect_C", "PushContentWidgetInternal");

	Params::USubgameSelect_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelect.SubgameSelect_C.ExecuteUbergraph_SubgameSelect
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)

void USubgameSelect_C::ExecuteUbergraph_SubgameSelect(int32 EntryPoint, enum class EFortUIState K2Node_Event_PreviousUIState, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State)
{
	static auto Func = Class->GetFunction("SubgameSelect_C", "ExecuteUbergraph_SubgameSelect");

	Params::USubgameSelect_C_ExecuteUbergraph_SubgameSelect_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
