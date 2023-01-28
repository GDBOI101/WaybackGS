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

// 0x33A (0x572 - 0x238)
// WidgetBlueprintGeneratedClass HitPointBar.HitPointBar_C
class UHitPointBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        _Horizontal_Box__Stat_Text;                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Baseplate;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Bevel;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Stat_Icon;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Stat_Icon_Shadow;                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              _Overlay__Bar_Artwork;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          _ProgressBar__Delta;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          _ProgressBar__Fill;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              _Size_Box__Bar;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxHighlight;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextCurrentStat;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextMaxStat;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EProgressBarType                  Type;                                              // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3E18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Current_Value;                                     // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_Value;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Fill_Texture;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Gloss_Texture;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Color_A;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Color_B;                                  // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Color_C;                                  // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Last_Value;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeUpdateRate;                                    // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeFont                    MultiFont;                                         // 0x2F8(0x270)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Baseplate_Texture;                                 // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Volatile;                                          // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSetInitialValues;                               // 0x571(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HitPointBar_C");
		return Clss;
	}

	void SetInitialValues(bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxShield_ReturnValue, float CallFunc_GetMaxStamina_ReturnValue, float CallFunc_GetStamina_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetShield_ReturnValue);
	void UpdateVolatileForUpdate(bool NewVolatile, enum class EProgressBarType Temp_byte_Variable, float K2Node_Select_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Update(bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void Update_Delta_Bar(float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Initialize_Bar(enum class EProgressBarType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, enum class EProgressBarType Temp_byte_Variable2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, enum class EProgressBarType Temp_byte_Variable3, const struct FLinearColor& Temp_struct_Variable4, const struct FLinearColor& Temp_struct_Variable5, const struct FLinearColor& Temp_struct_Variable6, enum class EProgressBarType Temp_byte_Variable4, const struct FLinearColor& Temp_struct_Variable7, const struct FLinearColor& Temp_struct_Variable8, const struct FLinearColor& Temp_struct_Variable9, const struct FMargin& K2Node_MakeStruct_Margin, class UTexture2D* Temp_object_Variable, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, enum class EProgressBarType Temp_byte_Variable5, const struct FLinearColor& Temp_struct_Variable10, const struct FLinearColor& Temp_struct_Variable11, const struct FLinearColor& Temp_struct_Variable12, enum class EProgressBarType Temp_byte_Variable6, const struct FLinearColor& Temp_struct_Variable13, const struct FLinearColor& Temp_struct_Variable14, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& Temp_struct_Variable15, enum class EProgressBarType Temp_byte_Variable7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, const struct FLinearColor& K2Node_Select_Default, class UClass* K2Node_Select2_Default, class UTexture2D* K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, const struct FLinearColor& K2Node_Select6_Default, const struct FLinearColor& K2Node_Select7_Default);
	void UpdateCurrentValueWithoutReason(float Current);
	void Update_Fill_Bar(float Temp_float_Variable, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void UpdateCurrentValue(float Current, enum class EFortHitPointModificationReason Reason, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_FMax_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void UpdateMaxValue(float Max, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_HitPointBar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
