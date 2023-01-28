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

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass AthenaKillFeedItem.AthenaKillFeedItem_C
class UAthenaKillFeedItem_C : public UFortHUDElementWidget
{
public:
	class UFortRichTextBlock*                    KIllText;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortGameStateAthena*                  GameState;                                         // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaKillFeedItem_C");
		return Clss;
	}

	void SetText(class FText Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
