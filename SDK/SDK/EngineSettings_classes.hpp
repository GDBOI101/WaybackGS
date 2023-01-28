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

// 0x48 (0x70 - 0x28)
// Class EngineSettings.ConsoleSettings
class UConsoleSettings : public UObject
{
public:
	int32                                        MaxScrollbackSize;                                 // 0x28(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAutoCompleteCommand>          ManualAutoCompleteList;                            // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        AutoCompleteMapPaths;                              // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                        BackgroundOpacityPercentage;                       // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrderTopToBottom;                                 // 0x54(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                InputColor;                                        // 0x58(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                HistoryColor;                                      // 0x5C(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                AutoCompleteCommandColor;                          // 0x60(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                AutoCompleteCVarColor;                             // 0x64(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                AutoCompleteFadedColor;                            // 0x68(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConsoleSettings");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class EngineSettings.GameMapsSettings
class UGameMapsSettings : public UObject
{
public:
	struct FStringAssetReference                 EditorStartupMap;                                  // 0x28(0x10)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocalMapOptions;                                   // 0x38(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringAssetReference                 TransitionMap;                                     // 0x48(0x10)(Edit, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSplitscreen;                                   // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETwoPlayerSplitScreenType         TwoPlayerSplitscreenLayout;                        // 0x59(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EThreePlayerSplitScreenType       ThreePlayerSplitscreenLayout;                      // 0x5A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetPlayerGamepadIds;                           // 0x5B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringClassReference                 GameInstanceClass;                                 // 0x60(0x10)(Edit, Config, NoClear, NativeAccessSpecifierPublic)
	struct FStringAssetReference                 GameDefaultMap;                                    // 0x70(0x10)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStringAssetReference                 ServerDefaultMap;                                  // 0x80(0x10)(Edit, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStringClassReference                 GlobalDefaultGameMode;                             // 0x90(0x10)(Edit, Config, NoClear, NativeAccessSpecifierPrivate)
	struct FStringClassReference                 GlobalDefaultServerGameMode;                       // 0xA0(0x10)(Edit, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                 GameModeMapPrefixes;                               // 0xB0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                 GameModeClassAliases;                              // 0xC0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameMapsSettings");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class EngineSettings.GameNetworkManagerSettings
class UGameNetworkManagerSettings : public UObject
{
public:
	int32                                        MinDynamicBandwidth;                               // 0x28(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDynamicBandwidth;                               // 0x2C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalNetBandwidth;                                 // 0x30(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BadPingThreshold;                                  // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsStandbyCheckingEnabled : 1;                     // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_208 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1EE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StandbyRxCheatTime;                                // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StandbyTxCheatTime;                                // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentMissingForRxStandby;                        // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentMissingForTxStandby;                        // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentForBadPing;                                 // 0x4C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JoinInProgressStandbyWaitTime;                     // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameNetworkManagerSettings");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class EngineSettings.GameSessionSettings
class UGameSessionSettings : public UObject
{
public:
	int32                                        MaxSpectators;                                     // 0x28(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x2C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPushToTalk : 1;                           // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameSessionSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class EngineSettings.GeneralEngineSettings
class UGeneralEngineSettings : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeneralEngineSettings");
		return Clss;
	}

};

// 0xE8 (0x110 - 0x28)
// Class EngineSettings.GeneralProjectSettings
class UGeneralProjectSettings : public UObject
{
public:
	class FString                                CompanyName;                                       // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CompanyDistinguishedName;                          // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CopyrightNotice;                                   // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Homepage;                                          // 0x68(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LicensingTerms;                                    // 0x78(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrivacyPolicy;                                     // 0x88(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ProjectID;                                         // 0x98(0x10)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjectName;                                       // 0xA8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjectVersion;                                    // 0xB8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SupportContact;                                    // 0xC8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ProjectDisplayedTitle;                             // 0xD8(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  ProjectDebugTitleInfo;                             // 0xF0(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         bShouldWindowPreserveAspectRatio;                  // 0x108(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBorderlessWindow;                              // 0x109(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartInVR;                                        // 0x10A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowWindowResize;                                // 0x10B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowClose;                                       // 0x10C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMaximize;                                    // 0x10D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMinimize;                                    // 0x10E(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeneralProjectSettings");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class EngineSettings.HudSettings
class UHudSettings : public UObject
{
public:
	uint8                                        bShowHUD : 1;                                      // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_209 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1EEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DebugDisplay;                                      // 0x30(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HudSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
