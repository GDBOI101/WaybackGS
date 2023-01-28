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

// 0x68 (0x2A0 - 0x238)
// WidgetBlueprintGeneratedClass ItemTransformKeyScreen.ItemTransformKeyScreen_C
class UItemTransformKeyScreen_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  HorizontalTabList;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformKeyInfo_C*               ItemTransformKeyInfo;                              // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformKeyPicker_C*             ItemTransformKeyPicker;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TabLabelText;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             CurrentKey;                                        // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              KeyItems;                                          // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnKeySelected;                                     // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnKeyConfirmed;                                    // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  CurrentTab;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformKeyScreen_C");
		return Clss;
	}

	void Determine_Tab_List_Title(class FName TabNameID, class FText* Text, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3);
	void Determine_Key_Types_to_See(class FName TabNameID, enum class EConversionControlKeyRequest* RequestType, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3);
	void NavigateToFirstItem();
	void NavigateToSelectedItem(class UFortItem* InItem);
	void Get_Selected_Item(class UFortItem** SelectedKey, class UFortItem* CallFunc_GetSelectedKey_SelectedKey);
	void ResetScreen();
	void HandleItemSelected(class UFortItem* Item);
	void SetupKeyList(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void RebuildKeyList(enum class EConversionControlKeyRequest RequestType, class FName CallFunc_GetActiveTab_ReturnValue, class FText CallFunc_Determine_Tab_List_Title_Text, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetTransformKeys_TransformKeys);
	void Construct();
	void BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature(class FName TabId);
	void HandleHomebaseInventoryChanged();
	void ExecuteUbergraph_ItemTransformKeyScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class FName K2Node_ComponentBoundEvent_TabId, enum class EConversionControlKeyRequest CallFunc_Determine_Key_Types_to_See_RequestType, enum class EConversionControlKeyRequest CallFunc_Determine_Key_Types_to_See_RequestType2);
	void OnKeyConfirmed__DelegateSignature();
	void OnKeySelected__DelegateSignature(class UFortItem* Key);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
