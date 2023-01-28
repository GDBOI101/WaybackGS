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

// 0x28 (0x468 - 0x440)
// WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C
class UAthenaTabsScreen_C : public UFortAthenaTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 TopTabContentWidgetSwitcher;                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  LastActiveTabId;                                   // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UnclaimedResearchBangThreshold;                    // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          UnclaimedResearchPointsHandle;                     // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTabsScreen_C");
		return Clss;
	}

	void HandleTabSelected(class FName TabName, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleTabCreated(class FName TabId, class UCommonButton* TabButton, class UCommonButton* LocalTab, class FName LocalTabId, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue);
	void OnActivated();
	void Construct();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void OnDeactivated();
	void HandleTabContentCreated(class FName TabId, class UCommonUserWidget* TabWidget);
	void ExecuteUbergraph_AthenaTabsScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_ComponentBoundEvent_TabId2, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class FName K2Node_ComponentBoundEvent_TabId, TArray<class FString>& K2Node_MakeArray_Array, class FName K2Node_CustomEvent_TabId, class UCommonUserWidget* K2Node_CustomEvent_TabWidget, class UStoreMain_Root_C* K2Node_DynamicCast_AsStore_Main_Root, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
