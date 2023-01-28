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


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontendCamera_Manage_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("FrontendCamera_Manage_C", "UserConstructionScript");

	Params::AFrontendCamera_Manage_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontendCamera_Manage_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FrontendCamera_Manage_C", "OnDeactivated");

	Params::AFrontendCamera_Manage_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontendCamera_Manage_C::OnActivated()
{
	static auto Func = Class->GetFunction("FrontendCamera_Manage_C", "OnActivated");

	Params::AFrontendCamera_Manage_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultCharacterLightingBP_C*>CallFunc_GetAllActorsOfClass_OutActors3                          (ZeroConstructor, ReferenceParm)
// class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontendCamera_Manage_C::ExecuteUbergraph_FrontendCamera_Manage(int32 EntryPoint, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item2, TArray<class AVaultCharacterLightingBP_C*>& CallFunc_GetAllActorsOfClass_OutActors3, class AVaultCharacterLightingBP_C* CallFunc_Array_Get_Item3)
{
	static auto Func = Class->GetFunction("FrontendCamera_Manage_C", "ExecuteUbergraph_FrontendCamera_Manage");

	Params::AFrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors3 = CallFunc_GetAllActorsOfClass_OutActors3;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
