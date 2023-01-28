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


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_TeamMemberInfo_C::SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD-TeamMemberInfo_C", "SetHealth");

	Params::UHUD_TeamMemberInfo_C_SetHealth_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         UpdatedMemberInfo                                                (Parm)
// struct FUniqueNetIdRepl            PlayerPlatformNetId                                              (Edit, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            PlayerNetId                                                      (Edit, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_UniqueNetIdRepl_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInLocalPlayersParty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_TeamMemberInfo_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo, const struct FUniqueNetIdRepl& PlayerPlatformNetId, const struct FUniqueNetIdRepl& PlayerNetId, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, int32 Temp_int_Variable, int32 Temp_int_Variable2, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool CallFunc_IsInLocalPlayersParty_ReturnValue, bool Temp_bool_Variable5, const struct FUniqueNetIdRepl& K2Node_Select_Default, class UClass* K2Node_Select2_Default, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, int32 K2Node_Select4_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select5_Default)
{
	static auto Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Update");

	Params::UHUD_TeamMemberInfo_C_Update_Params Parms;
	Parms.UpdatedMemberInfo = UpdatedMemberInfo;
	Parms.PlayerPlatformNetId = PlayerPlatformNetId;
	Parms.PlayerNetId = PlayerNetId;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_IsValid_UniqueNetIdRepl_ReturnValue = CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.CallFunc_IsInLocalPlayersParty_ReturnValue = CallFunc_IsInLocalPlayersParty_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_TeamMemberInfo_C::Construct()
{
	static auto Func = Class->GetFunction("HUD-TeamMemberInfo_C", "Construct");

	Params::UHUD_TeamMemberInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_TeamMemberInfo_C::ExecuteUbergraph_HUD_TeamMemberInfo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HUD-TeamMemberInfo_C", "ExecuteUbergraph_HUD-TeamMemberInfo");

	Params::UHUD_TeamMemberInfo_C_ExecuteUbergraph_HUD_TeamMemberInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
