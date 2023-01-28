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

// 0x1A8 (0x5E0 - 0x438)
// Class Lobby.LobbyBeaconClient
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                     LobbyState;                                        // 0x438(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*               PlayerState;                                       // 0x440(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELobbyBeaconJoinState             LobbyJoinServerState;                              // 0x449(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B8C[0x196];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconClient");
		return Clss;
	}

	void ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const class FString& Msg);
	void ClientWasKicked(class FText& KickReason);
	void ClientSetInviteFlags(struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// 0x30 (0x3E0 - 0x3B0)
// Class Lobby.LobbyBeaconHost
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_1B8D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ALobbyBeaconState>       LobbyStateClass;                                   // 0x3B8(0x20)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                     LobbyState;                                        // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconHost");
		return Clss;
	}

};

// 0x138 (0x4C0 - 0x388)
// Class Lobby.LobbyBeaconPlayerState
class ALobbyBeaconPlayerState : public AInfo
{
public:
	class FText                                  DisplayName;                                       // 0x388(0x18)(Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x3A0(0x18)(Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PartyOwnerUniqueId;                                // 0x3B8(0x18)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLobby;                                          // 0x3D0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOnlineBeaconClient*                   ClientActor;                                       // 0x3D8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8F[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconPlayerState");
		return Clss;
	}

	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// 0x2B0 (0x638 - 0x388)
// Class Lobby.LobbyBeaconState
class ALobbyBeaconState : public AInfo
{
public:
	int32                                        MaxPlayers;                                        // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ALobbyBeaconPlayerState>   LobbyBeaconPlayerStateClass;                       // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B91[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLobbyStarted;                                     // 0x3A0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitForPlayersTimeRemaining;                       // 0x3A4(0x4)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray            Players;                                           // 0x3A8(0xC8)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B93[0x1C8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconState");
		return Clss;
	}

	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
