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

// 0x20 (0x288 - 0x268)
// WidgetBlueprintGeneratedClass InputReflector.InputReflector_C
class UInputReflector_C : public UCommonInputReflector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ButtonBox;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               DefaultButtonMargin;                               // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputReflector_C");
		return Clss;
	}

	void OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data);
	void ClearButtons();
	void Construct();
	void ExecuteUbergraph_InputReflector(int32 EntryPoint, class UCommonButton* K2Node_Event_AddedButton, const struct FCommonInputActionHandlerData& K2Node_Event_Data, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
