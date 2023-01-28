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


// Function FullPartyMember.FullPartyMember_C.UpdateBang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMember_C::UpdateBang()
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "UpdateBang");

	Params::UFullPartyMember_C_UpdateBang_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.HighlightEmptyBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BannerIsHighlighted                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::HighlightEmptyBanner(bool BannerIsHighlighted, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable2, class UTexture2D* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "HighlightEmptyBanner");

	Params::UFullPartyMember_C_HighlightEmptyBanner_Params Parms;
	Parms.BannerIsHighlighted = BannerIsHighlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.SetSecondaryStatDisplayVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMember_C::SetSecondaryStatDisplayVisibility(enum class ESlateVisibility InVisibility)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "SetSecondaryStatDisplayVisibility");

	Params::UFullPartyMember_C_SetSecondaryStatDisplayVisibility_Params Parms;
	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.SetStatDisplayStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      InStyle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::SetStatDisplayStyle(class UClass* InStyle)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "SetStatDisplayStyle");

	Params::UFullPartyMember_C_SetStatDisplayStyle_Params Parms;
	Parms.InStyle = InStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.UpdateHomebaseRating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BaseHomebaseRatingFormatString                                   (Edit)
// int32                              CallFunc_GetHomebaseRating_Rating                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              CallFunc_GetModifiedHomebaseRating_Rating                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetModifiedHomebaseRating_ProgressFraction              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetModifiedHomebaseRating_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHomebaseRating_Rating2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHomebaseRating_ProgressFraction2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHomebaseRating_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasModifiedStats_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::UpdateHomebaseRating(class FText BaseHomebaseRatingFormatString, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating2, float CallFunc_GetHomebaseRating_ProgressFraction2, bool CallFunc_GetHomebaseRating_ReturnValue2, bool CallFunc_HasModifiedStats_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "UpdateHomebaseRating");

	Params::UFullPartyMember_C_UpdateHomebaseRating_Params Parms;
	Parms.BaseHomebaseRatingFormatString = BaseHomebaseRatingFormatString;
	Parms.CallFunc_GetHomebaseRating_Rating = CallFunc_GetHomebaseRating_Rating;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction = CallFunc_GetHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetHomebaseRating_ReturnValue = CallFunc_GetHomebaseRating_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetModifiedHomebaseRating_Rating = CallFunc_GetModifiedHomebaseRating_Rating;
	Parms.CallFunc_GetModifiedHomebaseRating_ProgressFraction = CallFunc_GetModifiedHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetModifiedHomebaseRating_ReturnValue = CallFunc_GetModifiedHomebaseRating_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetHomebaseRating_Rating2 = CallFunc_GetHomebaseRating_Rating2;
	Parms.CallFunc_GetHomebaseRating_ProgressFraction2 = CallFunc_GetHomebaseRating_ProgressFraction2;
	Parms.CallFunc_GetHomebaseRating_ReturnValue2 = CallFunc_GetHomebaseRating_ReturnValue2;
	Parms.CallFunc_HasModifiedStats_ReturnValue = CallFunc_HasModifiedStats_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.UpdateStatDisplays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BaseStatFormatString                                             (Edit)
// class UClass*                      ModifiedStatTextStyle                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      SoloStatTextStyle                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TeamStatTextStyle                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ModifiedStatFormatString                                         (Edit)
// class FText                        SoloStatFormatString                                             (Edit)
// class FText                        TeamStatFormatString                                             (Edit)
// int32                              CallFunc_GetModifiedFortitude_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetModifiedOffense_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// int32                              CallFunc_GetModifiedResistance_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetModifiedTech_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue3                                     ()
// class FText                        CallFunc_Format_ReturnValue4                                     ()
// int32                              CallFunc_GetTech_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResistance_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array6                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue5                                     ()
// class FText                        CallFunc_Format_ReturnValue6                                     ()
// int32                              CallFunc_GetOffense_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFortitude_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData7                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData8                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array7                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array8                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue7                                     ()
// class FText                        CallFunc_Format_ReturnValue8                                     ()
// int32                              CallFunc_GetTech_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResistance_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData9                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData10                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array9                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array10                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue9                                     ()
// class FText                        CallFunc_Format_ReturnValue10                                    ()
// int32                              CallFunc_GetOffense_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFortitude_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData11                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData12                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array11                                         (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue11                                    ()
// class FText                        CallFunc_Format_ReturnValue12                                    ()
// bool                               CallFunc_HasModifiedStats_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTeamTech_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData13                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array13                                         (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetTeamResistance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData14                           (HasGetValueTypeHash)
// int32                              CallFunc_GetTeamOffense_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array14                                         (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData15                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array15                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue13                                    ()
// class FText                        CallFunc_Format_ReturnValue14                                    ()
// class FText                        CallFunc_Format_ReturnValue15                                    ()
// int32                              CallFunc_GetTeamFortitude_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData16                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array16                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue16                                    ()

void UFullPartyMember_C::UpdateStatDisplays(class FText BaseStatFormatString, class UClass* ModifiedStatTextStyle, class UClass* SoloStatTextStyle, class UClass* TeamStatTextStyle, class FText ModifiedStatFormatString, class FText SoloStatFormatString, class FText TeamStatFormatString, int32 CallFunc_GetModifiedFortitude_ReturnValue, int32 CallFunc_GetModifiedOffense_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, int32 CallFunc_GetModifiedResistance_ReturnValue, int32 CallFunc_GetModifiedTech_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, class FText CallFunc_Format_ReturnValue3, class FText CallFunc_Format_ReturnValue4, int32 CallFunc_GetTech_ReturnValue, int32 CallFunc_GetResistance_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array6, class FText CallFunc_Format_ReturnValue5, class FText CallFunc_Format_ReturnValue6, int32 CallFunc_GetOffense_ReturnValue, int32 CallFunc_GetFortitude_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array8, class FText CallFunc_Format_ReturnValue7, class FText CallFunc_Format_ReturnValue8, int32 CallFunc_GetTech_ReturnValue2, int32 CallFunc_GetResistance_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData10, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array10, class FText CallFunc_Format_ReturnValue9, class FText CallFunc_Format_ReturnValue10, int32 CallFunc_GetOffense_ReturnValue2, int32 CallFunc_GetFortitude_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array11, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, class FText CallFunc_Format_ReturnValue11, class FText CallFunc_Format_ReturnValue12, bool CallFunc_HasModifiedStats_ReturnValue, int32 CallFunc_GetTeamTech_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData13, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array13, int32 CallFunc_GetTeamResistance_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData14, int32 CallFunc_GetTeamOffense_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array14, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData15, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array15, class FText CallFunc_Format_ReturnValue13, class FText CallFunc_Format_ReturnValue14, class FText CallFunc_Format_ReturnValue15, int32 CallFunc_GetTeamFortitude_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData16, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array16, class FText CallFunc_Format_ReturnValue16)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "UpdateStatDisplays");

	Params::UFullPartyMember_C_UpdateStatDisplays_Params Parms;
	Parms.BaseStatFormatString = BaseStatFormatString;
	Parms.ModifiedStatTextStyle = ModifiedStatTextStyle;
	Parms.SoloStatTextStyle = SoloStatTextStyle;
	Parms.TeamStatTextStyle = TeamStatTextStyle;
	Parms.ModifiedStatFormatString = ModifiedStatFormatString;
	Parms.SoloStatFormatString = SoloStatFormatString;
	Parms.TeamStatFormatString = TeamStatFormatString;
	Parms.CallFunc_GetModifiedFortitude_ReturnValue = CallFunc_GetModifiedFortitude_ReturnValue;
	Parms.CallFunc_GetModifiedOffense_ReturnValue = CallFunc_GetModifiedOffense_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.CallFunc_GetModifiedResistance_ReturnValue = CallFunc_GetModifiedResistance_ReturnValue;
	Parms.CallFunc_GetModifiedTech_ReturnValue = CallFunc_GetModifiedTech_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;
	Parms.CallFunc_Format_ReturnValue4 = CallFunc_Format_ReturnValue4;
	Parms.CallFunc_GetTech_ReturnValue = CallFunc_GetTech_ReturnValue;
	Parms.CallFunc_GetResistance_ReturnValue = CallFunc_GetResistance_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.K2Node_MakeArray_Array6 = K2Node_MakeArray_Array6;
	Parms.CallFunc_Format_ReturnValue5 = CallFunc_Format_ReturnValue5;
	Parms.CallFunc_Format_ReturnValue6 = CallFunc_Format_ReturnValue6;
	Parms.CallFunc_GetOffense_ReturnValue = CallFunc_GetOffense_ReturnValue;
	Parms.CallFunc_GetFortitude_ReturnValue = CallFunc_GetFortitude_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData7 = K2Node_MakeStruct_FormatArgumentData7;
	Parms.K2Node_MakeStruct_FormatArgumentData8 = K2Node_MakeStruct_FormatArgumentData8;
	Parms.K2Node_MakeArray_Array7 = K2Node_MakeArray_Array7;
	Parms.K2Node_MakeArray_Array8 = K2Node_MakeArray_Array8;
	Parms.CallFunc_Format_ReturnValue7 = CallFunc_Format_ReturnValue7;
	Parms.CallFunc_Format_ReturnValue8 = CallFunc_Format_ReturnValue8;
	Parms.CallFunc_GetTech_ReturnValue2 = CallFunc_GetTech_ReturnValue2;
	Parms.CallFunc_GetResistance_ReturnValue2 = CallFunc_GetResistance_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData9 = K2Node_MakeStruct_FormatArgumentData9;
	Parms.K2Node_MakeStruct_FormatArgumentData10 = K2Node_MakeStruct_FormatArgumentData10;
	Parms.K2Node_MakeArray_Array9 = K2Node_MakeArray_Array9;
	Parms.K2Node_MakeArray_Array10 = K2Node_MakeArray_Array10;
	Parms.CallFunc_Format_ReturnValue9 = CallFunc_Format_ReturnValue9;
	Parms.CallFunc_Format_ReturnValue10 = CallFunc_Format_ReturnValue10;
	Parms.CallFunc_GetOffense_ReturnValue2 = CallFunc_GetOffense_ReturnValue2;
	Parms.CallFunc_GetFortitude_ReturnValue2 = CallFunc_GetFortitude_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData11 = K2Node_MakeStruct_FormatArgumentData11;
	Parms.K2Node_MakeStruct_FormatArgumentData12 = K2Node_MakeStruct_FormatArgumentData12;
	Parms.K2Node_MakeArray_Array11 = K2Node_MakeArray_Array11;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.CallFunc_Format_ReturnValue11 = CallFunc_Format_ReturnValue11;
	Parms.CallFunc_Format_ReturnValue12 = CallFunc_Format_ReturnValue12;
	Parms.CallFunc_HasModifiedStats_ReturnValue = CallFunc_HasModifiedStats_ReturnValue;
	Parms.CallFunc_GetTeamTech_ReturnValue = CallFunc_GetTeamTech_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData13 = K2Node_MakeStruct_FormatArgumentData13;
	Parms.K2Node_MakeArray_Array13 = K2Node_MakeArray_Array13;
	Parms.CallFunc_GetTeamResistance_ReturnValue = CallFunc_GetTeamResistance_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData14 = K2Node_MakeStruct_FormatArgumentData14;
	Parms.CallFunc_GetTeamOffense_ReturnValue = CallFunc_GetTeamOffense_ReturnValue;
	Parms.K2Node_MakeArray_Array14 = K2Node_MakeArray_Array14;
	Parms.K2Node_MakeStruct_FormatArgumentData15 = K2Node_MakeStruct_FormatArgumentData15;
	Parms.K2Node_MakeArray_Array15 = K2Node_MakeArray_Array15;
	Parms.CallFunc_Format_ReturnValue13 = CallFunc_Format_ReturnValue13;
	Parms.CallFunc_Format_ReturnValue14 = CallFunc_Format_ReturnValue14;
	Parms.CallFunc_Format_ReturnValue15 = CallFunc_Format_ReturnValue15;
	Parms.CallFunc_GetTeamFortitude_ReturnValue = CallFunc_GetTeamFortitude_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData16 = K2Node_MakeStruct_FormatArgumentData16;
	Parms.K2Node_MakeArray_Array16 = K2Node_MakeArray_Array16;
	Parms.CallFunc_Format_ReturnValue16 = CallFunc_Format_ReturnValue16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.InitializeConnectedWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ConnectedWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "InitializeConnectedWidget");

	Params::UFullPartyMember_C_InitializeConnectedWidget_Params Parms;
	Parms.ConnectedWidget = ConnectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.MakeLocalPlayerConfirmActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               LocalPlayerAlone                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FConfirmationDialogAction>OutConfirmActions                                                (Parm, OutParm, ZeroConstructor)
// TArray<struct FConfirmationDialogAction>ConfirmActions                                                   (Edit, ZeroConstructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       ()
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction2                      ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions, const TArray<struct FConfirmationDialogAction>& ConfirmActions, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "MakeLocalPlayerConfirmActions");

	Params::UFullPartyMember_C_MakeLocalPlayerConfirmActions_Params Parms;
	Parms.LocalPlayerAlone = LocalPlayerAlone;
	Parms.ConfirmActions = ConfirmActions;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction2 = K2Node_MakeStruct_ConfirmationDialogAction2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutConfirmActions != nullptr)
		*OutConfirmActions = Parms.OutConfirmActions;

}


// Function FullPartyMember.FullPartyMember_C.HandleLocalPlayerActionsResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::HandleLocalPlayerActionsResult(enum class EFortDialogResult Result, class FName ResultName, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "HandleLocalPlayerActionsResult");

	Params::UFullPartyMember_C_HandleLocalPlayerActionsResult_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.UpdateLocalPlayerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    CallFunc_GetTeamMemberIDs_TeamMemberIDs                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMember_C::UpdateLocalPlayerAction(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "UpdateLocalPlayerAction");

	Params::UFullPartyMember_C_UpdateLocalPlayerAction_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetTeamMemberIDs_TeamMemberIDs = CallFunc_GetTeamMemberIDs_TeamMemberIDs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.DuplicateConnectedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFullPartyMemberConnected_C* UFullPartyMember_C::DuplicateConnectedWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "DuplicateConnectedWidget");

	Params::UFullPartyMember_C_DuplicateConnectedWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FullPartyMember.FullPartyMember_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMember_C::Initialize()
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "Initialize");

	Params::UFullPartyMember_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.UpdateDimensions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewDimensions                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "UpdateDimensions");

	Params::UFullPartyMember_C_UpdateDimensions_Params Parms;
	Parms.NewDimensions = NewDimensions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.ShowConnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select_Default                                            (HasGetValueTypeHash)
// bool                               CallFunc_IsInLocalPlayersParty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMember_C::ShowConnected(enum class ESlateVisibility Temp_byte_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select_Default, bool CallFunc_IsInLocalPlayersParty_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "ShowConnected");

	Params::UFullPartyMember_C_ShowConnected_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsInLocalPlayersParty_ReturnValue = CallFunc_IsInLocalPlayersParty_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMember_C::ShowConnecting()
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "ShowConnecting");

	Params::UFullPartyMember_C_ShowConnecting_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMember_C::ShowOpen()
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "ShowOpen");

	Params::UFullPartyMember_C_ShowOpen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.UpdateMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberInfo                                                    (Parm)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberDisplayStateCallFunc_GetPartyMemberDisplayState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMember_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "UpdateMemberInfo");

	Params::UFullPartyMember_C_UpdateMemberInfo_Params Parms;
	Parms.NewMemberInfo = NewMemberInfo;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPartyMemberDisplayState_ReturnValue = CallFunc_GetPartyMemberDisplayState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.DialogResult_1F64669049EA0B1762273C8ED9CBB619
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMember_C::DialogResult_1F64669049EA0B1762273C8ED9CBB619(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "DialogResult_1F64669049EA0B1762273C8ED9CBB619");

	Params::UFullPartyMember_C_DialogResult_1F64669049EA0B1762273C8ED9CBB619_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyMember_C::Construct()
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "Construct");

	Params::UFullPartyMember_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMember_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "PreConstruct");

	Params::UFullPartyMember_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFullPartyMember_C::OnClicked()
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "OnClicked");

	Params::UFullPartyMember_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyMember_C::Destruct()
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "Destruct");

	Params::UFullPartyMember_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewInfo                                                          (Parm)

void UFullPartyMember_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "OnPlayerInfoChanged");

	Params::UFullPartyMember_C_OnPlayerInfoChanged_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMember.FullPartyMember_C.ExecuteUbergraph_FullPartyMember
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFullPartyMemberConnected_C* CallFunc_DuplicateConnectedWidget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConfirmationDialogAction>CallFunc_MakeLocalPlayerConfirmActions_OutConfirmActions         (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_ShowPartyDialog*CallFunc_ShowPartyLeaderManageDialog_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowPartyDialog*CallFunc_ShowPartyMemberManageDialog_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerPartyLeader_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowConfirmationDialog_NUI_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyFinder_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberDisplayStateCallFunc_GetPartyMemberDisplayState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_LocalPlayerProfileModal_C*CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerInOurParty_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_Event_NewInfo                                             ()

void UFullPartyMember_C::ExecuteUbergraph_FullPartyMember(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFullPartyMemberConnected_C* CallFunc_DuplicateConnectedWidget_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, TArray<struct FConfirmationDialogAction>& CallFunc_MakeLocalPlayerConfirmActions_OutConfirmActions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAsyncAction_ShowPartyDialog* CallFunc_ShowPartyLeaderManageDialog_ReturnValue, class UFortAsyncAction_ShowPartyDialog* CallFunc_ShowPartyMemberManageDialog_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UPartyFinder_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue4, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, class UBP_LocalPlayerProfileModal_C* CallFunc_Create_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsPlayerInOurParty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo)
{
	static auto Func = Class->GetFunction("FullPartyMember_C", "ExecuteUbergraph_FullPartyMember");

	Params::UFullPartyMember_C_ExecuteUbergraph_FullPartyMember_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_DuplicateConnectedWidget_ReturnValue = CallFunc_DuplicateConnectedWidget_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.CallFunc_MakeLocalPlayerConfirmActions_OutConfirmActions = CallFunc_MakeLocalPlayerConfirmActions_OutConfirmActions;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue2 = CallFunc_GetOwningLocalPlayer_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ShowPartyLeaderManageDialog_ReturnValue = CallFunc_ShowPartyLeaderManageDialog_ReturnValue;
	Parms.CallFunc_ShowPartyMemberManageDialog_ReturnValue = CallFunc_ShowPartyMemberManageDialog_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsLocalPlayerPartyLeader_ReturnValue = CallFunc_IsLocalPlayerPartyLeader_ReturnValue;
	Parms.CallFunc_ShowConfirmationDialog_NUI_ReturnValue = CallFunc_ShowConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetPartyMemberDisplayState_ReturnValue = CallFunc_GetPartyMemberDisplayState_ReturnValue;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsPlayerInOurParty_ReturnValue = CallFunc_IsPlayerInOurParty_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_NewInfo = K2Node_Event_NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
