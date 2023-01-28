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

// 0x9 (0x3A9 - 0x3A0)
// BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C
class AFrontend_Lobby_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	enum class EFortniteLobby                    LobbySelect;                                       // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_Lobby_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
