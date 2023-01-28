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

// 0xCB (0x52B - 0x460)
// WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C
class UBP_FortExpeditionMasterWidget_C : public UFortExpeditionMasterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(Transient, DuplicateTransient)
	class UBP_FortExpeditionOverviewWidget_C*    BP_FortExpeditionOverviewWidget;                   // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   BuildExpeditionAction;                             // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   AbandonExpeditionAction;                           // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CollectExpeditionAction;                           // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SortInputAction;                                   // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bRewardsShowing;                                   // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortExpeditionItem*>           CompletedExpeditions;                              // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFrontEndRewards_Definition           RewardsDefinition;                                 // 0x4E0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EFortExpeditionListSort           ExpeditionListSortType;                            // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortExpeditionListSort           ExpeditionListSortBegin;                           // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortExpeditionListSort           ExpeditionListSortEnd;                             // 0x52A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionMasterWidget_C");
		return Clss;
	}

	void HandleSortExpeditionListAction(bool* PassThrough, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue);
	void Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void HandleCollectExpeditionAction(bool* PassThrough);
	void HandleAbandonExpeditionAction(bool* PassThrough);
	void HandleBuildExpeditionAction(bool* PassThrough, bool CallFunc_HandleBuildExpeditionAction_PassThrough);
	void Present_Reward_UI();
	void Show_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Update_Master_Widget(bool CallFunc_AreAnyExpeditionsComplete_ReturnValue);
	void Setup_Bindings(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
	void Handle_Back(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void Destruct();
	void HandleAllCompletedExpeditionsCollected();
	void HACK_OnActivate_UpdateMasterWidget();
	void OnActivated();
	void ExecuteUbergraph_BP_FortExpeditionMasterWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
