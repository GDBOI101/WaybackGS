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

// 0x20 (0x260 - 0x240)
// WidgetBlueprintGeneratedClass OutpostScreenCanEditRow.OutpostScreenCanEditRow_C
class UOutpostScreenCanEditRow_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CanEditButton;                                     // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortPlayerStateOutpost*               Player;                                            // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateOutpost*               OutpostOwner;                                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OutpostScreenCanEditRow_C");
		return Clss;
	}

	void CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner, bool CallFunc_CanEditOutpost_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_OutpostScreenCanEditRow(int32 EntryPoint, bool CallFunc_GetSelected_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
