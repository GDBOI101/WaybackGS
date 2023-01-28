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


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewTalking                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetTalking");

	Params::UAthenaTeamMemberInfo_C_SetTalking_Params Parms;
	Parms.NewTalking = NewTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateMicIcon");

	Params::UAthenaTeamMemberInfo_C_UpdateMicIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewMuted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetMuted");

	Params::UAthenaTeamMemberInfo_C_SetMuted_Params Parms;
	Parms.NewMuted = NewMuted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reviving                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetReviving");

	Params::UAthenaTeamMemberInfo_C_SetReviving_Params Parms;
	Parms.Reviving = Reviving;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaTeamMemberInfo_C::UpdatePlayerName(const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdatePlayerName");

	Params::UAthenaTeamMemberInfo_C_UpdatePlayerName_Params Parms;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DBNO                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDBNO");

	Params::UAthenaTeamMemberInfo_C_SetDBNO_Params Parms;
	Parms.DBNO = DBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dead                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// struct FSlateColor                 K2Node_Select2_Default                                           ()

void UAthenaTeamMemberInfo_C::SetDead(bool Dead, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDead");

	Params::UAthenaTeamMemberInfo_C_SetDead_Params Parms;
	Parms.Dead = Dead;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::UpdatePS(class AFortPlayerStateAthena* InPlayerState)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdatePS");

	Params::UAthenaTeamMemberInfo_C_UpdatePS_Params Parms;
	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetShield(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetShield");

	Params::UAthenaTeamMemberInfo_C_SetShield_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetHealth");

	Params::UAthenaTeamMemberInfo_C_SetHealth_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Construct");

	Params::UAthenaTeamMemberInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default                                            (ConstParm)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint, int32 Temp_int_Variable, const struct FSlateBrush& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "ExecuteUbergraph_AthenaTeamMemberInfo");

	Params::UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
