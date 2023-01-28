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

// 0x20 (0x258 - 0x238)
// WidgetBlueprintGeneratedClass XpBoostQuantities.XpBoostQuantities_C
class UXpBoostQuantities_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      TextBoostXPQuant;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDBXPQuant;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextNormalXPQuant;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpBoostQuantities_C");
		return Clss;
	}

	int32 ScaledRestBalance(int32 AmountToLevel, float Xp_For_Level, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	int32 ScaledBoostBalance(int32 AmountToLevel, float Xp_For_Level, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void UpdateXPQuantitiesInfo(int32 CurrentXP, int32 XPToLevel, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, int32 CallFunc_ScaledBoostBalance_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_ScaledRestBalance_ReturnValue, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3);
	void Construct();
	void HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo);
	void Xp_Boost_Changed(int32 BoostAmount);
	void ExecuteUbergraph_XpBoostQuantities(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo, int32 K2Node_CustomEvent_BoostAmount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
