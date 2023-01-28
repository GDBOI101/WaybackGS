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

// 0x24 (0x25C - 0x238)
// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
class ULobbyPlayerAddPlayer_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UPanelButton_C*                        ButtonEmptySpot;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayEmptySlot;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayInputAction;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PlayerID;                                          // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyPlayerAddPlayer_C");
		return Clss;
	}

	void BndEvt__ButtonEmptySpot_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonEmptySpot_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonEmptySpot_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_LobbyPlayerAddPlayer(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
