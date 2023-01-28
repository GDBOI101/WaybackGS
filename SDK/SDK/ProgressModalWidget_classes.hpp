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

// 0xE4 (0x4EC - 0x408)
// WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C
class UProgressModalWidget_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_394E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class ULightbox_C*                           Lightbox;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressWidget_C*                     ProgressWidget;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x428(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x440(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           Icon;                                              // 0x458(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bIntroOutrEnabled;                                 // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAutoInitialize;                                   // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bFocusSelf;                                        // 0x4EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bConsumeAnalogInput;                               // 0x4EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProgressModalWidget_C");
		return Clss;
	}

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetIcon(const struct FSlateBrush& Icon);
	void SetDescription(class FText Description);
	void SetTitle(class FText Title);
	void Initialize(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Construct();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	void Destruct();
	void ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
