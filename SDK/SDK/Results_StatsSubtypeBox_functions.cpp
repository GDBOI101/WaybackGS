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


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.InitializeScoreType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Edit)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScoreStylingInfo       CallFunc_GetScoreStylingData_ScoreStylingInfo                    ()
// bool                               CallFunc_GetScoreStylingData_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_StatsSubtypeBox_C::InitializeScoreType(class UTexture2D* Texture, const struct FLinearColor& Color, class FText Text, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FFortScoreStylingInfo& CallFunc_GetScoreStylingData_ScoreStylingInfo, bool CallFunc_GetScoreStylingData_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("Results_StatsSubtypeBox_C", "InitializeScoreType");

	Params::UResults_StatsSubtypeBox_C_InitializeScoreType_Params Parms;
	Parms.Texture = Texture;
	Parms.Color = Color;
	Parms.Text = Text;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_GetScoreStylingData_ScoreStylingInfo = CallFunc_GetScoreStylingData_ScoreStylingInfo;
	Parms.CallFunc_GetScoreStylingData_ReturnValue = CallFunc_GetScoreStylingData_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_StatsSubtypeBox_C::Construct()
{
	static auto Func = Class->GetFunction("Results_StatsSubtypeBox_C", "Construct");

	Params::UResults_StatsSubtypeBox_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_StatsSubtypeBox_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_StatsSubtypeBox_C", "PreConstruct");

	Params::UResults_StatsSubtypeBox_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_StatsSubtypeBox.Results_StatsSubtypeBox_C.ExecuteUbergraph_Results_StatsSubtypeBox
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_StatsSubtypeBox_C::ExecuteUbergraph_Results_StatsSubtypeBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_StatsSubtypeBox_C", "ExecuteUbergraph_Results_StatsSubtypeBox");

	Params::UResults_StatsSubtypeBox_C_ExecuteUbergraph_Results_StatsSubtypeBox_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
