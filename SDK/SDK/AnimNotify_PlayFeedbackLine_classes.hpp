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

// 0x19 (0x51 - 0x38)
// BlueprintGeneratedClass AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C
class UAnimNotify_PlayFeedbackLine_C : public UAnimNotify
{
public:
	struct FFortFeedbackHandle                   Event;                                             // 0x38(0x18)(Edit, BlueprintVisible, NoDestructor)
	bool                                         bAllowReplication;                                 // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlayFeedbackLine_C");
		return Clss;
	}

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
