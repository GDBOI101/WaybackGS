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

// 0x13C (0x374 - 0x238)
// WidgetBlueprintGeneratedClass Rewards_ItemCard.Rewards_ItemCard_C
class URewards_ItemCard_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimPopInPrimary;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimPopIn;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        ButtonInspect;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCardL;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCardM;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OutpostStorageMessage;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxLargeCard;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxDropShadow;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SlideStartTime;                                    // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_384C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSlideAnimationFinished;                          // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             SlideStartAlignment;                               // 0x2A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SlideTargetAlignment;                              // 0x2A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SlideAnimationHandle;                              // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SlideAnimationDuration;                            // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideStartScale;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideTargetScale;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              SlideStartAnchors;                                 // 0x2C4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FAnchors                              SlideTargetAnchors;                                // 0x2D4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SlideStartOffset;                                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideTargetOffset;                                 // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideStartAngle;                                   // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideTargetAngle;                                  // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_384D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnInspectClicked;                                  // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnResizeAnimationFinished;                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             SlideStartTranslation;                             // 0x318(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SlideTargetTranslation;                            // 0x320(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnPopInAnimationFinished;                          // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                             ItemToRepresent;                                   // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                CurrentCard;                                       // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsResizing;                                        // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_384E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ResizeDuration;                                    // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResizeStartTime;                                   // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_384F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ResizeHandle;                                      // 0x358(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        ResizeTargetScale;                                 // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResizeStartScale;                                  // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DropShadowTargetDepth;                             // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DropShadowStartDepth;                              // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DropShadowPadding;                                 // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Rewards_ItemCard_C");
		return Clss;
	}

	void SetOutpostInventoryNotification(bool ShouldShow, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void SetOpaque();
	void SkipPopInAnimation();
	void SetTransparent();
	void PlaySecondaryPopInAnimation();
	void PlayPrimaryPopInAnimation();
	void GetDropShadowDepth(float* DropShadowDepth, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void InitDropShadow(bool CallFunc_ShouldUseNewItemCards_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2);
	void SetDropShadowSize(float Scale, bool CallFunc_ShouldUseNewItemCards_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue);
	void SetDropShadowDepth(float ShadowDepth, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void HideDropShadow();
	void ShowDropShadow(float ShadowDepth);
	void StartResizeAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SizeUp(float Duration, float Delay, float DropShadowDepth, bool CallFunc_ShouldUseNewItemCards_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue2, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue2, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetDropShadowDepth_DropShadowDepth, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TickResizeAnimation(float Alpha, float CallFunc_GetGameTimeInSeconds_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, float CallFunc_Ease_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue, float CallFunc_Ease_ReturnValue2, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void SizeDown(float Duration, float Delay, float DropShadowDepth, bool CallFunc_ShouldUseNewItemCards_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue2, bool CallFunc_ShouldUseNewItemCards_ReturnValue3, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue2, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue2, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue4, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue3, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_Y3, float CallFunc_GetDropShadowDepth_DropShadowDepth, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue4, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue4, float CallFunc_BreakVector2D_X4, float CallFunc_BreakVector2D_Y4, float CallFunc_Divide_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FVector2D GetCardSize(bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue);
	void GetItemToRepresent(class UFortItem** ItemToRepresent);
	void HandlePopInAnimationFinished();
	void SetInspectAction(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void TickScaleAnimation(float Alpha, float CallFunc_Ease_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Ease_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void PlayScaleAnimation(float TargetScale, float Duration, float DropShadowDepth, float CallFunc_GetDropShadowDepth_DropShadowDepth, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void StartSlideAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void EndSlideAnimation();
	void PlaySlideAnimation(const struct FVector2D& TargetAlignment, const struct FAnchors& TargetAnchors, float TargetScale, float TargetOffset, float TargetAngle, float Duration, float StaggerDelay, const struct FVector2D& TargetTranslation, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& CallFunc_GetOffsets_ReturnValue, const struct FAnchors& CallFunc_GetAnchors_ReturnValue, const struct FVector2D& CallFunc_GetAlignment_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void TickSlideAnimation(class UCanvasPanelSlot* CanvasSlot, float Alpha, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, const struct FMargin& CallFunc_GetOffsets_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_Ease_ReturnValue2, float CallFunc_Ease_ReturnValue3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_Y3, float CallFunc_BreakVector2D_X4, float CallFunc_BreakVector2D_Y4, float CallFunc_BreakVector2D_X5, float CallFunc_BreakVector2D_Y5, float CallFunc_BreakVector2D_X6, float CallFunc_BreakVector2D_Y6, float CallFunc_Ease_ReturnValue4, float CallFunc_Ease_ReturnValue5, float CallFunc_Ease_ReturnValue6, float CallFunc_Ease_ReturnValue7, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, const struct FAnchors& K2Node_MakeStruct_Anchors, float CallFunc_Ease_ReturnValue8, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Ease_ReturnValue9, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue4, float CallFunc_BreakVector2D_X7, float CallFunc_BreakVector2D_Y7, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, float CallFunc_BreakVector2D_X8, float CallFunc_BreakVector2D_Y8, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue10, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue11, float CallFunc_FMin_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue5, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetItemToRepresent(class UFortItem* Item);
	void InitDesignView(class UFortItemDefinition* TempItemDefinition, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_Rewards_ItemCard(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime);
	void OnPopInAnimationFinished__DelegateSignature();
	void OnResizeAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard);
	void OnInspectClicked__DelegateSignature(class URewards_ItemCard_C* Card);
	void OnSlideAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
