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

// 0x68 (0x3F0 - 0x388)
// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       MenuMusic_B;                                       // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_A;                                       // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Hexmap_Music;                                      // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Homebase_Music;                                    // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OverView_Music;                                    // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LobbyMusic;                                        // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LlamaVO;                                           // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoginMusic;                                        // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3908[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_Current_Music_A;                             // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Current_Music_B;                             // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fort_Entry_Music_Controller_BP_C");
		return Clss;
	}

	void UserConstructionScript();
	void Music_Login_FadeIn();
	void Music_Store_FadeIn();
	void Music_Lobby_FadeIn();
	void Music_WorldOverview_FadeIn();
	void Music_HomeBase_FadeIn();
	void Music_Hexmap_FadeIn();
	void Music_Heroes_FadeIn();
	void Music_Vault_FadeIn();
	void Music_Store_CardIntro_Fadein();
	void Store_Transition_To_Purchase();
	void Store_Llama_HangingOut();
	void Store_CardpackSummaryOpenAndLoop();
	void Store_HitLlamaAndLoop();
	void Store_Intro_Loop();
	void VBucks_Menu_Enter();
	void ReceiveBeginPlay();
	void On_Sub_Game_Changed(enum class ESubGame SubGame);
	void Music_Lobby_Athena_FadeIn();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESubGame K2Node_CustomEvent_SubGame, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
