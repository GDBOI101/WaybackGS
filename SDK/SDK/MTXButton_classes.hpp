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

// 0x21 (0x259 - 0x238)
// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
class UMTXButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               Amount;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button;                                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlus;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         HidePlusButton;                                    // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MTXButton_C");
		return Clss;
	}

	void UpdateState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	class UWidget* Get_Button_ToolTipWidget_0(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText K2Node_Select_Default, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void UpdateAmount(struct FFortPrivateAccountInfo& FortPrivateAccountInfo, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Construct();
	void HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo);
	void BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleInputActionChnaged(bool bUsingGamepad);
	void Destruct();
	void ExecuteUbergraph_MTXButton(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortPrivateAccountInfo& K2Node_CustomEvent_NewInfo, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFortUIFeatureState CallFunc_GetFeatureState_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
