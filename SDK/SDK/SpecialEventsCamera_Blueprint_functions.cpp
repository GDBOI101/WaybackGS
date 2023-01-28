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


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpecialEventsCamera_Blueprint_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("SpecialEventsCamera_Blueprint_C", "UserConstructionScript");

	Params::ASpecialEventsCamera_Blueprint_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void ASpecialEventsCamera_Blueprint_C::OnActivated()
{
	static auto Func = Class->GetFunction("SpecialEventsCamera_Blueprint_C", "OnActivated");

	Params::ASpecialEventsCamera_Blueprint_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void ASpecialEventsCamera_Blueprint_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("SpecialEventsCamera_Blueprint_C", "OnDeactivated");

	Params::ASpecialEventsCamera_Blueprint_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_FortniteLobbyLightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FortniteLobbyLightSwitcher_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_FortniteLobbyLightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors3                          (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FortniteLobbyLightSwitcher_C*CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpecialEventsCamera_Blueprint_C::ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32 EntryPoint, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item2, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors3, int32 Temp_int_Loop_Counter_Variable2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("SpecialEventsCamera_Blueprint_C", "ExecuteUbergraph_SpecialEventsCamera_Blueprint");

	Params::ASpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors3 = CallFunc_GetAllActorsOfClass_OutActors3;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
