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

// 0x50 (0x3D8 - 0x388)
// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public AActor
{
public:
	float                                        CranePitch;                                        // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneYaw;                                          // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneArmLength;                                    // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountPitch;                                   // 0x394(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountYaw;                                     // 0x395(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x398(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneYawControl;                                   // 0x3A0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CranePitchControl;                                 // 0x3A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneCameraMount;                                  // 0x3B0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  PreviewMesh_CraneArm;                              // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  PreviewMesh_CraneBase;                             // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  PreviewMesh_CraneMount;                            // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  PreviewMesh_CraneCounterWeight;                    // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraRig_Crane");
		return Clss;
	}

};

// 0x48 (0x3D0 - 0x388)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x390(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineComponent*                      RailSplineComponent;                               // 0x398(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       RailCameraMount;                                   // 0x3A0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineMeshComponent*                  PreviewMesh_Rail;                                  // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USplineMeshComponent*>          PreviewRailMeshSegments;                           // 0x3B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           PreviewRailStaticMesh;                             // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  PreviewMesh_Mount;                                 // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraRig_Rail");
		return Clss;
	}

};

// 0x40 (0x8C0 - 0x880)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0x880(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CineCameraActor");
		return Clss;
	}

	class UCineCameraComponent* GetCineCameraComponent();
};

// 0xB0 (0x880 - 0x7D0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x7D0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                   LensSettings;                                      // 0x7DC(0x14)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                  FocusSettings;                                     // 0x7F0(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x824(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0x828(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA0[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x838(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x848(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPresetName;                         // 0x858(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultLensPresetName;                             // 0x868(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFocalLength;                            // 0x878(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFStop;                                  // 0x87C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CineCameraComponent");
		return Clss;
	}

	float GetVerticalFieldOfView();
	float GetHorizontalFieldOfView();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
