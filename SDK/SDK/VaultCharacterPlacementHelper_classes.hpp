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

// 0x28 (0x3B0 - 0x388)
// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
class AVaultCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  CharacterPlacement;                                // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  NewEventDispatcher_0;                              // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VaultCharacterPlacementHelper_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int32 EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
