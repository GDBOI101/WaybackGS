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


// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamepadMappingInfoChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::HandleGamepadMappingInfoChange(int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "HandleGamepadMappingInfoChange");

	Params::UTabGamePadConfig_C_HandleGamepadMappingInfoChange_Params Parms;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGamePadConfig_C::Handle_Mode_Toggled(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Handle Mode Toggled");

	Params::UTabGamePadConfig_C_Handle_Mode_Toggled_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetControllerPlatform_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentInputPresetName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::Update_Data(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetControllerPlatform_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Update Data");

	Params::UTabGamePadConfig_C_Update_Data_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetControllerPlatform_ReturnValue = CallFunc_GetControllerPlatform_ReturnValue;
	Parms.CallFunc_GetCurrentInputPresetName_ReturnValue = CallFunc_GetCurrentInputPresetName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                NewLocalVar_0                                                    (Edit, ZeroConstructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames (ZeroConstructor, ReferenceParm)
// TArray<class FText>                CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames(ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        K2Node_Select_Default                                            ()

void UTabGamePadConfig_C::Initialize_Data(const TArray<class FText>& NewLocalVar_0, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, TArray<class FText>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Initialize Data");

	Params::UTabGamePadConfig_C_Initialize_Data_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames = CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames;
	Parms.CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames = CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::Construct()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Construct");

	Params::UTabGamePadConfig_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::Configuration_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Configuration Changed");

	Params::UTabGamePadConfig_C_Configuration_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "CenterOnTab");

	Params::UTabGamePadConfig_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::Gamepad_Config_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "Gamepad Config Changed");

	Params::UTabGamePadConfig_C_Gamepad_Config_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGamePadConfig_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "UpdateOptionsTab");

	Params::UTabGamePadConfig_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.ControllerPlatformConfigChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGamePadConfig_C::ControllerPlatformConfigChanged(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "ControllerPlatformConfigChanged");

	Params::UTabGamePadConfig_C_ControllerPlatformConfigChanged_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selected_Index2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsXboxPlatform_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UTabGamePadConfig_C::ExecuteUbergraph_TabGamePadConfig(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable2, const class FString& K2Node_Select_Default, enum class ECommonInputType Temp_byte_Variable, enum class ECommonInputType Temp_byte_Variable2, enum class ECommonInputType K2Node_Select2_Default, int32 K2Node_CustomEvent_Selected_Index3, int32 K2Node_CustomEvent_Selected_Index2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const class FString& CallFunc_Array_Get_Item, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_CustomEvent_Selected_Index, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("TabGamePadConfig_C", "ExecuteUbergraph_TabGamePadConfig");

	Params::UTabGamePadConfig_C_ExecuteUbergraph_TabGamePadConfig_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_CustomEvent_Selected_Index3 = K2Node_CustomEvent_Selected_Index3;
	Parms.K2Node_CustomEvent_Selected_Index2 = K2Node_CustomEvent_Selected_Index2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.CallFunc_IsXboxPlatform_ReturnValue = CallFunc_IsXboxPlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index = K2Node_CustomEvent_Selected_Index;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
