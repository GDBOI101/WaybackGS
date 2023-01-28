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

// 0x40 (0x420 - 0x3E0)
// WidgetBlueprintGeneratedClass OutpostScreenStormShield.OutpostScreenStormShield_C
class UOutpostScreenStormShield_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  ContentOrPermissionsTab;                           // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ShieldToContentSwitcher;                           // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortOutpostBuilding*                  OutpostCoreBuilding;                               // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  CloseOutpostScreen;                                // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOutpostScreenStormShieldContent_C*    StormShieldWidgetReference;                        // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOutpostScreenStormShieldPermissions_C* PermissionsWidgetReference;                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OutpostScreenStormShield_C");
		return Clss;
	}

	void CenterPermissionsWidget();
	void CenterStormShieldWidget();
	void HandleBack(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void AddInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue2, class UOutpostScreenStormShieldContent_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content, bool K2Node_DynamicCast_bSuccess, class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions, bool K2Node_DynamicCast_bSuccess2);
	void Construct();
	void BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void ExecuteUbergraph_OutpostScreenStormShield(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId2, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue2, class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions, bool K2Node_DynamicCast_bSuccess, class UOutpostScreenStormShieldContent_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content, bool K2Node_DynamicCast_bSuccess2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess3, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void CloseOutpostScreen__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
