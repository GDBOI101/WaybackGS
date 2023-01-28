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

// 0x0 (0x28 - 0x28)
// Class McpProfileSys.McpItemDefinitionBase
class UMcpItemDefinitionBase : public UDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemDefinitionBase");
		return Clss;
	}

};

// 0x288 (0x2B0 - 0x28)
// Class McpProfileSys.McpProfile
class UMcpProfile : public UObject
{
public:
	enum class EServerClientFlag                 AllowSubscriptionToNotificationsService;           // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1899[0xA7];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugName;                                         // 0xD0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileLockOperationPending;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileUnlockOperationPending;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_189A[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMcpProfileGroup*                      ProfileGroup;                                      // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ProfileId;                                         // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        ProfileRevision;                                   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        FullProfileQueryQueued;                            // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldCreateInstances;                            // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bProfileWriteLocked;                               // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_189B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             ProfileWriteLockExpireTime;                        // 0x118(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CommandRevision;                                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_189C[0x18C];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfile");
		return Clss;
	}

	void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};

// 0x0 (0x28 - 0x28)
// Class McpProfileSys.McpItemAware
class UMcpItemAware : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemAware");
		return Clss;
	}

};

// 0x188 (0x1B0 - 0x28)
// Class McpProfileSys.McpProfileGroup
class UMcpProfileGroup : public UObject
{
public:
	uint8                                        Pad_189D[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DelayMcpResults;                                   // 0x78(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_189E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProfileEntry>                 ProfileList;                                       // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_189F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsServer;                                         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProfileNotificationsStompTopic;                    // 0xB0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A1[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastMcpVersion;                                    // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LastContentVersion;                                // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                             LocalTimeOffset;                                   // 0x120(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProfileHttpRequest>           PendingRequests;                                   // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsProcessingRequestGenerator;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LockCode;                                          // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMcpProfile*>                   LockedProfiles;                                    // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                LockedProfilesString;                              // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ProfileWriteLockTimeoutSecs;                       // 0x180(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSubscribedToNotifications;                        // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ApplyStashEndPoint;                                // 0x188(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSendProfileCommandRevisions;                      // 0x1A0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18A6[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileGroup");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class McpProfileSys.McpProfileManager
class UMcpProfileManager : public UObject
{
public:
	uint8                                        Pad_18A7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProfileGroupEntry>            ServerProfileGroups;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>            ClientProfileGroups;                               // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
