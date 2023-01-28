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


// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// TArray<class FText>                CallFunc_GetPossibleDisplayResolutions_ReturnValue               (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()

void UTabVideoOptions_C::Initialize_Display_Resolutions(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& CallFunc_GetPossibleDisplayResolutions_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Initialize Display Resolutions");

	Params::UTabVideoOptions_C_Initialize_Display_Resolutions_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetPossibleDisplayResolutions_ReturnValue = CallFunc_GetPossibleDisplayResolutions_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reset_Quality_Selector                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentFPS_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWindowedFullscreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentDisplayResolution_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentWindowMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowGrass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlur_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseVsync_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessQuality_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEffectsQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDiscreteResolutionQuality_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Update_Data(bool Reset_Quality_Selector, int32 CallFunc_GetCurrentFPS_ReturnValue, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, int32 CallFunc_GetCurrentWindowMode_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, bool CallFunc_GetShowFPS_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetShowGrass_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue2, bool CallFunc_GetMotionBlur_ReturnValue, bool CallFunc_GetUseVsync_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue3, int32 CallFunc_Conv_BoolToInt_ReturnValue4, int32 CallFunc_GetPostProcessQuality_ReturnValue, int32 CallFunc_GetEffectsQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetDiscreteResolutionQuality_ReturnValue)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Update Data");

	Params::UTabVideoOptions_C_Update_Data_Params Parms;
	Parms.Reset_Quality_Selector = Reset_Quality_Selector;
	Parms.CallFunc_GetCurrentFPS_ReturnValue = CallFunc_GetCurrentFPS_ReturnValue;
	Parms.CallFunc_IsWindowedFullscreen_ReturnValue = CallFunc_IsWindowedFullscreen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentDisplayResolution_ReturnValue = CallFunc_GetCurrentDisplayResolution_ReturnValue;
	Parms.CallFunc_GetCurrentWindowMode_ReturnValue = CallFunc_GetCurrentWindowMode_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetShowFPS_ReturnValue = CallFunc_GetShowFPS_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetShowGrass_ReturnValue = CallFunc_GetShowGrass_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue2 = CallFunc_Conv_BoolToInt_ReturnValue2;
	Parms.CallFunc_GetMotionBlur_ReturnValue = CallFunc_GetMotionBlur_ReturnValue;
	Parms.CallFunc_GetUseVsync_ReturnValue = CallFunc_GetUseVsync_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue3 = CallFunc_Conv_BoolToInt_ReturnValue3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue4 = CallFunc_Conv_BoolToInt_ReturnValue4;
	Parms.CallFunc_GetPostProcessQuality_ReturnValue = CallFunc_GetPostProcessQuality_ReturnValue;
	Parms.CallFunc_GetEffectsQuality_ReturnValue = CallFunc_GetEffectsQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetDiscreteResolutionQuality_ReturnValue = CallFunc_GetDiscreteResolutionQuality_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                NewLocalVar_0                                                    (Edit, ZeroConstructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue7                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue8                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue9                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue10                           ()
// TArray<class FText>                CallFunc_GetPossibleFPS_ReturnValue                              (ZeroConstructor, ReferenceParm)
// TArray<class FText>                CallFunc_GetPossibleWindowModes_ReturnValue                      (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue11                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12                           ()
// TArray<class FText>                K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array6                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array7                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue13                           ()
// TArray<class FText>                K2Node_MakeArray_Array8                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array9                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array10                                         (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array11                                         (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array13                                         (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array14                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue14                           ()
// TArray<class FText>                K2Node_MakeArray_Array15                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue15                           ()
// TArray<class FText>                K2Node_MakeArray_Array16                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue16                           ()
// TArray<class FText>                K2Node_MakeArray_Array17                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue17                           ()
// TArray<class FText>                K2Node_MakeArray_Array18                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue18                           ()
// TArray<class FText>                K2Node_MakeArray_Array19                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue19                           ()
// TArray<class FText>                K2Node_MakeArray_Array20                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue20                           ()

void UTabVideoOptions_C::Initialize_Data(const TArray<class FText>& NewLocalVar_0, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array2, TArray<class FText>& K2Node_MakeArray_Array3, TArray<class FText>& K2Node_MakeArray_Array4, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8, class FText CallFunc_MakeLiteralText_ReturnValue9, class FText CallFunc_MakeLiteralText_ReturnValue10, TArray<class FText>& CallFunc_GetPossibleFPS_ReturnValue, TArray<class FText>& CallFunc_GetPossibleWindowModes_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue11, class FText CallFunc_MakeLiteralText_ReturnValue12, TArray<class FText>& K2Node_MakeArray_Array5, TArray<class FText>& K2Node_MakeArray_Array6, TArray<class FText>& K2Node_MakeArray_Array7, class FText CallFunc_MakeLiteralText_ReturnValue13, TArray<class FText>& K2Node_MakeArray_Array8, TArray<class FText>& K2Node_MakeArray_Array9, TArray<class FText>& K2Node_MakeArray_Array10, TArray<class FText>& K2Node_MakeArray_Array11, TArray<class FText>& K2Node_MakeArray_Array12, TArray<class FText>& K2Node_MakeArray_Array13, TArray<class FText>& K2Node_MakeArray_Array14, class FText CallFunc_MakeLiteralText_ReturnValue14, TArray<class FText>& K2Node_MakeArray_Array15, class FText CallFunc_MakeLiteralText_ReturnValue15, TArray<class FText>& K2Node_MakeArray_Array16, class FText CallFunc_MakeLiteralText_ReturnValue16, TArray<class FText>& K2Node_MakeArray_Array17, class FText CallFunc_MakeLiteralText_ReturnValue17, TArray<class FText>& K2Node_MakeArray_Array18, class FText CallFunc_MakeLiteralText_ReturnValue18, TArray<class FText>& K2Node_MakeArray_Array19, class FText CallFunc_MakeLiteralText_ReturnValue19, TArray<class FText>& K2Node_MakeArray_Array20, class FText CallFunc_MakeLiteralText_ReturnValue20)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Initialize Data");

	Params::UTabVideoOptions_C_Initialize_Data_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_MakeLiteralText_ReturnValue7 = CallFunc_MakeLiteralText_ReturnValue7;
	Parms.CallFunc_MakeLiteralText_ReturnValue8 = CallFunc_MakeLiteralText_ReturnValue8;
	Parms.CallFunc_MakeLiteralText_ReturnValue9 = CallFunc_MakeLiteralText_ReturnValue9;
	Parms.CallFunc_MakeLiteralText_ReturnValue10 = CallFunc_MakeLiteralText_ReturnValue10;
	Parms.CallFunc_GetPossibleFPS_ReturnValue = CallFunc_GetPossibleFPS_ReturnValue;
	Parms.CallFunc_GetPossibleWindowModes_ReturnValue = CallFunc_GetPossibleWindowModes_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue11 = CallFunc_MakeLiteralText_ReturnValue11;
	Parms.CallFunc_MakeLiteralText_ReturnValue12 = CallFunc_MakeLiteralText_ReturnValue12;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.K2Node_MakeArray_Array6 = K2Node_MakeArray_Array6;
	Parms.K2Node_MakeArray_Array7 = K2Node_MakeArray_Array7;
	Parms.CallFunc_MakeLiteralText_ReturnValue13 = CallFunc_MakeLiteralText_ReturnValue13;
	Parms.K2Node_MakeArray_Array8 = K2Node_MakeArray_Array8;
	Parms.K2Node_MakeArray_Array9 = K2Node_MakeArray_Array9;
	Parms.K2Node_MakeArray_Array10 = K2Node_MakeArray_Array10;
	Parms.K2Node_MakeArray_Array11 = K2Node_MakeArray_Array11;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.K2Node_MakeArray_Array13 = K2Node_MakeArray_Array13;
	Parms.K2Node_MakeArray_Array14 = K2Node_MakeArray_Array14;
	Parms.CallFunc_MakeLiteralText_ReturnValue14 = CallFunc_MakeLiteralText_ReturnValue14;
	Parms.K2Node_MakeArray_Array15 = K2Node_MakeArray_Array15;
	Parms.CallFunc_MakeLiteralText_ReturnValue15 = CallFunc_MakeLiteralText_ReturnValue15;
	Parms.K2Node_MakeArray_Array16 = K2Node_MakeArray_Array16;
	Parms.CallFunc_MakeLiteralText_ReturnValue16 = CallFunc_MakeLiteralText_ReturnValue16;
	Parms.K2Node_MakeArray_Array17 = K2Node_MakeArray_Array17;
	Parms.CallFunc_MakeLiteralText_ReturnValue17 = CallFunc_MakeLiteralText_ReturnValue17;
	Parms.K2Node_MakeArray_Array18 = K2Node_MakeArray_Array18;
	Parms.CallFunc_MakeLiteralText_ReturnValue18 = CallFunc_MakeLiteralText_ReturnValue18;
	Parms.K2Node_MakeArray_Array19 = K2Node_MakeArray_Array19;
	Parms.CallFunc_MakeLiteralText_ReturnValue19 = CallFunc_MakeLiteralText_ReturnValue19;
	Parms.K2Node_MakeArray_Array20 = K2Node_MakeArray_Array20;
	Parms.CallFunc_MakeLiteralText_ReturnValue20 = CallFunc_MakeLiteralText_ReturnValue20;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::View_Distance_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "View Distance Changed");

	Params::UTabVideoOptions_C_View_Distance_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Discrete Resolution Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Discrete_Resolution_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Discrete Resolution Changed");

	Params::UTabVideoOptions_C_Discrete_Resolution_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Shadows_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Shadows Changed");

	Params::UTabVideoOptions_C_Shadows_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Anti_Aliasing_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Anti-Aliasing Changed");

	Params::UTabVideoOptions_C_Anti_Aliasing_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Textures_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Textures Changed");

	Params::UTabVideoOptions_C_Textures_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Post_Processing_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Post-Processing Changed");

	Params::UTabVideoOptions_C_Post_Processing_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Effects_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Effects Changed");

	Params::UTabVideoOptions_C_Effects_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Quality_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Quality Changed");

	Params::UTabVideoOptions_C_Quality_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "UpdateOptionsTab");

	Params::UTabVideoOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Window_Mode__Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Window Mode  Changed");

	Params::UTabVideoOptions_C_Window_Mode__Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_22(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_22");

	Params::UTabVideoOptions_C_CustomEvent_22_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_23(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_23");

	Params::UTabVideoOptions_C_CustomEvent_23_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Construct");

	Params::UTabVideoOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CenterOnTab");

	Params::UTabVideoOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::VSync_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "VSync Changed");

	Params::UTabVideoOptions_C_VSync_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Motion_Blur_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Motion Blur Changed");

	Params::UTabVideoOptions_C_Motion_Blur_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent");

	Params::UTabVideoOptions_C_CustomEvent_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_1(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_1");

	Params::UTabVideoOptions_C_CustomEvent_1_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "PreConstruct");

	Params::UTabVideoOptions_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Tab_Id8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWindowedFullscreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetCurrentDisplayResolution_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               CallFunc_IsAthena_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::ExecuteUbergraph_TabVideoOptions(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, int32 K2Node_CustomEvent_Tab_Id8, int32 K2Node_CustomEvent_Tab_Id7, int32 K2Node_CustomEvent_Tab_Id6, int32 K2Node_CustomEvent_Tab_Id5, int32 K2Node_CustomEvent_Tab_Id4, int32 K2Node_CustomEvent_Tab_Id3, int32 K2Node_CustomEvent_Tab_Id2, int32 K2Node_CustomEvent_Tab_Id, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_CustomEvent_Selected_Index7, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index6, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_CustomEvent_Selected_Index5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, int32 K2Node_CustomEvent_Selected_Index4, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index3, bool CallFunc_Conv_IntToBool_ReturnValue2, int32 K2Node_CustomEvent_Selected_Index2, bool CallFunc_Conv_IntToBool_ReturnValue3, int32 K2Node_CustomEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsAthena_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "ExecuteUbergraph_TabVideoOptions");

	Params::UTabVideoOptions_C_ExecuteUbergraph_TabVideoOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_CustomEvent_Tab_Id8 = K2Node_CustomEvent_Tab_Id8;
	Parms.K2Node_CustomEvent_Tab_Id7 = K2Node_CustomEvent_Tab_Id7;
	Parms.K2Node_CustomEvent_Tab_Id6 = K2Node_CustomEvent_Tab_Id6;
	Parms.K2Node_CustomEvent_Tab_Id5 = K2Node_CustomEvent_Tab_Id5;
	Parms.K2Node_CustomEvent_Tab_Id4 = K2Node_CustomEvent_Tab_Id4;
	Parms.K2Node_CustomEvent_Tab_Id3 = K2Node_CustomEvent_Tab_Id3;
	Parms.K2Node_CustomEvent_Tab_Id2 = K2Node_CustomEvent_Tab_Id2;
	Parms.K2Node_CustomEvent_Tab_Id = K2Node_CustomEvent_Tab_Id;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index7 = K2Node_CustomEvent_Selected_Index7;
	Parms.CallFunc_IsWindowedFullscreen_ReturnValue = CallFunc_IsWindowedFullscreen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index6 = K2Node_CustomEvent_Selected_Index6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Selected_Index5 = K2Node_CustomEvent_Selected_Index5;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_GetCurrentDisplayResolution_ReturnValue = CallFunc_GetCurrentDisplayResolution_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CustomEvent_Selected_Index4 = K2Node_CustomEvent_Selected_Index4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index3 = K2Node_CustomEvent_Selected_Index3;
	Parms.CallFunc_Conv_IntToBool_ReturnValue2 = CallFunc_Conv_IntToBool_ReturnValue2;
	Parms.K2Node_CustomEvent_Selected_Index2 = K2Node_CustomEvent_Selected_Index2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue3 = CallFunc_Conv_IntToBool_ReturnValue3;
	Parms.K2Node_CustomEvent_Selected_Index = K2Node_CustomEvent_Selected_Index;
	Parms.CallFunc_Conv_IntToBool_ReturnValue4 = CallFunc_Conv_IntToBool_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsAthena_ReturnValue = CallFunc_IsAthena_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Disable Overlay__DelegateSignature");

	Params::UTabVideoOptions_C_Disable_Overlay__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accept_Input                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Enable Overlay__DelegateSignature");

	Params::UTabVideoOptions_C_Enable_Overlay__DelegateSignature_Params Parms;
	Parms.Accept_Input = Accept_Input;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
