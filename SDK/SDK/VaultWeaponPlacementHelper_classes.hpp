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

// 0x60 (0x3E8 - 0x388)
// BlueprintGeneratedClass VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
class AVaultWeaponPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cube;                                              // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Sparkle;                               // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Swirl02;                               // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_NoPlayer_Swirl01;                               // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CharacterPlacement;                                // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerID;                                          // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4053[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlayerSelected;                                 // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4054[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  NewEventDispatcher_0;                              // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VaultWeaponPlacementHelper_C");
		return Clss;
	}

	void OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void GetFrontendAnimInstance();
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnTeamMemberRemoved(int32 TeamMemberInfo);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnLobbyStarted();
	void Initialize();
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue6);
	void OnLobbyPlayerSelected(int32 PlayerIndex);
	void OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ItemRez();
	void ExecuteUbergraph_VaultWeaponPlacementHelper(int32 EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
