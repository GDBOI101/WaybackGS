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

// 0x30 (0x58 - 0x28)
// Class TcpMessaging.TcpMessagingSettings
class UTcpMessagingSettings : public UObject
{
public:
	bool                                         EnableTransport;                                   // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_237A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ListenEndpoint;                                    // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ConnectToEndpoints;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        ConnectionRetryDelay;                              // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_237B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TcpMessagingSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
