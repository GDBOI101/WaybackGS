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

// 0xF4 (0x32C - 0x238)
// WidgetBlueprintGeneratedClass Halloween_QuestMapWidget.Halloween_QuestMapWidget_C
class UHalloween_QuestMapWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     BtnTest;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaignMapIconTextButton_C*          CMButtonNext;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaignMapIconTextButton_C*          CMButtonPrevious;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*               CVWLeft;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*               CVWRight;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*               Halloween01;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*               Halloween02;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*               Halloween03;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*               Halloween04;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*               Halloween05;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_01_C*                HalloweenMapPage_01;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_02_C*                HalloweenMapPage_02;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_03_C*                HalloweenMapPage_03;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_04_C*                HalloweenMapPage_04;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_05_C*                HalloweenMapPage_05;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLeftTrigger;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRightTrigger;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_PowerBolt;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayLeft;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayRight;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherPages;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextMap;                                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPage;                                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PowerNumber;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Recommeded;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        CurrentQuestItem;                                  // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetIndex;                                       // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ECA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundCue_Woosh;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfPages;                                     // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Halloween_QuestMapWidget_C");
		return Clss;
	}

	void Find_Current_Page___Halloween_Event(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UProtoCampaignMapPage_C* K2Node_DynamicCast_AsProto_Campaign_Map_Page, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CheckForIncompleteQuest_Halloween_Event_TargetQuestFound, int32 CallFunc_CheckForIncompleteQuest_Halloween_Event_TargetQuestPageIndex, bool CallFunc_BooleanAND_ReturnValue);
	void SetTriggerIcon(bool PassThrough, enum class ECommonInputType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable2, const struct FSlateBrush& Temp_struct_Variable3, enum class ECommonInputType Temp_byte_Variable2, const struct FSlateBrush& Temp_struct_Variable4, const struct FSlateBrush& Temp_struct_Variable5, const struct FSlateBrush& Temp_struct_Variable6, class UCommonUIContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush3, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush4, const struct FSlateBrush& K2Node_Select2_Default);
	void Find_Active_Page(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class UProtoCampaignMapPage_C* K2Node_DynamicCast_AsProto_Campaign_Map_Page, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_CheckForMainQuest_TargetQuestFound, int32 CallFunc_CheckForMainQuest_TargetQuestPageIndex, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UProtoCampaignMapPage_C* K2Node_DynamicCast_AsProto_Campaign_Map_Page, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void Handle_OnQuestsUpdated();
	void BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_Halloween_QuestMapWidget(int32 EntryPoint, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue4, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
