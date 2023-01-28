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

// 0x118 (0x350 - 0x238)
// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
class UPlayerBanner_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                BannerImage;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      LoadGuard;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SurroundImage;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      SurroundLoadGuard;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           Brush;                                             // 0x260(0x90)(Edit, BlueprintVisible)
	bool                                         bUseLargeTexture;                                  // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_366E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwnerNetID;                                        // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  CurrentBannerColorId;                              // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldUseIconRepresentation;                      // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_366F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentBannerIconId;                               // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SurroundEnabled;                                   // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3670[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UTexture2D>>     BannerSurrounds;                                   // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceConstant*>     BannerSurroundMats;                                // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerBanner_C");
		return Clss;
	}

	void SetBannerIconAndColorFromProfile(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, bool CallFunc_SetBannerImage_Success);
	void SetBannerIconAndColor(class FName IconId, class FName ColorId);
	void ToggleBannerMask(bool Enable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable2, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, float K2Node_Select_Default);
	void RefreshSurround(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue3, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UMaterialInstanceConstant* CallFunc_Array_Get_Item, int32 CallFunc_Clamp_ReturnValue2, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item2);
	void OnSurroundIconLoaded(class UObject* LoadedObject, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void EnableSurround(const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void ClearBannerState();
	void OnBannerIconLoaded(class UObject* LoadedObject, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess);
	void GetBannerMID(class UMaterialInstanceDynamic** BannerMID, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortMcpContext* CallFunc_GetContext_ReturnValue3);
	void SetBannerColorId(class FName InBannerColorId, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID2, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue2);
	void SetBannerIconId(class FName InBannerIconId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, TSoftObjectPtr<class UObject> K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetBannerMID_BannerMID, bool CallFunc_NotEqual_NameName_ReturnValue2);
	void SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue2);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void PreConstruct(bool IsDesignTime);
	void Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo);
	void ExecuteUbergraph_PlayerBanner(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamMemberInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SetBannerImage_Success, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFortPublicAccountInfo& K2Node_CustomEvent_NewInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
