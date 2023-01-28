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

// 0x8 (0xA48 - 0xA40)
// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Emote_Generic_C");
		return Clss;
	}

	void K2_OnEndAbility(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable2, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsAssetNull_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
