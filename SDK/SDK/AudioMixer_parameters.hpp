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

// 0x0 (0x0 - 0x0)
// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioMixer.SynthComponent.Start
struct USynthComponent_Start_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
