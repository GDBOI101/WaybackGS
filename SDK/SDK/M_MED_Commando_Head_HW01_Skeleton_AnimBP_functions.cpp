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


// Function M_MED_Commando_Head_HW01_Skeleton_AnimBP.M_MED_Commando_Head_HW01_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C
// (BlueprintEvent)
// Parameters:

void UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C()
{
	static auto Func = Class->GetFunction("M_MED_Commando_Head_HW01_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C");

	Params::UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_776F9A9C4585632E302BAC964523BC4C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Commando_Head_HW01_Skeleton_AnimBP.M_MED_Commando_Head_HW01_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("M_MED_Commando_Head_HW01_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Commando_Head_HW01_Skeleton_AnimBP.M_MED_Commando_Head_HW01_Skeleton_AnimBP_C.ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C::ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static auto Func = Class->GetFunction("M_MED_Commando_Head_HW01_Skeleton_AnimBP_C", "ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP");

	Params::UM_MED_Commando_Head_HW01_Skeleton_AnimBP_C_ExecuteUbergraph_M_MED_Commando_Head_HW01_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
