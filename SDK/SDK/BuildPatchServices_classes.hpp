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

// 0xA8 (0xD0 - 0x28)
// Class BuildPatchServices.BuildPatchManifest
class UBuildPatchManifest : public UObject
{
public:
	uint8                                        ManifestFileVersion;                               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFileData;                                       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       AppID;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppName;                                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildVersion;                                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LaunchExe;                                         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LaunchCommand;                                     // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrereqName;                                        // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrereqPath;                                        // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrereqArgs;                                        // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFileManifestData>             FileManifestList;                                  // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FChunkInfoData>                ChunkList;                                         // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomFieldData>              CustomFields;                                      // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BuildPatchManifest");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
