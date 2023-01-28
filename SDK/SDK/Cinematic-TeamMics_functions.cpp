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


// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         UpdatedMemberInfo                                                (Parm)
// struct FUniqueNetIdRepl            PlayerNetId                                                      (Edit, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            K2Node_Select3_Default                                           (ConstParm, HasGetValueTypeHash)

void UCinematic_TeamMics_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo, const struct FUniqueNetIdRepl& PlayerNetId, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable3, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_Select2_Default, bool CallFunc_IsValidNetID_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("Cinematic-TeamMics_C", "Update");

	Params::UCinematic_TeamMics_C_Update_Params Parms;
	Parms.UpdatedMemberInfo = UpdatedMemberInfo;
	Parms.PlayerNetId = PlayerNetId;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCinematic_TeamMics_C::Construct()
{
	static auto Func = Class->GetFunction("Cinematic-TeamMics_C", "Construct");

	Params::UCinematic_TeamMics_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCinematic_TeamMics_C::ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Cinematic-TeamMics_C", "ExecuteUbergraph_Cinematic-TeamMics");

	Params::UCinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
