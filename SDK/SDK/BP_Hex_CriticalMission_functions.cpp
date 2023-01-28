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


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_CriticalMission_C::UserConstructionScript(bool NewLocalVar_0)
{
	static auto Func = Class->GetFunction("BP_Hex_CriticalMission_C", "UserConstructionScript");

	Params::ABP_Hex_CriticalMission_C_UserConstructionScript_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Hex_CriticalMission_C::Rotate__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Hex_CriticalMission_C", "Rotate__FinishedFunc");

	Params::ABP_Hex_CriticalMission_C_Rotate__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Hex_CriticalMission_C::Rotate__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Hex_CriticalMission_C", "Rotate__UpdateFunc");

	Params::ABP_Hex_CriticalMission_C_Rotate__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.DeactivateCriticalMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_CriticalMission_C::DeactivateCriticalMission()
{
	static auto Func = Class->GetFunction("BP_Hex_CriticalMission_C", "DeactivateCriticalMission");

	Params::ABP_Hex_CriticalMission_C_DeactivateCriticalMission_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ActivateCriticalMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_CriticalMission_C::ActivateCriticalMission()
{
	static auto Func = Class->GetFunction("BP_Hex_CriticalMission_C", "ActivateCriticalMission");

	Params::ABP_Hex_CriticalMission_C_ActivateCriticalMission_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ExecuteUbergraph_BP_Hex_CriticalMission
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hex_PARENT_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_CriticalMission_C::ExecuteUbergraph_BP_Hex_CriticalMission(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Hex_CriticalMission_C", "ExecuteUbergraph_BP_Hex_CriticalMission");

	Params::ABP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
