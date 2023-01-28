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

// 0x24 (0x254 - 0x230)
// WidgetBlueprintGeneratedClass XpBar.XpBar_C
class UXpBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              Overlay_3;                                         // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressBarNew;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Xp_Bar_Material;                                   // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Xp_For_Level;                                      // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpBar_C");
		return Clss;
	}

	float ScaledCommanderBalance(int32 LeveXP, int32 InInt2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue);
	int32 ScaledRestBalance(int32 AmountToLevel, float CallFunc_Conv_IntToFloat_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	int32 ScaledBoostBalance(int32 AmountToLevel, float CallFunc_Conv_IntToFloat_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	class UWidget* GetExperienceToolTipWidget(int32 XPToLevel, int32 CurrentXP, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, int32 CallFunc_ScaledRestBalance_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, TArray<struct FFortItemQuantityPair>& CallFunc_GetAccountLevelUpRewards_Rewards, int32 CallFunc_ScaledBoostBalance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Format_ReturnValue4, class UCommonUserWidget* CallFunc_CreateXPTooltip_Out);
	void Update_Xp_Bar(const struct FFortPublicAccountInfo& Account_Info, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_ScaledCommanderBalance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetXpBoostBalance_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue3, class FName CallFunc_MakeLiteralName_ReturnValue4);
	void Construct();
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void Xp_Boost_Changed(int32 BoostAmount);
	void ExecuteUbergraph_XpBar(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 K2Node_CustomEvent_BoostAmount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
