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

// 0x20 (0x888 - 0x868)
// WidgetBlueprintGeneratedClass PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C
class UPlayerChoiceButtonWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x868(0x8)(Transient, DuplicateTransient)
	class ULegacyButtonIconText_C*               Button;                                            // 0x870(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ChoiceID;                                          // 0x878(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerChoiceWidget_C*                 Owner;                                             // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerChoiceButtonWidget_C");
		return Clss;
	}

	void ConfigureChoice(const struct FChoiceDataEntry& Choice, int32 ChoiceID, class UPlayerChoiceWidget_C* Owner);
	void BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_PlayerChoiceButtonWidget(int32 EntryPoint, const struct FChoiceDataEntry& K2Node_CustomEvent_Choice, int32 K2Node_CustomEvent_ChoiceID, class UPlayerChoiceWidget_C* K2Node_CustomEvent_Owner, class UFortBaseButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
