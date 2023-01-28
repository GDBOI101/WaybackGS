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


// Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Translation                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalBangWrapper_C::Adjust_Bang_Image_Translation(const struct FVector2D& Translation)
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "Adjust Bang Image Translation");

	Params::UNormalBangWrapper_C_Adjust_Bang_Image_Translation_Params Parms;
	Parms.Translation = Translation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InCount                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalBangWrapper_C::Update_Bang_Icon_Version(int32 InCount, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable, int32 Temp_int_Variable3, int32 Temp_int_Variable4, bool Temp_bool_Variable2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "Update Bang Icon Version");

	Params::UNormalBangWrapper_C_Update_Bang_Icon_Version_Params Parms;
	Parms.InCount = InCount;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BorderStyle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalBangWrapper_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "SetTutorialBorderStyle");

	Params::UNormalBangWrapper_C_SetTutorialBorderStyle_Params Parms;
	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNormalBangWrapper_C::OnBangStateChanged(bool bEnabled, int32 Count)
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "OnBangStateChanged");

	Params::UNormalBangWrapper_C_OnBangStateChanged_Params Parms;
	Parms.bEnabled = bEnabled;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNormalBangWrapper_C::OnStopCallout()
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "OnStopCallout");

	Params::UNormalBangWrapper_C_OnStopCallout_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNormalBangWrapper_C::OnStartCallout()
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "OnStartCallout");

	Params::UNormalBangWrapper_C_OnStartCallout_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNormalBangWrapper_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "PreConstruct");

	Params::UNormalBangWrapper_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UNormalBangWrapper_C::ExecuteUbergraph_NormalBangWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool K2Node_Event_bEnabled, int32 K2Node_Event_Count, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("NormalBangWrapper_C", "ExecuteUbergraph_NormalBangWrapper");

	Params::UNormalBangWrapper_C_ExecuteUbergraph_NormalBangWrapper_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
