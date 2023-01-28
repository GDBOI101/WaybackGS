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


// Function CollectionBar.CollectionBar_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 InIcon                                                           (Parm)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBar_C::SetIcon(const struct FSlateBrush& InIcon, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CollectionBar_C", "SetIcon");

	Params::UCollectionBar_C_SetIcon_Params Parms;
	Parms.InIcon = InIcon;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBar.CollectionBar_C.IsAchievedCountInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsInRange                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBar_C::IsAchievedCountInRange(bool* bIsInRange, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBar_C", "IsAchievedCountInRange");

	Params::UCollectionBar_C_IsAchievedCountInRange_Params Parms;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInRange != nullptr)
		*bIsInRange = Parms.bIsInRange;

}


// Function CollectionBar.CollectionBar_C.SetAchievedCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InAchievedCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBar_C::SetAchievedCount(int32 InAchievedCount)
{
	static auto Func = Class->GetFunction("CollectionBar_C", "SetAchievedCount");

	Params::UCollectionBar_C_SetAchievedCount_Params Parms;
	Parms.InAchievedCount = InAchievedCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBar.CollectionBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetProgressBarPercentage_Percentage                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBar_C::Update(float CallFunc_GetProgressBarPercentage_Percentage)
{
	static auto Func = Class->GetFunction("CollectionBar_C", "Update");

	Params::UCollectionBar_C_Update_Params Parms;
	Parms.CallFunc_GetProgressBarPercentage_Percentage = CallFunc_GetProgressBarPercentage_Percentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBar.CollectionBar_C.GetProgressBarPercentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AchievedCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Percentage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BarRange                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBar_C::GetProgressBarPercentage(int32 AchievedCount, float* Percentage, int32 BarRange, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Max_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBar_C", "GetProgressBarPercentage");

	Params::UCollectionBar_C_GetProgressBarPercentage_Params Parms;
	Parms.AchievedCount = AchievedCount;
	Parms.BarRange = BarRange;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Max_ReturnValue2 = CallFunc_Max_ReturnValue2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue2 = CallFunc_Conv_IntToFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Percentage != nullptr)
		*Percentage = Parms.Percentage;

}


// Function CollectionBar.CollectionBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBar_C::Construct()
{
	static auto Func = Class->GetFunction("CollectionBar_C", "Construct");

	Params::UCollectionBar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBar.CollectionBar_C.ExecuteUbergraph_CollectionBar
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBar_C::ExecuteUbergraph_CollectionBar(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBar_C", "ExecuteUbergraph_CollectionBar");

	Params::UCollectionBar_C_ExecuteUbergraph_CollectionBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
