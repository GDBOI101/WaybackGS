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

// 0x15C3 (0x17FB - 0x238)
// WidgetBlueprintGeneratedClass RatingWidget_NUI.RatingWidget_NUI_C
class URatingWidget_NUI_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               CommonNumericTextRatingValue;                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        RatingValue;                                       // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3D06[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        InterpDuration;                                    // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3D07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   MBrush_Silhouette;                                 // 0x288(0x360)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   MBrush_Chamfer;                                    // 0x5E8(0x360)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   MBrush_Shadow;                                     // 0x948(0x360)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   MBrush_Icon;                                       // 0xCA8(0x360)(Edit, BlueprintVisible)
	bool                                         OverrideDefaultColor;                              // 0x1008(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color_Light;                                       // 0x100C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_Medium;                                      // 0x101C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_Dark;                                        // 0x102C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_Color_Light;                               // 0x103C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_Color_Medium;                              // 0x104C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Default_Color_Dark;                                // 0x105C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   MBrush_Icon_Alt;                                   // 0x1070(0x360)(Edit, BlueprintVisible)
	bool                                         UseAlternateIcon;                                  // 0x13D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3D0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   MBrush_Shadow_Alt;                                 // 0x13D8(0x360)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                  MMargin_Alt;                                       // 0x1738(0x60)(Edit, BlueprintVisible, NoDestructor)
	struct FFortMultiSizeMargin                  MMargin;                                           // 0x1798(0x60)(Edit, BlueprintVisible, NoDestructor)
	bool                                         ShowTeamPowerRating;                               // 0x17F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    Brush_Size;                                        // 0x17F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseRatingValuesFromPlayer;                        // 0x17FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RatingWidget_NUI_C");
		return Clss;
	}

	void SetShouldShowTeamPowerRating(bool ShowTeamRating);
	void Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color);
	void Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, class FName Parameter, const struct FFortMultiSizeBrush& MBrush, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	void Update_From_Unique_ID(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetLocalTeamHomebaseRating_Rating, float CallFunc_GetLocalTeamHomebaseRating_ProgressFraction, bool CallFunc_GetLocalTeamHomebaseRating_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue);
	void Set_Unique_ID(const struct FUniqueNetIdRepl& ID);
	void Update();
	void Update_Rating_Value(int32 Rating, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void PlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId);
	void Construct();
	void PlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_RatingWidget_NUI(int32 EntryPoint, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
