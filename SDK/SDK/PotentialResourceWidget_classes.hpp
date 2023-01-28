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

// 0x44 (0x27C - 0x238)
// WidgetBlueprintGeneratedClass PotentialResourceWidget.PotentialResourceWidget_C
class UPotentialResourceWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      TranslateAndFadeUp;                                // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextResourceCount;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextResourceCountShadow;                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             PotentialResource;                                 // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  FinishedShowing;                                   // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         WeakpointDamage;                                   // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3C7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeakpointFontSize;                                 // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NormalFontSize;                                    // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PotentialResourceWidget_C");
		return Clss;
	}

	void ShowPotentialResource(class UFortItem* PotentialResource, bool bWeakpointDamage, bool CallFunc_IsValid_ReturnValue);
	void SetupFont(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_Get_HarvestWeakPoint_Color_StyleSheetOut, bool Temp_bool_Variable2, int32 K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetResourceCountAsText(class UFortItem* Resource, class FText* Result, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateResourceCountText(class FText CallFunc_GetResourceCountAsText_Result);
	void Construct();
	void HandleTranslateAndFadeUpFinished();
	void ExecuteUbergraph_PotentialResourceWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void FinishedShowing__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
