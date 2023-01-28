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

// 0x19 (0x249 - 0x230)
// WidgetBlueprintGeneratedClass XpBoostDailyBonus.XpBoostDailyBonus_C
class UXpBoostDailyBonus_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Boost;                                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSZAwareImage*                     BoostIcon;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsBoosted;                                         // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpBoostDailyBonus_C");
		return Clss;
	}

	void Get_Current_Boost(int32* Boost_Amount, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetRestXpBonusPercent_ReturnValue);
	void Update_Daily_Bonus(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetRestXpBalance_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_Get_Current_Boost_Boost_Amount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void ExecuteUbergraph_XpBoostDailyBonus(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
