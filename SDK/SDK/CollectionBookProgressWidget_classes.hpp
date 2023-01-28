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

// 0x18 (0x2A8 - 0x290)
// WidgetBlueprintGeneratedClass CollectionBookProgressWidget.CollectionBookProgressWidget_C
class UCollectionBookProgressWidget_C : public UFortCollectionBookProgressWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(Transient, DuplicateTransient)
	class UBP_FortMaterialProgressBar_C*         BP_FortMaterialProgressBar;                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookProgressWidget_C");
		return Clss;
	}

	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void ExecuteUbergraph_CollectionBookProgressWidget(int32 EntryPoint, float K2Node_Event_PreviewCompletionPct, float K2Node_Event_NewCompletionPct);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
