#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
struct AGeometryCacheActor_GetGeometryCacheComponent_Params
{
public:
	class UGeometryCacheComponent*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GeometryCache.GeometryCacheComponent.Stop
struct UGeometryCacheComponent_Stop_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
struct UGeometryCacheComponent_SetPlaybackSpeed_Params
{
public:
	float                                        NewPlaybackSpeed;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetLooping
struct UGeometryCacheComponent_SetLooping_Params
{
public:
	bool                                         bNewLooping;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
struct UGeometryCacheComponent_SetGeometryCache_Params
{
public:
	class UGeometryCache*                        NewGeomCache;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1874[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
struct UGeometryCacheComponent_PlayReversedFromEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GeometryCache.GeometryCacheComponent.PlayReversed
struct UGeometryCacheComponent_PlayReversed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GeometryCache.GeometryCacheComponent.PlayFromStart
struct UGeometryCacheComponent_PlayFromStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GeometryCache.GeometryCacheComponent.Play
struct UGeometryCacheComponent_Play_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GeometryCache.GeometryCacheComponent.Pause
struct UGeometryCacheComponent_Pause_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
struct UGeometryCacheComponent_IsPlayingReversed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.IsPlaying
struct UGeometryCacheComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.IsLooping
struct UGeometryCacheComponent_IsLooping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
struct UGeometryCacheComponent_GetPlaybackSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
struct UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params
{
public:
	struct FGeometryCacheMeshData                MeshData;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        SampleTime;                                        // 0x50(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1878[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
struct UGeometryCacheTrack_TransformAnimation_SetMesh_Params
{
public:
	struct FGeometryCacheMeshData                NewMeshData;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
struct UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params
{
public:
	struct FGeometryCacheMeshData                NewMeshData;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
