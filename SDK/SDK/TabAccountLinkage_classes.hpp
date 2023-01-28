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

// 0x50 (0x298 - 0x248)
// WidgetBlueprintGeneratedClass TabAccountLinkage.TabAccountLinkage_C
class UTabAccountLinkage_C : public UFortAccountOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      AccountLinkText;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ConfigurationSwitcher;                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DefaultConfigurationBox;                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTwitchLogin_C*                    FortTwitchLogin;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StaticURLText;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipTextBox;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     URLButton;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WebsiteConfigurationBox;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabAccountLinkage_C");
		return Clss;
	}

	void InitializeWebsiteConfiguration(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select2_Default);
	struct FFortAnalyticsEventAttribute Build_Player_Id_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue);
	struct FFortAnalyticsEventAttribute Build_Player_Name_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue);
	void Fire_Enter_Live_Stream_Analytic(const struct FFortAnalyticsEventAttribute& CallFunc_Build_Player_Id_Analytic_Attribute_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_Build_Player_Name_Analytic_Attribute_ReturnValue, TArray<struct FFortAnalyticsEventAttribute>& K2Node_MakeArray_Array);
	void Initialize_Data(bool Temp_bool_Variable, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* K2Node_Select_Default);
	void Update_Data();
	void UpdateOptionsTab();
	void CenterOnTab();
	void Construct();
	void BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature(class FText NewTooltipText);
	void BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_TabAccountLinkage(int32 EntryPoint, bool CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue, class FText K2Node_ComponentBoundEvent_NewTooltipText, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShowWebURL_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
