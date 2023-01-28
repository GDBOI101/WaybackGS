#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0xBD0 - 0xA40)
// BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C
class UGAB_GenericDeath_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	class UAnimMontage*                          DeathMontage;                                      // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DeathMontageSectionName;                           // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DeathHitDirection;                                 // 0xA58(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            DeathHitResult;                                    // 0xA68(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayTagContainer                 DamageTags;                                        // 0xAF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 SpawnDroneTags;                                    // 0xB10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                          Front;                                             // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Left;                                              // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Right;                                             // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Back;                                              // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Head_Front;                                        // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Head_Left;                                         // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Head_Right;                                        // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Head_Back;                                         // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FrontSectionNameCount;                             // 0xB70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LeftSectionNameCount;                              // 0xB74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RightSectionNameCount;                             // 0xB78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BackSectionNameCount;                              // 0xB7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Head_FrontSectionNameCount;                        // 0xB80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Head_LeftSectionNameCount;                         // 0xB84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Head_RightSectionNameCount;                        // 0xB88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Head_BackSectionNameCount;                         // 0xB8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FrontMontageSectionPrefix;                         // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BackMontageSectionPrefix;                          // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LeftMontageSectionPrefix;                          // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RightMontageSectionPrefix;                         // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HeadFrontMontageSectionPrefix;                     // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HeadBackMontageSectionPrefix;                      // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HeadLeftMontageSectionPrefix;                      // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HeadRightMontageSectionPrefix;                     // 0xBC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericDeath_C");
		return Clss;
	}

	void GetRandomSectionName(int32 MaxNumberOfSections, class FName OriginalSectionName, class FName* SectionName, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void K2_OnEndAbility();
	void PickDeathMontageSection();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_GenericDeath(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue2, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UInterfaceProperty_ CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class ABP_VictoryDrone_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName CallFunc_GetRandomSectionName_SectionName, class FName CallFunc_GetRandomSectionName_SectionName2, class FName CallFunc_GetRandomSectionName_SectionName3, class FName CallFunc_GetRandomSectionName_SectionName4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_EqualEqual_NameName_ReturnValue6, bool CallFunc_EqualEqual_NameName_ReturnValue7, bool CallFunc_EqualEqual_NameName_ReturnValue8, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetRandomSectionName_SectionName5, class FName CallFunc_GetRandomSectionName_SectionName6, class FName CallFunc_GetRandomSectionName_SectionName7, class FName CallFunc_GetRandomSectionName_SectionName8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue3, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess2, enum class EFortDamageZone CallFunc_GetDamageZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
