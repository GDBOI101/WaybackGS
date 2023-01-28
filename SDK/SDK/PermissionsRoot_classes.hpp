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

// 0x38 (0x418 - 0x3E0)
// WidgetBlueprintGeneratedClass PermissionsRoot.PermissionsRoot_C
class UPermissionsRoot_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 Outpost_Screen_WidgetSwitcher;                     // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OutpostLevel_Text;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OutpostName_Text;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOutpostScreenStormShieldPermissions_C* OutpostScreenStormShieldPermissions;               // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_2;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PermissionsRoot_C");
		return Clss;
	}

	void Input_Handle_Back(bool* PassThrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void RefreshOutpostInfo(class FText Outpost_DisplayName, class FText StonewoodText, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortOutpostContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetCurrentTheaterName_ReturnValue, int32 CallFunc_GetOutpostCoreLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, bool CallFunc_IsOutpostOwner_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2);
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_PermissionsRoot(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
