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

// 0x19 (0x249 - 0x230)
// WidgetBlueprintGeneratedClass ItemIconWidget.ItemIconWidget_C
class UItemIconWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image;                                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFortBrushSize                    BrushSize;                                         // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemIconWidget_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_ItemIconWidget(int32 EntryPoint, enum class EFortBrushSize Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, int32 K2Node_Select_Default, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
