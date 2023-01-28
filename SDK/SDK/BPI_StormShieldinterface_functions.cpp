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


// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReadyToExpand                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReadyToInstallAmplifier                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPI_StormShieldInterface_C::GetOutpostReadyState(bool* ReadyToExpand, bool* ReadyToInstallAmplifier)
{
	static auto Func = Class->GetFunction("BPI_StormShieldInterface_C", "GetOutpostReadyState");

	Params::UBPI_StormShieldInterface_C_GetOutpostReadyState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (ReadyToExpand != nullptr)
		*ReadyToExpand = Parms.ReadyToExpand;

	if (ReadyToInstallAmplifier != nullptr)
		*ReadyToInstallAmplifier = Parms.ReadyToInstallAmplifier;

}


// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowedToLeave                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPI_StormShieldInterface_C::CanLeaveOutpost(bool* AllowedToLeave)
{
	static auto Func = Class->GetFunction("BPI_StormShieldInterface_C", "CanLeaveOutpost");

	Params::UBPI_StormShieldInterface_C_CanLeaveOutpost_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowedToLeave != nullptr)
		*AllowedToLeave = Parms.AllowedToLeave;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
