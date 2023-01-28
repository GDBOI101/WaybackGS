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

// 0x10 (0x280 - 0x270)
// WidgetBlueprintGeneratedClass AthenaGamePhaseWidget.AthenaGamePhaseWidget_C
class UAthenaGamePhaseWidget_C : public UAthenaGamePhaseWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGamePhaseWidget_C");
		return Clss;
	}

	void OnGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void ExecuteUbergraph_AthenaGamePhaseWidget(int32 EntryPoint, enum class EAthenaGamePhaseStep K2Node_Event_GamePhaseStep, enum class EAthenaGamePhaseStep Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* Temp_object_Variable8, class UMaterialInterface* Temp_object_Variable9, class UMaterialInterface* Temp_object_Variable10, class UMaterialInterface* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
