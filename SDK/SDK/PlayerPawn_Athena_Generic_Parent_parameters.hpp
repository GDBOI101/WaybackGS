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

// 0x118 (0x118 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.Teleport
struct APlayerPawn_Athena_Generic_Parent_C_Teleport_Params
{
public:
	struct FGameplayCueParameters                GameplayCueParameters;                             // 0x0(0xB8)(Parm, ContainsInstancedReference)
	bool                                         TeleportOut_;                                      // 0xB8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Default_PlayLength;                                // 0xBC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29C0[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xD0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADuplicateResOutMesh_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.UserConstructionScript
struct APlayerPawn_Athena_Generic_Parent_C_UserConstructionScript_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.GameplayCue.Teleport.Out
struct APlayerPawn_Athena_Generic_Parent_C_GameplayCue_Teleport_Out_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(Parm, ContainsInstancedReference)
};

// 0xC0 (0xC0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.GameplayCue.Teleport.In
struct APlayerPawn_Athena_Generic_Parent_C_GameplayCue_Teleport_In_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Athena_Generic_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1CA (0x1CA - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent
struct APlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C4[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType2;                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters2;               // 0x48(0xB8)(ContainsInstancedReference)
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0x110(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
