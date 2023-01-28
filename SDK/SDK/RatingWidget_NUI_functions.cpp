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


// Function RatingWidget_NUI.RatingWidget_NUI_C.SetShouldShowTeamPowerRating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTeamRating                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URatingWidget_NUI_C::SetShouldShowTeamPowerRating(bool ShowTeamRating)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "SetShouldShowTeamPowerRating");

	Params::URatingWidget_NUI_C_SetShouldShowTeamPowerRating_Params Parms;
	Parms.ShowTeamRating = ShowTeamRating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Override Default Color Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Override                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Light_Color                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Medium_Color                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Dark_Color                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URatingWidget_NUI_C::Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "Override Default Color Set");

	Params::URatingWidget_NUI_C_Override_Default_Color_Set_Params Parms;
	Parms.Override = Override;
	Parms.Light_Color = Light_Color;
	Parms.Medium_Color = Medium_Color;
	Parms.Dark_Color = Dark_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Texture2D Parameter From Multi Size Brush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Parameter                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMultiSizeBrush         MBrush                                                           (Parm)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URatingWidget_NUI_C::Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, class FName Parameter, const struct FFortMultiSizeBrush& MBrush, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "Set Texture2D Parameter From Multi Size Brush");

	Params::URatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params Parms;
	Parms.Mid = Mid;
	Parms.Parameter = Parameter;
	Parms.MBrush = MBrush;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Update From Unique ID
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalTeamHomebaseRating_Rating                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocalTeamHomebaseRating_ProgressFraction             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalTeamHomebaseRating_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URatingWidget_NUI_C::Update_From_Unique_ID(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetLocalTeamHomebaseRating_Rating, float CallFunc_GetLocalTeamHomebaseRating_ProgressFraction, bool CallFunc_GetLocalTeamHomebaseRating_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "Update From Unique ID");

	Params::URatingWidget_NUI_C_Update_From_Unique_ID_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetLocalTeamHomebaseRating_Rating = CallFunc_GetLocalTeamHomebaseRating_Rating;
	Parms.CallFunc_GetLocalTeamHomebaseRating_ProgressFraction = CallFunc_GetLocalTeamHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetLocalTeamHomebaseRating_ReturnValue = CallFunc_GetLocalTeamHomebaseRating_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Unique ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            ID                                                               (Parm, HasGetValueTypeHash)

void URatingWidget_NUI_C::Set_Unique_ID(const struct FUniqueNetIdRepl& ID)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "Set Unique ID");

	Params::URatingWidget_NUI_C_Set_Unique_ID_Params Parms;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URatingWidget_NUI_C::Update()
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "Update");

	Params::URatingWidget_NUI_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Update Rating Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rating                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URatingWidget_NUI_C::Update_Rating_Value(int32 Rating, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "Update Rating Value");

	Params::URatingWidget_NUI_C_Update_Rating_Value_Params Parms;
	Parms.Rating = Rating;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URatingWidget_NUI_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "PreConstruct");

	Params::URatingWidget_NUI_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void URatingWidget_NUI_C::PlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "PlayerInfoChanged");

	Params::URatingWidget_NUI_C_PlayerInfoChanged_Params Parms;
	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URatingWidget_NUI_C::Construct()
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "Construct");

	Params::URatingWidget_NUI_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         PlayerInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void URatingWidget_NUI_C::PlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "PlayerStateChanged");

	Params::URatingWidget_NUI_C_PlayerStateChanged_Params Parms;
	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RatingWidget_NUI.RatingWidget_NUI_C.ExecuteUbergraph_RatingWidget_NUI
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UniqueId                                      (ConstParm, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_PlayerInfo                                    (ConstParm)

void URatingWidget_NUI_C::ExecuteUbergraph_RatingWidget_NUI(int32 EntryPoint, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo)
{
	static auto Func = Class->GetFunction("RatingWidget_NUI_C", "ExecuteUbergraph_RatingWidget_NUI");

	Params::URatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UniqueId = K2Node_CustomEvent_UniqueId;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
