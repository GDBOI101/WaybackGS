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

// 0x8 (0x270 - 0x268)
// WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C
class UItemManagementModeDetailsPanel_C : public UFortItemManagementModeDetailsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementModeDetailsPanel_C");
		return Clss;
	}

	void HandleDifferentItemManagementModeSetBP();
	void ExecuteUbergraph_ItemManagementModeDetailsPanel(int32 EntryPoint, enum class EFortItemManagementMode Temp_byte_Variable, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue, class UWidget* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
