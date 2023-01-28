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

// 0x78 (0x918 - 0x8A0)
// WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C
class UNodeBackground_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	enum class ESkillTreeGroups                  Group;                                             // 0x8A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillTreeGroupColors                 GroupColors;                                       // 0x8AC(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Horizontal;                                        // 0x900(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                VerticalStyle;                                     // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                HorizontalStyle;                                   // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NodeBackground_C");
		return Clss;
	}

	void SetBackgroundColor(enum class ESkillTreeGroups Groups, enum class ESkillTreeGroups Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_NodeBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
