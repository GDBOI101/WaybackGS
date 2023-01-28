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

// 0x19 (0x279 - 0x260)
// WidgetBlueprintGeneratedClass AthenaGameOverScreen.AthenaGameOverScreen_C
class UAthenaGameOverScreen_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetStack*                    GameOverStack;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowingGameOverScreen;                             // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGameOverScreen_C");
		return Clss;
	}

	void On_Player_Died(struct FFortPlayerDeathReport& DeathReport);
	void On_Player_Won();
	void HandleRevived();
	void Construct();
	void Clear_GameOver_Screen();
	void On_Team_Won();
	void ExecuteUbergraph_AthenaGameOverScreen(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UAthenaDeathWidget_C* CallFunc_Create_ReturnValue, class UAthenaWinWidget_C* CallFunc_Create_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
