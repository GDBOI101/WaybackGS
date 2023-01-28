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

// 0x1B9 (0x3F1 - 0x238)
// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
class UCinematic_TeamMics_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UMicIndicator_C*                       MicIndicator;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherConnectingStranger;                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlock_6;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   MemberInfo;                                        // 0x260(0x190)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowingHealth;                                     // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Cinematic-TeamMics_C");
		return Clss;
	}

	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo, const struct FUniqueNetIdRepl& PlayerNetId, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable3, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_Select2_Default, bool CallFunc_IsValidNetID_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select3_Default);
	void Construct();
	void ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
