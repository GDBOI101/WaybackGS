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

// 0xC8 (0xC8 - 0x0)
// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterialForUniqueId_New
struct UBannerLibrary_C_UpdateBannerMeshMaterialForUniqueId_New_Params
{
public:
	class UMaterialInstanceDynamic*              Material_Instance_Dynamic;                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseIconMask;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_363D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x10(0x18)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_363E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortHomeBaseInfo                     CallFunc_GetHomeBaseInfoForPlayer_Result;          // 0x48(0x40)()
	class UTexture2D*                            CallFunc_Get_Icon_Texture_and_Colors_Icon;         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor; // 0x90(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color; // 0xA0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable2;                             // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_363F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_Select_Default;                             // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BannerLibrary.BannerLibrary_C.Get Icon Texture and Colors
struct UBannerLibrary_C_Get_Icon_Texture_and_Colors_Params
{
public:
	class FString                                BannerIconId;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BannerColorId;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PrimaryColor;                                      // 0x30(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Secondary_Color;                                   // 0x40(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue2;           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_LoadAndGetBannerLargeIconFromRowName_ReturnValue; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue; // 0x68(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue; // 0x78(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BannerLibrary.BannerLibrary_C.UpdateMaterial_New
struct UBannerLibrary_C_UpdateMaterial_New_Params
{
public:
	class UImage*                                Banner_material;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortHomeBaseInfo                     Image_info;                                        // 0x8(0x40)(Parm)
	bool                                         Is_Icon;                                           // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3640[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable;                              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_Get_Icon_Texture_and_Colors_Icon;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor; // 0x70(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color; // 0x80(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable2;                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3641[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_Select_Default;                             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BannerLibrary.BannerLibrary_C.UpdateBannerMeshMaterial_New
struct UBannerLibrary_C_UpdateBannerMeshMaterial_New_Params
{
public:
	class UMaterialInstanceDynamic*              Material_Instance_Dynamic;                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseIconMask;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3642[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      InstigatorPlayerState;                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3643[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueID_ReturnValue;                  // 0x38(0x18)(HasGetValueTypeHash)
	struct FFortHomeBaseInfo                     CallFunc_GetHomeBaseInfoForPlayer_Result;          // 0x50(0x40)()
	class UTexture*                              Temp_object_Variable2;                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_Get_Icon_Texture_and_Colors_Icon;         // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Icon_Texture_and_Colors_PrimaryColor; // 0xA0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Icon_Texture_and_Colors_Secondary_Color; // 0xB0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3644[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_Select_Default;                             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial
struct UBannerLibrary_C_UpdateBannerIconOnMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Icon;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial
struct UBannerLibrary_C_UpdateBannerColorOnMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PrimaryBGColor;                                    // 0x8(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SecondaryBGColor;                                  // 0x18(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BannerLibrary.BannerLibrary_C.GenericUpdateMaterial
struct UBannerLibrary_C_GenericUpdateMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              BannerIcon;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BG_PrimaryColor;                                   // 0x10(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BG_SecondaryColor;                                 // 0x20(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              ShapeIcon;                                         // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
