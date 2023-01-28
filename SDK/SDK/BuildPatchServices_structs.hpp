#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EManifestFileHeader : uint8
{
	STORED_RAW                     = 0,
	STORED_COMPRESSED              = 1,
	STORED_MAX                     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct BuildPatchServices.SHAHashData
struct FSHAHashData
{
public:
	uint8                                        Hash;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186C[0x13];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct BuildPatchServices.ChunkPartData
struct FChunkPartData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Offset;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Size;                                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct BuildPatchServices.FileManifestData
struct FFileManifestData
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSHAHashData                          FileHash;                                          // 0x10(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_186D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChunkPartData>                FileChunkParts;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        InstallTags;                                       // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsUnixExecutable;                                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SymlinkTarget;                                     // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReadOnly;                                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCompressed;                                     // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186F[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct BuildPatchServices.ChunkInfoData
struct FChunkInfoData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Hash;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSHAHashData                          ShaHash;                                           // 0x18(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1870[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        FileSize;                                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GroupNumber;                                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1871[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct BuildPatchServices.CustomFieldData
struct FCustomFieldData
{
public:
	class FString                                Key;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
