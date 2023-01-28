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

enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

enum class ENiagaraDataSetType : uint8
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3,
};

enum class ENiagaraScriptUsage : uint8
{
	Function                       = 0,
	Module                         = 1,
	SpawnScript                    = 2,
	UpdateScript                   = 3,
	EffectScript                   = 4,
	ENiagaraScriptUsage_MAX        = 5,
};

enum class EUnusedAttributeBehaviour : uint8
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5,
};

enum class ENiagaraCollisionMode : uint8
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4,
};

enum class EScriptExecutionMode : uint8
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition
{
public:
	class UStruct*                               Struct;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  Name;                                              // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraTypeDefinition                TypeDef;                                           // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                VarData;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraTestStructInner
struct FNiagaraTestStructInner
{
public:
	struct FVector                               InnerVector1;                                      // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InnerVector2;                                      // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraTestStruct
struct FNiagaraTestStruct
{
public:
	struct FVector                               Vector1;                                           // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector2;                                           // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTestStructInner               InnerStruct1;                                      // 0x18(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraTestStructInner               InnerStruct2;                                      // 0x30(0x18)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric
{
public:
	uint8                                        Pad_1C36[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Inputs;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Outputs;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Owner;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresContext;                                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMemberFunction;                                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C37[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo
{
public:
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraFunctionSignature>     ExternalFunctions;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo
{
public:
	bool                                         bReadsAttriubteData;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDataSetType               Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C38[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties
{
public:
	struct FNiagaraDataSetID                     ID;                                                // 0x0(0x10)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IdName;                                            // 0x10(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEnabled;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraEmitterProperties*             Source;                                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraEmitterProperties*             Instance;                                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraParameterBinding
struct FNiagaraParameterBinding
{
public:
	struct FGuid                                 SourceParameterId;                                 // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 DestinationEmitterId;                              // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 DestinationParameterId;                            // 0x20(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters
{
public:
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload
{
public:
	struct FVector                               CollisionPos;                                      // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionNormal;                                   // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhysicalMaterialIndex;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionVelocity;                                 // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterBurst
struct FNiagaraEmitterBurst
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SpawnMinimum;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SpawnMaximum;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventGenerator;                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEmitter;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraEventReceiverEmitterAction*> EmitterActions;                                    // 0x18(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties
{
public:
	int32                                        MaxEventsPerFrame;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3A[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraDataSetProperties             SetProps;                                          // 0x18(0x20)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties
{
public:
	class UNiagaraScript*                        Script;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventReceiverProperties> EventReceivers;                                    // 0x8(0x10)(Edit, EditFixedSize, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;                                   // 0x18(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
public:
	enum class EScriptExecutionMode              ExecutionMode;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SpawnNumber;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxEventsPerFrame;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SourceEmitterID;                                   // 0x34(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SourceEventName;                                   // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
