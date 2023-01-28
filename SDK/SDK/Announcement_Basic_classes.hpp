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

// 0x28 (0x268 - 0x240)
// WidgetBlueprintGeneratedClass Announcement_Basic.Announcement_Basic_C
class UAnnouncement_Basic_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBoxRoot;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                    TextDetailText;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextTitleText;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announcement_Basic_C");
		return Clss;
	}

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void Construct();
	void AnnouncementStopped(class AFortClientAnnouncement* Announcement);
	void ExecuteUbergraph_Announcement_Basic(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class AFortClientAnnouncement* K2Node_Event_Announcement2, class AFortClientAnnouncement_Basic* K2Node_DynamicCast_AsFort_Client_Announcement_Basic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue4, class UObject* CallFunc_GetBrushResource_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsValid_ReturnValue, class AFortClientAnnouncement* K2Node_Event_Announcement, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select3_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
