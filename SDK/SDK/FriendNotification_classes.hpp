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

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass FriendNotification.FriendNotification_C
class UFriendNotification_C : public UFortUIFriendNotification
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendNotification_C");
		return Clss;
	}

	void ShowFriendInvites(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UFrontEnd_C* K2Node_DynamicCast_AsFront_End, bool K2Node_DynamicCast_bSuccess);
	void ShowPartyInvites(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess);
	void TakeAction();
	void ExecuteUbergraph_FriendNotification(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
