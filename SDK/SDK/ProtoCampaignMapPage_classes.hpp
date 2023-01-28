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

// 0xF1 (0x329 - 0x238)
// WidgetBlueprintGeneratedClass ProtoCampaignMapPage.ProtoCampaignMapPage_C
class UProtoCampaignMapPage_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                ImageBackground;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Slot_Page;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        CurrentQuestItem;                                  // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Background_image;                                  // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  PageTitle;                                         // 0x260(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UCanvasPanel*                          CachedQuestsCanvas;                                // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PowerValue;                                        // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           BackgroundBrush;                                   // 0x298(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bDoNotCheckForMainQuest;                           // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProtoCampaignMapPage_C");
		return Clss;
	}

	void CheckForIncompleteQuest_Halloween_Event(bool* TargetQuestFound, int32* TargetQuestPageIndex, int32 QuestPageIndex, bool QuestFound, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UQuestMiniTile_C* K2Node_DynamicCast_AsQuest_Mini_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetStateAndFindIncompleteQuest_QuestFound, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SetState_QuestFound, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UHalloweenMapPage_05_C* K2Node_DynamicCast_AsHalloween_Map_Page_05, bool K2Node_DynamicCast_bSuccess2, class UHalloweenMapPage_04_C* K2Node_DynamicCast_AsHalloween_Map_Page_04, bool K2Node_DynamicCast_bSuccess3, class UHalloweenMapPage_03_C* K2Node_DynamicCast_AsHalloween_Map_Page_03, bool K2Node_DynamicCast_bSuccess4, class UHalloweenMapPage_02_C* K2Node_DynamicCast_AsHalloween_Map_Page_02, bool K2Node_DynamicCast_bSuccess5, class UHalloweenMapPage_01_C* K2Node_DynamicCast_AsHalloween_Map_Page_01, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_HasAnyChildren_ReturnValue);
	void SetBackgroundImage();
	void CheckForMainQuest(bool* TargetQuestFound, int32* TargetQuestPageIndex, int32 QuestPageIndex, bool QuestFound, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UQuestMiniTile_C* K2Node_DynamicCast_AsQuest_Mini_Tile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortQuestItem* CallFunc_GetMainQuest_outCurentMainQuest, bool CallFunc_SetState_QuestFound, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UCampaignMapPage_Plankerton_13_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_13, bool K2Node_DynamicCast_bSuccess2, class UCampaignMapPage_Plankerton_07_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_07, bool K2Node_DynamicCast_bSuccess3, class UCampaignMapPage_Plankerton_12_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_12, bool K2Node_DynamicCast_bSuccess4, class UCampaignMapPage_Plankerton_11_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_11, bool K2Node_DynamicCast_bSuccess5, class UCampaignMapPage_Plankerton_10_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_10, bool K2Node_DynamicCast_bSuccess6, class UCampaignMapPage_Plankerton_09_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_09, bool K2Node_DynamicCast_bSuccess7, class UCampaignMapPage_Plankerton_08_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_08, bool K2Node_DynamicCast_bSuccess8, class UCampaignMapPage_Plankerton_06_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_06, bool K2Node_DynamicCast_bSuccess9, class UCampaignMapPage_Plankerton_05_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_05, bool K2Node_DynamicCast_bSuccess10, class UCampaignMapPage_Plankerton_04_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_04, bool K2Node_DynamicCast_bSuccess11, class UCampaignMapPage_Plankerton_03_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_03, bool K2Node_DynamicCast_bSuccess12, class UCampaignMapPage_Plankerton_02_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_02, bool K2Node_DynamicCast_bSuccess13, class UCampaignMapPage_Plankerton_01_C* K2Node_DynamicCast_AsCampaign_Map_Page_Plankerton_01, bool K2Node_DynamicCast_bSuccess14, class UCampaignMapPage_Stonewood_10_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_10, bool K2Node_DynamicCast_bSuccess15, class UCampaignMapPage_Stonewood_09_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_09, bool K2Node_DynamicCast_bSuccess16, class UCampaignMapPage_Stonewood_08_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_08, bool K2Node_DynamicCast_bSuccess17, class UCampaignMapPage_Stonewood_07_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_07, bool K2Node_DynamicCast_bSuccess18, class UCampaignMapPage_Stonewood_06_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_06, bool K2Node_DynamicCast_bSuccess19, class UCampaignMapPage_Stonewood_05_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_05, bool K2Node_DynamicCast_bSuccess20, class UCampaignMapPage_Stonewood_04_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_04, bool K2Node_DynamicCast_bSuccess21, class UCampaignMapPage_Stonewood_03_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_03, bool K2Node_DynamicCast_bSuccess22, class UCampaignMapPage_Stonewood_02_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_02, bool K2Node_DynamicCast_bSuccess23, class UCampaignMapPage_Stonewood_01_C* K2Node_DynamicCast_AsCampaign_Map_Page_Stonewood_01, bool K2Node_DynamicCast_bSuccess24, bool CallFunc_HasAnyChildren_ReturnValue);
	void GetMainQuest(class UFortQuestItem** OutCurentMainQuest, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ProtoCampaignMapPage(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_CheckForMainQuest_TargetQuestFound, int32 CallFunc_CheckForMainQuest_TargetQuestPageIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
