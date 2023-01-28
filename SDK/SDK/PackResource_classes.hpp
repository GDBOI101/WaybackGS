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

// 0x21 (0x259 - 0x238)
// WidgetBlueprintGeneratedClass PackResource.PackResource_C
class UPackResource_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageResourceIcon;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumericTextCount;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortResourceType                 ResourceType;                                      // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PackResource_C");
		return Clss;
	}

	void UpdateType(enum class EFortResourceType ResourceType, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue);
	void UpdateCount(int32 ResourceCount, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, float Temp_float_Variable, float Temp_float_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue, bool Temp_bool_Variable2, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UClass* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select2_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void ExecuteUbergraph_PackResource(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
