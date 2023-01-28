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


// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDefaultGammaSettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UTabBrightnessOptions_C::Set_Default_Call_Out(float CallFunc_GetDefaultGammaSettings_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Set Default Call Out");

	Params::UTabBrightnessOptions_C_Set_Default_Call_Out_Params Parms;
	Parms.CallFunc_GetDefaultGammaSettings_ReturnValue = CallFunc_GetDefaultGammaSettings_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::Initialize_Data()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Initialize Data");

	Params::UTabBrightnessOptions_C_Initialize_Data_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGammaSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()

void UTabBrightnessOptions_C::Update_Data(float CallFunc_GetGammaSettings_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Update Data");

	Params::UTabBrightnessOptions_C_Update_Data_Params Parms;
	Parms.CallFunc_GetGammaSettings_ReturnValue = CallFunc_GetGammaSettings_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "Construct");

	Params::UTabBrightnessOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	Params::UTabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "UpdateOptionsTab");

	Params::UTabBrightnessOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabBrightnessOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "CenterOnTab");

	Params::UTabBrightnessOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::ExecuteUbergraph_TabBrightnessOptions(int32 EntryPoint, float K2Node_ComponentBoundEvent_Slider_Value)
{
	static auto Func = Class->GetFunction("TabBrightnessOptions_C", "ExecuteUbergraph_TabBrightnessOptions");

	Params::UTabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
