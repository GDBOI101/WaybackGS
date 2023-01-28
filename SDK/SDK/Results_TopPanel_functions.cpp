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


// Function Results_TopPanel.Results_TopPanel_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   CompletionResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBasicMissionInfo       CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo             ()
// bool                               CallFunc_GetCurrentBasicMissionInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UResults_TopPanel_C::Initialize(enum class EFortCompletionResult CompletionResult, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EFortCompletionResult Temp_byte_Variable, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Results_TopPanel_C", "Initialize");

	Params::UResults_TopPanel_C_Initialize_Params Parms;
	Parms.CompletionResult = CompletionResult;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo = CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo;
	Parms.CallFunc_GetCurrentBasicMissionInfo_ReturnValue = CallFunc_GetCurrentBasicMissionInfo_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TopPanel.Results_TopPanel_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TopPanel_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TopPanel_C", "BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TopPanel_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TopPanel.Results_TopPanel_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TopPanel_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_TopPanel_C", "Intro Sequence");

	Params::UResults_TopPanel_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TopPanel_C::ExecuteUbergraph_Results_TopPanel(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Results_TopPanel_C", "ExecuteUbergraph_Results_TopPanel");

	Params::UResults_TopPanel_C_ExecuteUbergraph_Results_TopPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TopPanel.Results_TopPanel_C.IntroComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TopPanel_C::IntroComplete__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TopPanel_C", "IntroComplete__DelegateSignature");

	Params::UResults_TopPanel_C_IntroComplete__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
