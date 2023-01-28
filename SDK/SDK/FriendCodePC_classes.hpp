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

// 0x48 (0x8E8 - 0x8A0)
// WidgetBlueprintGeneratedClass FriendCodePC.FriendCodePC_C
class UFriendCodePC_C : public UFriendCodeEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CodeText;                                          // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CopyLinkText;                                      // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      UrlText;                                           // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFriendCode                           FriendCode;                                        // 0x8C0(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  NewVar_0;                                          // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodePC_C");
		return Clss;
	}

	void GetFriendCodeUrl(class FText* Result, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnClicked();
	void ExecuteUbergraph_FriendCodePC(int32 EntryPoint, class FText CallFunc_GetFriendCodeUrl_Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetFriendCodeUrl_Result2, class FText CallFunc_GetFriendCodeDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetFriendCodeDisplayName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
