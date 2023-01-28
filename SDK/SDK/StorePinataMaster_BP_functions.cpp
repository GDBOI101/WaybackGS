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


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.PackPersonalitySounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPackPersonality*        CallFunc_GetPackPersonality_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USoundBase*>          K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void AStorePinataMaster_BP_C::PackPersonalitySounds(class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortPackPersonality* CallFunc_GetPackPersonality_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USoundBase* CallFunc_Array_Get_Item, TArray<class USoundBase*>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "PackPersonalitySounds");

	Params::AStorePinataMaster_BP_C_PackPersonalitySounds_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPackPersonality_ReturnValue = CallFunc_GetPackPersonality_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.DefinePinataAssets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_GetPackImage_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable3                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue17             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable4                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue18             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue19             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue20             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue21             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue22             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue23             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable5                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue24             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue25             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue26             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue27             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue28             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue29             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable6                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue30             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue31             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue32             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue33             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue34             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue35             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable7                                            (ConstParm, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue36             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue37             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue38             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue39             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue40             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue41             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue42             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable8                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable9                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue43             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue44             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue45             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue46             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue47             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue48             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable10                                           (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue49             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue50             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue51             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue52             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue53             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue54             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::DefinePinataAssets(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UFortStoreContext* CallFunc_GetContext_ReturnValue, const struct FTransform& Temp_struct_Variable, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class UTexture* CallFunc_GetPackImage_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue2, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FTransform& Temp_struct_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, const struct FTransform& Temp_struct_Variable3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue15, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue16, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue17, const struct FTransform& Temp_struct_Variable4, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue18, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue19, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue20, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue21, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue22, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue23, const struct FTransform& Temp_struct_Variable5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue24, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue25, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue26, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue27, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue28, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue29, const struct FTransform& Temp_struct_Variable6, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue30, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue31, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue32, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue33, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue34, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue35, const struct FTransform& Temp_struct_Variable7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue36, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue37, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue38, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue39, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue40, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue41, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue42, const struct FTransform& Temp_struct_Variable8, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue8, const struct FTransform& Temp_struct_Variable9, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue43, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue44, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue45, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue46, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue47, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue48, const struct FTransform& Temp_struct_Variable10, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue49, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue50, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue51, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue52, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue53, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue54)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "DefinePinataAssets");

	Params::AStorePinataMaster_BP_C_DefinePinataAssets_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_GetPackImage_ReturnValue = CallFunc_GetPackImage_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue2 = CallFunc_GetDisplayName_ReturnValue2;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue13;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue15 = CallFunc_CreateDynamicMaterialInstance_ReturnValue15;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue16 = CallFunc_CreateDynamicMaterialInstance_ReturnValue16;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue17 = CallFunc_CreateDynamicMaterialInstance_ReturnValue17;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.CallFunc_AddComponent_ReturnValue4 = CallFunc_AddComponent_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue18 = CallFunc_CreateDynamicMaterialInstance_ReturnValue18;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue19 = CallFunc_CreateDynamicMaterialInstance_ReturnValue19;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue20 = CallFunc_CreateDynamicMaterialInstance_ReturnValue20;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue21 = CallFunc_CreateDynamicMaterialInstance_ReturnValue21;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue22 = CallFunc_CreateDynamicMaterialInstance_ReturnValue22;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue23 = CallFunc_CreateDynamicMaterialInstance_ReturnValue23;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue24 = CallFunc_CreateDynamicMaterialInstance_ReturnValue24;
	Parms.CallFunc_AddComponent_ReturnValue5 = CallFunc_AddComponent_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue25 = CallFunc_CreateDynamicMaterialInstance_ReturnValue25;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue26 = CallFunc_CreateDynamicMaterialInstance_ReturnValue26;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue27 = CallFunc_CreateDynamicMaterialInstance_ReturnValue27;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue28 = CallFunc_CreateDynamicMaterialInstance_ReturnValue28;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue29 = CallFunc_CreateDynamicMaterialInstance_ReturnValue29;
	Parms.Temp_struct_Variable6 = Temp_struct_Variable6;
	Parms.CallFunc_AddComponent_ReturnValue6 = CallFunc_AddComponent_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue30 = CallFunc_CreateDynamicMaterialInstance_ReturnValue30;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue31 = CallFunc_CreateDynamicMaterialInstance_ReturnValue31;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue32 = CallFunc_CreateDynamicMaterialInstance_ReturnValue32;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue33 = CallFunc_CreateDynamicMaterialInstance_ReturnValue33;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue34 = CallFunc_CreateDynamicMaterialInstance_ReturnValue34;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue35 = CallFunc_CreateDynamicMaterialInstance_ReturnValue35;
	Parms.Temp_struct_Variable7 = Temp_struct_Variable7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue36 = CallFunc_CreateDynamicMaterialInstance_ReturnValue36;
	Parms.CallFunc_AddComponent_ReturnValue7 = CallFunc_AddComponent_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue37 = CallFunc_CreateDynamicMaterialInstance_ReturnValue37;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue38 = CallFunc_CreateDynamicMaterialInstance_ReturnValue38;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue39 = CallFunc_CreateDynamicMaterialInstance_ReturnValue39;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue40 = CallFunc_CreateDynamicMaterialInstance_ReturnValue40;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue41 = CallFunc_CreateDynamicMaterialInstance_ReturnValue41;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue42 = CallFunc_CreateDynamicMaterialInstance_ReturnValue42;
	Parms.Temp_struct_Variable8 = Temp_struct_Variable8;
	Parms.CallFunc_AddComponent_ReturnValue8 = CallFunc_AddComponent_ReturnValue8;
	Parms.Temp_struct_Variable9 = Temp_struct_Variable9;
	Parms.CallFunc_AddComponent_ReturnValue9 = CallFunc_AddComponent_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue43 = CallFunc_CreateDynamicMaterialInstance_ReturnValue43;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue44 = CallFunc_CreateDynamicMaterialInstance_ReturnValue44;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue45 = CallFunc_CreateDynamicMaterialInstance_ReturnValue45;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue46 = CallFunc_CreateDynamicMaterialInstance_ReturnValue46;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue47 = CallFunc_CreateDynamicMaterialInstance_ReturnValue47;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue48 = CallFunc_CreateDynamicMaterialInstance_ReturnValue48;
	Parms.Temp_struct_Variable10 = Temp_struct_Variable10;
	Parms.CallFunc_AddComponent_ReturnValue10 = CallFunc_AddComponent_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue49 = CallFunc_CreateDynamicMaterialInstance_ReturnValue49;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue50 = CallFunc_CreateDynamicMaterialInstance_ReturnValue50;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue51 = CallFunc_CreateDynamicMaterialInstance_ReturnValue51;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue52 = CallFunc_CreateDynamicMaterialInstance_ReturnValue52;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue53 = CallFunc_CreateDynamicMaterialInstance_ReturnValue53;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue54 = CallFunc_CreateDynamicMaterialInstance_ReturnValue54;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable3                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue4                     (IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, const struct FTransform& Temp_struct_Variable3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue14, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue4)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "UserConstructionScript");

	Params::AStorePinataMaster_BP_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue14;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue4 = CallFunc_K2_GetComponentToWorld_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_WeaponCharge__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-WeaponCharge__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_WeaponCharge__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-WeaponCharge__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_WeaponCharge__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-WeaponCharge__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_WeaponCharge__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade2__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade2__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade2__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade2__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade2__TasslesDropOff2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade2__TasslesDropOff2__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade2__TasslesDropOff2__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade2__TasslesDropOff2__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DarkenBG__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DarkenBG__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_DarkenBG__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DarkenBG__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DarkenBG__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DarkenBG__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_DarkenBG__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_UndarkenBG__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-UndarkenBG__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_UndarkenBG__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-UndarkenBG__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_UndarkenBG__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-UndarkenBG__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_UndarkenBG__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_RegularEyes__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-RegularEyes__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_RegularEyes__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-RegularEyes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_RegularEyes__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-RegularEyes__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_RegularEyes__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EyesFollowMouseAgain__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EyesFollowMouseAgain__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_EyesFollowMouseAgain__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EyesFollowMouseAgain__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EyesFollowMouseAgain__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EyesFollowMouseAgain__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_EyesFollowMouseAgain__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_ChangeLighting__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-ChangeLighting__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_ChangeLighting__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-ChangeLighting__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_ChangeLighting__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-ChangeLighting__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_ChangeLighting__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_CardCough__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_CardCough__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_CardCough__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_CardCough__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_CardCough__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_CardCough__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_CardCough__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "Timeline_0__FinishedFunc");

	Params::AStorePinataMaster_BP_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "Timeline_0__UpdateFunc");

	Params::AStorePinataMaster_BP_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade1__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade1__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade1__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade1__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade1__TasslesDropOffEvent__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade1__TasslesDropOffEvent__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade1__TasslesDropOffEvent__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade1__TasslesDropOffEvent__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_PushbroomAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_PushbroomAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL_PushbroomAnim__Trigger Particles__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PushbroomAnim__Trigger_Particles__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL_PushbroomAnim__Trigger Particles__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_PushbroomAnim__Trigger_Particles__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Attack__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Attack__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Attack__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Attack__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Attack__EventTrackHit__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Attack__EventTrackHit__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Attack__EventTrackHit__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Attack__EventTrackHit__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EquipWeapon__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EquipWeapon__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_EquipWeapon__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-EquipWeapon__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_EquipWeapon__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-EquipWeapon__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_EquipWeapon__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_SuspiciousEyes__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-SuspiciousEyes__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_SuspiciousEyes__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-SuspiciousEyes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_SuspiciousEyes__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-SuspiciousEyes__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_SuspiciousEyes__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PupilContracts__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-PupilContracts__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_PupilContracts__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-PupilContracts__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_PupilContracts__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-PupilContracts__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_PupilContracts__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DropEyeAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DropEyeAnim__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_DropEyeAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-DropEyeAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_DropEyeAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-DropEyeAnim__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_DropEyeAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade3__FinishedFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__FinishedFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade3__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade3__UpdateFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__UpdateFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade3__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.TL-Upgrade3__TasslesDropOff2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::TL_Upgrade3__TasslesDropOff2__EventFunc()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "TL-Upgrade3__TasslesDropOff2__EventFunc");

	Params::AStorePinataMaster_BP_C_TL_Upgrade3__TasslesDropOff2__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7");

	Params::AStorePinataMaster_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6");

	Params::AStorePinataMaster_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5");

	Params::AStorePinataMaster_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4");

	Params::AStorePinataMaster_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpTchEvt_Released(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpTchEvt_Released");

	Params::AStorePinataMaster_BP_C_InpTchEvt_Released_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InpTchEvt_Pressed");

	Params::AStorePinataMaster_BP_C_InpTchEvt_Pressed_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OnLoaded_34AE763040BC26E1AD2CE4842CE48F91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::OnLoaded_34AE763040BC26E1AD2CE4842CE48F91(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "OnLoaded_34AE763040BC26E1AD2CE4842CE48F91");

	Params::AStorePinataMaster_BP_C_OnLoaded_34AE763040BC26E1AD2CE4842CE48F91_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReadyToAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ReadyToAttack()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ReadyToAttack");

	Params::AStorePinataMaster_BP_C_ReadyToAttack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OpenPinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::OpenPinata()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "OpenPinata");

	Params::AStorePinataMaster_BP_C_OpenPinata_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CardPackStoreStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CardPackStoreStart()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CardPackStoreStart");

	Params::AStorePinataMaster_BP_C_CardPackStoreStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ReceiveBeginPlay");

	Params::AStorePinataMaster_BP_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.PackDestroyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::PackDestroyStart()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "PackDestroyStart");

	Params::AStorePinataMaster_BP_C_PackDestroyStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CardEnterStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CardEnterStart()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CardEnterStart");

	Params::AStorePinataMaster_BP_C_CardEnterStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.StartPackOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::StartPackOpen()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "StartPackOpen");

	Params::AStorePinataMaster_BP_C_StartPackOpen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CameraTransitionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CameraTransitionComplete()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CameraTransitionComplete");

	Params::AStorePinataMaster_BP_C_CameraTransitionComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.CameraResetComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::CameraResetComplete()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "CameraResetComplete");

	Params::AStorePinataMaster_BP_C_CameraResetComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.OnStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "OnStoreStateChanged");

	Params::AStorePinataMaster_BP_C_OnStoreStateChanged_Params Parms;
	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::InitiatePinata()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "InitiatePinata");

	Params::AStorePinataMaster_BP_C_InitiatePinata_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ExitCardPackStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::ExitCardPackStore()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ExitCardPackStore");

	Params::AStorePinataMaster_BP_C_ExitCardPackStore_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStorePinataMaster_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ReceiveTick");

	Params::AStorePinataMaster_BP_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-DropEyeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::Stop_DropEyeAnim()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "Stop-DropEyeAnim");

	Params::AStorePinataMaster_BP_C_Stop_DropEyeAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.Stop-SwingingEyeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::Stop_SwingingEyeAnim()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "Stop-SwingingEyeAnim");

	Params::AStorePinataMaster_BP_C_Stop_SwingingEyeAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.SpawnCandy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStorePinataMaster_BP_C::SpawnCandy()
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "SpawnCandy");

	Params::AStorePinataMaster_BP_C_SpawnCandy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_BP.StorePinataMaster_BP_C.ExecuteUbergraph_StorePinataMaster_BP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortStoreState         K2Node_CustomEvent_NewStoreState                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AStoreCamera_Blueprint_C*>CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AStoreCardReveal_BP_C*>CallFunc_GetAllActorsOfClass_OutActors3                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Array_Get_Item2                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue2                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location3                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale3                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Loudness                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Duration                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Loudness2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Duration2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue3                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue4                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue2                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue3                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location4                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation4                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale4                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>Temp_assetclass_Variable                                         (ZeroConstructor, ReferenceParm)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseSpecificPinataWeapon_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreWeaponMaster_BP_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLimitedToES2Features_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable2                                            (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue2                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult4                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult5                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>Temp_assetclass_Variable2                                        (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CardPackDestroyComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardPackOpeningComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RandomRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate2_FirstRun                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate2_Data                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate3_FirstRun                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate3_Data                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable3                                            (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key4                                        (HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue3                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult6                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate4_FirstRun                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate4_Data                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreCardReveal_BP_C*       CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStoreCamera_Blueprint_C*    CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult7                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)
// TSoftClassPtr<class AStoreWeaponMaster_BP_C>CallFunc_Array_Get_Item6                                         (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStorePinataMaster_BP_C::ExecuteUbergraph_StorePinataMaster_BP(int32 EntryPoint, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue2, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class USoundBase* K2Node_DynamicCast_AsSound_Base2, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_Conv_AssetToObject_ReturnValue3, class USoundBase* K2Node_DynamicCast_AsSound_Base3, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AStoreCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors2, int32 CallFunc_Array_Length_ReturnValue2, TArray<class AStoreCardReveal_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors3, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_Array_Get_Item2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, float CallFunc_GetMousePosition_LocationX2, float CallFunc_GetMousePosition_LocationY2, bool CallFunc_GetMousePosition_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue2, float K2Node_Event_DeltaSeconds, float CallFunc_GetTimelineLength_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue4, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult3, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness, float CallFunc_BroadcastPlayerImpactAtLocation_Duration, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness2, float CallFunc_BroadcastPlayerImpactAtLocation_Duration2, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue4, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue3, const struct FVector& CallFunc_BreakTransform_Location4, const struct FRotator& CallFunc_BreakTransform_Rotation4, const struct FVector& CallFunc_BreakTransform_Scale4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>& Temp_assetclass_Variable, class UClass* Temp_class_Variable, class UClass* K2Node_CustomEvent_Loaded, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_UseSpecificPinataWeapon_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AStoreWeaponMaster_BP_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsLimitedToES2Features_ReturnValue, const struct FVector& Temp_struct_Variable, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex, const struct FVector& K2Node_InputTouchEvent_Location, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex2, const struct FVector& K2Node_InputTouchEvent_Location2, const struct FKey& Temp_struct_Variable2, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key2, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue2, bool Temp_bool_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, int32 Temp_int_Variable, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult5, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, TArray<TSoftClassPtr<class AStoreWeaponMaster_BP_C>>& Temp_assetclass_Variable2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_K2_AttachToComponent_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue4, float CallFunc_Lerp_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Lerp_ReturnValue2, float CallFunc_Lerp_ReturnValue3, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue5, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_CardPackDestroyComplete_ReturnValue, float CallFunc_Lerp_ReturnValue4, float CallFunc_Lerp_ReturnValue5, float CallFunc_Lerp_ReturnValue6, float CallFunc_Lerp_ReturnValue7, float CallFunc_Lerp_ReturnValue8, float CallFunc_Lerp_ReturnValue9, int32 Temp_int_Loop_Counter_Variable2, class UFortStoreContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_CardPackOpeningComplete_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue3, class UFortStoreContext* CallFunc_GetContext_ReturnValue7, class UFortStoreContext* CallFunc_GetContext_ReturnValue8, bool Temp_bool_Variable5, bool K2Node_Select_Default, bool Temp_bool_Variable6, bool Temp_bool_Variable7, int32 Temp_int_Variable2, bool Temp_bool_Variable8, bool K2Node_Select2_Default, bool Temp_bool_Variable9, bool Temp_bool_Variable10, int32 Temp_int_Variable3, bool K2Node_Select3_Default, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable11, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue3, bool Temp_bool_Variable12, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, class UStaticMeshComponent* CallFunc_Array_Get_Item3, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue5, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue3, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue4, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, float CallFunc_RandomFloatInRange_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_MultiGate2_FirstRun, int32 K2Node_MultiGate2_Data, int32 CallFunc_Array_Add_ReturnValue2, bool Temp_bool_Variable13, int32 Temp_int_Variable4, bool K2Node_MultiGate3_FirstRun, int32 K2Node_MultiGate3_Data, bool K2Node_Select4_Default, int32 CallFunc_Array_Add_ReturnValue3, const struct FKey& Temp_struct_Variable3, int32 CallFunc_Add_IntInt_ReturnValue4, const struct FKey& K2Node_InputKeyEvent_Key3, const struct FKey& K2Node_InputKeyEvent_Key4, const struct FTransform& CallFunc_TLerp_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue3, bool K2Node_MultiGate4_FirstRun, int32 K2Node_MultiGate4_Data, int32 CallFunc_Array_Add_ReturnValue4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Array_Index_Variable3, class AStoreCardReveal_BP_C* CallFunc_Array_Get_Item4, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue5, bool Temp_bool_Has_Been_Initd_Variable2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable4, class AStoreCamera_Blueprint_C* CallFunc_Array_Get_Item5, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult7, bool CallFunc_K2_AttachToComponent_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, TSoftClassPtr<class AStoreWeaponMaster_BP_C> CallFunc_Array_Get_Item6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, int32 Temp_int_Loop_Counter_Variable4, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue6, bool Temp_bool_IsClosed_Variable2)
{
	static auto Func = Class->GetFunction("StorePinataMaster_BP_C", "ExecuteUbergraph_StorePinataMaster_BP");

	Params::AStorePinataMaster_BP_C_ExecuteUbergraph_StorePinataMaster_BP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_NewStoreState = K2Node_CustomEvent_NewStoreState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue2 = CallFunc_Conv_AssetToObject_ReturnValue2;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSound_Base2 = K2Node_DynamicCast_AsSound_Base2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue3 = CallFunc_Conv_AssetToObject_ReturnValue3;
	Parms.K2Node_DynamicCast_AsSound_Base3 = K2Node_DynamicCast_AsSound_Base3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors3 = CallFunc_GetAllActorsOfClass_OutActors3;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue3 = CallFunc_SpawnSoundAttached_ReturnValue3;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.CallFunc_GetMousePosition_LocationX2 = CallFunc_GetMousePosition_LocationX2;
	Parms.CallFunc_GetMousePosition_LocationY2 = CallFunc_GetMousePosition_LocationY2;
	Parms.CallFunc_GetMousePosition_ReturnValue2 = CallFunc_GetMousePosition_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue2 = CallFunc_GetVectorParameterValue_ReturnValue2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue4 = CallFunc_SpawnSoundAttached_ReturnValue4;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult2 = CallFunc_K2_SetWorldTransform_SweepHitResult2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult3 = CallFunc_K2_SetWorldTransform_SweepHitResult3;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue2 = CallFunc_GetSocketTransform_ReturnValue2;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_BreakTransform_Location3 = CallFunc_BreakTransform_Location3;
	Parms.CallFunc_BreakTransform_Rotation3 = CallFunc_BreakTransform_Rotation3;
	Parms.CallFunc_BreakTransform_Scale3 = CallFunc_BreakTransform_Scale3;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Loudness = CallFunc_BroadcastPlayerImpactAtLocation_Loudness;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Duration = CallFunc_BroadcastPlayerImpactAtLocation_Duration;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue = CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Loudness2 = CallFunc_BroadcastPlayerImpactAtLocation_Loudness2;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Duration2 = CallFunc_BroadcastPlayerImpactAtLocation_Duration2;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue2 = CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue3 = CallFunc_MakeVector2D_ReturnValue3;
	Parms.CallFunc_MakeVector2D_ReturnValue4 = CallFunc_MakeVector2D_ReturnValue4;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue2 = CallFunc_Subtract_Vector2DVector2D_ReturnValue2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
	Parms.CallFunc_GetSocketTransform_ReturnValue3 = CallFunc_GetSocketTransform_ReturnValue3;
	Parms.CallFunc_BreakTransform_Location4 = CallFunc_BreakTransform_Location4;
	Parms.CallFunc_BreakTransform_Rotation4 = CallFunc_BreakTransform_Rotation4;
	Parms.CallFunc_BreakTransform_Scale4 = CallFunc_BreakTransform_Scale4;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.Temp_assetclass_Variable = Temp_assetclass_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP = K2Node_ClassDynamicCast_AsStore_Weapon_Master_BP;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_UseSpecificPinataWeapon_ReturnValue = CallFunc_UseSpecificPinataWeapon_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsLimitedToES2Features_ReturnValue = CallFunc_IsLimitedToES2Features_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_InputTouchEvent_FingerIndex = K2Node_InputTouchEvent_FingerIndex;
	Parms.K2Node_InputTouchEvent_Location = K2Node_InputTouchEvent_Location;
	Parms.K2Node_InputTouchEvent_FingerIndex2 = K2Node_InputTouchEvent_FingerIndex2;
	Parms.K2Node_InputTouchEvent_Location2 = K2Node_InputTouchEvent_Location2;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue2 = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue2 = CallFunc_Conv_LinearColorToColor_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_TLerp_ReturnValue2 = CallFunc_TLerp_ReturnValue2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult4 = CallFunc_K2_SetWorldTransform_SweepHitResult4;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult5 = CallFunc_K2_SetWorldTransform_SweepHitResult5;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.Temp_assetclass_Variable2 = Temp_assetclass_Variable2;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.CallFunc_Lerp_ReturnValue3 = CallFunc_Lerp_ReturnValue3;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_CardPackDestroyComplete_ReturnValue = CallFunc_CardPackDestroyComplete_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue4 = CallFunc_Lerp_ReturnValue4;
	Parms.CallFunc_Lerp_ReturnValue5 = CallFunc_Lerp_ReturnValue5;
	Parms.CallFunc_Lerp_ReturnValue6 = CallFunc_Lerp_ReturnValue6;
	Parms.CallFunc_Lerp_ReturnValue7 = CallFunc_Lerp_ReturnValue7;
	Parms.CallFunc_Lerp_ReturnValue8 = CallFunc_Lerp_ReturnValue8;
	Parms.CallFunc_Lerp_ReturnValue9 = CallFunc_Lerp_ReturnValue9;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_CardPackOpeningComplete_ReturnValue = CallFunc_CardPackOpeningComplete_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue3 = CallFunc_GetVectorParameterValue_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue3 = CallFunc_Conv_LinearColorToColor_ReturnValue3;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomRotator_ReturnValue = CallFunc_RandomRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_AddComponent_ReturnValue4 = CallFunc_AddComponent_ReturnValue4;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MultiGate2_FirstRun = K2Node_MultiGate2_FirstRun;
	Parms.K2Node_MultiGate2_Data = K2Node_MultiGate2_Data;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_MultiGate3_FirstRun = K2Node_MultiGate3_FirstRun;
	Parms.K2Node_MultiGate3_Data = K2Node_MultiGate3_Data;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.K2Node_InputKeyEvent_Key4 = K2Node_InputKeyEvent_Key4;
	Parms.CallFunc_TLerp_ReturnValue3 = CallFunc_TLerp_ReturnValue3;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult6 = CallFunc_K2_SetWorldTransform_SweepHitResult6;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.K2Node_MultiGate4_FirstRun = K2Node_MultiGate4_FirstRun;
	Parms.K2Node_MultiGate4_Data = K2Node_MultiGate4_Data;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable4 = Temp_int_Array_Index_Variable4;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult7 = CallFunc_K2_SetWorldTransform_SweepHitResult7;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.Temp_int_Loop_Counter_Variable4 = Temp_int_Loop_Counter_Variable4;
	Parms.CallFunc_Less_IntInt_ReturnValue4 = CallFunc_Less_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
