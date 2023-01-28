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

// 0x28 (0x260 - 0x238)
// WidgetBlueprintGeneratedClass BasicInteractionWidget.BasicInteractionWidget_C
class UBasicInteractionWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      TextDescription;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x248(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BasicInteractionWidget_C");
		return Clss;
	}

	void UpdateDescription(class FText Description);
	void InitBasicInteraction();
	void Construct();
	void ExecuteUbergraph_BasicInteractionWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
