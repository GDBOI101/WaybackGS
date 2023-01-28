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

// 0x20 (0x288 - 0x268)
// WidgetBlueprintGeneratedClass AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C
class UAthenaPlayersLeftWidget_C : public UAthenaPlayersLeftBase
{
public:
	class UImage*                                PlayersOrTeamsLeftImage;                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TeamsLeft;                                         // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayersLeftWidget_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
