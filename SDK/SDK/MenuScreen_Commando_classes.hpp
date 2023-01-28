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

// 0x611 (0x9E1 - 0x3D0)
// AnimBlueprintGeneratedClass MenuScreen_Commando.MenuScreen_Commando_C
class UMenuScreen_Commando_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F70AA5C441806953E84736BA8BC1318A; // 0x3D8(0x48)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_91B5767B40519A79E7AEC38404372807; // 0x420(0xC0)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_4B2EDC5B4B1A02DB26673C9C5AA47EF2; // 0x4E0(0xC0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_476FB3144FF01CDECEC25D9FCA0BF170; // 0x5A0(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_78BB02D34BB0CD13E52B729CD15EC48B; // 0x5E8(0x48)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_43CBCFD8445ED0E03161C4B571134CE9; // 0x630(0xC0)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_3695B48646E0C5839953A39C17D3DEF9; // 0x6F0(0xC0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_30CEFFAA4FD7F57FD5A6EDB40D31DE9D; // 0x7B0(0x60)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_ECCC70F04489C85C49B82FB532A3D3A9; // 0x810(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B; // 0x880(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CDEB41CC42B9DE30260861A50A7F4D48; // 0x960(0x70)()
	UMulticastDelegateProperty_                  MenuScreenDispatcher;                              // 0x9D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasBeenSelected;                                   // 0x9E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MenuScreen_Commando_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Commando_AnimGraphNode_BlendListByEnum_A3E599E943E9B22B3BC78EA28C49C57B();
	void AnimNotify_playFacialAnim();
	void UserFocus();
	void AnimNotify_LeftB();
	void ExecuteUbergraph_MenuScreen_Commando(int32 EntryPoint);
	void MenuScreenDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
