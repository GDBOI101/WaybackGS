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

// 0x31 (0x289 - 0x258)
// WidgetBlueprintGeneratedClass LegacyPerksWidget.LegacyPerksWidget_C
class ULegacyPerksWidget_C : public UFortPerksWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class ULegacyPerkTierWidget_C*               PerkTierWidget;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyPerkTierWidget_C*               PerkTierWidget_0;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyPerkTierWidget_C*               PerkTierWidget_1;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextTitle;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxPerkTiers;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bTextOnly;                                         // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LegacyPerksWidget_C");
		return Clss;
	}

	void Construct();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier);
	void ExecuteUbergraph_LegacyPerksWidget(int32 EntryPoint, const struct FFortUIPerkTier& K2Node_Event_FortPerkTier, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ULegacyPerkTierWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
