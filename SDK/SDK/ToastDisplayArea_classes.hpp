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

// 0x31 (0x269 - 0x238)
// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
class UToastDisplayArea_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UPowerToastWidget_C*                   PowerToastWidget;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToastWidget_C*                        ToastWidget;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotificationQueue*              ToastQueue;                                        // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                   CurrentToast;                                      // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCurrentlyDisplayingToast;                         // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToastDisplayArea_C");
		return Clss;
	}

	void AttemptDisplayNextToast(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UFortUINotification* CallFunc_GetNextNotification_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RegisterToastHandler(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortUINotificationQueue* CallFunc_GetUINotificationQueue_ReturnValue);
	void Construct();
	void HandleNewToastAvailable();
	void Destruct();
	void BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature();
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
