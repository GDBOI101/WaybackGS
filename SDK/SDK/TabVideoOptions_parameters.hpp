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

// 0x40 (0x40 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
struct UTabVideoOptions_C_Initialize_Display_Resolutions_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)()
	TArray<class FText>                          CallFunc_GetPossibleDisplayResolutions_ReturnValue; // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x28(0x18)()
};

// 0x4C (0x4C - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Update Data
struct UTabVideoOptions_C_Update_Data_Params
{
public:
	bool                                         Reset_Quality_Selector;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentFPS_ReturnValue;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWindowedFullscreen_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A73[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentDisplayResolution_ReturnValue;  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentWindowMode_ReturnValue;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowFPS_ReturnValue;                   // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowGrass_ReturnValue;                 // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A74[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue2;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMotionBlur_ReturnValue;                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUseVsync_ReturnValue;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A75[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue3;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue4;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPostProcessQuality_ReturnValue;        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetEffectsQuality_ReturnValue;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDiscreteResolutionQuality_ReturnValue; // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x350 (0x350 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
struct UTabVideoOptions_C_Initialize_Data_Params
{
public:
	TArray<class FText>                          NewLocalVar_0;                                     // 0x0(0x10)(Edit, ZeroConstructor)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array2;                           // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array3;                           // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array4;                           // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x50(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x68(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x80(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x98(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue5;             // 0xB0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue6;             // 0xC8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue7;             // 0xE0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue8;             // 0xF8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue9;             // 0x110(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue10;            // 0x128(0x18)()
	TArray<class FText>                          CallFunc_GetPossibleFPS_ReturnValue;               // 0x140(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          CallFunc_GetPossibleWindowModes_ReturnValue;       // 0x150(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue11;            // 0x160(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12;            // 0x178(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array5;                           // 0x190(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array6;                           // 0x1A0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array7;                           // 0x1B0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue13;            // 0x1C0(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array8;                           // 0x1D8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array9;                           // 0x1E8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array10;                          // 0x1F8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array11;                          // 0x208(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array12;                          // 0x218(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array13;                          // 0x228(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array14;                          // 0x238(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue14;            // 0x248(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array15;                          // 0x260(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue15;            // 0x270(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array16;                          // 0x288(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue16;            // 0x298(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array17;                          // 0x2B0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue17;            // 0x2C0(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array18;                          // 0x2D8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue18;            // 0x2E8(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array19;                          // 0x300(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue19;            // 0x310(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array20;                          // 0x328(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue20;            // 0x338(0x18)()
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
struct UTabVideoOptions_C_View_Distance_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Discrete Resolution Changed
struct UTabVideoOptions_C_Discrete_Resolution_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
struct UTabVideoOptions_C_Shadows_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
struct UTabVideoOptions_C_Anti_Aliasing_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
struct UTabVideoOptions_C_Textures_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
struct UTabVideoOptions_C_Post_Processing_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
struct UTabVideoOptions_C_Effects_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
struct UTabVideoOptions_C_Quality_Changed_Params
{
public:
	int32                                        Tab_Id;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
struct UTabVideoOptions_C_UpdateOptionsTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
struct UTabVideoOptions_C_Window_Mode__Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_22
struct UTabVideoOptions_C_CustomEvent_22_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23
struct UTabVideoOptions_C_CustomEvent_23_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Construct
struct UTabVideoOptions_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
struct UTabVideoOptions_C_CenterOnTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
struct UTabVideoOptions_C_VSync_Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
struct UTabVideoOptions_C_Motion_Blur_Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
struct UTabVideoOptions_C_CustomEvent_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_1
struct UTabVideoOptions_C_CustomEvent_1_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
struct UTabVideoOptions_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19B (0x19B - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
struct UTabVideoOptions_C_ExecuteUbergraph_TabVideoOptions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A77[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x60(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A78[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Tab_Id8;                        // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id7;                        // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id6;                        // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id5;                        // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id4;                        // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id3;                        // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id2;                        // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Tab_Id;                         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A79[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index7;                // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWindowedFullscreen_ReturnValue;         // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index6;                // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index5;                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetCurrentDisplayResolution_ReturnValue;  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_Selected_Index4;                // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index3;                // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue2;              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index2;                // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue3;              // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue4;              // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0x118(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x128(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x138(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x148(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x158(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x180(0x18)()
	bool                                         CallFunc_IsAthena_ReturnValue;                     // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x19A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
struct UTabVideoOptions_C_Disable_Overlay__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
struct UTabVideoOptions_C_Enable_Overlay__DelegateSignature_Params
{
public:
	bool                                         Accept_Input;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
