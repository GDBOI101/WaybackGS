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

// 0x28 (0x28 - 0x0)
// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Params
{
public:
	struct FGameplayStatTag                      A;                                                 // 0x0(0x10)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                      B;                                                 // 0x10(0x10)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_236E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Params
{
public:
	struct FGameplayStatTag                      A;                                                 // 0x0(0x10)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                      B;                                                 // 0x10(0x10)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_236F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
