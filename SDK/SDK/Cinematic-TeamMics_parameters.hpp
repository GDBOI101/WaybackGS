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

// 0x1E0 (0x1E0 - 0x0)
// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update
struct UCinematic_TeamMics_C_Update_Params
{
public:
	struct FFortTeamMemberInfo                   UpdatedMemberInfo;                                 // 0x0(0x190)(Parm)
	struct FUniqueNetIdRepl                      PlayerNetId;                                       // 0x190(0x18)(Edit, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3850[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable2;                                // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3851[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select2_Default;                            // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidNetID_ReturnValue;                 // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3852[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_Select3_Default;                            // 0x1C8(0x18)(ConstParm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct
struct UCinematic_TeamMics_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics
struct UCinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
