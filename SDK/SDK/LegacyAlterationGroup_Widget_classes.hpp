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

// 0x29 (0x281 - 0x258)
// WidgetBlueprintGeneratedClass LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C
class ULegacyAlterationGroup_Widget_C : public UFortAlterationsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class ULegacyAlteration_Widget_C*            AlterationWidget;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyAlteration_Widget_C*            AlterationWidget_0;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyAlteration_Widget_C*            AlterationWidget_1;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxAlterations;                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bTextOnly;                                         // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LegacyAlterationGroup_Widget_C");
		return Clss;
	}

	void Construct();
	void OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo);
	void ExecuteUbergraph_LegacyAlterationGroup_Widget(int32 EntryPoint, const struct FFortUIAlteration& K2Node_Event_AlterationInfo, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULegacyAlteration_Widget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
