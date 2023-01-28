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

// 0x38 (0x8E8 - 0x8B0)
// WidgetBlueprintGeneratedClass BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C
class UBP_FortExpeditionVehicleTileItemWidget_C : public UFortExpeditionVehicleTileItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                  BasicRatingWidget;                                 // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Name;                                              // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VehicleIcon;                                       // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  SquadIdName;                                       // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnVehicleSelected;                                 // 0x8D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionVehicleTileItemWidget_C");
		return Clss;
	}

	void Set_Name(class FName SquadId, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue);
	void Set_Rating(class FName& SquadId, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetExpeditionSquadPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Set_Icon(class FName& SquadId, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, const struct FFortMultiSizeBrush& CallFunc_GetSquadIcon_ReturnValue);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void OnClicked();
	void ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget(int32 EntryPoint, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UVehicleObject_C* K2Node_DynamicCast_AsVehicle_Object, bool K2Node_DynamicCast_bSuccess);
	void OnVehicleSelected__DelegateSignature(class FName SquadId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
