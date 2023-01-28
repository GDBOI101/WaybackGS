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

// 0x24 (0x2BC - 0x298)
// WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C
class UAthenaTeamMemberIndicator_C : public UAthenaTeamMemberIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(Transient, DuplicateTransient)
	class UAthenaTeamMemberDBNOState_C*          DBNOIndicator;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortPlayerStateAthena*                Player_State;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Team_Member_Index;                                 // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamMemberIndicator_C");
		return Clss;
	}

	void On_Team_Player_Names_Changed();
	void On_Team_Talking_Changed(TArray<bool>& Team_Talking, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, bool CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue);
	void On_Team_Reviving_Changed(TArray<bool>& Team_Reviving, bool CallFunc_Array_Get_Item);
	void On_Team_DBNO_Changed(TArray<bool>& DBNOStates, bool CallFunc_Array_Get_Item);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void Update_Pawn();
	void CapturePlayerName();
	void ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
