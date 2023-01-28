#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x88 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.InitializeWebsiteConfiguration
struct UTabAccountLinkage_C_InitializeWebsiteConfiguration_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x20(0x18)()
	bool                                         CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAccountLinkingUIURL_ReturnValue;       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)()
	int32                                        CallFunc_Len_ReturnValue;                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortAccountLinkingUIConfig       CallFunc_GetAccountLinkingUIConfig_ReturnValue;    // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  K2Node_Select2_Default;                            // 0x70(0x18)()
};

// 0x80 (0x80 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Id Analytic Attribute
struct UTabAccountLinkage_C_Build_Player_Id_Analytic_Attribute_Params
{
public:
	struct FFortAnalyticsEventAttribute          ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x38(0x18)(HasGetValueTypeHash)
	class FString                                CallFunc_GetDebugStringForUniqueId_ReturnValue;    // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortAnalyticsEventAttribute          CallFunc_ConstructAnalyticsAttribute_ReturnValue;  // 0x60(0x20)()
};

// 0x88 (0x88 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.Build Player Name Analytic Attribute
struct UTabAccountLinkage_C_Build_Player_Name_Analytic_Attribute_Params
{
public:
	struct FFortAnalyticsEventAttribute          ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x38(0x18)(HasGetValueTypeHash)
	class UFortRegisteredPlayerInfo*             CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortAnalyticsEventAttribute          CallFunc_ConstructAnalyticsAttribute_ReturnValue;  // 0x68(0x20)()
};

// 0x50 (0x50 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.Fire Enter Live Stream Analytic
struct UTabAccountLinkage_C_Fire_Enter_Live_Stream_Analytic_Params
{
public:
	struct FFortAnalyticsEventAttribute          CallFunc_Build_Player_Id_Analytic_Attribute_ReturnValue; // 0x0(0x20)()
	struct FFortAnalyticsEventAttribute          CallFunc_Build_Player_Name_Analytic_Attribute_ReturnValue; // 0x20(0x20)()
	TArray<struct FFortAnalyticsEventAttribute>  K2Node_MakeArray_Array;                            // 0x40(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.Initialize Data
struct UTabAccountLinkage_C_Initialize_Data_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortAccountLinkingUIConfig       CallFunc_GetAccountLinkingUIConfig_ReturnValue;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A62[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.Update Data
struct UTabAccountLinkage_C_Update_Data_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.UpdateOptionsTab
struct UTabAccountLinkage_C_UpdateOptionsTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.CenterOnTab
struct UTabAccountLinkage_C_CenterOnTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.Construct
struct UTabAccountLinkage_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature
struct UTabAccountLinkage_C_BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature_Params
{
public:
	class FText                                  NewTooltipText;                                    // 0x0(0x18)(Parm)
};

// 0x8 (0x8 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
struct UTabAccountLinkage_C_BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function TabAccountLinkage.TabAccountLinkage_C.ExecuteUbergraph_TabAccountLinkage
struct UTabAccountLinkage_C_ExecuteUbergraph_TabAccountLinkage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_NewTooltipText;         // 0x8(0x18)()
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetAccountLinkingUIURL_ReturnValue;       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowWebURL_ReturnValue;                   // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
