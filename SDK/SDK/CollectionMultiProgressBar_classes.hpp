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

// 0x2D4 (0x50C - 0x238)
// WidgetBlueprintGeneratedClass CollectionMultiProgressBar.CollectionMultiProgressBar_C
class UCollectionMultiProgressBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Flash;                                             // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CategoryIcon;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FlashImage;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ProgressBarsBox;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpacerImage;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TopBox;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TopIconsBox;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCollectionMissionBadgeDisplayInfo> BarInfos;                                          // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	struct FProgressBarStyle                     ProgressBarsStyle;                                 // 0x288(0x1B8)(Edit, BlueprintVisible)
	bool                                         bOnlyShowBarWithCountInRange;                      // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_340A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconBrush;                                         // 0x448(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EFortBrushSize                    IconSize;                                          // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bShowBarTopIcons;                                  // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bShowBarSideIcons;                                 // 0x4DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_340B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               BarsMargin;                                        // 0x4DC(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FMargin                               BarsIconMargin;                                    // 0x4EC(0x10)(Edit, BlueprintVisible, NoDestructor)
	float                                        BarHeightFactor;                                   // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCollectionBar_C*                      PreviousBarWithCountInRange;                       // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BarHeightOverride;                                 // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionMultiProgressBar_C");
		return Clss;
	}

	void PlayFlashAnimation();
	void UpdateVisibleBar(bool Temp_bool_Variable, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_IsAchievedCountInRange_bIsInRange, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue2, int32 CallFunc_GetChildrenCount_ReturnValue2, class UCollectionBar_C* K2Node_DynamicCast_AsCollection_Bar, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_GetChildIndex_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UWidget* CallFunc_GetChildAt_ReturnValue4, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsAchievedCountInRange_bIsInRange2, bool CallFunc_BooleanOR_ReturnValue);
	void Update(int32 AchievedCount, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UCollectionBar_C* K2Node_DynamicCast_AsCollection_Bar, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Setup(TArray<struct FCollectionMissionBadgeDisplayInfo>& InBarInfos, int32 AchievedCount, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FCollectionMissionBadgeDisplayInfo& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCollectionBarTopIcon_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, float CallFunc_FClamp_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UCollectionBar_C* CallFunc_Create_ReturnValue2, bool CallFunc_IsAchievedCountInRange_bIsInRange, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue2);
	void Construct();
	void ExecuteUbergraph_CollectionMultiProgressBar(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
