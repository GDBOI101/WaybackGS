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

// 0x458 (0x690 - 0x238)
// WidgetBlueprintGeneratedClass AthenaTeamMemberInfo.AthenaTeamMemberInfo_C
class UAthenaTeamMemberInfo_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UAthenaTeamMemberDBNOState_C*          DBNOState;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DeadIndicator;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageDBNOBar;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHealthbar;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageShieldbar;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Marker;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Speaker;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowingHealth;                                     // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowingShield;                                     // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        PlayerIndex;                                       // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3C0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Player0;                                           // 0x298(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           Player1;                                           // 0x328(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           Player2;                                           // 0x3B8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           Player3;                                           // 0x448(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Talking;                                           // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Muted;                                             // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           MutedBrush;                                        // 0x4E0(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           TalkingBrush;                                      // 0x570(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           NotTalkingBrush;                                   // 0x600(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamMemberInfo_C");
		return Clss;
	}

	void SetTalking(bool NewTalking);
	void UpdateMicIcon();
	void SetMuted(bool NewMuted);
	void SetReviving(bool Reviving);
	void UpdatePlayerName(const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetDBNO(bool DBNO);
	void SetDead(bool Dead, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select2_Default);
	void UpdatePS(class AFortPlayerStateAthena* InPlayerState);
	void SetShield(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2);
	void Construct();
	void ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint, int32 Temp_int_Variable, const struct FSlateBrush& K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
