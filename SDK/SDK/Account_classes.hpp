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

// 0x7D8 (0x800 - 0x28)
// Class Account.OnlineAccountCommon
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                        Pad_1B28[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AvailabilityServiceGameName;                       // 0x38(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireLightswitchAtStartup;                      // 0x48(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EulaKey;                                           // 0x50(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FWebEnvUrl>                    WebCreateEpicAccountUrl;                           // 0x60(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldGrantFreeAccess;                            // 0x70(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B2A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseGameSubAccessRedemption;                       // 0x72(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowHomeSharingAccess;                           // 0x73(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B2B[0x78C];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineAccountCommon");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
