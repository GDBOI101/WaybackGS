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

// 0x8C (0x2EC - 0x260)
// WidgetBlueprintGeneratedClass AlterationsWidget.AlterationsWidget_C
class UAlterationsWidget_C : public UFortAlterationsWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UAlterationWidget_C*                   AlterationWidget;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                   AlterationWidget_2;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                   AlterationWidget_3;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                   AlterationWidget_6;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderLocked;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderUnlocked;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        LockedUnlockedDivider;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        PerkDivider_C_106;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        PerkDivider_C_107;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxAlterationsLocked;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxAlterationsUnlocked;                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIncludeName;                                      // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeDescription;                               // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeShortDescription;                          // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         FirstAlterationComplete;                           // 0x2C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FirstLockedComplete;                               // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    IconSize;                                          // 0x2C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3376[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               RowPadding;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         bUseLargeFormatNameOnly;                           // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Description_Padding;                               // 0x2DC(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AlterationsWidget_C");
		return Clss;
	}

	void Construct();
	void OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo);
	void OnItemChanged();
	void OnItemToCompareWithChanged();
	void OnStateChanged();
	void ExecuteUbergraph_AlterationsWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAlterationWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FFortUIAlteration& K2Node_Event_AlterationInfo, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UPerkDivider_C* CallFunc_Create_ReturnValue2, class UPerkDivider_C* CallFunc_Create_ReturnValue3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
