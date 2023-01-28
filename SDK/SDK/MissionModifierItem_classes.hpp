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

// 0x34 (0x274 - 0x240)
// WidgetBlueprintGeneratedClass MissionModifierItem.MissionModifierItem_C
class UMissionModifierItem_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              IconSizeBox;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ModifierIcon;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              WidgetSizeBox;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*   ModifierItemDef;                                   // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        IconHeightOverride;                                // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        IconWidthOverride;                                 // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        WidgetHeightOverride;                              // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionModifierItem_C");
		return Clss;
	}

	class UWidget* GetToolTipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void Update(const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void ExecuteUbergraph_MissionModifierItem(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
