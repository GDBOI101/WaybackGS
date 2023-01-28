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


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Melee_Color_Set                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Melee_Effect_Color");

	Params::APlayerPawn_Athena_Generic_C_Melee_Effect_Color_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = Parms.Melee_Color_Set;

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Are the wind and water RTT passes enabled");

	Params::APlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params Parms;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::DisableWaterLevelTick()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "DisableWaterLevelTick");

	Params::APlayerPawn_Athena_Generic_C_DisableWaterLevelTick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetAdrenalineRushVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable3                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::SetAdrenalineRushVisibility(bool Visible, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, int32 Temp_int_Array_Index_Variable, const struct FTransform& Temp_struct_Variable3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "SetAdrenalineRushVisibility");

	Params::APlayerPawn_Athena_Generic_C_SetAdrenalineRushVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_On_Player_Built_Floor
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()

void APlayerPawn_Athena_Generic_C::OnRep_On_Player_Built_Floor(const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnRep_On_Player_Built_Floor");

	Params::APlayerPawn_Athena_Generic_C_OnRep_On_Player_Built_Floor_Params Parms;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Setup FX Mesh Duplicates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material_to_Apply                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>Charm_MID_Array                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      Charm_Mesh                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>Head_MID_Array                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      Head_Mesh                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>Body_MID_Array                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      Body_Mesh                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Translucent_Sort_Order                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Transfer_Material_Parameters                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   CallFunc_GetBaseMaterial_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   CallFunc_GetBaseMaterial_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterial*                   CallFunc_GetBaseMaterial_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::Setup_FX_Mesh_Duplicates(class UMaterialInterface*& Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Charm_MID_Array, class USkeletalMeshComponent*& Charm_Mesh, TArray<class UMaterialInstanceDynamic*>& Head_MID_Array, class USkeletalMeshComponent*& Head_Mesh, TArray<class UMaterialInstanceDynamic*>& Body_MID_Array, class USkeletalMeshComponent*& Body_Mesh, int32 Translucent_Sort_Order, bool Transfer_Material_Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, int32 CallFunc_Array_LastIndex_ReturnValue2, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue9, int32 Temp_int_Variable, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue10, int32 Temp_int_Variable2, bool CallFunc_IsValid_ReturnValue11, int32 CallFunc_Add_IntInt_ReturnValue2, bool Temp_bool_Variable2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue2, bool CallFunc_IsValid_ReturnValue12, int32 Temp_int_Variable3, bool CallFunc_IsValid_ReturnValue13, int32 CallFunc_Add_IntInt_ReturnValue3, bool Temp_bool_Variable3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue3, bool CallFunc_IsValid_ReturnValue14, int32 CallFunc_Array_LastIndex_ReturnValue4, int32 CallFunc_Min_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue15, int32 CallFunc_Array_LastIndex_ReturnValue5, int32 CallFunc_Array_LastIndex_ReturnValue6, int32 CallFunc_Min_ReturnValue2, int32 CallFunc_Min_ReturnValue3, int32 K2Node_Select_Default, int32 K2Node_Select2_Default, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue2, class UMaterialInterface* CallFunc_Array_Get_Item2, class UMaterialInterface* CallFunc_Array_Get_Item3, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic2, bool K2Node_DynamicCast_bSuccess2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic3, bool K2Node_DynamicCast_bSuccess3, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue2, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue3, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue2, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue3, int32 K2Node_Select3_Default, bool CallFunc_LessEqual_IntInt_ReturnValue3)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Setup FX Mesh Duplicates");

	Params::APlayerPawn_Athena_Generic_C_Setup_FX_Mesh_Duplicates_Params Parms;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Charm_MID_Array = Charm_MID_Array;
	Parms.Charm_Mesh = Charm_Mesh;
	Parms.Head_MID_Array = Head_MID_Array;
	Parms.Head_Mesh = Head_Mesh;
	Parms.Body_MID_Array = Body_MID_Array;
	Parms.Body_Mesh = Body_Mesh;
	Parms.Translucent_Sort_Order = Translucent_Sort_Order;
	Parms.Transfer_Material_Parameters = Transfer_Material_Parameters;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue3 = CallFunc_Array_LastIndex_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue2 = CallFunc_GetSkeletalMeshForPartType_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue3 = CallFunc_GetSkeletalMeshForPartType_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.CallFunc_Array_LastIndex_ReturnValue4 = CallFunc_Array_LastIndex_ReturnValue4;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;
	Parms.CallFunc_GetBaseMaterial_ReturnValue = CallFunc_GetBaseMaterial_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue15 = CallFunc_IsValid_ReturnValue15;
	Parms.CallFunc_Array_LastIndex_ReturnValue5 = CallFunc_Array_LastIndex_ReturnValue5;
	Parms.CallFunc_Array_LastIndex_ReturnValue6 = CallFunc_Array_LastIndex_ReturnValue6;
	Parms.CallFunc_Min_ReturnValue2 = CallFunc_Min_ReturnValue2;
	Parms.CallFunc_Min_ReturnValue3 = CallFunc_Min_ReturnValue3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic2 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic3 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue2 = CallFunc_K2_GetTextureParameterValue_ReturnValue2;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue3 = CallFunc_K2_GetTextureParameterValue_ReturnValue3;
	Parms.CallFunc_GetBaseMaterial_ReturnValue2 = CallFunc_GetBaseMaterial_ReturnValue2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue2 = CallFunc_NotEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_GetBaseMaterial_ReturnValue3 = CallFunc_GetBaseMaterial_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue3 = CallFunc_NotEqual_ObjectObject_ReturnValue3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCustomPartType     BodyType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Material_to_Apply                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>Empty_MID_Array                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              TranslucentSortPriority                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPoseableMeshComponent*      PoseableMesh                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPoseableMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*       K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(enum class EFortCustomPartType BodyType, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, class UPoseableMeshComponent*& PoseableMesh, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 Temp_int_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable2, bool Temp_bool_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue2, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FTransform& Temp_struct_Variable, bool Temp_bool_Variable2, class UPoseableMeshComponent* CallFunc_AddComponent_ReturnValue, class USkinnedMeshComponent* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Create and Duplicate Effect Poseable Skeletal Mesh");

	Params::APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params Parms;
	Parms.BodyType = BodyType;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = Empty_MID_Array;
	Parms.TranslucentSortPriority = TranslucentSortPriority;
	Parms.PoseableMesh = PoseableMesh;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ToggleShieldVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable2                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable3                                            (ConstParm, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::ToggleShieldVisibility(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, const struct FTransform& Temp_struct_Variable3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "ToggleShieldVisibility");

	Params::APlayerPawn_Athena_Generic_C_ToggleShieldVisibility_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue2 = CallFunc_AddComponent_ReturnValue2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_AddComponent_ReturnValue3 = CallFunc_AddComponent_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Master                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*       MasterToUse                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_GetAttachParent_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master, class USkinnedMeshComponent* MasterToUse, class FName CallFunc_GetAttachSocketName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "SlaveAMeshToTheBody");

	Params::APlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody_Params Parms;
	Parms.Mesh = Mesh;
	Parms.Master = Master;
	Parms.MasterToUse = MasterToUse;
	Parms.CallFunc_GetAttachSocketName_ReturnValue = CallFunc_GetAttachSocketName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetAttachParent_ReturnValue = CallFunc_GetAttachParent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetShieldMids_InternalLoop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Highlight_Cracks                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Highlight_Cracks                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Push                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Push                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*>NewParam1                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>& NewParam1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "SetShieldMids_InternalLoop");

	Params::APlayerPawn_Athena_Generic_C_SetShieldMids_InternalLoop_Params Parms;
	Parms.Highlight_Cracks = Highlight_Cracks;
	Parms.Set_Highlight_Cracks = Set_Highlight_Cracks;
	Parms.Push = Push;
	Parms.Set_Push = Set_Push;
	Parms.NewParam1 = NewParam1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetShieldMids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Highlight_Cracks                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Highlight_Cracks                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Push                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set_Push                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "SetShieldMids");

	Params::APlayerPawn_Athena_Generic_C_SetShieldMids_Params Parms;
	Parms.Highlight_Cracks = Highlight_Cracks;
	Parms.Set_Highlight_Cracks = Set_Highlight_Cracks;
	Parms.Push = Push;
	Parms.Set_Push = Set_Push;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FindShieldOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::FindShieldOpacity(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue2, float CallFunc_FMax_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "FindShieldOpacity");

	Params::APlayerPawn_Athena_Generic_C_FindShieldOpacity_Params Parms;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue2 = CallFunc_FMax_ReturnValue2;
	Parms.CallFunc_FMax_ReturnValue3 = CallFunc_FMax_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCustomPartType     BodyType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      DuplicatedSkeletalMeshComponent                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Material_to_Apply                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>Empty_MID_Array                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              TranslucentSortPriority                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(enum class EFortCustomPartType BodyType, class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue3, int32 Temp_int_Variable, bool Temp_bool_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FTransform& Temp_struct_Variable, bool Temp_bool_Variable2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class USkeletalMeshComponent* K2Node_Select2_Default, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, bool CallFunc_LessEqual_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Create and Duplicate Effect Skeletal Meshes Parent");

	Params::APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params Parms;
	Parms.BodyType = BodyType;
	Parms.DuplicatedSkeletalMeshComponent = DuplicatedSkeletalMeshComponent;
	Parms.Material_to_Apply = Material_to_Apply;
	Parms.Empty_MID_Array = Empty_MID_Array;
	Parms.TranslucentSortPriority = TranslucentSortPriority;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::UserConstructionScript(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue2)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "UserConstructionScript");

	Params::APlayerPawn_Athena_Generic_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CapsuleFadeTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::CapsuleFadeTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "CapsuleFadeTL__FinishedFunc");

	Params::APlayerPawn_Athena_Generic_C_CapsuleFadeTL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CapsuleFadeTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::CapsuleFadeTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "CapsuleFadeTL__UpdateFunc");

	Params::APlayerPawn_Athena_Generic_C_CapsuleFadeTL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.HealthSweep__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::HealthSweep__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "HealthSweep__FinishedFunc");

	Params::APlayerPawn_Athena_Generic_C_HealthSweep__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.HealthSweep__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::HealthSweep__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "HealthSweep__UpdateFunc");

	Params::APlayerPawn_Athena_Generic_C_HealthSweep__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield Regen Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Shield_Regen_Timeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Shield Regen Timeline__FinishedFunc");

	Params::APlayerPawn_Athena_Generic_C_Shield_Regen_Timeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield Regen Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Shield_Regen_Timeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Shield Regen Timeline__UpdateFunc");

	Params::APlayerPawn_Athena_Generic_C_Shield_Regen_Timeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_ShatterTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Shield_ShatterTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Shield_ShatterTimeline__FinishedFunc");

	Params::APlayerPawn_Athena_Generic_C_Shield_ShatterTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_ShatterTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Shield_ShatterTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Shield_ShatterTimeline__UpdateFunc");

	Params::APlayerPawn_Athena_Generic_C_Shield_ShatterTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_DamageTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Shield_DamageTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Shield_DamageTimeline__FinishedFunc");

	Params::APlayerPawn_Athena_Generic_C_Shield_DamageTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_DamageTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Shield_DamageTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Shield_DamageTimeline__UpdateFunc");

	Params::APlayerPawn_Athena_Generic_C_Shield_DamageTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Full Shield Health__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Full_Shield_Health__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Full Shield Health__FinishedFunc");

	Params::APlayerPawn_Athena_Generic_C_Full_Shield_Health__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Full Shield Health__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Full_Shield_Health__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Full Shield Health__UpdateFunc");

	Params::APlayerPawn_Athena_Generic_C_Full_Shield_Health__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::MeleeSwingRight()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "MeleeSwingRight");

	Params::APlayerPawn_Athena_Generic_C_MeleeSwingRight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::MeleeSwingLeft()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "MeleeSwingLeft");

	Params::APlayerPawn_Athena_Generic_C_MeleeSwingLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void APlayerPawn_Athena_Generic_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnDamagePlayEffects");

	Params::APlayerPawn_Athena_Generic_C_OnDamagePlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::OnLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnLanded");

	Params::APlayerPawn_Athena_Generic_C_OnLanded_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void APlayerPawn_Athena_Generic_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnDeathPlayEffects");

	Params::APlayerPawn_Athena_Generic_C_OnDeathPlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnWeaponEquipped");

	Params::APlayerPawn_Athena_Generic_C_OnWeaponEquipped_Params Parms;
	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "ReceiveTick");

	Params::APlayerPawn_Athena_Generic_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::FootStepLeft()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "FootStepLeft");

	Params::APlayerPawn_Athena_Generic_C_FootStepLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::FootStepRight()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "FootStepRight");

	Params::APlayerPawn_Athena_Generic_C_FootStepRight_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::OnCharacterPartsReinitialized()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnCharacterPartsReinitialized");

	Params::APlayerPawn_Athena_Generic_C_OnCharacterPartsReinitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetFirstPersonCamera
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewUseFirstPersonCamera                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::SetFirstPersonCamera(bool bNewUseFirstPersonCamera)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "SetFirstPersonCamera");

	Params::APlayerPawn_Athena_Generic_C_SetFirstPersonCamera_Params Parms;
	Parms.bNewUseFirstPersonCamera = bNewUseFirstPersonCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.GravitySphere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_GravitySphere(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.GravitySphere");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_GravitySphere_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.InternalSetFirstPersonCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewUseFirstPersonCamera                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "InternalSetFirstPersonCamera");

	Params::APlayerPawn_Athena_Generic_C_InternalSetFirstPersonCamera_Params Parms;
	Parms.NewUseFirstPersonCamera = NewUseFirstPersonCamera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Abilities_Activation_DBNOResurrect(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Abilities.Activation.DBNOResurrect");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnBaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      NewBase                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::OnBaseChanged(class AActor* NewBase)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnBaseChanged");

	Params::APlayerPawn_Athena_Generic_C_OnBaseChanged_Params Parms;
	Parms.NewBase = NewBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::ReceivePossessed(class AController* NewController)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "ReceivePossessed");

	Params::APlayerPawn_Athena_Generic_C_ReceivePossessed_Params Parms;
	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CleanupGravitySphereFootEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::CleanupGravitySphereFootEffects()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "CleanupGravitySphereFootEffects");

	Params::APlayerPawn_Athena_Generic_C_CleanupGravitySphereFootEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "ReceiveDestroyed");

	Params::APlayerPawn_Athena_Generic_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ClientBindWeaponSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "ClientBindWeaponSwap");

	Params::APlayerPawn_Athena_Generic_C_ClientBindWeaponSwap_Params Parms;
	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindWeaponSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDuration                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::BindWeaponSwap(float InDuration)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "BindWeaponSwap");

	Params::APlayerPawn_Athena_Generic_C_BindWeaponSwap_Params Parms;
	Parms.InDuration = InDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MultiSwapWeapon
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 New                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 Prev                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "MultiSwapWeapon");

	Params::APlayerPawn_Athena_Generic_C_MultiSwapWeapon_Params Parms;
	Parms.New = New;
	Parms.Prev = Prev;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UnBindWeaponSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::UnBindWeaponSwap()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "UnBindWeaponSwap");

	Params::APlayerPawn_Athena_Generic_C_UnBindWeaponSwap_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MultiEndSwap
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 CurrentWeapon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::MultiEndSwap(class AFortWeapon* CurrentWeapon)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "MultiEndSwap");

	Params::APlayerPawn_Athena_Generic_C_MultiEndSwap_Params Parms;
	Parms.CurrentWeapon = CurrentWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Clean up DBNO fx
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Clean_up_DBNO_fx()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Clean up DBNO fx");

	Params::APlayerPawn_Athena_Generic_C_Clean_up_DBNO_fx_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm)

void APlayerPawn_Athena_Generic_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnDeathServer");

	Params::APlayerPawn_Athena_Generic_C_OnDeathServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Entered_WaterVolume()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Entered WaterVolume");

	Params::APlayerPawn_Athena_Generic_C_Entered_WaterVolume_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::CharacterDestroyed(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "CharacterDestroyed");

	Params::APlayerPawn_Athena_Generic_C_CharacterDestroyed_Params Parms;
	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::BindOnDestroyed()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "BindOnDestroyed");

	Params::APlayerPawn_Athena_Generic_C_BindOnDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FadeOutCapsuleShadow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::FadeOutCapsuleShadow()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "FadeOutCapsuleShadow");

	Params::APlayerPawn_Athena_Generic_C_FadeOutCapsuleShadow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Athena_Generic_C::AnimTrailsNotify(bool bActive)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "AnimTrailsNotify");

	Params::APlayerPawn_Athena_Generic_C_AnimTrailsNotify_Params Parms;
	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             ParticleSystemReference                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FirstSocketName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SecondSocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, class FName FirstSocketName, class FName SecondSocketName, float Width)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "AnimTrailsSetup");

	Params::APlayerPawn_Athena_Generic_C_AnimTrailsSetup_Params Parms;
	Parms.ParticleSystemReference = ParticleSystemReference;
	Parms.FirstSocketName = FirstSocketName;
	Parms.SecondSocketName = SecondSocketName;
	Parms.Width = Width;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::AnimTrailsDisable()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "AnimTrailsDisable");

	Params::APlayerPawn_Athena_Generic_C_AnimTrailsDisable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLand_CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::OnLand_CE()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "OnLand_CE");

	Params::APlayerPawn_Athena_Generic_C_OnLand_CE_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Test Adrenaline Rush
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Athena_Generic_C::Test_Adrenaline_Rush()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "Test Adrenaline Rush");

	Params::APlayerPawn_Athena_Generic_C_Test_Adrenaline_Rush_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Generic_AdrenalineRush_PeriodicHeal(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Generic.AdrenalineRush.PeriodicHeal");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Generic_AdrenalineRush_PeriodicHeal_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Generic_AdrenalineRush_DirectHeal(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Generic.AdrenalineRush.DirectHeal");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Damage_Shielded(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Damage.Shielded");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Shield_Destroyed(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Shield.Destroyed");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.FullyCharged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Shield_FullyCharged(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Shield.FullyCharged");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Shield_FullyCharged_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference)

void APlayerPawn_Athena_Generic_C::GameplayCue_Shield_Reapplied(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "GameplayCue.Shield.Reapplied");

	Params::APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                     CallFunc_BeginDrawCanvasToRenderTarget_Canvas                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_BeginDrawCanvasToRenderTarget_Size                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrawToRenderTargetContext  CallFunc_BeginDrawCanvasToRenderTarget_Context                   (NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array6                                          (ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array7                                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue7                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags3                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum3                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo3                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext3                                      ()
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortWeaponRanged*           K2Node_DynamicCast_AsFort_Weapon_Ranged                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags2                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum2                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo2                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext2                                      ()
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_Event_NewWeapon                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_Event_PrevWeapon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue3                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters10                             (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters9                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue8                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewUseFirstPersonCamera                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Ranged_Generic_C*         K2Node_DynamicCast_AsB_Ranged_Generic                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeap_BuildingToolBase*  K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingFirstPersonCamera_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeap_BuildingToolBase*  K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters8                              (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NewUseFirstPersonCamera                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters7                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue2                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue5                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWeaponHolstered_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_NewBase                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingSMActor*            K2Node_DynamicCast_AsBuilding_SMActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerBuilt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue9                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue44                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue10                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue4                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWindManager*            CallFunc_GetWindManager_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWindManager_C*              K2Node_DynamicCast_AsWind_Manager                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 K2Node_CustomEvent_NewWeapon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_PrevWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InDuration                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_New                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_Prev                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue45                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue46                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 K2Node_CustomEvent_CurrentWeapon                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue47                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue11                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue48                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue49                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue50                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue51                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue52                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class AController*                 CallFunc_GetController_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess13                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue53                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue54                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue55                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam2     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam3     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam4     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess14                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bActive                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_Event_ParticleSystemReference                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FirstSocketName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_SecondSocketName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Width                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue56                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue13                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess15                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult3                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult4                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue57                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue58                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue5                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue6                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult5                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue3                               (IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue2                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue3                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue6                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters6                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum5_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters5                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum6_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue5                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue6                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue2                       (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue14                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEmitterCameraLensEffectBase*CallFunc_SpawnCameraLensEffect_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_PlayerHealthDamage_CameraLensEffect_C*K2Node_DynamicCast_AsB_Player_Health_Damage_Camera_Lens_Effect   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess16                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_PlayerShieldDamage_CameraLensEffect_C*K2Node_DynamicCast_AsB_Player_Shield_Damage_Camera_Lens_Effect   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess17                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult2          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult3          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess18                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue11                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayLocalAnimMontage_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess19                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortEmitterCameraLensEffectDirectional*CallFunc_SpawnCameraLensEffectDirectional_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute2(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute3(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute4(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal2                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal2                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart2                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue3                       (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult6                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_FloatFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue7                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters4                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters3                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum7_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum8_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum9_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicForceFeedbackActionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue13                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue59                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue60                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess20                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue14                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Athena_Generic_C::ExecuteUbergraph_PlayerPawn_Athena_Generic(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, const struct FVector& CallFunc_GetVelocity_ReturnValue2, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, bool CallFunc_Greater_FloatFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Less_FloatFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_GetNumMaterials_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue3, bool Temp_bool_IsClosed_Variable3, int32 Temp_int_Variable2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_IsDedicatedServer_ReturnValue2, int32 Temp_int_Variable3, float CallFunc_MakeLiteralFloat_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue4, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue2, bool CallFunc_IsValid_ReturnValue7, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_GetNumMaterials_ReturnValue4, int32 CallFunc_Subtract_IntInt_ReturnValue4, bool CallFunc_IsValid_ReturnValue8, bool Temp_bool_Has_Been_Initd_Variable3, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, int32 CallFunc_GetNumMaterials_ReturnValue5, int32 CallFunc_Subtract_IntInt_ReturnValue5, bool Temp_bool_IsClosed_Variable4, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue3, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue3, bool CallFunc_IsValid_ReturnValue11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic2, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetNumMaterials_ReturnValue6, int32 CallFunc_Subtract_IntInt_ReturnValue6, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue13, bool CallFunc_IsValid_ReturnValue14, int32 CallFunc_GetNumMaterials_ReturnValue7, int32 CallFunc_Subtract_IntInt_ReturnValue7, bool Temp_bool_Has_Been_Initd_Variable4, float CallFunc_MakeLiteralFloat_ReturnValue4, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array4, bool CallFunc_HasAuthority_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue4, bool CallFunc_IsValid_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue4, int32 CallFunc_GetNumMaterials_ReturnValue8, int32 CallFunc_Subtract_IntInt_ReturnValue8, bool CallFunc_IsValid_ReturnValue16, bool Temp_bool_IsClosed_Variable5, bool CallFunc_IsValid_ReturnValue17, bool CallFunc_IsValid_ReturnValue18, int32 CallFunc_GetNumMaterials_ReturnValue9, int32 CallFunc_Subtract_IntInt_ReturnValue9, bool Temp_bool_Has_Been_Initd_Variable5, bool Temp_bool_Has_Been_Initd_Variable6, float CallFunc_MakeLiteralFloat_ReturnValue5, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array5, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue5, bool Temp_bool_IsClosed_Variable6, bool CallFunc_IsValid_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_GetNumMaterials_ReturnValue10, int32 CallFunc_Subtract_IntInt_ReturnValue10, bool CallFunc_IsValid_ReturnValue20, bool CallFunc_IsValid_ReturnValue21, bool CallFunc_IsValid_ReturnValue22, int32 CallFunc_GetNumMaterials_ReturnValue11, int32 CallFunc_Subtract_IntInt_ReturnValue11, int32 Temp_int_Variable4, int32 CallFunc_Add_IntInt_ReturnValue5, float CallFunc_MakeLiteralFloat_ReturnValue6, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array6, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue6, bool Temp_bool_Has_Been_Initd_Variable7, bool CallFunc_IsValid_ReturnValue23, int32 CallFunc_Array_Add_ReturnValue6, int32 CallFunc_GetNumMaterials_ReturnValue12, int32 CallFunc_Subtract_IntInt_ReturnValue12, bool CallFunc_IsValid_ReturnValue24, bool CallFunc_IsValid_ReturnValue25, bool CallFunc_IsValid_ReturnValue26, int32 CallFunc_GetNumMaterials_ReturnValue13, int32 CallFunc_Subtract_IntInt_ReturnValue13, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue3, bool Temp_bool_IsClosed_Variable7, bool Temp_bool_Variable3, float CallFunc_MakeLiteralFloat_ReturnValue7, TArray<class UMaterialInterface*>& K2Node_MakeArray_Array7, int32 CallFunc_Array_Add_ReturnValue7, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue7, bool CallFunc_IsValid_ReturnValue27, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue8, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic3, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_GetNumMaterials_ReturnValue14, int32 CallFunc_Subtract_IntInt_ReturnValue14, bool CallFunc_LessEqual_IntInt_ReturnValue4, bool CallFunc_IsValid_ReturnValue28, bool CallFunc_IsDedicatedServer_ReturnValue3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue8, bool CallFunc_IsValid_ReturnValue29, bool CallFunc_IsValid_ReturnValue30, bool CallFunc_IsValid_ReturnValue31, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue9, bool CallFunc_IsValid_ReturnValue32, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue10, bool CallFunc_IsValid_ReturnValue33, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue11, bool CallFunc_IsValid_ReturnValue34, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12, bool CallFunc_IsValid_ReturnValue35, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue13, bool CallFunc_IsValid_ReturnValue36, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue14, bool CallFunc_IsValid_ReturnValue37, bool CallFunc_IsDedicatedServer_ReturnValue4, bool CallFunc_IsDedicatedServer_ReturnValue5, bool CallFunc_IsDedicatedServer_ReturnValue6, bool CallFunc_IsDedicatedServer_ReturnValue7, float K2Node_Event_Damage3, const struct FGameplayTagContainer& K2Node_Event_DamageTags3, const struct FVector& K2Node_Event_Momentum3, const struct FHitResult& K2Node_Event_HitInfo3, class AFortPawn* K2Node_Event_InstigatedBy3, class AActor* K2Node_Event_DamageCauser3, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext3, const struct FHitResult& K2Node_Event_Hit, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float K2Node_Event_Damage2, const struct FGameplayTagContainer& K2Node_Event_DamageTags2, const struct FVector& K2Node_Event_Momentum2, const struct FHitResult& K2Node_Event_HitInfo2, class AFortPawn* K2Node_Event_InstigatedBy2, class AActor* K2Node_Event_DamageCauser2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, int32 Temp_int_Variable5, class AFortWeapon* K2Node_Event_NewWeapon, class AFortWeapon* K2Node_Event_PrevWeapon, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue9, bool CallFunc_LessEqual_IntInt_ReturnValue5, int32 CallFunc_Add_IntInt_ReturnValue6, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue3, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_MakeVector_ReturnValue3, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType10, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters10, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType9, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters9, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue8, bool K2Node_Event_bNewUseFirstPersonCamera, class AB_Ranged_Generic_C* K2Node_DynamicCast_AsB_Ranged_Generic, bool K2Node_DynamicCast_bSuccess5, class AController* CallFunc_GetController_ReturnValue, class AFortWeap_BuildingToolBase* K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base, bool K2Node_DynamicCast_bSuccess6, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, class AFortWeap_BuildingToolBase* K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base2, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_IsValid_ReturnValue38, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType8, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters8, bool CallFunc_IsValid_ReturnValue39, bool K2Node_SwitchEnum3_CmpSuccess, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_IsValid_ReturnValue40, bool CallFunc_IsValid_ReturnValue41, bool K2Node_CustomEvent_NewUseFirstPersonCamera, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType7, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters7, bool K2Node_SwitchEnum4_CmpSuccess, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue5, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, bool CallFunc_IsWeaponHolstered_ReturnValue, class AActor* K2Node_Event_NewBase, bool CallFunc_Not_PreBool_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_IsPlayerBuilt_ReturnValue, bool CallFunc_IsValid_ReturnValue42, bool CallFunc_IsDedicatedServer_ReturnValue9, class AController* K2Node_Event_NewController, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue43, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2, bool CallFunc_IsValid_ReturnValue44, bool CallFunc_IsDedicatedServer_ReturnValue10, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class AController* CallFunc_GetController_ReturnValue2, const struct FVector& CallFunc_GetVelocity_ReturnValue4, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess10, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, bool CallFunc_IsLocalController_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, float CallFunc_Lerp_ReturnValue, class AWindManager_C* K2Node_DynamicCast_AsWind_Manager, bool K2Node_DynamicCast_bSuccess11, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, float K2Node_CustomEvent_InDuration, class AFortWeapon* K2Node_CustomEvent_New, class AFortWeapon* K2Node_CustomEvent_Prev, bool CallFunc_IsValid_ReturnValue45, bool CallFunc_IsValid_ReturnValue46, class AFortWeapon* K2Node_CustomEvent_CurrentWeapon, bool CallFunc_IsValid_ReturnValue47, bool CallFunc_IsDedicatedServer_ReturnValue11, bool CallFunc_IsDedicatedServer_ReturnValue12, int32 Temp_int_Variable6, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue10, bool CallFunc_LessEqual_IntInt_ReturnValue6, int32 CallFunc_Add_IntInt_ReturnValue7, bool CallFunc_IsValid_ReturnValue48, bool CallFunc_IsValid_ReturnValue49, bool CallFunc_IsValid_ReturnValue50, int32 Temp_int_Array_Index_Variable2, bool CallFunc_IsValid_ReturnValue51, bool CallFunc_IsValid_ReturnValue52, int32 Temp_int_Variable7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue7, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic4, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_LessEqual_IntInt_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue8, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AController* CallFunc_GetController_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller3, bool K2Node_DynamicCast_bSuccess13, bool Temp_bool_Variable4, bool CallFunc_IsValid_ReturnValue53, bool CallFunc_IsValid_ReturnValue54, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_IsValid_ReturnValue55, int32 CallFunc_Add_IntInt_ReturnValue9, int32 Temp_int_Variable8, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue8, int32 CallFunc_Array_Add_ReturnValue11, bool CallFunc_LessEqual_IntInt_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue10, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam2, bool CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam3, bool CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam4, class AActor* K2Node_CustomEvent_DestroyedActor, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess14, bool Temp_bool_Variable5, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool K2Node_Event_bActive, bool CallFunc_Less_IntInt_ReturnValue, class UParticleSystem* K2Node_Event_ParticleSystemReference, class FName K2Node_Event_FirstSocketName, class FName K2Node_Event_SecondSocketName, float K2Node_Event_Width, bool CallFunc_IsValid_ReturnValue56, int32 CallFunc_Add_IntInt_ReturnValue11, bool CallFunc_IsDedicatedServer_ReturnValue13, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool Temp_bool_Has_Been_Initd_Variable8, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult2, int32 Temp_int_Variable9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue9, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic5, bool K2Node_DynamicCast_bSuccess15, bool CallFunc_LessEqual_IntInt_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue12, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult4, bool CallFunc_IsValid_ReturnValue57, bool CallFunc_IsValid_ReturnValue58, const struct FVector& CallFunc_GetVelocity_ReturnValue5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue6, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult5, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue3, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FVector& CallFunc_GetVelocity_ReturnValue6, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, int32 Temp_int_Array_Index_Variable3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType6, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters6, bool K2Node_SwitchEnum5_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters5, bool K2Node_SwitchEnum6_CmpSuccess, class FName Temp_name_Variable, class FName Temp_name_Variable2, class FName Temp_name_Variable3, float CallFunc_GetScalarParameterValue_ReturnValue2, int32 CallFunc_Round_ReturnValue2, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue3, class FName Temp_name_Variable4, int32 CallFunc_Round_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, int32 CallFunc_Array_Add_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue16, int32 CallFunc_Array_Add_ReturnValue17, int32 CallFunc_Array_Add_ReturnValue18, int32 CallFunc_Array_Add_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue20, int32 CallFunc_Array_Add_ReturnValue21, int32 Temp_int_Variable10, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue5, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue13, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue6, int32 Temp_int_Variable11, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue10, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue22, bool CallFunc_LessEqual_IntInt_ReturnValue10, int32 CallFunc_Add_IntInt_ReturnValue14, bool CallFunc_IsDedicatedServer_ReturnValue14, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue2, class AB_PlayerHealthDamage_CameraLensEffect_C* K2Node_DynamicCast_AsB_Player_Health_Damage_Camera_Lens_Effect, bool K2Node_DynamicCast_bSuccess16, class AB_PlayerShieldDamage_CameraLensEffect_C* K2Node_DynamicCast_AsB_Player_Shield_Damage_Camera_Lens_Effect, bool K2Node_DynamicCast_bSuccess17, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult3, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool Temp_bool_Variable6, int32 Temp_int_Variable12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue23, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic6, bool K2Node_DynamicCast_bSuccess18, int32 CallFunc_Array_Add_ReturnValue24, bool CallFunc_LessEqual_IntInt_ReturnValue11, int32 CallFunc_Add_IntInt_ReturnValue15, bool Temp_bool_Variable7, bool Temp_bool_Variable8, int32 K2Node_Select_Default, bool Temp_bool_IsClosed_Variable8, bool Temp_bool_IsClosed_Variable9, bool CallFunc_HasAnyTags_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class FName K2Node_Select2_Default, int32 Temp_int_Variable13, float CallFunc_PlayLocalAnimMontage_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue25, bool CallFunc_LessEqual_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue16, class AController* CallFunc_GetController_ReturnValue4, class UClass* K2Node_Select3_Default, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller4, bool K2Node_DynamicCast_bSuccess19, class AFortEmitterCameraLensEffectDirectional* CallFunc_SpawnCameraLensEffectDirectional_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute2, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue3, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute3, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue3, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute4, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue4, bool CallFunc_BreakHitResult_bBlockingHit2, bool CallFunc_BreakHitResult_bInitialOverlap2, float CallFunc_BreakHitResult_Time2, const struct FVector& CallFunc_BreakHitResult_Location2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint2, const struct FVector& CallFunc_BreakHitResult_Normal2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, class AActor* CallFunc_BreakHitResult_HitActor2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent2, class FName CallFunc_BreakHitResult_HitBoneName2, int32 CallFunc_BreakHitResult_HitItem2, int32 CallFunc_BreakHitResult_FaceIndex2, const struct FVector& CallFunc_BreakHitResult_TraceStart2, const struct FVector& CallFunc_BreakHitResult_TraceEnd2, float CallFunc_Divide_FloatFloat_ReturnValue4, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue4, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult6, bool CallFunc_Less_FloatFloat_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Lerp_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, bool K2Node_SwitchEnum7_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum8_CmpSuccess, bool K2Node_SwitchEnum9_CmpSuccess, int32 Temp_int_Variable14, enum class EDynamicForceFeedbackAction Temp_byte_Variable, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue26, bool CallFunc_LessEqual_IntInt_ReturnValue13, int32 CallFunc_Add_IntInt_ReturnValue17, bool CallFunc_IsValid_ReturnValue59, bool CallFunc_IsValid_ReturnValue60, int32 Temp_int_Variable15, bool Temp_bool_Variable9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue27, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue14, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic7, bool K2Node_DynamicCast_bSuccess20, bool CallFunc_LessEqual_IntInt_ReturnValue14, int32 CallFunc_Array_Add_ReturnValue28, int32 CallFunc_Add_IntInt_ReturnValue18, bool Temp_bool_Has_Been_Initd_Variable9, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, bool CallFunc_IsPlaying_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_C", "ExecuteUbergraph_PlayerPawn_Athena_Generic");

	Params::APlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_GetVelocity_ReturnValue2 = CallFunc_GetVelocity_ReturnValue2;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_Greater_FloatFloat_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue4 = CallFunc_Greater_FloatFloat_ReturnValue4;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam = CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Canvas = CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Size = CallFunc_BeginDrawCanvasToRenderTarget_Size;
	Parms.CallFunc_BeginDrawCanvasToRenderTarget_Context = CallFunc_BeginDrawCanvasToRenderTarget_Context;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue2 = CallFunc_GetNumMaterials_ReturnValue2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_GetNumMaterials_ReturnValue3 = CallFunc_GetNumMaterials_ReturnValue3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue2 = CallFunc_MakeLiteralFloat_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue2 = CallFunc_GetSkeletalMeshForPartType_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_GetNumMaterials_ReturnValue4 = CallFunc_GetNumMaterials_ReturnValue4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue4 = CallFunc_Subtract_IntInt_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_GetNumMaterials_ReturnValue5 = CallFunc_GetNumMaterials_ReturnValue5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue5 = CallFunc_Subtract_IntInt_ReturnValue5;
	Parms.Temp_bool_IsClosed_Variable4 = Temp_bool_IsClosed_Variable4;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue3 = CallFunc_MakeLiteralFloat_ReturnValue3;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue3 = CallFunc_GetSkeletalMeshForPartType_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_GetMaterial_ReturnValue2 = CallFunc_GetMaterial_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic2 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetNumMaterials_ReturnValue6 = CallFunc_GetNumMaterials_ReturnValue6;
	Parms.CallFunc_Subtract_IntInt_ReturnValue6 = CallFunc_Subtract_IntInt_ReturnValue6;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.CallFunc_GetNumMaterials_ReturnValue7 = CallFunc_GetNumMaterials_ReturnValue7;
	Parms.CallFunc_Subtract_IntInt_ReturnValue7 = CallFunc_Subtract_IntInt_ReturnValue7;
	Parms.Temp_bool_Has_Been_Initd_Variable4 = Temp_bool_Has_Been_Initd_Variable4;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue4 = CallFunc_MakeLiteralFloat_ReturnValue4;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue4 = CallFunc_GetSkeletalMeshForPartType_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue15 = CallFunc_IsValid_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_GetNumMaterials_ReturnValue8 = CallFunc_GetNumMaterials_ReturnValue8;
	Parms.CallFunc_Subtract_IntInt_ReturnValue8 = CallFunc_Subtract_IntInt_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue16 = CallFunc_IsValid_ReturnValue16;
	Parms.Temp_bool_IsClosed_Variable5 = Temp_bool_IsClosed_Variable5;
	Parms.CallFunc_IsValid_ReturnValue17 = CallFunc_IsValid_ReturnValue17;
	Parms.CallFunc_IsValid_ReturnValue18 = CallFunc_IsValid_ReturnValue18;
	Parms.CallFunc_GetNumMaterials_ReturnValue9 = CallFunc_GetNumMaterials_ReturnValue9;
	Parms.CallFunc_Subtract_IntInt_ReturnValue9 = CallFunc_Subtract_IntInt_ReturnValue9;
	Parms.Temp_bool_Has_Been_Initd_Variable5 = Temp_bool_Has_Been_Initd_Variable5;
	Parms.Temp_bool_Has_Been_Initd_Variable6 = Temp_bool_Has_Been_Initd_Variable6;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue5 = CallFunc_MakeLiteralFloat_ReturnValue5;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue5 = CallFunc_GetSkeletalMeshForPartType_ReturnValue5;
	Parms.Temp_bool_IsClosed_Variable6 = Temp_bool_IsClosed_Variable6;
	Parms.CallFunc_IsValid_ReturnValue19 = CallFunc_IsValid_ReturnValue19;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.CallFunc_GetNumMaterials_ReturnValue10 = CallFunc_GetNumMaterials_ReturnValue10;
	Parms.CallFunc_Subtract_IntInt_ReturnValue10 = CallFunc_Subtract_IntInt_ReturnValue10;
	Parms.CallFunc_IsValid_ReturnValue20 = CallFunc_IsValid_ReturnValue20;
	Parms.CallFunc_IsValid_ReturnValue21 = CallFunc_IsValid_ReturnValue21;
	Parms.CallFunc_IsValid_ReturnValue22 = CallFunc_IsValid_ReturnValue22;
	Parms.CallFunc_GetNumMaterials_ReturnValue11 = CallFunc_GetNumMaterials_ReturnValue11;
	Parms.CallFunc_Subtract_IntInt_ReturnValue11 = CallFunc_Subtract_IntInt_ReturnValue11;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue6 = CallFunc_MakeLiteralFloat_ReturnValue6;
	Parms.K2Node_MakeArray_Array6 = K2Node_MakeArray_Array6;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue6 = CallFunc_GetSkeletalMeshForPartType_ReturnValue6;
	Parms.Temp_bool_Has_Been_Initd_Variable7 = Temp_bool_Has_Been_Initd_Variable7;
	Parms.CallFunc_IsValid_ReturnValue23 = CallFunc_IsValid_ReturnValue23;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_GetNumMaterials_ReturnValue12 = CallFunc_GetNumMaterials_ReturnValue12;
	Parms.CallFunc_Subtract_IntInt_ReturnValue12 = CallFunc_Subtract_IntInt_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue24 = CallFunc_IsValid_ReturnValue24;
	Parms.CallFunc_IsValid_ReturnValue25 = CallFunc_IsValid_ReturnValue25;
	Parms.CallFunc_IsValid_ReturnValue26 = CallFunc_IsValid_ReturnValue26;
	Parms.CallFunc_GetNumMaterials_ReturnValue13 = CallFunc_GetNumMaterials_ReturnValue13;
	Parms.CallFunc_Subtract_IntInt_ReturnValue13 = CallFunc_Subtract_IntInt_ReturnValue13;
	Parms.CallFunc_GetMaterial_ReturnValue3 = CallFunc_GetMaterial_ReturnValue3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;
	Parms.Temp_bool_IsClosed_Variable7 = Temp_bool_IsClosed_Variable7;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue7 = CallFunc_MakeLiteralFloat_ReturnValue7;
	Parms.K2Node_MakeArray_Array7 = K2Node_MakeArray_Array7;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue7 = CallFunc_GetSkeletalMeshForPartType_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue27 = CallFunc_IsValid_ReturnValue27;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_GetMaterial_ReturnValue4 = CallFunc_GetMaterial_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic3 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetNumMaterials_ReturnValue14 = CallFunc_GetNumMaterials_ReturnValue14;
	Parms.CallFunc_Subtract_IntInt_ReturnValue14 = CallFunc_Subtract_IntInt_ReturnValue14;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue4 = CallFunc_LessEqual_IntInt_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue28 = CallFunc_IsValid_ReturnValue28;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue8 = CallFunc_GetSkeletalMeshForPartType_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue29 = CallFunc_IsValid_ReturnValue29;
	Parms.CallFunc_IsValid_ReturnValue30 = CallFunc_IsValid_ReturnValue30;
	Parms.CallFunc_IsValid_ReturnValue31 = CallFunc_IsValid_ReturnValue31;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue9 = CallFunc_GetSkeletalMeshForPartType_ReturnValue9;
	Parms.CallFunc_IsValid_ReturnValue32 = CallFunc_IsValid_ReturnValue32;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue10 = CallFunc_GetSkeletalMeshForPartType_ReturnValue10;
	Parms.CallFunc_IsValid_ReturnValue33 = CallFunc_IsValid_ReturnValue33;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue11 = CallFunc_GetSkeletalMeshForPartType_ReturnValue11;
	Parms.CallFunc_IsValid_ReturnValue34 = CallFunc_IsValid_ReturnValue34;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue12 = CallFunc_GetSkeletalMeshForPartType_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue35 = CallFunc_IsValid_ReturnValue35;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue13 = CallFunc_GetSkeletalMeshForPartType_ReturnValue13;
	Parms.CallFunc_IsValid_ReturnValue36 = CallFunc_IsValid_ReturnValue36;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue14 = CallFunc_GetSkeletalMeshForPartType_ReturnValue14;
	Parms.CallFunc_IsValid_ReturnValue37 = CallFunc_IsValid_ReturnValue37;
	Parms.CallFunc_IsDedicatedServer_ReturnValue4 = CallFunc_IsDedicatedServer_ReturnValue4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue5 = CallFunc_IsDedicatedServer_ReturnValue5;
	Parms.CallFunc_IsDedicatedServer_ReturnValue6 = CallFunc_IsDedicatedServer_ReturnValue6;
	Parms.CallFunc_IsDedicatedServer_ReturnValue7 = CallFunc_IsDedicatedServer_ReturnValue7;
	Parms.K2Node_Event_Damage3 = K2Node_Event_Damage3;
	Parms.K2Node_Event_DamageTags3 = K2Node_Event_DamageTags3;
	Parms.K2Node_Event_Momentum3 = K2Node_Event_Momentum3;
	Parms.K2Node_Event_HitInfo3 = K2Node_Event_HitInfo3;
	Parms.K2Node_Event_InstigatedBy3 = K2Node_Event_InstigatedBy3;
	Parms.K2Node_Event_DamageCauser3 = K2Node_Event_DamageCauser3;
	Parms.K2Node_Event_EffectContext3 = K2Node_Event_EffectContext3;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged = K2Node_DynamicCast_AsFort_Weapon_Ranged;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_Event_Damage2 = K2Node_Event_Damage2;
	Parms.K2Node_Event_DamageTags2 = K2Node_Event_DamageTags2;
	Parms.K2Node_Event_Momentum2 = K2Node_Event_Momentum2;
	Parms.K2Node_Event_HitInfo2 = K2Node_Event_HitInfo2;
	Parms.K2Node_Event_InstigatedBy2 = K2Node_Event_InstigatedBy2;
	Parms.K2Node_Event_DamageCauser2 = K2Node_Event_DamageCauser2;
	Parms.K2Node_Event_EffectContext2 = K2Node_Event_EffectContext2;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Event_NewWeapon = K2Node_Event_NewWeapon;
	Parms.K2Node_Event_PrevWeapon = K2Node_Event_PrevWeapon;
	Parms.CallFunc_GetMaterial_ReturnValue5 = CallFunc_GetMaterial_ReturnValue5;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue5 = CallFunc_LessEqual_IntInt_ReturnValue5;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue3 = CallFunc_GetVelocity_ReturnValue3;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType10 = K2Node_GameplayCueEvent_EventType10;
	Parms.K2Node_GameplayCueEvent_Parameters10 = K2Node_GameplayCueEvent_Parameters10;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType9 = K2Node_GameplayCueEvent_EventType9;
	Parms.K2Node_GameplayCueEvent_Parameters9 = K2Node_GameplayCueEvent_Parameters9;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue8 = CallFunc_IsDedicatedServer_ReturnValue8;
	Parms.K2Node_Event_bNewUseFirstPersonCamera = K2Node_Event_bNewUseFirstPersonCamera;
	Parms.K2Node_DynamicCast_AsB_Ranged_Generic = K2Node_DynamicCast_AsB_Ranged_Generic;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base = K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_IsUsingFirstPersonCamera_ReturnValue = CallFunc_IsUsingFirstPersonCamera_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base2 = K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base2;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_IsValid_ReturnValue38 = CallFunc_IsValid_ReturnValue38;
	Parms.K2Node_GameplayCueEvent_EventType8 = K2Node_GameplayCueEvent_EventType8;
	Parms.K2Node_GameplayCueEvent_Parameters8 = K2Node_GameplayCueEvent_Parameters8;
	Parms.CallFunc_IsValid_ReturnValue39 = CallFunc_IsValid_ReturnValue39;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue40 = CallFunc_IsValid_ReturnValue40;
	Parms.CallFunc_IsValid_ReturnValue41 = CallFunc_IsValid_ReturnValue41;
	Parms.K2Node_CustomEvent_NewUseFirstPersonCamera = K2Node_CustomEvent_NewUseFirstPersonCamera;
	Parms.K2Node_GameplayCueEvent_EventType7 = K2Node_GameplayCueEvent_EventType7;
	Parms.K2Node_GameplayCueEvent_Parameters7 = K2Node_GameplayCueEvent_Parameters7;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.CallFunc_MakeRotFromX_ReturnValue2 = CallFunc_MakeRotFromX_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.CallFunc_MakeVector_ReturnValue5 = CallFunc_MakeVector_ReturnValue5;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_IsWeaponHolstered_ReturnValue = CallFunc_IsWeaponHolstered_ReturnValue;
	Parms.K2Node_Event_NewBase = K2Node_Event_NewBase;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor = K2Node_DynamicCast_AsBuilding_SMActor;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_IsPlayerBuilt_ReturnValue = CallFunc_IsPlayerBuilt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue42 = CallFunc_IsValid_ReturnValue42;
	Parms.CallFunc_IsDedicatedServer_ReturnValue9 = CallFunc_IsDedicatedServer_ReturnValue9;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue43 = CallFunc_IsValid_ReturnValue43;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue2 = CallFunc_SpawnEmitterAtLocation_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue44 = CallFunc_IsValid_ReturnValue44;
	Parms.CallFunc_IsDedicatedServer_ReturnValue10 = CallFunc_IsDedicatedServer_ReturnValue10;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue2 = CallFunc_SpawnEmitterAttached_ReturnValue2;
	Parms.CallFunc_GetController_ReturnValue2 = CallFunc_GetController_ReturnValue2;
	Parms.CallFunc_GetVelocity_ReturnValue4 = CallFunc_GetVelocity_ReturnValue4;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller2 = K2Node_DynamicCast_AsFort_Player_Controller2;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetWindManager_ReturnValue = CallFunc_GetWindManager_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_DynamicCast_AsWind_Manager = K2Node_DynamicCast_AsWind_Manager;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.K2Node_CustomEvent_NewWeapon = K2Node_CustomEvent_NewWeapon;
	Parms.K2Node_CustomEvent_PrevWeapon = K2Node_CustomEvent_PrevWeapon;
	Parms.K2Node_CustomEvent_InDuration = K2Node_CustomEvent_InDuration;
	Parms.K2Node_CustomEvent_New = K2Node_CustomEvent_New;
	Parms.K2Node_CustomEvent_Prev = K2Node_CustomEvent_Prev;
	Parms.CallFunc_IsValid_ReturnValue45 = CallFunc_IsValid_ReturnValue45;
	Parms.CallFunc_IsValid_ReturnValue46 = CallFunc_IsValid_ReturnValue46;
	Parms.K2Node_CustomEvent_CurrentWeapon = K2Node_CustomEvent_CurrentWeapon;
	Parms.CallFunc_IsValid_ReturnValue47 = CallFunc_IsValid_ReturnValue47;
	Parms.CallFunc_IsDedicatedServer_ReturnValue11 = CallFunc_IsDedicatedServer_ReturnValue11;
	Parms.CallFunc_IsDedicatedServer_ReturnValue12 = CallFunc_IsDedicatedServer_ReturnValue12;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.CallFunc_GetMaterial_ReturnValue6 = CallFunc_GetMaterial_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue6 = CallFunc_LessEqual_IntInt_ReturnValue6;
	Parms.CallFunc_Add_IntInt_ReturnValue7 = CallFunc_Add_IntInt_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue48 = CallFunc_IsValid_ReturnValue48;
	Parms.CallFunc_IsValid_ReturnValue49 = CallFunc_IsValid_ReturnValue49;
	Parms.CallFunc_IsValid_ReturnValue50 = CallFunc_IsValid_ReturnValue50;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_IsValid_ReturnValue51 = CallFunc_IsValid_ReturnValue51;
	Parms.CallFunc_IsValid_ReturnValue52 = CallFunc_IsValid_ReturnValue52;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_GetMaterial_ReturnValue7 = CallFunc_GetMaterial_ReturnValue7;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic4 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic4;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue7 = CallFunc_LessEqual_IntInt_ReturnValue7;
	Parms.CallFunc_Add_IntInt_ReturnValue8 = CallFunc_Add_IntInt_ReturnValue8;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_GetController_ReturnValue3 = CallFunc_GetController_ReturnValue3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller3 = K2Node_DynamicCast_AsFort_Player_Controller3;
	Parms.K2Node_DynamicCast_bSuccess13 = K2Node_DynamicCast_bSuccess13;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_IsValid_ReturnValue53 = CallFunc_IsValid_ReturnValue53;
	Parms.CallFunc_IsValid_ReturnValue54 = CallFunc_IsValid_ReturnValue54;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_IsValid_ReturnValue55 = CallFunc_IsValid_ReturnValue55;
	Parms.CallFunc_Add_IntInt_ReturnValue9 = CallFunc_Add_IntInt_ReturnValue9;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.CallFunc_GetMaterial_ReturnValue8 = CallFunc_GetMaterial_ReturnValue8;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue8 = CallFunc_LessEqual_IntInt_ReturnValue8;
	Parms.CallFunc_Add_IntInt_ReturnValue10 = CallFunc_Add_IntInt_ReturnValue10;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam2 = CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam2;
	Parms.CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam3 = CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam3;
	Parms.CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam4 = CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam4;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess14 = K2Node_DynamicCast_bSuccess14;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.K2Node_Event_bActive = K2Node_Event_bActive;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_ParticleSystemReference = K2Node_Event_ParticleSystemReference;
	Parms.K2Node_Event_FirstSocketName = K2Node_Event_FirstSocketName;
	Parms.K2Node_Event_SecondSocketName = K2Node_Event_SecondSocketName;
	Parms.K2Node_Event_Width = K2Node_Event_Width;
	Parms.CallFunc_IsValid_ReturnValue56 = CallFunc_IsValid_ReturnValue56;
	Parms.CallFunc_Add_IntInt_ReturnValue11 = CallFunc_Add_IntInt_ReturnValue11;
	Parms.CallFunc_IsDedicatedServer_ReturnValue13 = CallFunc_IsDedicatedServer_ReturnValue13;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.Temp_bool_Has_Been_Initd_Variable8 = Temp_bool_Has_Been_Initd_Variable8;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult2 = CallFunc_K2_SetWorldRotation_SweepHitResult2;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_GetMaterial_ReturnValue9 = CallFunc_GetMaterial_ReturnValue9;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic5 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic5;
	Parms.K2Node_DynamicCast_bSuccess15 = K2Node_DynamicCast_bSuccess15;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue9 = CallFunc_LessEqual_IntInt_ReturnValue9;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult3 = CallFunc_K2_SetWorldRotation_SweepHitResult3;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult4 = CallFunc_K2_SetWorldRotation_SweepHitResult4;
	Parms.CallFunc_IsValid_ReturnValue57 = CallFunc_IsValid_ReturnValue57;
	Parms.CallFunc_IsValid_ReturnValue58 = CallFunc_IsValid_ReturnValue58;
	Parms.CallFunc_GetVelocity_ReturnValue5 = CallFunc_GetVelocity_ReturnValue5;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X5 = CallFunc_BreakVector_X5;
	Parms.CallFunc_BreakVector_Y5 = CallFunc_BreakVector_Y5;
	Parms.CallFunc_BreakVector_Z5 = CallFunc_BreakVector_Z5;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue6 = CallFunc_MakeVector_ReturnValue6;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult5 = CallFunc_K2_SetWorldRotation_SweepHitResult5;
	Parms.CallFunc_MakeRotFromX_ReturnValue3 = CallFunc_MakeRotFromX_ReturnValue3;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Add_VectorVector_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue3 = CallFunc_Add_VectorVector_ReturnValue3;
	Parms.CallFunc_GetVelocity_ReturnValue6 = CallFunc_GetVelocity_ReturnValue6;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue3 = CallFunc_SpawnEmitterAttached_ReturnValue3;
	Parms.K2Node_GameplayCueEvent_EventType6 = K2Node_GameplayCueEvent_EventType6;
	Parms.K2Node_GameplayCueEvent_Parameters6 = K2Node_GameplayCueEvent_Parameters6;
	Parms.K2Node_SwitchEnum5_CmpSuccess = K2Node_SwitchEnum5_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType5 = K2Node_GameplayCueEvent_EventType5;
	Parms.K2Node_GameplayCueEvent_Parameters5 = K2Node_GameplayCueEvent_Parameters5;
	Parms.K2Node_SwitchEnum6_CmpSuccess = K2Node_SwitchEnum6_CmpSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue2 = CallFunc_GetScalarParameterValue_ReturnValue2;
	Parms.CallFunc_Round_ReturnValue2 = CallFunc_Round_ReturnValue2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue3 = CallFunc_GetScalarParameterValue_ReturnValue3;
	Parms.Temp_name_Variable4 = Temp_name_Variable4;
	Parms.CallFunc_Round_ReturnValue3 = CallFunc_Round_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue5 = CallFunc_K2_GetActorLocation_ReturnValue5;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue2 = CallFunc_Subtract_VectorVector_ReturnValue2;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue5 = CallFunc_Greater_FloatFloat_ReturnValue5;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue13 = CallFunc_Add_IntInt_ReturnValue13;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue6 = CallFunc_K2_GetActorLocation_ReturnValue6;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue3 = CallFunc_Subtract_VectorVector_ReturnValue3;
	Parms.CallFunc_GetMaterial_ReturnValue10 = CallFunc_GetMaterial_ReturnValue10;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue2 = CallFunc_Conv_VectorToRotator_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue10 = CallFunc_LessEqual_IntInt_ReturnValue10;
	Parms.CallFunc_Add_IntInt_ReturnValue14 = CallFunc_Add_IntInt_ReturnValue14;
	Parms.CallFunc_IsDedicatedServer_ReturnValue14 = CallFunc_IsDedicatedServer_ReturnValue14;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnCameraLensEffect_ReturnValue = CallFunc_SpawnCameraLensEffect_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue2 = CallFunc_IsLocallyControlled_ReturnValue2;
	Parms.K2Node_DynamicCast_AsB_Player_Health_Damage_Camera_Lens_Effect = K2Node_DynamicCast_AsB_Player_Health_Damage_Camera_Lens_Effect;
	Parms.K2Node_DynamicCast_bSuccess16 = K2Node_DynamicCast_bSuccess16;
	Parms.K2Node_DynamicCast_AsB_Player_Shield_Damage_Camera_Lens_Effect = K2Node_DynamicCast_AsB_Player_Shield_Damage_Camera_Lens_Effect;
	Parms.K2Node_DynamicCast_bSuccess17 = K2Node_DynamicCast_bSuccess17;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult2 = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult2;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult3 = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_GetMaterial_ReturnValue11 = CallFunc_GetMaterial_ReturnValue11;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic6 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic6;
	Parms.K2Node_DynamicCast_bSuccess18 = K2Node_DynamicCast_bSuccess18;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue11 = CallFunc_LessEqual_IntInt_ReturnValue11;
	Parms.CallFunc_Add_IntInt_ReturnValue15 = CallFunc_Add_IntInt_ReturnValue15;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_IsClosed_Variable8 = Temp_bool_IsClosed_Variable8;
	Parms.Temp_bool_IsClosed_Variable9 = Temp_bool_IsClosed_Variable9;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.CallFunc_PlayLocalAnimMontage_ReturnValue = CallFunc_PlayLocalAnimMontage_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue12 = CallFunc_GetMaterial_ReturnValue12;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue12 = CallFunc_LessEqual_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue16 = CallFunc_Add_IntInt_ReturnValue16;
	Parms.CallFunc_GetController_ReturnValue4 = CallFunc_GetController_ReturnValue4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller4 = K2Node_DynamicCast_AsFort_Player_Controller4;
	Parms.K2Node_DynamicCast_bSuccess19 = K2Node_DynamicCast_bSuccess19;
	Parms.CallFunc_SpawnCameraLensEffectDirectional_ReturnValue = CallFunc_SpawnCameraLensEffectDirectional_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue2 = CallFunc_GetAbilitySystemComponent_ReturnValue2;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute2 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute2;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue2 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue3 = CallFunc_GetAbilitySystemComponent_ReturnValue3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute3 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute3;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue3 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue3;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute4 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute4;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue4 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue4;
	Parms.CallFunc_BreakHitResult_bBlockingHit2 = CallFunc_BreakHitResult_bBlockingHit2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap2 = CallFunc_BreakHitResult_bInitialOverlap2;
	Parms.CallFunc_BreakHitResult_Time2 = CallFunc_BreakHitResult_Time2;
	Parms.CallFunc_BreakHitResult_Location2 = CallFunc_BreakHitResult_Location2;
	Parms.CallFunc_BreakHitResult_ImpactPoint2 = CallFunc_BreakHitResult_ImpactPoint2;
	Parms.CallFunc_BreakHitResult_Normal2 = CallFunc_BreakHitResult_Normal2;
	Parms.CallFunc_BreakHitResult_ImpactNormal2 = CallFunc_BreakHitResult_ImpactNormal2;
	Parms.CallFunc_BreakHitResult_PhysMat2 = CallFunc_BreakHitResult_PhysMat2;
	Parms.CallFunc_BreakHitResult_HitActor2 = CallFunc_BreakHitResult_HitActor2;
	Parms.CallFunc_BreakHitResult_HitComponent2 = CallFunc_BreakHitResult_HitComponent2;
	Parms.CallFunc_BreakHitResult_HitBoneName2 = CallFunc_BreakHitResult_HitBoneName2;
	Parms.CallFunc_BreakHitResult_HitItem2 = CallFunc_BreakHitResult_HitItem2;
	Parms.CallFunc_BreakHitResult_FaceIndex2 = CallFunc_BreakHitResult_FaceIndex2;
	Parms.CallFunc_BreakHitResult_TraceStart2 = CallFunc_BreakHitResult_TraceStart2;
	Parms.CallFunc_BreakHitResult_TraceEnd2 = CallFunc_BreakHitResult_TraceEnd2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue4 = CallFunc_Divide_FloatFloat_ReturnValue4;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue3 = CallFunc_Conv_VectorToRotator_ReturnValue3;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult6 = CallFunc_K2_SetWorldRotation_SweepHitResult6;
	Parms.CallFunc_Less_FloatFloat_ReturnValue3 = CallFunc_Less_FloatFloat_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue2 = CallFunc_K2_GetRootComponent_ReturnValue2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue7 = CallFunc_K2_GetActorLocation_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue3 = CallFunc_K2_GetRootComponent_ReturnValue3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.K2Node_GameplayCueEvent_EventType4 = K2Node_GameplayCueEvent_EventType4;
	Parms.K2Node_GameplayCueEvent_Parameters4 = K2Node_GameplayCueEvent_Parameters4;
	Parms.K2Node_GameplayCueEvent_EventType3 = K2Node_GameplayCueEvent_EventType3;
	Parms.K2Node_GameplayCueEvent_Parameters3 = K2Node_GameplayCueEvent_Parameters3;
	Parms.K2Node_SwitchEnum7_CmpSuccess = K2Node_SwitchEnum7_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum8_CmpSuccess = K2Node_SwitchEnum8_CmpSuccess;
	Parms.K2Node_SwitchEnum9_CmpSuccess = K2Node_SwitchEnum9_CmpSuccess;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetMaterial_ReturnValue13 = CallFunc_GetMaterial_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue13 = CallFunc_LessEqual_IntInt_ReturnValue13;
	Parms.CallFunc_Add_IntInt_ReturnValue17 = CallFunc_Add_IntInt_ReturnValue17;
	Parms.CallFunc_IsValid_ReturnValue59 = CallFunc_IsValid_ReturnValue59;
	Parms.CallFunc_IsValid_ReturnValue60 = CallFunc_IsValid_ReturnValue60;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_GetMaterial_ReturnValue14 = CallFunc_GetMaterial_ReturnValue14;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic7 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic7;
	Parms.K2Node_DynamicCast_bSuccess20 = K2Node_DynamicCast_bSuccess20;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue14 = CallFunc_LessEqual_IntInt_ReturnValue14;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_Add_IntInt_ReturnValue18 = CallFunc_Add_IntInt_ReturnValue18;
	Parms.Temp_bool_Has_Been_Initd_Variable9 = Temp_bool_Has_Been_Initd_Variable9;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue4 = CallFunc_SpawnEmitterAttached_ReturnValue4;
	Parms.CallFunc_IsPlaying_ReturnValue2 = CallFunc_IsPlaying_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
