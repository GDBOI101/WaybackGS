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

// 0x10 (0x2B8 - 0x2A8)
// WidgetBlueprintGeneratedClass TabGameOptionsHud.TabGameOptionsHud_C
class UTabGameOptionsHud_C : public UTabGameOptions_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      TooltipDisplayReference;                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGameOptionsHud_C");
		return Clss;
	}

	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HUD_Changed(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag);
	void ExecuteUbergraph_TabGameOptionsHud(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UOptionsMenuHudRotator_C* K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_Selected_Index, const struct FGameplayTag& K2Node_CustomEvent_Gameplay_Tag, bool CallFunc_Conv_IntToBool_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
