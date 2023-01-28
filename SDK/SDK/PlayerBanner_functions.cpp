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


// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortAthenaLoadout          CallFunc_GetLoadoutForPlayer_ReturnValue                         ()
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfoForPlayer_Result                         ()
// bool                               CallFunc_SetBannerImage_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::SetBannerIconAndColorFromProfile(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, bool CallFunc_SetBannerImage_Success)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "SetBannerIconAndColorFromProfile");

	Params::UPlayerBanner_C_SetBannerIconAndColorFromProfile_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetLoadoutForPlayer_ReturnValue = CallFunc_GetLoadoutForPlayer_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue2 = CallFunc_Conv_StringToName_ReturnValue2;
	Parms.CallFunc_GetHomeBaseInfoForPlayer_Result = CallFunc_GetHomeBaseInfoForPlayer_Result;
	Parms.CallFunc_SetBannerImage_Success = CallFunc_SetBannerImage_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        IconId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ColorId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::SetBannerIconAndColor(class FName IconId, class FName ColorId)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "SetBannerIconAndColor");

	Params::UPlayerBanner_C_SetBannerIconAndColor_Params Parms;
	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.ToggleBannerMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::ToggleBannerMask(bool Enable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable2, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "ToggleBannerMask");

	Params::UPlayerBanner_C_ToggleBannerMask_Params Parms;
	Parms.Enable = Enable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.CallFunc_GetBannerMID_BannerMID = CallFunc_GetBannerMID_BannerMID;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.RefreshSurround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFortPublicAccountInfo      CallFunc_GetCurrentlyViewedAccountInfo_Result                    (NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceConstant*   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item2                                         (HasGetValueTypeHash)

void UPlayerBanner_C::RefreshSurround(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue3, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UMaterialInstanceConstant* CallFunc_Array_Get_Item, int32 CallFunc_Clamp_ReturnValue2, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item2)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "RefreshSurround");

	Params::UPlayerBanner_C_RefreshSurround_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentlyViewedAccountInfo_Result = CallFunc_GetCurrentlyViewedAccountInfo_Result;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Clamp_ReturnValue2 = CallFunc_Clamp_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LoadedObject                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::OnSurroundIconLoaded(class UObject* LoadedObject, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "OnSurroundIconLoaded");

	Params::UPlayerBanner_C_OnSurroundIconLoaded_Params Parms;
	Parms.LoadedObject = LoadedObject;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.EnableSurround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::EnableSurround(const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "EnableSurround");

	Params::UPlayerBanner_C_EnableSurround_Params Parms;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.ClearBannerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerBanner_C::ClearBannerState()
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "ClearBannerState");

	Params::UPlayerBanner_C_ClearBannerState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LoadedObject                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::OnBannerIconLoaded(class UObject* LoadedObject, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "OnBannerIconLoaded");

	Params::UPlayerBanner_C_OnBannerIconLoaded_Params Parms;
	Parms.LoadedObject = LoadedObject;
	Parms.CallFunc_GetBannerMID_BannerMID = CallFunc_GetBannerMID_BannerMID;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.GetBannerMID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    BannerMID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::GetBannerMID(class UMaterialInstanceDynamic** BannerMID, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "GetBannerMID");

	Params::UPlayerBanner_C_GetBannerMID_Params Parms;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BannerMID != nullptr)
		*BannerMID = Parms.BannerMID;

}


// Function PlayerBanner.PlayerBanner_C.SetBannerOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            OwnerId                                                          (Parm, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_UniqueNetIdRepl_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortMcpContext* CallFunc_GetContext_ReturnValue3)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "SetBannerOwner");

	Params::UPlayerBanner_C_SetBannerOwner_Params Parms;
	Parms.OwnerId = OwnerId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_UniqueNetIdRepl_ReturnValue = CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.SetBannerColorId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InBannerColorId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHomebaseBannerColor        CallFunc_GetBannerColorFromRowName_ReturnValue                   (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetSecondaryColor_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetPrimaryColor_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::SetBannerColorId(class FName InBannerColorId, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID2, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue2)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "SetBannerColorId");

	Params::UPlayerBanner_C_SetBannerColorId_Params Parms;
	Parms.InBannerColorId = InBannerColorId;
	Parms.CallFunc_GetBannerMID_BannerMID = CallFunc_GetBannerMID_BannerMID;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetBannerColorFromRowName_ReturnValue = CallFunc_GetBannerColorFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerMID_BannerMID2 = CallFunc_GetBannerMID_BannerMID2;
	Parms.CallFunc_GetSecondaryColor_ReturnValue = CallFunc_GetSecondaryColor_ReturnValue;
	Parms.CallFunc_GetPrimaryColor_ReturnValue = CallFunc_GetPrimaryColor_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue2 = CallFunc_NotEqual_NameName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.SetBannerIconId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InBannerIconId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue          (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue          (HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_Select_Default                                            (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetBannerMID_BannerMID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::SetBannerIconId(class FName InBannerIconId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UObject> K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue2)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "SetBannerIconId");

	Params::UPlayerBanner_C_SetBannerIconId_Params Parms;
	Parms.InBannerIconId = InBannerIconId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue = CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue = CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetBannerMID_BannerMID = CallFunc_GetBannerMID_BannerMID;
	Parms.CallFunc_NotEqual_NameName_ReturnValue2 = CallFunc_NotEqual_NameName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.SetBannerImage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortHomeBaseInfo           Image_info                                                       (Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBanner_C::SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "SetBannerImage");

	Params::UPlayerBanner_C_SetBannerImage_Params Parms;
	Parms.Image_info = Image_info;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue2 = CallFunc_Conv_StringToName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function PlayerBanner.PlayerBanner_C.OnTeamMemberStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (Parm)

void UPlayerBanner_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "OnTeamMemberStateChanged");

	Params::UPlayerBanner_C_OnTeamMemberStateChanged_Params Parms;
	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBanner_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "PreConstruct");

	Params::UPlayerBanner_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.Account Info Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      NewInfo                                                          (Parm, NoDestructor)

void UPlayerBanner_C::Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "Account Info Changed");

	Params::UPlayerBanner_C_Account_Info_Changed_Params Parms;
	Parms.NewInfo = NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_TeamMemberInfo                                ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetBannerImage_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_UniqueNetIdRepl_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPublicAccountInfo      K2Node_CustomEvent_NewInfo                                       (NoDestructor)

void UPlayerBanner_C::ExecuteUbergraph_PlayerBanner(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamMemberInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SetBannerImage_Success, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo)
{
	static auto Func = Class->GetFunction("PlayerBanner_C", "ExecuteUbergraph_PlayerBanner");

	Params::UPlayerBanner_C_ExecuteUbergraph_PlayerBanner_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_CustomEvent_TeamMemberInfo = K2Node_CustomEvent_TeamMemberInfo;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetBannerImage_Success = CallFunc_SetBannerImage_Success;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_UniqueNetIdRepl_ReturnValue = CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_NewInfo = K2Node_CustomEvent_NewInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
