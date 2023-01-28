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


// Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFemale_Commando_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("Female_Commando_01_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");

	Params::UFemale_Commando_01_Skeleton_AnimBP_C_BlueprintInitializeAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C.ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFemale_Commando_01_Skeleton_AnimBP_C::ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Female_Commando_01_Skeleton_AnimBP_C", "ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP");

	Params::UFemale_Commando_01_Skeleton_AnimBP_C_ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
