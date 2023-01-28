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


// Function NearestPlayerContext.NearestPlayerContext_C.ProvideSingleLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ResultingLocation                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetClosestFortPlayerPawn_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNearestPlayerContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation, const struct FVector& Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawn* CallFunc_GetClosestFortPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2)
{
	static auto Func = Class->GetFunction("NearestPlayerContext_C", "ProvideSingleLocation");

	Params::UNearestPlayerContext_C_ProvideSingleLocation_Params Parms;
	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.Location = Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetClosestFortPlayerPawn_ReturnValue = CallFunc_GetClosestFortPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocation != nullptr)
		*ResultingLocation = Parms.ResultingLocation;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
