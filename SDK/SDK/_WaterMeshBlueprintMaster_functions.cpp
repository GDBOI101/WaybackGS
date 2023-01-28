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


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void A_WaterMeshBlueprintMaster_C::Construction(int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "Construction");

	Params::A_WaterMeshBlueprintMaster_C_Construction_Params Parms;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_T_Out_F                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Touching_Actor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Touching_Volume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void A_WaterMeshBlueprintMaster_C::Handle_Water_Penetration_Components_And_Arrays(bool In_T_Out_F, class AActor* Touching_Actor, class UStaticMeshComponent* Touching_Volume, int32 Temp_int_Variable, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable2, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "Handle Water Penetration Components And Arrays");

	Params::A_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays_Params Parms;
	Parms.In_T_Out_F = In_T_Out_F;
	Parms.Touching_Actor = Touching_Actor;
	Parms.Touching_Volume = Touching_Volume;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Traced_Transform                                                 (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                     VelocityVector                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Trace_Hit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                NewLocalVar_0                                                    (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_LineTraceComponent_HitLocation                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_LineTraceComponent_HitNormal                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_K2_LineTraceComponent_BoneName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_LineTraceComponent_OutHit                            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_LineTraceComponent_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue2                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromXZ_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void A_WaterMeshBlueprintMaster_C::Find_Placement_on_water_mesh_surfaces(struct FTransform* Traced_Transform, struct FVector* VelocityVector, bool* Trace_Hit, const struct FLinearColor& NewLocalVar_0, bool Temp_bool_Variable, class UStaticMeshComponent* K2Node_Select_Default, const struct FVector& CallFunc_GetVelocity_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_K2_LineTraceComponent_HitLocation, const struct FVector& CallFunc_K2_LineTraceComponent_HitNormal, class FName CallFunc_K2_LineTraceComponent_BoneName, const struct FHitResult& CallFunc_K2_LineTraceComponent_OutHit, bool CallFunc_K2_LineTraceComponent_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue2, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "Find Placement on water mesh surfaces");

	Params::A_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_K2_LineTraceComponent_HitLocation = CallFunc_K2_LineTraceComponent_HitLocation;
	Parms.CallFunc_K2_LineTraceComponent_HitNormal = CallFunc_K2_LineTraceComponent_HitNormal;
	Parms.CallFunc_K2_LineTraceComponent_BoneName = CallFunc_K2_LineTraceComponent_BoneName;
	Parms.CallFunc_K2_LineTraceComponent_OutHit = CallFunc_K2_LineTraceComponent_OutHit;
	Parms.CallFunc_K2_LineTraceComponent_ReturnValue = CallFunc_K2_LineTraceComponent_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue2 = CallFunc_Cross_VectorVector_ReturnValue2;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_MakeRotFromXZ_ReturnValue = CallFunc_MakeRotFromXZ_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Traced_Transform != nullptr)
		*Traced_Transform = Parms.Traced_Transform;

	if (VelocityVector != nullptr)
		*VelocityVector = Parms.VelocityVector;

	if (Trace_Hit != nullptr)
		*Trace_Hit = Parms.Trace_Hit;

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Target_Int                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void A_WaterMeshBlueprintMaster_C::SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int32 Target_Int, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "SetupMeshCollisionVolumes");

	Params::A_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes_Params Parms;
	Parms.StaticMeshComponent = StaticMeshComponent;
	Parms.Target_Int = Target_Int;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void A_WaterMeshBlueprintMaster_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "UserConstructionScript");

	Params::A_WaterMeshBlueprintMaster_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void A_WaterMeshBlueprintMaster_C::BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature");

	Params::A_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature_Params Parms;
	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void A_WaterMeshBlueprintMaster_C::Construct()
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "Construct");

	Params::A_WaterMeshBlueprintMaster_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void A_WaterMeshBlueprintMaster_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "ReceiveBeginPlay");

	Params::A_WaterMeshBlueprintMaster_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform  (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWindManager*            CallFunc_GetWindManager_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWindManager_C*              K2Node_DynamicCast_AsWind_Manager                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult4                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult3                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult2                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void A_WaterMeshBlueprintMaster_C::ExecuteUbergraph__WaterMeshBlueprintMaster(int32 EntryPoint, const struct FTransform& CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform, const struct FVector& CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector, bool CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue2, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AWindManager_C* K2Node_DynamicCast_AsWind_Manager, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent8, class AActor* K2Node_ComponentBoundEvent_OtherActor8, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp8, int32 K2Node_ComponentBoundEvent_OtherBodyIndex8, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent7, class AActor* K2Node_ComponentBoundEvent_OtherActor7, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp7, int32 K2Node_ComponentBoundEvent_OtherBodyIndex7, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent6, class AActor* K2Node_ComponentBoundEvent_OtherActor6, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp6, int32 K2Node_ComponentBoundEvent_OtherBodyIndex6, bool K2Node_ComponentBoundEvent_bFromSweep4, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent5, class AActor* K2Node_ComponentBoundEvent_OtherActor5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp5, int32 K2Node_ComponentBoundEvent_OtherBodyIndex5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent4, class AActor* K2Node_ComponentBoundEvent_OtherActor4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex4, bool K2Node_ComponentBoundEvent_bFromSweep3, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent3, class AActor* K2Node_ComponentBoundEvent_OtherActor3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex3, bool K2Node_ComponentBoundEvent_bFromSweep2, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent2, class AActor* K2Node_ComponentBoundEvent_OtherActor2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex2, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex)
{
	static auto Func = Class->GetFunction("_WaterMeshBlueprintMaster_C", "ExecuteUbergraph__WaterMeshBlueprintMaster");

	Params::A_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform = CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform;
	Parms.CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector = CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector;
	Parms.CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit = CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_GetWindManager_ReturnValue = CallFunc_GetWindManager_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsWind_Manager = K2Node_DynamicCast_AsWind_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent8 = K2Node_ComponentBoundEvent_OverlappedComponent8;
	Parms.K2Node_ComponentBoundEvent_OtherActor8 = K2Node_ComponentBoundEvent_OtherActor8;
	Parms.K2Node_ComponentBoundEvent_OtherComp8 = K2Node_ComponentBoundEvent_OtherComp8;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex8 = K2Node_ComponentBoundEvent_OtherBodyIndex8;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent7 = K2Node_ComponentBoundEvent_OverlappedComponent7;
	Parms.K2Node_ComponentBoundEvent_OtherActor7 = K2Node_ComponentBoundEvent_OtherActor7;
	Parms.K2Node_ComponentBoundEvent_OtherComp7 = K2Node_ComponentBoundEvent_OtherComp7;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex7 = K2Node_ComponentBoundEvent_OtherBodyIndex7;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent6 = K2Node_ComponentBoundEvent_OverlappedComponent6;
	Parms.K2Node_ComponentBoundEvent_OtherActor6 = K2Node_ComponentBoundEvent_OtherActor6;
	Parms.K2Node_ComponentBoundEvent_OtherComp6 = K2Node_ComponentBoundEvent_OtherComp6;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex6 = K2Node_ComponentBoundEvent_OtherBodyIndex6;
	Parms.K2Node_ComponentBoundEvent_bFromSweep4 = K2Node_ComponentBoundEvent_bFromSweep4;
	Parms.K2Node_ComponentBoundEvent_SweepResult4 = K2Node_ComponentBoundEvent_SweepResult4;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent5 = K2Node_ComponentBoundEvent_OverlappedComponent5;
	Parms.K2Node_ComponentBoundEvent_OtherActor5 = K2Node_ComponentBoundEvent_OtherActor5;
	Parms.K2Node_ComponentBoundEvent_OtherComp5 = K2Node_ComponentBoundEvent_OtherComp5;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex5 = K2Node_ComponentBoundEvent_OtherBodyIndex5;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent4 = K2Node_ComponentBoundEvent_OverlappedComponent4;
	Parms.K2Node_ComponentBoundEvent_OtherActor4 = K2Node_ComponentBoundEvent_OtherActor4;
	Parms.K2Node_ComponentBoundEvent_OtherComp4 = K2Node_ComponentBoundEvent_OtherComp4;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex4 = K2Node_ComponentBoundEvent_OtherBodyIndex4;
	Parms.K2Node_ComponentBoundEvent_bFromSweep3 = K2Node_ComponentBoundEvent_bFromSweep3;
	Parms.K2Node_ComponentBoundEvent_SweepResult3 = K2Node_ComponentBoundEvent_SweepResult3;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent3 = K2Node_ComponentBoundEvent_OverlappedComponent3;
	Parms.K2Node_ComponentBoundEvent_OtherActor3 = K2Node_ComponentBoundEvent_OtherActor3;
	Parms.K2Node_ComponentBoundEvent_OtherComp3 = K2Node_ComponentBoundEvent_OtherComp3;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex3 = K2Node_ComponentBoundEvent_OtherBodyIndex3;
	Parms.K2Node_ComponentBoundEvent_bFromSweep2 = K2Node_ComponentBoundEvent_bFromSweep2;
	Parms.K2Node_ComponentBoundEvent_SweepResult2 = K2Node_ComponentBoundEvent_SweepResult2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent2 = K2Node_ComponentBoundEvent_OverlappedComponent2;
	Parms.K2Node_ComponentBoundEvent_OtherActor2 = K2Node_ComponentBoundEvent_OtherActor2;
	Parms.K2Node_ComponentBoundEvent_OtherComp2 = K2Node_ComponentBoundEvent_OtherComp2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex2 = K2Node_ComponentBoundEvent_OtherBodyIndex2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
