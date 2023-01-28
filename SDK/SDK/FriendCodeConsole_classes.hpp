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

// 0x38 (0x8D8 - 0x8A0)
// WidgetBlueprintGeneratedClass FriendCodeConsole.FriendCodeConsole_C
class UFriendCodeConsole_C : public UFriendCodeEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UEditableTextBox*                      CodeDetailsText;                                   // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CodeDisplayText;                                   // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFriendCode                           FriendCode;                                        // 0x8B8(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodeConsole_C");
		return Clss;
	}

	void Construct();
	void OnSendFriendCodeMessageComplete(bool bMessageSent);
	void OnClicked();
	void ExecuteUbergraph_FriendCodeConsole(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetFriendCodeDescription_ReturnValue, class FText CallFunc_GetFriendCodeDisplayName_ReturnValue, bool K2Node_CustomEvent_bMessageSent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
