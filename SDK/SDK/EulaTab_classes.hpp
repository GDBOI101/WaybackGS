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

// 0x18 (0x250 - 0x238)
// WidgetBlueprintGeneratedClass EulaTab.EulaTab_C
class UEulaTab_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UFortRichTextBlock*                    FortRichTextBlock_0;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_4;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EulaTab_C");
		return Clss;
	}

	void Activate_Scroll_Box(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Construct();
	void ExecuteUbergraph_EulaTab(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetEULAText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
