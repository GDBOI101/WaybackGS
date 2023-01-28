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

// 0x28 (0x3B0 - 0x388)
// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public AActor
{
public:
	uint8                                        Pad_1B3C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BeaconConnectionInitialTimeout;                    // 0x390(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeaconConnectionTimeout;                           // 0x394(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                            NetDriver;                                         // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B3D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeacon");
		return Clss;
	}

};

// 0x88 (0x438 - 0x3B0)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*               BeaconOwner;                                       // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                        BeaconConnection;                                  // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B3E[0x77];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeaconClient");
		return Clss;
	}

	void ClientOnConnected();
};

// 0x28 (0x3B0 - 0x388)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x388(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AOnlineBeaconClient>       ClientBeaconActorClass;                            // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x3A0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeaconHostObject");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTeams;                                          // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPartyReservation>             Reservations;                                      // 0x50(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B3F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyBeaconState");
		return Clss;
	}

};

// 0xB8 (0x468 - 0x3B0)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x3B0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x3B8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B41[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineBeaconHost");
		return Clss;
	}

};

// 0x298 (0x2C0 - 0x28)
// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession
{
public:
	uint8                                        Pad_1B42[0x288];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsFromInvite;                                     // 0x2B0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandlingDisconnect;                               // 0x2B1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B43[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineSessionClient");
		return Clss;
	}

};

// 0x138 (0x570 - 0x438)
// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_1B44[0xC8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DestSessionId;                                     // 0x500(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                     PendingReservation;                                // 0x510(0x30)(Protected, NativeAccessSpecifierProtected)
	enum class EClientRequestType                RequestType;                                       // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingReservationSent;                           // 0x541(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelReservation;                                // 0x542(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B45[0x2D];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyBeaconClient");
		return Clss;
	}

	void ServerUpdateReservationRequest(const class FString& SessionId, struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const class FString& SessionId, struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse);
};

// 0x160 (0x510 - 0x3B0)
// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B46[0x148];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLogoutOnSessionTimeout;                           // 0x500(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SessionTimeoutSecs;                                // 0x504(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TravelSessionTimeoutSecs;                          // 0x508(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B48[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyBeaconHost");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AchievementBlueprintLibrary");
		return Clss;
	}

	void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool* bFoundID, float* Progress);
	void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AchievementQueryCallbackProxy");
		return Clss;
	}

	class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x50 (0x78 - 0x28)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4D[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AchievementWriteCallbackProxy");
		return Clss;
	}

	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementName, float Progress, int32 UserTag);
};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4E[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConnectionCallbackProxy");
		return Clss;
	}

	class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0xC8 (0xF0 - 0x28)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B50[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreateSessionCallbackProxy");
		return Clss;
	}

	class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B51[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DestroySessionCallbackProxy");
		return Clss;
	}

	class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x50 (0x78 - 0x28)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B53[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EndMatchCallbackProxy");
		return Clss;
	}

	class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, UInterfaceProperty_ MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome);
};

// 0x48 (0x70 - 0x28)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B54[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EndTurnCallbackProxy");
		return Clss;
	}

	class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, UInterfaceProperty_ TurnBasedMatchInterface);
};

// 0x98 (0xC0 - 0x28)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B59[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FindSessionsCallbackProxy");
		return Clss;
	}

	class FString GetServerName(struct FBlueprintSessionResult& Result);
	int32 GetPingInMs(struct FBlueprintSessionResult& Result);
	int32 GetMaxPlayers(struct FBlueprintSessionResult& Result);
	int32 GetCurrentPlayers(struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
};

// 0x58 (0x80 - 0x28)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5B[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FindTurnBasedMatchCallbackProxy");
		return Clss;
	}

	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, UInterfaceProperty_ MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
};

// 0x98 (0xC0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5C[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InAppPurchaseCallbackProxy");
		return Clss;
	}

	class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest);
};

// 0xA8 (0xD0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5D[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InAppPurchaseQueryCallbackProxy");
		return Clss;
	}

	class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString>& ProductIdentifiers);
};

// 0xA8 (0xD0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5E[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InAppPurchaseRestoreCallbackProxy");
		return Clss;
	}

	class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController);
};

// 0x20 (0x337B0 - 0x33790)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_1B5F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IpConnection");
		return Clss;
	}

};

// 0x30 (0x440 - 0x410)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x410(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x410(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1EA : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1B60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaxPortCountToTry;                                 // 0x414(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B61[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x430(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x434(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x438(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x43C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IpNetDriver");
		return Clss;
	}

};

// 0x138 (0x160 - 0x28)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B62[0x118];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JoinSessionCallbackProxy");
		return Clss;
	}

	class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardBlueprintLibrary");
		return Clss;
	}

	bool WriteLeaderboardInteger(class APlayerController* PlayerController, class FName StatName, int32 StatValue);
};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B64[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardFlushCallbackProxy");
		return Clss;
	}

	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, class FName SessionName);
};

// 0xA8 (0xD0 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B65[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardQueryCallbackProxy");
		return Clss;
	}

	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, class FName StatName);
};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B66[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LogoutCallbackProxy");
		return Clss;
	}

	class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x8 (0x440 - 0x438)
// Class OnlineSubsystemUtils.TestBeaconClient
class ATestBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_1B67[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestBeaconClient");
		return Clss;
	}

	void ServerPong();
	void ClientPing();
};

// 0x0 (0x3B0 - 0x3B0)
// Class OnlineSubsystemUtils.TestBeaconHost
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestBeaconHost");
		return Clss;
	}

};

// 0x108 (0x130 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	class FName                                  VoiceSubsystemNameOverride;                        // 0x28(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B68[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineEngineInterfaceImpl");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlinePIESettings");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6B[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuitMatchCallbackProxy");
		return Clss;
	}

	class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds);
};

// 0x30 (0x58 - 0x28)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowLoginUICallbackProxy");
		return Clss;
	}

	class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TurnBasedBlueprintLibrary");
		return Clss;
	}

	void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex, class FString* PlayerDisplayName);
	void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32* PlayerIndex);
	void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
