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

// 0x9 (0x4A9 - 0x4A0)
// WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C
class UCollectionBookPrimaryPanel_C : public UFortCollectionBookPrimaryPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	bool                                         CanShowCollectionBookHelp;                         // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookPrimaryPanel_C");
		return Clss;
	}

	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void HandleDisplayInfoBox();
	void ExecuteUbergraph_CollectionBookPrimaryPanel(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UHelpWidget_C* K2Node_DynamicCast_AsHelp_Widget, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
