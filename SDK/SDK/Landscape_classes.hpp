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

// 0x0 (0x7E0 - 0x7E0)
// Class Landscape.ControlPointMeshComponent
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlPointMeshComponent");
		return Clss;
	}

};

// 0x170 (0x7E0 - 0x670)
// Class Landscape.LandscapeComponent
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int32                                        SectionBaseX;                                      // 0x670(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionBaseY;                                      // 0x674(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentSizeQuads;                                // 0x678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x67C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSubsections;                                    // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OverrideHoleMaterial;                              // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceConstant*>     MaterialInstances;                                 // 0x698(0x10)(ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                         // 0x6A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    WeightmapTextures;                                 // 0x6B8(0x10)(ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	class UTexture2D*                            XYOffsetmapTexture;                                // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              WeightmapScaleBias;                                // 0x6D0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightmapSubsectionOffset;                         // 0x6E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              HeightmapScaleBias;                                // 0x6F0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            HeightmapTexture;                                  // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  CachedLocalBox;                                    // 0x708(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                // 0x724(0x1C)(ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MapBuildDataId;                                    // 0x740(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         IrrelevantLights;                                  // 0x750(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	int32                                        CollisionMipLevel;                                 // 0x760(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimpleCollisionMipLevel;                           // 0x764(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeZBoundsExtension;                          // 0x768(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositiveZBoundsExtension;                          // 0x76C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaticLightingResolution;                          // 0x770(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ForcedLOD;                                         // 0x774(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODBias;                                           // 0x778(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 StateId;                                           // 0x77C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 BakedTextureMaterialGuid;                          // 0x78C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            GIBakedBaseColorTexture;                           // 0x7A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MobileBlendableLayerMask;                          // 0x7A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MobileMaterialInterface;                           // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            MobileWeightNormalmapTexture;                      // 0x7B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D90[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeComponent");
		return Clss;
	}

};

// 0x0 (0x388 - 0x388)
// Class Landscape.LandscapeGizmoActor
class ALandscapeGizmoActor : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGizmoActor");
		return Clss;
	}

};

// 0x50 (0x3D8 - 0x388)
// Class Landscape.LandscapeGizmoActiveActor
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	uint8                                        Pad_1D91[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGizmoActiveActor");
		return Clss;
	}

};

// 0x0 (0x670 - 0x670)
// Class Landscape.LandscapeGizmoRenderComponent
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGizmoRenderComponent");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeGrassType
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                 GrassVarieties;                                    // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                           GrassMesh;                                         // 0x38(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrassDensity;                                      // 0x40(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlacementJitter;                                   // 0x44(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartCullDistance;                                 // 0x48(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndCullDistance;                                   // 0x4C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RandomRotation;                                    // 0x50(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlignToSurface;                                    // 0x51(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D92[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeGrassType");
		return Clss;
	}

};

// 0xE0 (0x750 - 0x670)
// Class Landscape.LandscapeHeightfieldCollisionComponent
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>     ComponentLayerInfos;                               // 0x670(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SectionBaseX;                                      // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionBaseY;                                      // 0x684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionSizeQuads;                                // 0x688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionScale;                                    // 0x68C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimpleCollisionSizeQuads;                          // 0x690(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                CollisionQuadFlags;                                // 0x698(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 HeightfieldGuid;                                   // 0x6A8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  CachedLocalBox;                                    // 0x6B8(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeComponent>    RenderComponent;                                   // 0x6D4(0x1C)(ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D94[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPhysicalMaterial*>             CookedPhysicalMaterials;                           // 0x700(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D95[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeHeightfieldCollisionComponent");
		return Clss;
	}

};

// 0x20 (0x770 - 0x750)
// Class Landscape.LandscapeMeshCollisionComponent
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                 MeshGuid;                                          // 0x750(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D96[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMeshCollisionComponent");
		return Clss;
	}

};

// 0x1D8 (0x200 - 0x28)
// Class Landscape.LandscapeInfo
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>             LandscapeActor;                                    // 0x28(0x1C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LandscapeGuid;                                     // 0x44(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentSizeQuads;                                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentNumSubsections;                           // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DrawScale;                                         // 0x60(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D97[0x54];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class ALandscapeStreamingProxy*>        Proxies;                                           // 0xC0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D98[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeInfo");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class Landscape.LandscapeInfoMap
class ULandscapeInfoMap : public UObject
{
public:
	uint8                                        Pad_1D99[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeInfoMap");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Landscape.LandscapeLayerInfoObject
class ULandscapeLayerInfoObject : public UObject
{
public:
	class FName                                  LayerName;                                         // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hardness;                                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LayerUsageDebugColor;                              // 0x3C(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeLayerInfoObject");
		return Clss;
	}

};

// 0x8 (0x1B8 - 0x1B0)
// Class Landscape.LandscapeMaterialInstanceConstant
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	uint8                                        bIsLayerThumbnail : 1;                             // Mask: 0x1, PropSize: 0x10x1B0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableTessellation : 1;                          // Mask: 0x2, PropSize: 0x10x1B0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMaterialInstanceConstant");
		return Clss;
	}

};

// 0x8 (0x390 - 0x388)
// Class Landscape.LandscapeMeshProxyActor
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*          LandscapeMeshProxyComponent;                       // 0x388(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMeshProxyActor");
		return Clss;
	}

};

// 0x30 (0x810 - 0x7E0)
// Class Landscape.LandscapeMeshProxyComponent
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 LandscapeGuid;                                     // 0x7E0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FIntPoint>                     ProxyComponentBases;                               // 0x7F0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int8                                         ProxyLOD;                                          // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D9C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeMeshProxyComponent");
		return Clss;
	}

};

// 0x400 (0x788 - 0x388)
// Class Landscape.LandscapeProxy
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*            SplineComponent;                                   // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 LandscapeGuid;                                     // 0x390(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             LandscapeSectionOffset;                            // 0x3A0(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLODLevel;                                       // 0x3A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODDistanceFactor;                                 // 0x3AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeLODFalloff              LODFalloff;                                        // 0x3B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StaticLightingLOD;                                 // 0x3B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     DefaultPhysMaterial;                               // 0x3B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StreamingDistanceMultiplier;                       // 0x3C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x3C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    LandscapeHoleMaterial;                             // 0x3D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeZBoundsExtension;                          // 0x3D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositiveZBoundsExtension;                          // 0x3DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULandscapeComponent*>           LandscapeComponents;                               // 0x3E0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                               // 0x3F0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                 // 0x400(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA0[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasLandscapeGrass;                                // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaticLightingResolution;                          // 0x474(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x1, PropSize: 0x10x478(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x2, PropSize: 0x10x478(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastFarShadow : 1;                                // Mask: 0x4, PropSize: 0x10x478(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F8 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLightingChannels                     LightingChannels;                                  // 0x47C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseMaterialPositionOffsetInStaticLighting : 1;    // Mask: 0x1, PropSize: 0x10x480(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x2, PropSize: 0x10x480(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F9 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomDepthStencilValue;                           // 0x484(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightmassPrimitiveSettings           LightmassSettings;                                 // 0x488(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        CollisionMipLevel;                                 // 0x4A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimpleCollisionMipLevel;                           // 0x4A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x4A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         BodyInstance;                                      // 0x4B0(0x220)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        bGenerateOverlapEvents : 1;                        // Mask: 0x1, PropSize: 0x10x6D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBakeMaterialPositionOffsetIntoCollision : 1;      // Mask: 0x2, PropSize: 0x10x6D0(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FA : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ComponentSizeQuads;                                // 0x6D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSubsections;                                    // 0x6DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsedForNavigation : 1;                            // Mask: 0x1, PropSize: 0x10x6E0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FB : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENavDataGatheringMode             NavigationGeometryGatheringMode;                   // 0x6E4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLandscapeForCullingInvisibleHLODVertices;      // 0x6E5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA8[0xA2];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeProxy");
		return Clss;
	}

	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};

// 0x8 (0x790 - 0x788)
// Class Landscape.Landscape
class ALandscape : public ALandscapeProxy
{
public:
	uint8                                        Pad_1DA9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Landscape");
		return Clss;
	}

};

// 0x28 (0x7B0 - 0x788)
// Class Landscape.LandscapeStreamingProxy
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>             LandscapeActor;                                    // 0x788(0x1C)(Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAA[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeStreamingProxy");
		return Clss;
	}

};

// 0x30 (0x6A0 - 0x670)
// Class Landscape.LandscapeSplinesComponent
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>  ControlPoints;                                     // 0x670(0x10)(ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0x680(0x10)(ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                CookedForeignMeshComponents;                       // 0x690(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplinesComponent");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class Landscape.LandscapeSplineSegment
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection     Connections;                                       // 0x28(0x18)(Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAB[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInterpCurveVector                    SplineInfo;                                        // 0x58(0x18)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x70(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  Bounds;                                            // 0x80(0x1C)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USplineMeshComponent*>          LocalMeshComponents;                               // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplineSegment");
		return Clss;
	}

};

// 0x70 (0x98 - 0x28)
// Class Landscape.LandscapeSplineControlPoint
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                               Location;                                          // 0x28(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x34(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideFalloff;                                       // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndFalloff;                                        // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLandscapeSplineConnection>    ConnectedSegments;                                 // 0x50(0x10)(ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                  Bounds;                                            // 0x70(0x1C)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlPointMeshComponent*            LocalMeshComponent;                                // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeSplineControlPoint");
		return Clss;
	}

};

// 0x10 (0x70 - 0x60)
// Class Landscape.MaterialExpressionLandscapeGrassOutput
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                   GrassTypes;                                        // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeGrassOutput");
		return Clss;
	}

};

// 0x20 (0x80 - 0x60)
// Class Landscape.MaterialExpressionLandscapeLayerBlend
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>              Layers;                                            // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionGUID;                                    // 0x70(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerBlend");
		return Clss;
	}

};

// 0x18 (0x78 - 0x60)
// Class Landscape.MaterialExpressionLandscapeLayerCoords
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	enum class ETerrainCoordMappingType          MappingType;                                       // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeCustomizedCoordType     CustomUVType;                                      // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MappingScale;                                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MappingRotation;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MappingPanU;                                       // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MappingPanV;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerCoords");
		return Clss;
	}

};

// 0x20 (0x80 - 0x60)
// Class Landscape.MaterialExpressionLandscapeLayerSample
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	class FName                                  ParameterName;                                     // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviewWeight;                                     // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionGUID;                                    // 0x6C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSample");
		return Clss;
	}

};

// 0x90 (0xF0 - 0x60)
// Class Landscape.MaterialExpressionLandscapeLayerSwitch
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                      LayerUsed;                                         // 0x60(0x38)(NativeAccessSpecifierPublic)
	struct FExpressionInput                      LayerNotUsed;                                      // 0x98(0x38)(NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviewUsed : 1;                                   // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FC : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ExpressionGUID;                                    // 0xDC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSwitch");
		return Clss;
	}

};

// 0x98 (0xF8 - 0x60)
// Class Landscape.MaterialExpressionLandscapeLayerWeight
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                      Base;                                              // 0x60(0x38)(NativeAccessSpecifierPublic)
	struct FExpressionInput                      Layer;                                             // 0x98(0x38)(NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviewWeight;                                     // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConstBase;                                         // 0xDC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionGUID;                                    // 0xE8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerWeight");
		return Clss;
	}

};

// 0x10 (0x70 - 0x60)
// Class Landscape.MaterialExpressionLandscapeVisibilityMask
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                 ExpressionGUID;                                    // 0x60(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionLandscapeVisibilityMask");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
