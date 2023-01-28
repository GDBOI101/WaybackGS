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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BannerLibrary.BannerLibrary_C
class UBannerLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BannerLibrary_C");
		return Clss;
	}

	void UpdateBannerMeshMaterialForUniqueId_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, const struct FUniqueNetIdRepl& UniqueId, class UObject* __WorldContext, class UTexture* Temp_object_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, class UTexture2D* CallFunc_Get_Icon_Texture_and_Colors_Icon, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color, class UTexture* Temp_object_Variable2, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default);
	void Get_Icon_Texture_and_Colors(const class FString& BannerIconId, const class FString& BannerColorId, class UObject* __WorldContext, class UTexture2D** Icon, struct FLinearColor* PrimaryColor, struct FLinearColor* Secondary_Color, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2, class UTexture2D* CallFunc_LoadAndGetBannerLargeIconFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue);
	void UpdateMaterial_New(class UImage* Banner_material, const struct FFortHomeBaseInfo& Image_info, bool Is_Icon, class UObject* __WorldContext, class UTexture* Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* CallFunc_Get_Icon_Texture_and_Colors_Icon, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color, class UTexture* Temp_object_Variable2, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default);
	void UpdateBannerMeshMaterial_New(class UMaterialInstanceDynamic* Material_Instance_Dynamic, bool UseIconMask, class AFortPlayerState* InstigatorPlayerState, class UObject* __WorldContext, class UTexture* Temp_object_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, class UTexture* Temp_object_Variable2, class UTexture2D* CallFunc_Get_Icon_Texture_and_Colors_Icon, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor, const struct FLinearColor& CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default);
	void UpdateBannerIconOnMaterial(class UMaterialInstanceDynamic* Material, class UTexture* Icon, class UObject* __WorldContext);
	void UpdateBannerColorOnMaterial(class UMaterialInstanceDynamic* Material, const struct FLinearColor& PrimaryBGColor, const struct FLinearColor& SecondaryBGColor, class UObject* __WorldContext);
	void GenericUpdateMaterial(class UMaterialInstanceDynamic* Target, class UTexture* BannerIcon, const struct FLinearColor& BG_PrimaryColor, const struct FLinearColor& BG_SecondaryColor, class UTexture* ShapeIcon, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
