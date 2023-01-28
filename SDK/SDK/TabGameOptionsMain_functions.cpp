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


// Function TabGameOptionsMain.TabGameOptionsMain_C.IntializeGamepadSensitivitySliders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_IsPS4                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select2_Default                                           ()
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        K2Node_Select4_Default                                           ()
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetGamepadLookSensitivityValue_ReturnValue              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::IntializeGamepadSensitivitySliders(bool Local_IsPS4, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable3, class FText Temp_text_Variable5, class FText Temp_text_Variable6, bool Temp_bool_Variable4, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText K2Node_Select_Default, class FText K2Node_Select2_Default, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default, bool CallFunc_IsPS4Platform_ReturnValue, const struct FVector2D& CallFunc_GetGamepadLookSensitivityValue_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "IntializeGamepadSensitivitySliders");

	Params::UTabGameOptionsMain_C_IntializeGamepadSensitivitySliders_Params Parms;
	Parms.Local_IsPS4 = Local_IsPS4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.CallFunc_GetGamepadLookSensitivityValue_ReturnValue = CallFunc_GetGamepadLookSensitivityValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                OffOnOptions                                                     (Edit, ZeroConstructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// TArray<class FText>                CallFunc_GetRegionDisplayNames_ReturnValue                       (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue7                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue8                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue9                            ()
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue10                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue11                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue13                           ()
// TArray<class FText>                CallFunc_GetPossibleLanguages_ReturnValue                        (ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue14                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue15                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue16                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue17                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue18                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue19                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue20                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue21                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue22                           ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue23                           ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue24                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue25                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue26                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue27                           ()

void UTabGameOptionsMain_C::Initialize_Data(const TArray<class FText>& OffOnOptions, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, TArray<class FText>& CallFunc_GetRegionDisplayNames_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, class FText CallFunc_MakeLiteralText_ReturnValue9, TArray<class FText>& K2Node_MakeArray_Array, bool CallFunc_IsPS4Platform_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue10, class FText CallFunc_MakeLiteralText_ReturnValue11, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue13, TArray<class FText>& CallFunc_GetPossibleLanguages_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_MakeLiteralText_ReturnValue14, class FText CallFunc_MakeLiteralText_ReturnValue15, class FText CallFunc_MakeLiteralText_ReturnValue16, class FText CallFunc_MakeLiteralText_ReturnValue17, class FText CallFunc_MakeLiteralText_ReturnValue18, class FText CallFunc_MakeLiteralText_ReturnValue19, class FText CallFunc_MakeLiteralText_ReturnValue20, class FText CallFunc_MakeLiteralText_ReturnValue21, class FText CallFunc_MakeLiteralText_ReturnValue22, class FText Temp_text_Variable2, class FText CallFunc_MakeLiteralText_ReturnValue23, bool Temp_bool_Variable, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue24, class FText CallFunc_MakeLiteralText_ReturnValue25, class FText CallFunc_MakeLiteralText_ReturnValue26, class FText CallFunc_MakeLiteralText_ReturnValue27)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "Initialize Data");

	Params::UTabGameOptionsMain_C_Initialize_Data_Params Parms;
	Parms.OffOnOptions = OffOnOptions;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_GetRegionDisplayNames_ReturnValue = CallFunc_GetRegionDisplayNames_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_MakeLiteralText_ReturnValue7 = CallFunc_MakeLiteralText_ReturnValue7;
	Parms.CallFunc_MakeLiteralText_ReturnValue8 = CallFunc_MakeLiteralText_ReturnValue8;
	Parms.CallFunc_MakeLiteralText_ReturnValue9 = CallFunc_MakeLiteralText_ReturnValue9;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue10 = CallFunc_MakeLiteralText_ReturnValue10;
	Parms.CallFunc_MakeLiteralText_ReturnValue11 = CallFunc_MakeLiteralText_ReturnValue11;
	Parms.CallFunc_MakeLiteralText_ReturnValue12 = CallFunc_MakeLiteralText_ReturnValue12;
	Parms.CallFunc_MakeLiteralText_ReturnValue13 = CallFunc_MakeLiteralText_ReturnValue13;
	Parms.CallFunc_GetPossibleLanguages_ReturnValue = CallFunc_GetPossibleLanguages_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue14 = CallFunc_MakeLiteralText_ReturnValue14;
	Parms.CallFunc_MakeLiteralText_ReturnValue15 = CallFunc_MakeLiteralText_ReturnValue15;
	Parms.CallFunc_MakeLiteralText_ReturnValue16 = CallFunc_MakeLiteralText_ReturnValue16;
	Parms.CallFunc_MakeLiteralText_ReturnValue17 = CallFunc_MakeLiteralText_ReturnValue17;
	Parms.CallFunc_MakeLiteralText_ReturnValue18 = CallFunc_MakeLiteralText_ReturnValue18;
	Parms.CallFunc_MakeLiteralText_ReturnValue19 = CallFunc_MakeLiteralText_ReturnValue19;
	Parms.CallFunc_MakeLiteralText_ReturnValue20 = CallFunc_MakeLiteralText_ReturnValue20;
	Parms.CallFunc_MakeLiteralText_ReturnValue21 = CallFunc_MakeLiteralText_ReturnValue21;
	Parms.CallFunc_MakeLiteralText_ReturnValue22 = CallFunc_MakeLiteralText_ReturnValue22;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_MakeLiteralText_ReturnValue23 = CallFunc_MakeLiteralText_ReturnValue23;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue24 = CallFunc_MakeLiteralText_ReturnValue24;
	Parms.CallFunc_MakeLiteralText_ReturnValue25 = CallFunc_MakeLiteralText_ReturnValue25;
	Parms.CallFunc_MakeLiteralText_ReturnValue26 = CallFunc_MakeLiteralText_ReturnValue26;
	Parms.CallFunc_MakeLiteralText_ReturnValue27 = CallFunc_MakeLiteralText_ReturnValue27;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowHeroBackpackForLocalPlayer_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowHeroHeadAccessoriesForLocalPlayer_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetConsoleUnlockedFPSState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadScopedMultiplierValue_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadTargetingMultiplierValue_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            ()
// bool                               CallFunc_IsXboxPlatform_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTargetingToggleState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScopedMultiplierValue_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue7                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue8                            ()
// float                              CallFunc_GetTargetingMultiplierValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue9                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue10                           ()
// bool                               CallFunc_IsAthena_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentRegion_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAthena_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select3_Default                                           ()
// bool                               CallFunc_GetTapInteractState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS4Platform_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsXboxPlatform_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentLanguage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           ()
// float                              CallFunc_GetSafeZoneValue_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSprintCancelsReloadState_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue11                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue13                           ()
// bool                               CallFunc_GetForceFeedbackState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLookInversionState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFirstPersonCameraState_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAutoEquipState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSprintToggleState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivityValue_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue14                           ()

void UTabGameOptionsMain_C::Update_Data(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_GetShowHeroBackpackForLocalPlayer_ReturnValue, bool CallFunc_GetShowHeroHeadAccessoriesForLocalPlayer_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue2, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, bool CallFunc_IsPS4Platform_ReturnValue, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, bool CallFunc_GetConsoleUnlockedFPSState_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue3, float CallFunc_GetGamepadScopedMultiplierValue_ReturnValue, float CallFunc_GetGamepadTargetingMultiplierValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, bool CallFunc_IsXboxPlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetTargetingToggleState_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue4, float CallFunc_GetScopedMultiplierValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, float CallFunc_GetTargetingMultiplierValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue9, class FText CallFunc_MakeLiteralText_ReturnValue10, bool CallFunc_IsAthena_ReturnValue, int32 CallFunc_GetCurrentRegion_ReturnValue, bool Temp_bool_Variable5, bool CallFunc_IsAthena_ReturnValue2, bool Temp_bool_Variable6, enum class ESlateVisibility K2Node_Select2_Default, class FText K2Node_Select3_Default, bool CallFunc_GetTapInteractState_ReturnValue, bool CallFunc_GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue5, int32 CallFunc_Conv_BoolToInt_ReturnValue6, bool CallFunc_IsPS4Platform_ReturnValue2, bool CallFunc_IsXboxPlatform_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select4_Default, enum class ESlateVisibility K2Node_Select5_Default, enum class ESlateVisibility K2Node_Select6_Default, bool Temp_bool_Variable7, int32 CallFunc_GetCurrentLanguage_ReturnValue, class FText K2Node_Select7_Default, float CallFunc_GetSafeZoneValue_ReturnValue, bool CallFunc_GetSprintCancelsReloadState_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue11, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue13, bool CallFunc_GetForceFeedbackState_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue8, bool CallFunc_GetLookInversionState_ReturnValue, bool CallFunc_GetFirstPersonCameraState_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue9, int32 CallFunc_Conv_BoolToInt_ReturnValue10, bool CallFunc_GetAutoEquipState_ReturnValue, bool CallFunc_GetSprintToggleState_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue11, int32 CallFunc_Conv_BoolToInt_ReturnValue12, float CallFunc_GetMouseSensitivityValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue14)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "Update Data");

	Params::UTabGameOptionsMain_C_Update_Data_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetShowHeroBackpackForLocalPlayer_ReturnValue = CallFunc_GetShowHeroBackpackForLocalPlayer_ReturnValue;
	Parms.CallFunc_GetShowHeroHeadAccessoriesForLocalPlayer_ReturnValue = CallFunc_GetShowHeroHeadAccessoriesForLocalPlayer_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue2 = CallFunc_Conv_BoolToInt_ReturnValue2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.CallFunc_GetConsoleUnlockedFPSState_ReturnValue = CallFunc_GetConsoleUnlockedFPSState_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue3 = CallFunc_Conv_BoolToInt_ReturnValue3;
	Parms.CallFunc_GetGamepadScopedMultiplierValue_ReturnValue = CallFunc_GetGamepadScopedMultiplierValue_ReturnValue;
	Parms.CallFunc_GetGamepadTargetingMultiplierValue_ReturnValue = CallFunc_GetGamepadTargetingMultiplierValue_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_IsXboxPlatform_ReturnValue = CallFunc_IsXboxPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTargetingToggleState_ReturnValue = CallFunc_GetTargetingToggleState_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue4 = CallFunc_Conv_BoolToInt_ReturnValue4;
	Parms.CallFunc_GetScopedMultiplierValue_ReturnValue = CallFunc_GetScopedMultiplierValue_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue7 = CallFunc_MakeLiteralText_ReturnValue7;
	Parms.CallFunc_MakeLiteralText_ReturnValue8 = CallFunc_MakeLiteralText_ReturnValue8;
	Parms.CallFunc_GetTargetingMultiplierValue_ReturnValue = CallFunc_GetTargetingMultiplierValue_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue9 = CallFunc_MakeLiteralText_ReturnValue9;
	Parms.CallFunc_MakeLiteralText_ReturnValue10 = CallFunc_MakeLiteralText_ReturnValue10;
	Parms.CallFunc_IsAthena_ReturnValue = CallFunc_IsAthena_ReturnValue;
	Parms.CallFunc_GetCurrentRegion_ReturnValue = CallFunc_GetCurrentRegion_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_IsAthena_ReturnValue2 = CallFunc_IsAthena_ReturnValue2;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_GetTapInteractState_ReturnValue = CallFunc_GetTapInteractState_ReturnValue;
	Parms.CallFunc_GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState_ReturnValue = CallFunc_GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue5 = CallFunc_Conv_BoolToInt_ReturnValue5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue6 = CallFunc_Conv_BoolToInt_ReturnValue6;
	Parms.CallFunc_IsPS4Platform_ReturnValue2 = CallFunc_IsPS4Platform_ReturnValue2;
	Parms.CallFunc_IsXboxPlatform_ReturnValue2 = CallFunc_IsXboxPlatform_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.CallFunc_GetCurrentLanguage_ReturnValue = CallFunc_GetCurrentLanguage_ReturnValue;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_GetSafeZoneValue_ReturnValue = CallFunc_GetSafeZoneValue_ReturnValue;
	Parms.CallFunc_GetSprintCancelsReloadState_ReturnValue = CallFunc_GetSprintCancelsReloadState_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue7 = CallFunc_Conv_BoolToInt_ReturnValue7;
	Parms.CallFunc_MakeLiteralText_ReturnValue11 = CallFunc_MakeLiteralText_ReturnValue11;
	Parms.CallFunc_MakeLiteralText_ReturnValue12 = CallFunc_MakeLiteralText_ReturnValue12;
	Parms.CallFunc_MakeLiteralText_ReturnValue13 = CallFunc_MakeLiteralText_ReturnValue13;
	Parms.CallFunc_GetForceFeedbackState_ReturnValue = CallFunc_GetForceFeedbackState_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue8 = CallFunc_Conv_BoolToInt_ReturnValue8;
	Parms.CallFunc_GetLookInversionState_ReturnValue = CallFunc_GetLookInversionState_ReturnValue;
	Parms.CallFunc_GetFirstPersonCameraState_ReturnValue = CallFunc_GetFirstPersonCameraState_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue9 = CallFunc_Conv_BoolToInt_ReturnValue9;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue10 = CallFunc_Conv_BoolToInt_ReturnValue10;
	Parms.CallFunc_GetAutoEquipState_ReturnValue = CallFunc_GetAutoEquipState_ReturnValue;
	Parms.CallFunc_GetSprintToggleState_ReturnValue = CallFunc_GetSprintToggleState_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue11 = CallFunc_Conv_BoolToInt_ReturnValue11;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue12 = CallFunc_Conv_BoolToInt_ReturnValue12;
	Parms.CallFunc_GetMouseSensitivityValue_ReturnValue = CallFunc_GetMouseSensitivityValue_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue14 = CallFunc_MakeLiteralText_ReturnValue14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::Construct()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "Construct");

	Params::UTabGameOptionsMain_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "UpdateOptionsTab");

	Params::UTabGameOptionsMain_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "CenterOnTab");

	Params::UTabGameOptionsMain_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
// (Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::UpdatePossibleLanguages()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "UpdatePossibleLanguages");

	Params::UTabGameOptionsMain_C_UpdatePossibleLanguages_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__First-PersonCamera_K2Node_ComponentBoundEvent_106_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__First_PersonCamera_K2Node_ComponentBoundEvent_106_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__First-PersonCamera_K2Node_ComponentBoundEvent_106_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__First_PersonCamera_K2Node_ComponentBoundEvent_106_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__Region_K2Node_ComponentBoundEvent_105_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__Region_K2Node_ComponentBoundEvent_105_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__Region_K2Node_ComponentBoundEvent_105_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__Region_K2Node_ComponentBoundEvent_105_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ScopedMultiplier_K2Node_ComponentBoundEvent_201_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__ScopedMultiplier_K2Node_ComponentBoundEvent_201_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__ScopedMultiplier_K2Node_ComponentBoundEvent_201_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__ScopedMultiplier_K2Node_ComponentBoundEvent_201_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__TargetingMultiplier_K2Node_ComponentBoundEvent_219_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__TargetingMultiplier_K2Node_ComponentBoundEvent_219_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__TargetingMultiplier_K2Node_ComponentBoundEvent_219_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__TargetingMultiplier_K2Node_ComponentBoundEvent_219_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ToggleTargeting_K2Node_ComponentBoundEvent_207_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__ToggleTargeting_K2Node_ComponentBoundEvent_207_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__ToggleTargeting_K2Node_ComponentBoundEvent_207_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__ToggleTargeting_K2Node_ComponentBoundEvent_207_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadScopedMultiplier_K2Node_ComponentBoundEvent_401_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__GamepadScopedMultiplier_K2Node_ComponentBoundEvent_401_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__GamepadScopedMultiplier_K2Node_ComponentBoundEvent_401_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__GamepadScopedMultiplier_K2Node_ComponentBoundEvent_401_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadTargetingMultiplier_K2Node_ComponentBoundEvent_423_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__GamepadTargetingMultiplier_K2Node_ComponentBoundEvent_423_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__GamepadTargetingMultiplier_K2Node_ComponentBoundEvent_423_SliderChanged__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__GamepadTargetingMultiplier_K2Node_ComponentBoundEvent_423_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ConsoleUnlockedFPS_K2Node_ComponentBoundEvent_300_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__ConsoleUnlockedFPS_K2Node_ComponentBoundEvent_300_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__ConsoleUnlockedFPS_K2Node_ComponentBoundEvent_300_Selection Changed__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__ConsoleUnlockedFPS_K2Node_ComponentBoundEvent_300_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsXboxPlatform_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// TArray<class FText>                CallFunc_GetPossibleLanguages_ReturnValue                        (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetCurrentLanguage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetListWidget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuHudRotator_C*    K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabGameOptionsMain_C::ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint, float K2Node_ComponentBoundEvent_Slider_Value8, float K2Node_ComponentBoundEvent_Slider_Value7, float K2Node_ComponentBoundEvent_Slider_Value6, float K2Node_ComponentBoundEvent_Slider_Value5, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, TArray<class FText>& CallFunc_GetPossibleLanguages_ReturnValue, int32 CallFunc_GetCurrentLanguage_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index14, class UOptionsMenuHudRotator_C* K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Conv_IntToBool_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index13, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Conv_IntToBool_ReturnValue2, int32 K2Node_ComponentBoundEvent_Selected_Index12, int32 K2Node_ComponentBoundEvent_Selected_Index11, bool CallFunc_Conv_IntToBool_ReturnValue3, int32 K2Node_ComponentBoundEvent_Selected_Index10, bool CallFunc_Conv_IntToBool_ReturnValue4, int32 K2Node_ComponentBoundEvent_Selected_Index9, bool CallFunc_Conv_IntToBool_ReturnValue5, int32 K2Node_ComponentBoundEvent_Selected_Index8, bool CallFunc_Conv_IntToBool_ReturnValue6, int32 K2Node_ComponentBoundEvent_Selected_Index7, bool CallFunc_Conv_IntToBool_ReturnValue7, int32 K2Node_ComponentBoundEvent_Selected_Index6, bool CallFunc_Conv_IntToBool_ReturnValue8, int32 K2Node_ComponentBoundEvent_Selected_Index5, bool CallFunc_Conv_IntToBool_ReturnValue9, int32 K2Node_ComponentBoundEvent_Selected_Index4, bool CallFunc_Conv_IntToBool_ReturnValue10, int32 K2Node_ComponentBoundEvent_Selected_Index3, float K2Node_ComponentBoundEvent_Slider_Value4, float K2Node_ComponentBoundEvent_Slider_Value3, int32 K2Node_ComponentBoundEvent_Selected_Index2, float K2Node_ComponentBoundEvent_Slider_Value2, bool CallFunc_Conv_IntToBool_ReturnValue11, float K2Node_ComponentBoundEvent_Slider_Value, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue12)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "ExecuteUbergraph_TabGameOptionsMain");

	Params::UTabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Slider_Value8 = K2Node_ComponentBoundEvent_Slider_Value8;
	Parms.K2Node_ComponentBoundEvent_Slider_Value7 = K2Node_ComponentBoundEvent_Slider_Value7;
	Parms.K2Node_ComponentBoundEvent_Slider_Value6 = K2Node_ComponentBoundEvent_Slider_Value6;
	Parms.K2Node_ComponentBoundEvent_Slider_Value5 = K2Node_ComponentBoundEvent_Slider_Value5;
	Parms.CallFunc_IsXboxPlatform_ReturnValue = CallFunc_IsXboxPlatform_ReturnValue;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_GetPossibleLanguages_ReturnValue = CallFunc_GetPossibleLanguages_ReturnValue;
	Parms.CallFunc_GetCurrentLanguage_ReturnValue = CallFunc_GetCurrentLanguage_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_GetListWidget_ReturnValue = CallFunc_GetListWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Selected_Index14 = K2Node_ComponentBoundEvent_Selected_Index14;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator = K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Selected_Index13 = K2Node_ComponentBoundEvent_Selected_Index13;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue2 = CallFunc_Conv_IntToBool_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Selected_Index12 = K2Node_ComponentBoundEvent_Selected_Index12;
	Parms.K2Node_ComponentBoundEvent_Selected_Index11 = K2Node_ComponentBoundEvent_Selected_Index11;
	Parms.CallFunc_Conv_IntToBool_ReturnValue3 = CallFunc_Conv_IntToBool_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Selected_Index10 = K2Node_ComponentBoundEvent_Selected_Index10;
	Parms.CallFunc_Conv_IntToBool_ReturnValue4 = CallFunc_Conv_IntToBool_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_Selected_Index9 = K2Node_ComponentBoundEvent_Selected_Index9;
	Parms.CallFunc_Conv_IntToBool_ReturnValue5 = CallFunc_Conv_IntToBool_ReturnValue5;
	Parms.K2Node_ComponentBoundEvent_Selected_Index8 = K2Node_ComponentBoundEvent_Selected_Index8;
	Parms.CallFunc_Conv_IntToBool_ReturnValue6 = CallFunc_Conv_IntToBool_ReturnValue6;
	Parms.K2Node_ComponentBoundEvent_Selected_Index7 = K2Node_ComponentBoundEvent_Selected_Index7;
	Parms.CallFunc_Conv_IntToBool_ReturnValue7 = CallFunc_Conv_IntToBool_ReturnValue7;
	Parms.K2Node_ComponentBoundEvent_Selected_Index6 = K2Node_ComponentBoundEvent_Selected_Index6;
	Parms.CallFunc_Conv_IntToBool_ReturnValue8 = CallFunc_Conv_IntToBool_ReturnValue8;
	Parms.K2Node_ComponentBoundEvent_Selected_Index5 = K2Node_ComponentBoundEvent_Selected_Index5;
	Parms.CallFunc_Conv_IntToBool_ReturnValue9 = CallFunc_Conv_IntToBool_ReturnValue9;
	Parms.K2Node_ComponentBoundEvent_Selected_Index4 = K2Node_ComponentBoundEvent_Selected_Index4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue10 = CallFunc_Conv_IntToBool_ReturnValue10;
	Parms.K2Node_ComponentBoundEvent_Selected_Index3 = K2Node_ComponentBoundEvent_Selected_Index3;
	Parms.K2Node_ComponentBoundEvent_Slider_Value4 = K2Node_ComponentBoundEvent_Slider_Value4;
	Parms.K2Node_ComponentBoundEvent_Slider_Value3 = K2Node_ComponentBoundEvent_Slider_Value3;
	Parms.K2Node_ComponentBoundEvent_Selected_Index2 = K2Node_ComponentBoundEvent_Selected_Index2;
	Parms.K2Node_ComponentBoundEvent_Slider_Value2 = K2Node_ComponentBoundEvent_Slider_Value2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue11 = CallFunc_Conv_IntToBool_ReturnValue11;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.K2Node_ComponentBoundEvent_Selected_Index = K2Node_ComponentBoundEvent_Selected_Index;
	Parms.CallFunc_Conv_IntToBool_ReturnValue12 = CallFunc_Conv_IntToBool_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
