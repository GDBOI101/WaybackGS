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

// 0x18 (0x258 - 0x240)
// WidgetBlueprintGeneratedClass Announcement_ZoneModifiers.Announcement_ZoneModifiers_C
class UAnnouncement_ZoneModifiers_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UMissionDetailsModifierList_C*         MissionDetailsModifierList;                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortClientAnnouncement_ZoneModifiers* ZoneModifiersAnnouncement;                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announcement_ZoneModifiers_C");
		return Clss;
	}

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void OnDisplayTimerFinished();
	void OnConversationDelayFinished();
	void WidgetCachingHack();
	void ExecuteUbergraph_Announcement_ZoneModifiers(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, class AFortClientAnnouncement* K2Node_Event_Announcement, class AFortClientAnnouncement_ZoneModifiers* K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers, bool K2Node_DynamicCast_bSuccess, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue3, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
