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


// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemDeactivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    WhileActiveParticleSysComponent                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_RiftStaminaDrain_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCN_RiftStaminaDrain_C", "OnWhileActiveParticleSystemDeactivate");

	Params::AGCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate_Params Parms;
	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemActivate
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    WhileActiveParticleSysComponent                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_DtB_FloatingRift_C*       K2Node_DynamicCast_AsB_Dt_B_Floating_Rift                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue2                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_RiftStaminaDrain_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AB_DtB_FloatingRift_C* K2Node_DynamicCast_AsB_Dt_B_Floating_Rift, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2)
{
	static auto Func = Class->GetFunction("GCN_RiftStaminaDrain_C", "OnWhileActiveParticleSystemActivate");

	Params::AGCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate_Params Parms;
	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = Parameters;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Dt_B_Floating_Rift = K2Node_DynamicCast_AsB_Dt_B_Floating_Rift;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Conv_VectorToLinearColor_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_RiftStaminaDrain_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2)
{
	static auto Func = Class->GetFunction("GCN_RiftStaminaDrain_C", "UserConstructionScript");

	Params::AGCN_RiftStaminaDrain_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
