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

// 0x8 (0x240 - 0x238)
// WidgetBlueprintGeneratedClass ActiveModifierItemHUD.ActiveModifierItemHUD_C
class UActiveModifierItemHUD_C : public UCommonUserWidget
{
public:
	class UImage*                                ImageModifier;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActiveModifierItemHUD_C");
		return Clss;
	}

	void AssignIcon(const struct FSlateBrush& InIconSlateBrush);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
