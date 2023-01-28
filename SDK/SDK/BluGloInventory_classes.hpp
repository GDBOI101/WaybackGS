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

// 0x1C (0x254 - 0x238)
// WidgetBlueprintGeneratedClass BluGloInventory.BluGloInventory_C
class UBluGloInventory_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               BluGloInventoryTotal;                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                   TutorialBluGloItemDefinition;                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentBluGloTotal;                                // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BluGloInventory_C");
		return Clss;
	}

	void Update(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AFortBluGloManager* CallFunc_GetBluGloManager_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortItemDefinition* CallFunc_GetBluGloItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void HandleOnWorldItemListChanged(TArray<class UFortWorldItem*>& Items_Added, TArray<class UFortWorldItem*>& Items_Removed);
	void HandleWorldItemsChanged();
	void HandleItemPickedUp(class UFortWorldItem* New_Item, int32 Count);
	void Construct();
	void ExecuteUbergraph_BluGloInventory(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInOutpostZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
