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


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.OnSummonInfoPanelExecuted
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPrimaryPanel_C::OnSummonInfoPanelExecuted(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "OnSummonInfoPanelExecuted");

	Params::UCollectionBookPrimaryPanel_C_OnSummonInfoPanelExecuted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.HandleDisplayInfoBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollectionBookPrimaryPanel_C::HandleDisplayInfoBox()
{
	static auto Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "HandleDisplayInfoBox");

	Params::UCollectionBookPrimaryPanel_C_HandleDisplayInfoBox_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.ExecuteUbergraph_CollectionBookPrimaryPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHelpWidget_C*               K2Node_DynamicCast_AsHelp_Widget                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPrimaryPanel_C::ExecuteUbergraph_CollectionBookPrimaryPanel(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UHelpWidget_C* K2Node_DynamicCast_AsHelp_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "ExecuteUbergraph_CollectionBookPrimaryPanel");

	Params::UCollectionBookPrimaryPanel_C_ExecuteUbergraph_CollectionBookPrimaryPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsHelp_Widget = K2Node_DynamicCast_AsHelp_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
