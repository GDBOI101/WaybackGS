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


// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterialForUniqueId_New
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material_Instance_Dynamic                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseIconMask                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            UniqueId                                                         (Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfoForPlayer_Result                         ()
// class UTexture2D*                  CallFunc_Get_Icon_Texture_and_Colors_Icon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerLibrary_C::UpdateBannerMeshMaterialForUniqueId_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, const struct FUniqueNetIdRepl& UniqueId, class UObject* __WorldContext, class UTexture* Temp_object_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, class UTexture2D* CallFunc_Get_Icon_Texture_and_Colors_Icon, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color, class UTexture* Temp_object_Variable2, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BannerLibrary_C", "UpdateBannerMeshMaterialForUniqueId_New");

	Params::UBannerLibrary_C_UpdateBannerMeshMaterialForUniqueId_New_Params Parms;
	Parms.Material_Instance_Dynamic = Material_Instance_Dynamic;
	Parms.UseIconMask = UseIconMask;
	Parms.UniqueId = UniqueId;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHomeBaseInfoForPlayer_Result = CallFunc_GetHomeBaseInfoForPlayer_Result;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_Icon = CallFunc_Get_Icon_Texture_and_Colors_Icon;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor = CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color = CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerLibrary.BannerLibrary_C.Get Icon Texture and Colors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      BannerIconId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BannerColorId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                PrimaryColor                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Secondary_Color                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_LoadAndGetBannerLargeIconFromRowName_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerLibrary_C::Get_Icon_Texture_and_Colors(const class FString& BannerIconId, const class FString& BannerColorId, class UObject* __WorldContext, class UTexture2D** Icon, struct FLinearColor* PrimaryColor, struct FLinearColor* Secondary_Color, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2, class UTexture2D* CallFunc_LoadAndGetBannerLargeIconFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue)
{
	static auto Func = Class->GetFunction("BannerLibrary_C", "Get Icon Texture and Colors");

	Params::UBannerLibrary_C_Get_Icon_Texture_and_Colors_Params Parms;
	Parms.BannerIconId = BannerIconId;
	Parms.BannerColorId = BannerColorId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue2 = CallFunc_Conv_StringToName_ReturnValue2;
	Parms.CallFunc_LoadAndGetBannerLargeIconFromRowName_ReturnValue = CallFunc_LoadAndGetBannerLargeIconFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue = CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue = CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (PrimaryColor != nullptr)
		*PrimaryColor = Parms.PrimaryColor;

	if (Secondary_Color != nullptr)
		*Secondary_Color = Parms.Secondary_Color;

}


// Function BannerLibrary.BannerLibrary_C.UpdateMaterial_New
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Banner_material                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHomeBaseInfo           Image_info                                                       (Parm)
// bool                               Is_Icon                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Get_Icon_Texture_and_Colors_Icon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerLibrary_C::UpdateMaterial_New(class UImage* Banner_material, const struct FFortHomeBaseInfo& Image_info, bool Is_Icon, class UObject* __WorldContext, class UTexture* Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* CallFunc_Get_Icon_Texture_and_Colors_Icon, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color, class UTexture* Temp_object_Variable2, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BannerLibrary_C", "UpdateMaterial_New");

	Params::UBannerLibrary_C_UpdateMaterial_New_Params Parms;
	Parms.Banner_material = Banner_material;
	Parms.Image_info = Image_info;
	Parms.Is_Icon = Is_Icon;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_Icon = CallFunc_Get_Icon_Texture_and_Colors_Icon;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor = CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color = CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial_New
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material_Instance_Dynamic                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseIconMask                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*            InstigatorPlayerState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// struct FFortHomeBaseInfo           CallFunc_GetHomeBaseInfoForPlayer_Result                         ()
// class UTexture*                    Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Get_Icon_Texture_and_Colors_Icon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerLibrary_C::UpdateBannerMeshMaterial_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext, class UTexture* Temp_object_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, class UTexture* Temp_object_Variable2, class UTexture2D* CallFunc_Get_Icon_Texture_and_Colors_Icon, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BannerLibrary_C", "UpdateBannerMeshMaterial_New");

	Params::UBannerLibrary_C_UpdateBannerMeshMaterial_New_Params Parms;
	Parms.Material_Instance_Dynamic = Material_Instance_Dynamic;
	Parms.UseIconMask = UseIconMask;
	Parms.InstigatorPlayerState = InstigatorPlayerState;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_GetHomeBaseInfoForPlayer_Result = CallFunc_GetHomeBaseInfoForPlayer_Result;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_Icon = CallFunc_Get_Icon_Texture_and_Colors_Icon;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor = CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor;
	Parms.CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color = CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Icon                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerLibrary_C::UpdateBannerIconOnMaterial(class UMaterialInstanceDynamic* Material, class UTexture* Icon, class UObject* __WorldContext)
{
	static auto Func = Class->GetFunction("BannerLibrary_C", "UpdateBannerIconOnMaterial");

	Params::UBannerLibrary_C_UpdateBannerIconOnMaterial_Params Parms;
	Parms.Material = Material;
	Parms.Icon = Icon;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                PrimaryBGColor                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                SecondaryBGColor                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerLibrary_C::UpdateBannerColorOnMaterial(class UMaterialInstanceDynamic* Material, const struct FLinearColor& PrimaryBGColor, const struct FLinearColor& SecondaryBGColor, class UObject* __WorldContext)
{
	static auto Func = Class->GetFunction("BannerLibrary_C", "UpdateBannerColorOnMaterial");

	Params::UBannerLibrary_C_UpdateBannerColorOnMaterial_Params Parms;
	Parms.Material = Material;
	Parms.PrimaryBGColor = PrimaryBGColor;
	Parms.SecondaryBGColor = SecondaryBGColor;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    BannerIcon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BG_PrimaryColor                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BG_SecondaryColor                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    ShapeIcon                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerLibrary_C::GenericUpdateMaterial(class UMaterialInstanceDynamic* Target, class UTexture* BannerIcon, const struct FLinearColor& BG_PrimaryColor, const struct FLinearColor& BG_SecondaryColor, class UTexture* ShapeIcon, class UObject* __WorldContext)
{
	static auto Func = Class->GetFunction("BannerLibrary_C", "GenericUpdateMaterial");

	Params::UBannerLibrary_C_GenericUpdateMaterial_Params Parms;
	Parms.Target = Target;
	Parms.BannerIcon = BannerIcon;
	Parms.BG_PrimaryColor = BG_PrimaryColor;
	Parms.BG_SecondaryColor = BG_SecondaryColor;
	Parms.ShapeIcon = ShapeIcon;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
