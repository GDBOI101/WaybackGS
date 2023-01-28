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


// Function LegacyRatingWidget.LegacyRatingWidget_C.SetShouldShowTeamPowerRating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTeamRating                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyRatingWidget_C::SetShouldShowTeamPowerRating(bool ShowTeamRating)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "SetShouldShowTeamPowerRating");

	Params::ULegacyRatingWidget_C_SetShouldShowTeamPowerRating_Params Parms;
	Parms.ShowTeamRating = ShowTeamRating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Override Default Color Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Override                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Light_Color                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Medium_Color                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Dark_Color                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyRatingWidget_C::Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Override Default Color Set");

	Params::ULegacyRatingWidget_C_Override_Default_Color_Set_Params Parms;
	Parms.Override = Override;
	Parms.Light_Color = Light_Color;
	Parms.Medium_Color = Medium_Color;
	Parms.Dark_Color = Dark_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Texture2D Parameter From Multi Size Brush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Parameter                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMultiSizeBrush         MBrush                                                           (Parm)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyRatingWidget_C::Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, class FName Parameter, const struct FFortMultiSizeBrush& MBrush, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Set Texture2D Parameter From Multi Size Brush");

	Params::ULegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params Parms;
	Parms.Mid = Mid;
	Parms.Parameter = Parameter;
	Parms.MBrush = MBrush;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Base Material
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMultiSizeBrush         K2Node_Select_Default                                            ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMultiSizeBrush         K2Node_Select2_Default                                           ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyRatingWidget_C::Update_Base_Material(class UMaterialInstanceDynamic* Mid, bool Temp_bool_Variable, const struct FFortMultiSizeBrush& K2Node_Select_Default, bool Temp_bool_Variable2, const struct FFortMultiSizeBrush& K2Node_Select2_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Update Base Material");

	Params::ULegacyRatingWidget_C_Update_Base_Material_Params Parms;
	Parms.Mid = Mid;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update From Unique ID
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamHomebaseRating_Rating                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTeamHomebaseRating_ProgressFraction                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTeamHomebaseRating_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyRatingWidget_C::Update_From_Unique_ID(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetTeamHomebaseRating_Rating, float CallFunc_GetTeamHomebaseRating_ProgressFraction, bool CallFunc_GetTeamHomebaseRating_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Update From Unique ID");

	Params::ULegacyRatingWidget_C_Update_From_Unique_ID_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetTeamHomebaseRating_Rating = CallFunc_GetTeamHomebaseRating_Rating;
	Parms.CallFunc_GetTeamHomebaseRating_ProgressFraction = CallFunc_GetTeamHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTeamHomebaseRating_ReturnValue = CallFunc_GetTeamHomebaseRating_ReturnValue;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Unique ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            ID                                                               (Parm, HasGetValueTypeHash)

void ULegacyRatingWidget_C::Set_Unique_ID(const struct FUniqueNetIdRepl& ID)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Set Unique ID");

	Params::ULegacyRatingWidget_C_Set_Unique_ID_Params Parms;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacyRatingWidget_C::Update()
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Update");

	Params::ULegacyRatingWidget_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Padding
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMultiSizeMargin        K2Node_Select_Default                                            (NoDestructor)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue          (ConstParm, NoDestructor)

void ULegacyRatingWidget_C::Set_Padding(bool Temp_bool_Variable, const struct FFortMultiSizeMargin& K2Node_Select_Default, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Set Padding");

	Params::ULegacyRatingWidget_C_Set_Padding_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue = CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void ULegacyRatingWidget_C::Set_Size_Box(const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Set Size Box");

	Params::ULegacyRatingWidget_C_Set_Size_Box_Params Parms;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Rating Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rating                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable6                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateFontInfo              CallFunc_GetCurrentFont_ReturnValue                              (ConstParm, HasGetValueTypeHash)
// enum class EFortBrushSize          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyRatingWidget_C::Update_Rating_Value(int32 Rating, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable2, const struct FVector2D& Temp_struct_Variable3, const struct FVector2D& Temp_struct_Variable4, const struct FVector2D& Temp_struct_Variable5, const struct FVector2D& Temp_struct_Variable6, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& CallFunc_GetCurrentFont_ReturnValue, enum class EFortBrushSize Temp_byte_Variable, const struct FVector2D& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Update Rating Value");

	Params::ULegacyRatingWidget_C_Update_Rating_Value_Params Parms;
	Parms.Rating = Rating;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetCurrentFont_ReturnValue = CallFunc_GetCurrentFont_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "PreConstruct");

	Params::ULegacyRatingWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ULegacyRatingWidget_C::PlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "PlayerInfoChanged");

	Params::ULegacyRatingWidget_C_PlayerInfoChanged_Params Parms;
	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegacyRatingWidget_C::Construct()
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "Construct");

	Params::ULegacyRatingWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         PlayerInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyRatingWidget_C::PlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "PlayerStateChanged");

	Params::ULegacyRatingWidget_C_PlayerStateChanged_Params Parms;
	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyRatingWidget.LegacyRatingWidget_C.ExecuteUbergraph_LegacyRatingWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UniqueId                                      (ConstParm, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_PlayerInfo                                    (ConstParm)

void ULegacyRatingWidget_C::ExecuteUbergraph_LegacyRatingWidget(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo)
{
	static auto Func = Class->GetFunction("LegacyRatingWidget_C", "ExecuteUbergraph_LegacyRatingWidget");

	Params::ULegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_UniqueId = K2Node_CustomEvent_UniqueId;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
