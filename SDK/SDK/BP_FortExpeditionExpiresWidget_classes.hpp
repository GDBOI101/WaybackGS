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

// 0x18 (0x260 - 0x248)
// WidgetBlueprintGeneratedClass BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C
class UBP_FortExpeditionExpiresWidget_C : public UFortExpeditionExpiresWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      ExpeditionExpires;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Style;                                             // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionExpiresWidget_C");
		return Clss;
	}

	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDateTime& CallFunc_GetMcpRelativeUtcNow_ReturnValue);
	void Refresh_Expiration_Timer(class UFortExpeditionItem* Item, const struct FDateTime& CallFunc_Get_Mcp_Relative_Utc_Now_UtcNow, const struct FTimespan& CallFunc_GetRemainingExpeditionExpirationDuration_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionExpirationUpdated();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int32 EntryPoint, class UFortExpeditionItem* K2Node_Event_InItem, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
