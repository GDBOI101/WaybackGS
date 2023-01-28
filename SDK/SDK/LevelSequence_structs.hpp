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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x1C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ComponentName;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_1B7B[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReference
struct FLevelSequenceObjectReference
{
public:
	uint8                                        Pad_1B7C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
public:
	uint8                                        ZeroPadAmount;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FrameRate;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
public:
	class FText                                  MasterName;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	float                                        MasterTime;                                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CurrentShotName;                                   // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	float                                        CurrentShotLocalTime;                              // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CameraComponent;                                   // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceSnapshotSettings        Settings;                                          // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
public:
	uint8                                        Pad_1B80[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
