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

// 0x10 (0xA50 - 0xA40)
// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_AbilitiesGenericTriggeredAbilityActivate;       // 0xA48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_TriggeredAbility_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
