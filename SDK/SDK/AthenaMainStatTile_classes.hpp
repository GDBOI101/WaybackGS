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

// 0x48 (0x280 - 0x238)
// WidgetBlueprintGeneratedClass AthenaMainStatTile.AthenaMainStatTile_C
class UAthenaMainStatTile_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                Glow;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NameTextBlock;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ValueTextBlock;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  StatName;                                          // 0x258(0x18)(Edit, BlueprintVisible)
	class FString                                BaseTagName;                                       // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMainStatTile_C");
		return Clss;
	}

	void SetStatValue(class FText StatValueAsText, class FText CallFunc_TextToUpper_ReturnValue);
	void SetTagAndDisplayName(const class FString& Tag, class FText DisplayName, class FText CallFunc_TextToUpper_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaMainStatTile(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
