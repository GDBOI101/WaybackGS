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

// 0x19 (0x251 - 0x238)
// WidgetBlueprintGeneratedClass Results_TeamSubtotalScore.Results_TeamSubtotalScore_C
class UResults_TeamSubtotalScore_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                ImageBackground;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScore;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortUIScoreType                  ScoreType;                                         // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_TeamSubtotalScore_C");
		return Clss;
	}

	void UpdateBackground(class UTexture2D* Texture, bool K2Node_SwitchEnum_CmpSuccess);
	void SetScore(int32 Score, float CallFunc_Conv_IntToFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_Results_TeamSubtotalScore(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
