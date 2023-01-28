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

// 0x18 (0x18 - 0x0)
// Function MissionRichText.MissionRichText_C.Update
struct UMissionRichText_C_Update_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function MissionRichText.MissionRichText_C.Construct
struct UMissionRichText_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MissionRichText.MissionRichText_C.ExecuteUbergraph_MissionRichText
struct UMissionRichText_C_ExecuteUbergraph_MissionRichText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
