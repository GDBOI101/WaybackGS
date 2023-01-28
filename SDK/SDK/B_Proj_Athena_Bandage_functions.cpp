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


// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Proj_Athena_Bandage_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Proj_Athena_Bandage_C", "UserConstructionScript");

	Params::AB_Proj_Athena_Bandage_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Proj_Athena_Bandage_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Proj_Athena_Bandage_C", "ReceiveBeginPlay");

	Params::AB_Proj_Athena_Bandage_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Proj_Athena_Bandage_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("B_Proj_Athena_Bandage_C", "ReceiveHit");

	Params::AB_Proj_Athena_Bandage_C_ReceiveHit_Params Parms;
	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Proj_Athena_Bandage_C::OnStop(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("B_Proj_Athena_Bandage_C", "OnStop");

	Params::AB_Proj_Athena_Bandage_C_OnStop_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.OnBounce
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Proj_Athena_Bandage_C::OnBounce(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("B_Proj_Athena_Bandage_C", "OnBounce");

	Params::AB_Proj_Athena_Bandage_C_OnBounce_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ExecuteUbergraph_B_Proj_Athena_Bandage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit3                                                (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  K2Node_Event_Hit2                                                (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Proj_Athena_Bandage_C::ExecuteUbergraph_B_Proj_Athena_Bandage(int32 EntryPoint, const struct FHitResult& K2Node_Event_Hit, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit3, const struct FHitResult& K2Node_Event_Hit2)
{
	static auto Func = Class->GetFunction("B_Proj_Athena_Bandage_C", "ExecuteUbergraph_B_Proj_Athena_Bandage");

	Params::AB_Proj_Athena_Bandage_C_ExecuteUbergraph_B_Proj_Athena_Bandage_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit3 = K2Node_Event_Hit3;
	Parms.K2Node_Event_Hit2 = K2Node_Event_Hit2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
