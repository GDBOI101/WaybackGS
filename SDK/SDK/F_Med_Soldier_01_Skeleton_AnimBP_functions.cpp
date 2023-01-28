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


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451
// (BlueprintEvent)
// Parameters:

void UF_Med_Soldier_01_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451()
{
	static auto Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451");

	Params::UF_Med_Soldier_01_Skeleton_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_Med_Soldier_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");

	Params::UF_Med_Soldier_01_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP");

	Params::UF_Med_Soldier_01_Skeleton_AnimBP_C_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
