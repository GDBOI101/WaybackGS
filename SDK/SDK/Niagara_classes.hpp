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

// 0x8 (0x390 - 0x388)
// Class Niagara.NiagaraActor
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x388(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraActor");
		return Clss;
	}

};

// 0x30 (0x6A0 - 0x670)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	class UNiagaraEffect*                        Asset;                                             // 0x670(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C2B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraVariable>              EffectParameterLocalOverrides;                     // 0x688(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterface
{
public:
	class UCurveFloat*                           Curve;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCurve");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterface
{
public:
	class UCurveVector*                          Curve;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorCurve");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterface
{
public:
	class UCurveLinearColor*                     Curve;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceColorCurve");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Niagara.NiagaraEffect
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FNiagaraEmitterHandle>         EmitterHandles;                                    // 0x28(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        EffectScript;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraParameterBinding>      ParameterBindings;                                 // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEffect");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEffectRendererProperties
class UNiagaraEffectRendererProperties : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEffectRendererProperties");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class UStaticMesh*                           ParticleMesh;                                      // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraMeshRendererProperties");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraEffectRendererProperties
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraRibbonRendererProperties");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	struct FVector2D                             SubImageInfo;                                      // 0x28(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBVelocityAligned;                                 // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSpriteRendererProperties");
		return Clss;
	}

};

// 0xA0 (0xC8 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UObject
{
public:
	TArray<uint8>                                ByteCode;                                          // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameters                    Parameters;                                        // 0x38(0x10)(NativeAccessSpecifierPublic)
	struct FNiagaraParameters                    InternalParameters;                                // 0x48(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Attributes;                                        // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>     EventReceivers;                                    // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>     EventGenerators;                                   // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraScriptDataUsageInfo           DataUsage;                                         // 0x88(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	enum class ENiagaraScriptUsage               Usage;                                             // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraScriptDataInterfaceInfo> DataInterfaceInfo;                                 // 0x90(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class ENiagaraNumericOutputTypeSelectionMode NumericOutputTypeSelectionMode;                    // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2F[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraScript");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C30[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction_SpawnParticles");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class Niagara.NiagaraEmitterProperties
class UNiagaraEmitterProperties : public UObject
{
public:
	float                                        SpawnRate;                                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalSpace;                                       // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             Material;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLoops;                                          // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCollisionMode             CollisionMode;                                     // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraEffectRendererProperties*      RendererProperties;                                // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       UpdateScriptProps;                                 // 0x50(0x28)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       SpawnScriptProps;                                  // 0x78(0x28)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FNiagaraEventScriptProperties         EventHandlerScriptProps;                           // 0xA0(0x50)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEmitterBurst>          Bursts;                                            // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEmitterProperties");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraFunctionLibrary");
		return Clss;
	}

	class UNiagaraComponent* SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy);
	class UNiagaraComponent* SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_1C35[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraScriptSourceBase");
		return Clss;
	}

};

// 0x8 (0x2E0 - 0x2D8)
// Class Niagara.NiagaraSequence
class UNiagaraSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSequence");
		return Clss;
	}

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                 DefaultEffect;                                     // 0x38(0x10)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringAssetReference                 DefaultEmitter;                                    // 0x48(0x10)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringAssetReference                 DefaultScript;                                     // 0x58(0x10)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
