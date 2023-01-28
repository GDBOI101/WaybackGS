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

// 0x80 (0x2B8 - 0x238)
// WidgetBlueprintGeneratedClass AccountBonuses.AccountBonuses_C
class UAccountBonuses_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                Divider;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FounderBadge;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FoundersText;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          FounderVertBox;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxEmpty;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxFoundersBadge;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxVipBadge;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MonthlyVIPText;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MonthlyVIPTitle;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VIPVertBox;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                   MonthlyVIPDefinition;                              // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   FounderDefinition;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AccountBonuses_C");
		return Clss;
	}

	void Update_Badges(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue3, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Has_Founder_Badge_Result, bool CallFunc_Has_VIP_Badge_Result, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, bool CallFunc_Has_VIP_Badge_Result2, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription2, bool CallFunc_GetCombinedDescription_ReturnValue2, bool CallFunc_Has_Founder_Badge_Result2, enum class ESlateVisibility K2Node_Select_Default, const struct FDateTime& CallFunc_UtcNow_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, int32 CallFunc_GetDays_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility Temp_byte_Variable4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default);
	void Has_VIP_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue);
	void Has_Founder_Badge(bool* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAccountBuffItem* K2Node_DynamicCast_AsFort_Account_Buff_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue);
	void Construct();
	void Founder_Changed();
	void ExecuteUbergraph_AccountBonuses(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
