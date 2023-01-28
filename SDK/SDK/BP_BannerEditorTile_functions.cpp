#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item as Seen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAlreadySeen                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetData_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BannerEditorTile_C::Mark_Item_as_Seen(bool bAlreadySeen, class UObject* CallFunc_GetData_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "Mark Item as Seen");

	Params::UBP_BannerEditorTile_C_Mark_Item_as_Seen_Params Parms;
	Parms.bAlreadySeen = bAlreadySeen;
	Parms.CallFunc_GetData_ReturnValue = CallFunc_GetData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetData_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BannerEditorTile_C::Update_Bang_State(class UObject* CallFunc_GetData_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "Update Bang State");

	Params::UBP_BannerEditorTile_C_Update_Bang_State_Params Parms;
	Parms.CallFunc_GetData_ReturnValue = CallFunc_GetData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BannerEditorTile_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "SetData");

	Params::UBP_BannerEditorTile_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_BannerEditorTile_C::Construct()
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "Construct");

	Params::UBP_BannerEditorTile_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BannerEditorTile_C::HandleBannerIconLoadGuardFinished(class UObject* Object)
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "HandleBannerIconLoadGuardFinished");

	Params::UBP_BannerEditorTile_C_HandleBannerIconLoadGuardFinished_Params Parms;
	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_BannerEditorTile_C::OnSelected()
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "OnSelected");

	Params::UBP_BannerEditorTile_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_BannerEditorTile_C::OnHovered()
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "OnHovered");

	Params::UBP_BannerEditorTile_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetData_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseBannerColorItem*K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetData_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetBannerSmallIconAsset_ReturnValue                     (HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetData_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseBannerColorItem*K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetBannerColorSecondaryColor_ReturnValue                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBannerColorPrimaryColor_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BannerEditorTile_C::ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint, class UObject* CallFunc_GetData_ReturnValue, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_GetData_ReturnValue2, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item2, bool K2Node_DynamicCast_bSuccess3, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAsset_ReturnValue, class UObject* K2Node_CustomEvent_Object, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess4, class UObject* CallFunc_GetData_ReturnValue3, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item2, bool K2Node_DynamicCast_bSuccess5, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList)
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "ExecuteUbergraph_BP_BannerEditorTile");

	Params::UBP_BannerEditorTile_C_ExecuteUbergraph_BP_BannerEditorTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetData_ReturnValue = CallFunc_GetData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item = K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item = K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetData_ReturnValue2 = CallFunc_GetData_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item2 = K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetBannerSmallIconAsset_ReturnValue = CallFunc_GetBannerSmallIconAsset_ReturnValue;
	Parms.K2Node_CustomEvent_Object = K2Node_CustomEvent_Object;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetData_ReturnValue3 = CallFunc_GetData_ReturnValue3;
	Parms.K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item2 = K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item2;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetBannerColorSecondaryColor_ReturnValue = CallFunc_GetBannerColorSecondaryColor_ReturnValue;
	Parms.CallFunc_GetBannerColorPrimaryColor_ReturnValue = CallFunc_GetBannerColorPrimaryColor_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BannerEditorTile_C::BannerTileBangUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_BannerEditorTile_C", "BannerTileBangUpdated__DelegateSignature");

	Params::UBP_BannerEditorTile_C_BannerTileBangUpdated__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
