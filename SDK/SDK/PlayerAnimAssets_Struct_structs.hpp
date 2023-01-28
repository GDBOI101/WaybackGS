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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// UserDefinedStruct PlayerAnimAssets_Struct.PlayerAnimAssets_Struct
struct FPlayerAnimAssets_Struct
{
public:
	bool                                         ShouldAimOffsetsApplytoFullBody_31_5AE0E4754B3138F966FD11A295F7B78E; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         TargetingPose_4_D2562A4A44A308F2ADE73F8A183BA29E;  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAimOffsetBlendSpace*                  TargetingAimOffset_13_5040B0EC478A3717BCE10AB68ADAC339; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Non_targetingPose_6_F51CE1094083841D799E088BFC14FC75; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAimOffsetBlendSpace*                  Non_targetingAimOffset_15_574096D842944F1FB55D99B96B4BABD5; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         RelaxedPose_8_4D1AB4BB4BD7EEC55A9019862A77E479;    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         RelaxedPoseLevel2_10_F4785EB04522228F0B3B3596696BCDD1; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAimOffsetBlendSpace*                  RelaxedAimOffset_17_2966F03A4139AE7E3398C49A6FF4FBDC; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       JogAdditiveBlendspace_32_217FB7514CFC140374DEC382F65BF6D9; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       JogAdditiveBlendspaceRelaxed_26_8D02629A4399716009FAC4AAE76D46F8; // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       JogAdditiveBlendspaceRelaxedLevel2_28_1EF70865423A10F9F28994BA129B363C; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         SprintAnimation_35_A3064CF24154B3DF2B20038B32241FD3; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CrouchTargetingPose_41_1FFA1A6545F84EA0891EE18C82F8A76C; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CrouchNon_targetingPose_43_D5E9B5694C7265D957BD7D980E6B3A4E; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CrouchRelaxedPose_46_1A119835439853E924A649AB27CA09E5; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       CrouchWalkAdditiveBlendspace_56_4FE3510D468664AA3406269481D4CF53; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       CrouchJogAdditiveBlendspace_51_41E5549843DED39FC44214A095BDF5B0; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       CrouchJogAdditiveBlendspaceRelaxed_53_8D84728C44041928BFA384B783F1F5AF; // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CrouchSprintAnimation_48_15FC9EEA46F9EDFF96BABF8B183E8A77; // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
