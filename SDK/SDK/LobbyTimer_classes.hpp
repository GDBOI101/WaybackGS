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

// 0x30 (0x260 - 0x230)
// WidgetBlueprintGeneratedClass LobbyTimer.LobbyTimer_C
class ULobbyTimer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      TimerIntro;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LobbyTimerBorder;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LobbyTimerText;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                            SoundCue_Countdown_10SecLeft;                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCue_Countdown_10SecTick;                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyTimer_C");
		return Clss;
	}

	void Handle_Lobby_Timer_Updated(int32 Seconds_Remaining, bool Temp_bool_Has_Been_Initd_Variable, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, class FText CallFunc_AsTimespan_Timespan_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable);
	void Handle_Show_Lobby_Timer(bool Show);
	void Bind_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue3);
	void Show_Lobby_Timer(bool Show);
	void Handle_Lobby_Disconnected();
	void Handle_Lobby_Started();
	void Construct();
	void ExecuteUbergraph_LobbyTimer(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
