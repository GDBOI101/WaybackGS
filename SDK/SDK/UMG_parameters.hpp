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

// 0x18 (0x18 - 0x0)
// Function UMG.AsyncTaskDownloadImage.DownloadImage
struct UAsyncTaskDownloadImage_DownloadImage_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskDownloadImage*               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function UMG.DragDropOperation.Drop
struct UDragDropOperation_Drop_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function UMG.DragDropOperation.Dragged
struct UDragDropOperation_Dragged_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function UMG.DragDropOperation.DragCancelled
struct UDragDropOperation_DragCancelled_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BoolBinding.GetValue
struct UBoolBinding_GetValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function UMG.BrushBinding.GetValue
struct UBrushBinding_GetValue_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckedStateBinding.GetValue
struct UCheckedStateBinding_GetValue_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UMG.ColorBinding.GetSlateValue
struct UColorBinding_GetSlateValue_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ColorBinding.GetLinearValue
struct UColorBinding_GetLinearValue_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.FloatBinding.GetValue
struct UFloatBinding_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Int32Binding.GetValue
struct UInt32Binding_GetValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MouseCursorBinding.GetValue
struct UMouseCursorBinding_GetValue_Params
{
public:
	enum class EMouseCursor                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.TextBinding.GetTextValue
struct UTextBinding_GetTextValue_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.TextBinding.GetStringValue
struct UTextBinding_GetStringValue_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.VisibilityBinding.GetValue
struct UVisibilityBinding_GetValue_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetBinding.GetValue
struct UWidgetBinding_GetValue_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
struct USlateBlueprintLibrary_ScreenToWidgetLocal_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeometry                             Geometry;                                          // 0x8(0x34)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x3C(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LocalCoordinate;                                   // 0x44(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
struct USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AbsoluteCoordinate;                                // 0x10(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.SlateBlueprintLibrary.ScreenToViewport
struct USlateBlueprintLibrary_ScreenToViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportPosition;                                  // 0x10(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct USlateBlueprintLibrary_LocalToViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeometry                             Geometry;                                          // 0x8(0x34)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             LocalCoordinate;                                   // 0x3C(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PixelPosition;                                     // 0x44(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportPosition;                                  // 0x4C(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x34)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             LocalCoordinate;                                   // 0x34(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x3C(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct USlateBlueprintLibrary_IsUnderLocation_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x34)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AbsoluteCoordinate;                                // 0x34(0x8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct USlateBlueprintLibrary_GetLocalSize_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x34)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x34(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
struct USlateBlueprintLibrary_EqualEqual_SlateBrush_Params
{
public:
	struct FSlateBrush                           A;                                                 // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSlateBrush                           B;                                                 // 0x90(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x120(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AbsoluteDesktopCoordinate;                         // 0x8(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PixelPosition;                                     // 0x10(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportPosition;                                  // 0x18(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x34)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AbsoluteCoordinate;                                // 0x34(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x3C(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.SetVisibility
struct UWidget_SetVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetUserFocus
struct UWidget_SetUserFocus_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.Widget.SetToolTipText
struct UWidget_SetToolTipText_Params
{
public:
	class FText                                  InToolTipText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetToolTip
struct UWidget_SetToolTip_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetRenderTranslation
struct UWidget_SetRenderTranslation_Params
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetRenderTransformPivot
struct UWidget_SetRenderTransformPivot_Params
{
public:
	struct FVector2D                             Pivot;                                             // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function UMG.Widget.SetRenderTransform
struct UWidget_SetRenderTransform_Params
{
public:
	struct FWidgetTransform                      InTransform;                                       // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetRenderShear
struct UWidget_SetRenderShear_Params
{
public:
	struct FVector2D                             Shear;                                             // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.SetRenderScale
struct UWidget_SetRenderScale_Params
{
public:
	struct FVector2D                             Scale;                                             // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Widget.SetRenderAngle
struct UWidget_SetRenderAngle_Params
{
public:
	float                                        Angle;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.SetNavigationRule
struct UWidget_SetNavigationRule_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUINavigationRule                 Rule;                                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WidgetToFocus;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.Widget.SetKeyboardFocus
struct UWidget_SetKeyboardFocus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.SetIsEnabled
struct UWidget_SetIsEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.SetCursor
struct UWidget_SetCursor_Params
{
public:
	enum class EMouseCursor                      InCursor;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.SetAllNavigationRules
struct UWidget_SetAllNavigationRules_Params
{
public:
	enum class EUINavigationRule                 Rule;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WidgetToFocus;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.Widget.ResetCursor
struct UWidget_ResetCursor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.Widget.RemoveFromParent
struct UWidget_RemoveFromParent_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UWidget_OnReply__DelegateSignature_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UWidget_OnPointerEvent__DelegateSignature_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.IsVisible
struct UWidget_IsVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.IsHovered
struct UWidget_IsHovered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UWidget_InvalidateLayoutAndVolatility_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.HasUserFocusedDescendants
struct UWidget_HasUserFocusedDescendants_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.Widget.HasUserFocus
struct UWidget_HasUserFocus_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasMouseCapture
struct UWidget_HasMouseCapture_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasKeyboardFocus
struct UWidget_HasKeyboardFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasFocusedDescendants
struct UWidget_HasFocusedDescendants_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.HasAnyUserFocus
struct UWidget_HasAnyUserFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UWidget_GetWidget__DelegateSignature_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.GetVisibility
struct UWidget_GetVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UWidget_GetText__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UWidget_GetSlateVisibility__DelegateSignature_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UWidget_GetSlateColor__DelegateSignature_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UWidget_GetSlateBrush__DelegateSignature_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.GetParent
struct UWidget_GetParent_Params
{
public:
	class UPanelWidget*                          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.GetOwningPlayer
struct UWidget_GetOwningPlayer_Params
{
public:
	class APlayerController*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UWidget_GetMouseCursor__DelegateSignature_Params
{
public:
	enum class EMouseCursor                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UWidget_GetLinearColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.GetIsEnabled
struct UWidget_GetIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UWidget_GetInt32__DelegateSignature_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UWidget_GetFloat__DelegateSignature_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Widget.GetDesiredSize
struct UWidget_GetDesiredSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UWidget_GetCheckBoxState__DelegateSignature_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function UMG.Widget.GetCachedGeometry
struct UWidget_GetCachedGeometry_Params
{
public:
	struct FGeometry                             ReturnValue;                                       // 0x0(0x34)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UWidget_GetBool__DelegateSignature_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UWidget_GenerateWidgetForString__DelegateSignature_Params
{
public:
	class FString                                Item;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Widget.ForceVolatile
struct UWidget_ForceVolatile_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.Widget.ForceLayoutPrepass
struct UWidget_ForceLayoutPrepass_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.UserWidget.UnregisterInputComponent
struct UUserWidget_UnregisterInputComponent_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function UMG.UserWidget.Tick
struct UUserWidget_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InDeltaTime;                                       // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.StopListeningForInputAction
struct UUserWidget_StopListeningForInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E08[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function UMG.UserWidget.StopListeningForAllInputActions
struct UUserWidget_StopListeningForAllInputActions_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.StopAnimation
struct UUserWidget_StopAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UMG.UserWidget.SetPositionInViewport
struct UUserWidget_SetPositionInViewport_Params
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveDPIScale;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E09[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetPlaybackSpeed
struct UUserWidget_SetPlaybackSpeed_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlaybackSpeed;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetPadding
struct UUserWidget_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.SetOwningPlayer
struct UUserWidget_SetOwningPlayer_Params
{
public:
	class APlayerController*                     LocalPlayerController;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.SetOwningLocalPlayer
struct UUserWidget_SetOwningLocalPlayer_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUserWidget_SetNumLoopsToPlay_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLoopsToPlay;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function UMG.UserWidget.SetInputActionPriority
struct UUserWidget_SetInputActionPriority_Params
{
public:
	int32                                        NewPriority;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.SetInputActionBlocking
struct UUserWidget_SetInputActionBlocking_Params
{
public:
	bool                                         bShouldBlock;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UMG.UserWidget.SetForegroundColor
struct UUserWidget_SetForegroundColor_Params
{
public:
	struct FSlateColor                           InForegroundColor;                                 // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUserWidget_SetDesiredSizeInViewport_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetColorAndOpacity
struct UUserWidget_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.SetAnchorsInViewport
struct UUserWidget_SetAnchorsInViewport_Params
{
public:
	struct FAnchors                              Anchors;                                           // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.SetAlignmentInViewport
struct UUserWidget_SetAlignmentInViewport_Params
{
public:
	struct FVector2D                             Alignment;                                         // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.ReverseAnimation
struct UUserWidget_ReverseAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.UserWidget.RemoveFromViewport
struct UUserWidget_RemoveFromViewport_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.UserWidget.RegisterInputComponent
struct UUserWidget_RegisterInputComponent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.PreConstruct
struct UUserWidget_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.PlaySound
struct UUserWidget_PlaySound_Params
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.UserWidget.PlayAnimationTo
struct UUserWidget_PlayAnimationTo_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartAtTime;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndAtTime;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLoopsToPlay;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackSpeed;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function UMG.UserWidget.PlayAnimation
struct UUserWidget_PlayAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartAtTime;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLoopsToPlay;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackSpeed;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.PauseAnimation
struct UUserWidget_PauseAnimation_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchStarted
struct UUserWidget_OnTouchStarted_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchMoved
struct UUserWidget_OnTouchMoved_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchGesture
struct UUserWidget_OnTouchGesture_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         GestureEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnTouchEnded
struct UUserWidget_OnTouchEnded_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUserWidget_OnPreviewMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnPreviewKeyDown
struct UUserWidget_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function UMG.UserWidget.OnPaint
struct UUserWidget_OnPaint_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseWheel
struct UUserWidget_OnMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseMove
struct UUserWidget_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function UMG.UserWidget.OnMouseLeave
struct UUserWidget_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function UMG.UserWidget.OnMouseEnter
struct UUserWidget_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseButtonUp
struct UUserWidget_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseButtonDown
struct UUserWidget_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUserWidget_OnMouseButtonDoubleClick_Params
{
public:
	struct FGeometry                             InMyGeometry;                                      // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         InMouseEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function UMG.UserWidget.OnMotionDetected
struct UUserWidget_OnMotionDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMotionEvent                          InMotionEvent;                                     // 0x38(0x50)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x88(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnKeyUp
struct UUserWidget_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnKeyDown
struct UUserWidget_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function UMG.UserWidget.OnKeyChar
struct UUserWidget_OnKeyChar_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterEvent                       InCharacterEvent;                                  // 0x38(0x28)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x60(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function UMG.UserWidget.OnFocusReceived
struct UUserWidget_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFocusEvent                           InFocusEvent;                                      // 0x34(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnFocusLost
struct UUserWidget_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function UMG.UserWidget.OnDrop
struct UUserWidget_OnDrop_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E22[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function UMG.UserWidget.OnDragOver
struct UUserWidget_OnDragOver_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E24[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function UMG.UserWidget.OnDragLeave
struct UUserWidget_OnDragLeave_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                    Operation;                                         // 0x78(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.UserWidget.OnDragEnter
struct UUserWidget_OnDragEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.UserWidget.OnDragDetected
struct UUserWidget_OnDragDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                    Operation;                                         // 0xB0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function UMG.UserWidget.OnDragCancelled
struct UUserWidget_OnDragCancelled_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                    Operation;                                         // 0x78(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnControllerButtonReleased
struct UUserWidget_OnControllerButtonReleased_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerEvent                      ControllerEvent;                                   // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnControllerButtonPressed
struct UUserWidget_OnControllerButtonPressed_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerEvent                      ControllerEvent;                                   // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function UMG.UserWidget.OnControllerAnalogValueChanged
struct UUserWidget_OnControllerAnalogValueChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerEvent                      ControllerEvent;                                   // 0x38(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnAnimationStarted
struct UUserWidget_OnAnimationStarted_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.OnAnimationFinished
struct UUserWidget_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function UMG.UserWidget.OnAnalogValueChanged
struct UUserWidget_OnAnalogValueChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnalogInputEvent                     InAnalogInputEvent;                                // 0x38(0x48)(Parm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.UserWidget.ListenForInputAction
struct UUserWidget_ListenForInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsume;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Callback;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.IsPlayingAnimation
struct UUserWidget_IsPlayingAnimation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.IsListeningForInputAction
struct UUserWidget_IsListeningForInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.IsInViewport
struct UUserWidget_IsInViewport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.IsInteractable
struct UUserWidget_IsInteractable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.IsAnyAnimationPlaying
struct UUserWidget_IsAnyAnimationPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.IsAnimationPlayingForward
struct UUserWidget_IsAnimationPlayingForward_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.IsAnimationPlaying
struct UUserWidget_IsAnimationPlaying_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUserWidget_GetOwningPlayerPawn_Params
{
public:
	class APawn*                                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.GetOwningLocalPlayer
struct UUserWidget_GetOwningLocalPlayer_Params
{
public:
	class ULocalPlayer*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UserWidget.GetIsVisible
struct UUserWidget_GetIsVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.GetAnimationCurrentTime
struct UUserWidget_GetAnimationCurrentTime_Params
{
public:
	class UWidgetAnimation*                      InAnimation;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.UserWidget.GetAnchorsInViewport
struct UUserWidget_GetAnchorsInViewport_Params
{
public:
	struct FAnchors                              ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.GetAlignmentInViewport
struct UUserWidget_GetAlignmentInViewport_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.UserWidget.Destruct
struct UUserWidget_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.UserWidget.Construct
struct UUserWidget_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function UMG.UserWidget.AddToViewport
struct UUserWidget_AddToViewport_Params
{
public:
	int32                                        ZOrder;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.UserWidget.AddToPlayerScreen
struct UUserWidget_AddToPlayerScreen_Params
{
public:
	int32                                        ZOrder;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E30[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
struct UBackgroundBlurSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.BackgroundBlurSlot.SetPadding
struct UBackgroundBlurSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
struct UBackgroundBlurSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BorderSlot.SetVerticalAlignment
struct UBorderSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.BorderSlot.SetPadding
struct UBorderSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BorderSlot.SetHorizontalAlignment
struct UBorderSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ButtonSlot.SetVerticalAlignment
struct UButtonSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ButtonSlot.SetPadding
struct UButtonSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ButtonSlot.SetHorizontalAlignment
struct UButtonSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CanvasPanelSlot.SetZOrder
struct UCanvasPanelSlot_SetZOrder_Params
{
public:
	int32                                        InZOrder;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.SetSize
struct UCanvasPanelSlot_SetSize_Params
{
public:
	struct FVector2D                             InSize;                                            // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.SetPosition
struct UCanvasPanelSlot_SetPosition_Params
{
public:
	struct FVector2D                             InPosition;                                        // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetOffsets
struct UCanvasPanelSlot_SetOffsets_Params
{
public:
	struct FMargin                               InOffset;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.SetMinimum
struct UCanvasPanelSlot_SetMinimum_Params
{
public:
	struct FVector2D                             InMinimumAnchors;                                  // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.SetMaximum
struct UCanvasPanelSlot_SetMaximum_Params
{
public:
	struct FVector2D                             InMaximumAnchors;                                  // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UMG.CanvasPanelSlot.SetLayout
struct UCanvasPanelSlot_SetLayout_Params
{
public:
	struct FAnchorData                           InLayoutData;                                      // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CanvasPanelSlot.SetAutoSize
struct UCanvasPanelSlot_SetAutoSize_Params
{
public:
	bool                                         InbAutoSize;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.SetAnchors
struct UCanvasPanelSlot_SetAnchors_Params
{
public:
	struct FAnchors                              InAnchors;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.SetAlignment
struct UCanvasPanelSlot_SetAlignment_Params
{
public:
	struct FVector2D                             InAlignment;                                       // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CanvasPanelSlot.GetZOrder
struct UCanvasPanelSlot_GetZOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.GetSize
struct UCanvasPanelSlot_GetSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.GetPosition
struct UCanvasPanelSlot_GetPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.GetOffsets
struct UCanvasPanelSlot_GetOffsets_Params
{
public:
	struct FMargin                               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UMG.CanvasPanelSlot.GetLayout
struct UCanvasPanelSlot_GetLayout_Params
{
public:
	struct FAnchorData                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CanvasPanelSlot.GetAutoSize
struct UCanvasPanelSlot_GetAutoSize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanelSlot.GetAnchors
struct UCanvasPanelSlot_GetAnchors_Params
{
public:
	struct FAnchors                              ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.CanvasPanelSlot.GetAlignment
struct UCanvasPanelSlot_GetAlignment_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.GridSlot.SetVerticalAlignment
struct UGridSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetRowSpan
struct UGridSlot_SetRowSpan_Params
{
public:
	int32                                        InRowSpan;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetRow
struct UGridSlot_SetRow_Params
{
public:
	int32                                        InRow;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.GridSlot.SetPadding
struct UGridSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetLayer
struct UGridSlot_SetLayer_Params
{
public:
	int32                                        InLayer;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.GridSlot.SetHorizontalAlignment
struct UGridSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetColumnSpan
struct UGridSlot_SetColumnSpan_Params
{
public:
	int32                                        InColumnSpan;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.GridSlot.SetColumn
struct UGridSlot_SetColumn_Params
{
public:
	int32                                        InColumn;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
struct UHorizontalBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.HorizontalBoxSlot.SetSize
struct UHorizontalBoxSlot_SetSize_Params
{
public:
	struct FSlateChildSize                       InSize;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.HorizontalBoxSlot.SetPadding
struct UHorizontalBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.OverlaySlot.SetVerticalAlignment
struct UOverlaySlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.OverlaySlot.SetPadding
struct UOverlaySlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.OverlaySlot.SetHorizontalAlignment
struct UOverlaySlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBoxSlot.SetVerticalAlignment
struct UScaleBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScaleBoxSlot.SetPadding
struct UScaleBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
struct UScaleBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScrollBoxSlot.SetPadding
struct UScrollBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
struct UScrollBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.SizeBoxSlot.SetVerticalAlignment
struct USizeBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.SizeBoxSlot.SetPadding
struct USizeBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.SizeBoxSlot.SetHorizontalAlignment
struct USizeBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UniformGridSlot.SetVerticalAlignment
struct UUniformGridSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridSlot.SetRow
struct UUniformGridSlot_SetRow_Params
{
public:
	int32                                        InRow;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.UniformGridSlot.SetHorizontalAlignment
struct UUniformGridSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridSlot.SetColumn
struct UUniformGridSlot_SetColumn_Params
{
public:
	int32                                        InColumn;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.VerticalBoxSlot.SetVerticalAlignment
struct UVerticalBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.VerticalBoxSlot.SetSize
struct UVerticalBoxSlot_SetSize_Params
{
public:
	struct FSlateChildSize                       InSize;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.VerticalBoxSlot.SetPadding
struct UVerticalBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
struct UVerticalBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetSwitcherSlot.SetPadding
struct UWidgetSwitcherSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.PanelWidget.RemoveChildAt
struct UPanelWidget_RemoveChildAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.RemoveChild
struct UPanelWidget_RemoveChild_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.HasChild
struct UPanelWidget_HasChild_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function UMG.PanelWidget.HasAnyChildren
struct UPanelWidget_HasAnyChildren_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.PanelWidget.GetChildrenCount
struct UPanelWidget_GetChildrenCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.GetChildIndex
struct UPanelWidget_GetChildIndex_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.GetChildAt
struct UPanelWidget_GetChildAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.PanelWidget.ClearChildren
struct UPanelWidget_ClearChildren_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UMG.PanelWidget.AddChild
struct UPanelWidget_AddChild_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                            ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ContentWidget.SetContent
struct UContentWidget_SetContent_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                            ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ContentWidget.GetContentSlot
struct UContentWidget_GetContentSlot_Params
{
public:
	class UPanelSlot*                            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarArea.SetVerticalAlignment
struct UWindowTitleBarArea_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WindowTitleBarArea.SetPadding
struct UWindowTitleBarArea_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
struct UWindowTitleBarArea_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
struct UWindowTitleBarAreaSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WindowTitleBarAreaSlot.SetPadding
struct UWindowTitleBarAreaSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
struct UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBoxSlot.SetVerticalAlignment
struct UWrapBoxSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WrapBoxSlot.SetPadding
struct UWrapBoxSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct UWrapBoxSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
public:
	float                                        InFillSpanWhenLessThan;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WrapBoxSlot.SetFillEmptySpace
struct UWrapBoxSlot_SetFillEmptySpace_Params
{
public:
	bool                                         InbFillEmptySpace;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CircularThrobber.SetRadius
struct UCircularThrobber_SetRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CircularThrobber.SetPeriod
struct UCircularThrobber_SetPeriod_Params
{
public:
	float                                        InPeriod;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.CircularThrobber.SetNumberOfPieces
struct UCircularThrobber_SetNumberOfPieces_Params
{
public:
	int32                                        InNumberOfPieces;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ComboBoxString.SetSelectedOption
struct UComboBoxString_SetSelectedOption_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.ComboBoxString.RemoveOption
struct UComboBoxString_RemoveOption_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E58[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function UMG.ComboBoxString.RefreshOptions
struct UComboBoxString_RefreshOptions_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E59[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UMG.ComboBoxString.GetSelectedOption
struct UComboBoxString_GetSelectedOption_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ComboBoxString.GetOptionCount
struct UComboBoxString_GetOptionCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.ComboBoxString.GetOptionAtIndex
struct UComboBoxString_GetOptionAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.ComboBoxString.FindOptionIndex
struct UComboBoxString_FindOptionIndex_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function UMG.ComboBoxString.ClearSelection
struct UComboBoxString_ClearSelection_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.ComboBoxString.ClearOptions
struct UComboBoxString_ClearOptions_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UMG.ComboBoxString.AddOption
struct UComboBoxString_AddOption_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableText.SetText
struct UEditableText_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableText.SetIsReadOnly
struct UEditableText_SetIsReadOnly_Params
{
public:
	bool                                         InbIsReadyOnly;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableText.SetIsPassword
struct UEditableText_SetIsPassword_Params
{
public:
	bool                                         InbIsPassword;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableText.SetHintText
struct UEditableText_SetHintText_Params
{
public:
	class FText                                  InHintText;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E61[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableText.GetText
struct UEditableText_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableTextBox.SetText
struct UEditableTextBox_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableTextBox.SetError
struct UEditableTextBox_SetError_Params
{
public:
	class FText                                  InError;                                           // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E65[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.EditableTextBox.HasError
struct UEditableTextBox_HasError_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.EditableTextBox.GetText
struct UEditableTextBox_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.EditableTextBox.ClearError
struct UEditableTextBox_ClearError_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UMG.ExpandableArea.SetIsExpanded_Animated
struct UExpandableArea_SetIsExpanded_Animated_Params
{
public:
	bool                                         IsExpanded;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ExpandableArea.SetIsExpanded
struct UExpandableArea_SetIsExpanded_Params
{
public:
	bool                                         IsExpanded;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ExpandableArea.GetIsExpanded
struct UExpandableArea_GetIsExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Image.SetOpacity
struct UImage_SetOpacity_Params
{
public:
	float                                        InOpacity;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Image.SetColorAndOpacity
struct UImage_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Image.SetBrushFromTextureDynamic
struct UImage_SetBrushFromTextureDynamic_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.Image.SetBrushFromTexture
struct UImage_SetBrushFromTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function UMG.Image.SetBrushFromMaterial
struct UImage_SetBrushFromMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Image.SetBrushFromAsset
struct UImage_SetBrushFromAsset_Params
{
public:
	class USlateBrushAsset*                      Asset;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function UMG.Image.SetBrush
struct UImage_SetBrush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Image.GetDynamicMaterial
struct UImage_GetDynamicMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.InputKeySelector.SetSelectedKey
struct UInputKeySelector_SetSelectedKey_Params
{
public:
	struct FInputChord                           InSelectedKey;                                     // 0x0(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.InputKeySelector.SetKeySelectionText
struct UInputKeySelector_SetKeySelectionText_Params
{
public:
	class FText                                  InKeySelectionText;                                // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InputKeySelector.SetAllowModifierKeys
struct UInputKeySelector_SetAllowModifierKeys_Params
{
public:
	bool                                         bInAllowModifierKeys;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
struct UInputKeySelector_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
struct UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UMG.InputKeySelector.GetIsSelectingKey
struct UInputKeySelector_GetIsSelectingKey_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.CanvasPanel.AddChildToCanvas
struct UCanvasPanel_AddChildToCanvas_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanelSlot*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlur.SetVerticalAlignment
struct UBackgroundBlur_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.BackgroundBlur.SetPadding
struct UBackgroundBlur_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
struct UBackgroundBlur_SetLowQualityFallbackBrush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlur.SetHorizontalAlignment
struct UBackgroundBlur_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.BackgroundBlur.SetBlurStrength
struct UBackgroundBlur_SetBlurStrength_Params
{
public:
	float                                        InStrength;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.BackgroundBlur.SetBlurRadius
struct UBackgroundBlur_SetBlurRadius_Params
{
public:
	int32                                        InBlurRadius;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
struct UBackgroundBlur_SetApplyAlphaToBlur_Params
{
public:
	bool                                         bInApplyAlphaToBlur;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Border.SetVerticalAlignment
struct UBorder_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Border.SetPadding
struct UBorder_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Border.SetHorizontalAlignment
struct UBorder_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.SetDesiredSizeScale
struct UBorder_SetDesiredSizeScale_Params
{
public:
	struct FVector2D                             InScale;                                           // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Border.SetContentColorAndOpacity
struct UBorder_SetContentColorAndOpacity_Params
{
public:
	struct FLinearColor                          InContentColorAndOpacity;                          // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.SetBrushFromTexture
struct UBorder_SetBrushFromTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.SetBrushFromMaterial
struct UBorder_SetBrushFromMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.SetBrushFromAsset
struct UBorder_SetBrushFromAsset_Params
{
public:
	class USlateBrushAsset*                      Asset;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Border.SetBrushColor
struct UBorder_SetBrushColor_Params
{
public:
	struct FLinearColor                          InBrushColor;                                      // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function UMG.Border.SetBrush
struct UBorder_SetBrush_Params
{
public:
	struct FSlateBrush                           InBrush;                                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Border.GetDynamicMaterial
struct UBorder_GetDynamicMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// Function UMG.Button.SetStyle
struct UButton_SetStyle_Params
{
public:
	struct FButtonStyle                          InStyle;                                           // 0x0(0x2A8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Button.SetColorAndOpacity
struct UButton_SetColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Button.SetBackgroundColor
struct UButton_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          InBackgroundColor;                                 // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Button.IsPressed
struct UButton_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.SetIsChecked
struct UCheckBox_SetIsChecked_Params
{
public:
	bool                                         InIsChecked;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.SetCheckedState
struct UCheckBox_SetCheckedState_Params
{
public:
	enum class ECheckBoxState                    InCheckedState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.IsPressed
struct UCheckBox_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.IsChecked
struct UCheckBox_IsChecked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.CheckBox.GetCheckedState
struct UCheckBox_GetCheckedState_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.InvalidationBox.SetCanCache
struct UInvalidationBox_SetCanCache_Params
{
public:
	bool                                         CanCache;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.InvalidationBox.InvalidateCache
struct UInvalidationBox_InvalidateCache_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UMG.InvalidationBox.GetCanCache
struct UInvalidationBox_GetCanCache_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.ToggleOpen
struct UMenuAnchor_ToggleOpen_Params
{
public:
	bool                                         bFocusOnOpen;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.ShouldOpenDueToClick
struct UMenuAnchor_ShouldOpenDueToClick_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.Open
struct UMenuAnchor_Open_Params
{
public:
	bool                                         bFocusMenu;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.IsOpen
struct UMenuAnchor_IsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.MenuAnchor.HasOpenSubMenus
struct UMenuAnchor_HasOpenSubMenus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.MenuAnchor.GetMenuPosition
struct UMenuAnchor_GetMenuPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.MenuAnchor.Close
struct UMenuAnchor_Close_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UMG.RetainerBox.SetTextureParameter
struct URetainerBox_SetTextureParameter_Params
{
public:
	class FName                                  TextureParameter;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RetainerBox.SetEffectMaterial
struct URetainerBox_SetEffectMaterial_Params
{
public:
	class UMaterialInterface*                    EffectMaterial;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.RetainerBox.GetEffectMaterial
struct URetainerBox_GetEffectMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SafeZone.SetSidesToPad
struct USafeZone_SetSidesToPad_Params
{
public:
	bool                                         InPadLeft;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InPadRight;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InPadTop;                                          // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InPadBottom;                                       // 0x3(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScaleBox.SetUserSpecifiedScale
struct UScaleBox_SetUserSpecifiedScale_Params
{
public:
	float                                        InUserSpecifiedScale;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBox.SetStretchDirection
struct UScaleBox_SetStretchDirection_Params
{
public:
	enum class EStretchDirection                 InStretchDirection;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBox.SetStretch
struct UScaleBox_SetStretch_Params
{
public:
	enum class EStretch                          InStretch;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ScaleBox.SetIgnoreInheritedScale
struct UScaleBox_SetIgnoreInheritedScale_Params
{
public:
	bool                                         bInIgnoreInheritedScale;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetWidthOverride
struct USizeBox_SetWidthOverride_Params
{
public:
	float                                        InWidthOverride;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMinDesiredWidth
struct USizeBox_SetMinDesiredWidth_Params
{
public:
	float                                        InMinDesiredWidth;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMinDesiredHeight
struct USizeBox_SetMinDesiredHeight_Params
{
public:
	float                                        InMinDesiredHeight;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMaxDesiredWidth
struct USizeBox_SetMaxDesiredWidth_Params
{
public:
	float                                        InMaxDesiredWidth;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMaxDesiredHeight
struct USizeBox_SetMaxDesiredHeight_Params
{
public:
	float                                        InMaxDesiredHeight;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetMaxAspectRatio
struct USizeBox_SetMaxAspectRatio_Params
{
public:
	float                                        InMaxAspectRatio;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SizeBox.SetHeightOverride
struct USizeBox_SetHeightOverride_Params
{
public:
	float                                        InHeightOverride;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.SizeBox.ClearWidthOverride
struct USizeBox_ClearWidthOverride_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SizeBox.ClearMinDesiredWidth
struct USizeBox_ClearMinDesiredWidth_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SizeBox.ClearMinDesiredHeight
struct USizeBox_ClearMinDesiredHeight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SizeBox.ClearMaxDesiredWidth
struct USizeBox_ClearMaxDesiredWidth_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SizeBox.ClearMaxDesiredHeight
struct USizeBox_ClearMaxDesiredHeight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SizeBox.ClearMaxAspectRatio
struct USizeBox_ClearMaxAspectRatio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SizeBox.ClearHeightOverride
struct USizeBox_ClearHeightOverride_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UMG.Viewport.Spawn
struct UViewport_Spawn_Params
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UMG.Viewport.SetViewRotation
struct UViewport_SetViewRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UMG.Viewport.SetViewLocation
struct UViewport_SetViewLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UMG.Viewport.GetViewRotation
struct UViewport_GetViewRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Viewport.GetViewportWorld
struct UViewport_GetViewportWorld_Params
{
public:
	class UWorld*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function UMG.Viewport.GetViewLocation
struct UViewport_GetViewLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.GridPanel.AddChildToGrid
struct UGridPanel_AddChildToGrid_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridSlot*                             ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UHorizontalBox_AddChildToHorizontalBox_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBoxSlot*                    ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Overlay.AddChildToOverlay
struct UOverlay_AddChildToOverlay_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlaySlot*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.SetScrollOffset
struct UScrollBox_SetScrollOffset_Params
{
public:
	float                                        NewScrollOffset;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ScrollBox.ScrollWidgetIntoView
struct UScrollBox_ScrollWidgetIntoView_Params
{
public:
	class UWidget*                               WidgetToFind;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnimateScroll;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDescendantScrollDestination      ScrollDesintion;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function UMG.ScrollBox.ScrollToStart
struct UScrollBox_ScrollToStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.ScrollBox.ScrollToEnd
struct UScrollBox_ScrollToEnd_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function UMG.ScrollBox.GetScrollOffset
struct UScrollBox_GetScrollOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UniformGridPanel.SetSlotPadding
struct UUniformGridPanel_SetSlotPadding_Params
{
public:
	struct FMargin                               InSlotPadding;                                     // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
{
public:
	float                                        InMinDesiredSlotWidth;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
{
public:
	float                                        InMinDesiredSlotHeight;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.UniformGridPanel.AddChildToUniformGrid
struct UUniformGridPanel_AddChildToUniformGrid_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUniformGridSlot*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.VerticalBox.AddChildToVerticalBox
struct UVerticalBox_AddChildToVerticalBox_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBoxSlot*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct UWidgetSwitcher_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetSwitcher.SetActiveWidget
struct UWidgetSwitcher_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct UWidgetSwitcher_GetWidgetAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetSwitcher.GetNumWidgets
struct UWidgetSwitcher_GetNumWidgets_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct UWidgetSwitcher_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WrapBox.SetInnerSlotPadding
struct UWrapBox_SetInnerSlotPadding_Params
{
public:
	struct FVector2D                             InPadding;                                         // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WrapBox.AddChildWrapBox
struct UWrapBox_AddChildWrapBox_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWrapBoxSlot*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.ProgressBar.SetPercent
struct UProgressBar_SetPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.ProgressBar.SetIsMarquee
struct UProgressBar_SetIsMarquee_Params
{
public:
	bool                                         InbIsMarquee;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.ProgressBar.SetFillColorAndOpacity
struct UProgressBar_SetFillColorAndOpacity_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.ScrollBar.SetState
struct UScrollBar_SetState_Params
{
public:
	float                                        InOffsetFraction;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InThumbSizeFraction;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.SetValue
struct USlider_SetValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.SetStepSize
struct USlider_SetStepSize_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Slider.SetSliderHandleColor
struct USlider_SetSliderHandleColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.Slider.SetSliderBarColor
struct USlider_SetSliderBarColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Slider.SetLocked
struct USlider_SetLocked_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Slider.SetIndentHandle
struct USlider_SetIndentHandle_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Slider.GetValue
struct USlider_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
public:
	struct FVector2D                             InSize;                                            // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetValue
struct USpinBox_SetValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMinValue
struct USpinBox_SetMinValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMinSliderValue
struct USpinBox_SetMinSliderValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMaxValue
struct USpinBox_SetMaxValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.SetMaxSliderValue
struct USpinBox_SetMaxSliderValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UMG.SpinBox.SetForegroundColor
struct USpinBox_SetForegroundColor_Params
{
public:
	struct FSlateColor                           InForegroundColor;                                 // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetValue
struct USpinBox_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMinValue
struct USpinBox_GetMinValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMinSliderValue
struct USpinBox_GetMinSliderValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMaxValue
struct USpinBox_GetMaxValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.SpinBox.GetMaxSliderValue
struct USpinBox_GetMaxSliderValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.SpinBox.ClearMinValue
struct USpinBox_ClearMinValue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SpinBox.ClearMinSliderValue
struct USpinBox_ClearMinSliderValue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SpinBox.ClearMaxValue
struct USpinBox_ClearMaxValue_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UMG.SpinBox.ClearMaxSliderValue
struct USpinBox_ClearMaxSliderValue_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
struct UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TileView.SetItemWidth
struct UTileView_SetItemWidth_Params
{
public:
	float                                        Width;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TileView.SetItemHeight
struct UTileView_SetItemHeight_Params
{
public:
	float                                        Height;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.TileView.RequestListRefresh
struct UTileView_RequestListRefresh_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableText.SetText
struct UMultiLineEditableText_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableText.GetText
struct UMultiLineEditableText_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetText
struct UMultiLineEditableTextBox_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.SetError
struct UMultiLineEditableTextBox_SetError_Params
{
public:
	class FText                                  InError;                                           // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.MultiLineEditableTextBox.GetText
struct UMultiLineEditableTextBox_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.TextBlock.SetText
struct UTextBlock_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.TextBlock.SetShadowOffset
struct UTextBlock_SetShadowOffset_Params
{
public:
	struct FVector2D                             InShadowOffset;                                    // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.TextBlock.SetShadowColorAndOpacity
struct UTextBlock_SetShadowColorAndOpacity_Params
{
public:
	struct FLinearColor                          InShadowColorAndOpacity;                           // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TextBlock.SetOpacity
struct UTextBlock_SetOpacity_Params
{
public:
	float                                        InOpacity;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.TextBlock.SetMinDesiredWidth
struct UTextBlock_SetMinDesiredWidth_Params
{
public:
	float                                        InMinDesiredWidth;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.TextBlock.SetJustification
struct UTextBlock_SetJustification_Params
{
public:
	enum class ETextJustify                      InJustification;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function UMG.TextBlock.SetFont
struct UTextBlock_SetFont_Params
{
public:
	struct FSlateFontInfo                        InFontInfo;                                        // 0x0(0x68)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UMG.TextBlock.SetColorAndOpacity
struct UTextBlock_SetColorAndOpacity_Params
{
public:
	struct FSlateColor                           InColorAndOpacity;                                 // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.TextBlock.GetText
struct UTextBlock_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.TextBlock.GetDynamicOutlineMaterial
struct UTextBlock_GetDynamicOutlineMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.TextBlock.GetDynamicFontMaterial
struct UTextBlock_GetDynamicFontMaterial_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.Throbber.SetNumberOfPieces
struct UThrobber_SetNumberOfPieces_Params
{
public:
	int32                                        InNumberOfPieces;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Throbber.SetAnimateVertically
struct UThrobber_SetAnimateVertically_Params
{
public:
	bool                                         bInAnimateVertically;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Throbber.SetAnimateOpacity
struct UThrobber_SetAnimateOpacity_Params
{
public:
	bool                                         bInAnimateOpacity;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.Throbber.SetAnimateHorizontally
struct UThrobber_SetAnimateHorizontally_Params
{
public:
	bool                                         bInAnimateHorizontally;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetAnimation.GetStartTime
struct UWidgetAnimation_GetStartTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetAnimation.GetEndTime
struct UWidgetAnimation_GetEndTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UWidgetBlueprintLibrary_Unhandled_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               FocusWidget;                                       // 0xB8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInAllUsers;                                       // 0xC0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           ReturnValue;                                       // 0xC8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector2D                             NewMousePosition;                                  // 0xB8(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
{
public:
	class APlayerController*                     Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               InWidgetToFocus;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMouseLockMode                    InMouseLockMode;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params
{
public:
	class APlayerController*                     Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               InWidgetToFocus;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMouseToViewport;                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
public:
	class APlayerController*                     Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
{
public:
	class APlayerController*                     Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               InWidgetToFocus;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMouseLockMode                    InMouseLockMode;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCursorDuringCapture;                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
{
public:
	class APlayerController*                     Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               InWidgetToFocus;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMouseToViewport;                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCursorDuringCapture;                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0x90(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x90(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bInAllJoysticks;                                   // 0xB8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct UWidgetBlueprintLibrary_NoResourceBrush_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
public:
	class USlateBrushAsset*                      BrushAsset;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ReturnValue;                                       // 0x8(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.LockMouse
struct UWidgetBlueprintLibrary_LockMouse_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               CapturingWidget;                                   // 0xB8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct UWidgetBlueprintLibrary_IsDragDropping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG.WidgetBlueprintLibrary.Handled
struct UWidgetBlueprintLibrary_Handled_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
struct UWidgetBlueprintLibrary_GetSafeZonePadding_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SafePadding;                                       // 0x8(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SafePaddingScale;                                  // 0x10(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SpillOverPadding;                                  // 0x18(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
public:
	struct FAnalogInputEvent                     Event;                                             // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FKeyEvent                             ReturnValue;                                       // 0x48(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
public:
	struct FPointerEvent                         Event;                                             // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                           ReturnValue;                                       // 0x78(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
public:
	struct FNavigationEvent                      Event;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                           ReturnValue;                                       // 0x28(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
public:
	struct FKeyEvent                             Event;                                             // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                           ReturnValue;                                       // 0x40(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params
{
public:
	struct FControllerEvent                      Event;                                             // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                           ReturnValue;                                       // 0x40(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
public:
	struct FCharacterEvent                       Event;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                           ReturnValue;                                       // 0x28(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
{
public:
	class UDragDropOperation*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct UWidgetBlueprintLibrary_GetBrushResource_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UInterface>                Interface;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUserWidget*>                   FoundWidgets;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         TopLevelOnly;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUserWidget*>                   FoundWidgets;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TopLevelOnly;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct UWidgetBlueprintLibrary_EndDragDrop_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xB8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x30(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x48(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                 Font;                                              // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FontTypeFace;                                      // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x68(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawText
struct UWidgetBlueprintLibrary_DrawText_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                InString;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x40(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x48(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawLines
struct UWidgetBlueprintLibrary_DrawLines_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     Points;                                            // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x40(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAntiAlias;                                        // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawLine
struct UWidgetBlueprintLibrary_DrawLine_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             PositionA;                                         // 0x30(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PositionB;                                         // 0x38(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x40(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAntiAlias;                                        // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DrawBox
struct UWidgetBlueprintLibrary_DrawBox_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x30(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x38(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      Brush;                                             // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x48(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
struct UWidgetBlueprintLibrary_DismissAllMenus_Params
{
public:
};

// 0x150 (0x150 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               WidgetDetectingDrag;                               // 0x78(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  DragKey;                                           // 0x80(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x98(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function UMG.WidgetBlueprintLibrary.DetectDrag
struct UWidgetBlueprintLibrary_DetectDrag_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               WidgetDetectingDrag;                               // 0xB8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  DragKey;                                           // 0xC0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
{
public:
	TSubclassOf<class UDragDropOperation>        OperationClass;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDragDropOperation*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetBlueprintLibrary.Create
struct UWidgetBlueprintLibrary_Create_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               WidgetType;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct UWidgetBlueprintLibrary_ClearUserFocus_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bInAllUsers;                                       // 0xB8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct UWidgetBlueprintLibrary_CaptureMouse_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               CapturingWidget;                                   // 0xB8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct UWidgetBlueprintLibrary_CaptureJoystick_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               CapturingWidget;                                   // 0xB8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInAllJoysticks;                                   // 0xC0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           ReturnValue;                                       // 0xC8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
struct UWidgetBlueprintLibrary_CancelDragDrop_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.SetWidget
struct UWidgetComponent_SetWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.SetOwnerPlayer
struct UWidgetComponent_SetOwnerPlayer_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.SetDrawSize
struct UWidgetComponent_SetDrawSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetComponent.SetBackgroundColor
struct UWidgetComponent_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          NewBackgroundColor;                                // 0x0(0x10)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UMG.WidgetComponent.RequestRedraw
struct UWidgetComponent_RequestRedraw_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetUserWidgetObject
struct UWidgetComponent_GetUserWidgetObject_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetRenderTarget
struct UWidgetComponent_GetRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetOwnerPlayer
struct UWidgetComponent_GetOwnerPlayer_Params
{
public:
	class ULocalPlayer*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetMaterialInstance
struct UWidgetComponent_GetMaterialInstance_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetComponent.GetDrawSize
struct UWidgetComponent_GetDrawSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function UMG.WidgetInteractionComponent.SetCustomHitResult
struct UWidgetInteractionComponent_SetCustomHitResult_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetInteractionComponent.SendKeyChar
struct UWidgetInteractionComponent_SendKeyChar_Params
{
public:
	class FString                                Characters;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRepeat;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function UMG.WidgetInteractionComponent.ScrollWheel
struct UWidgetInteractionComponent_ScrollWheel_Params
{
public:
	float                                        ScrollDelta;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetInteractionComponent.ReleasePointerKey
struct UWidgetInteractionComponent_ReleasePointerKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetInteractionComponent.ReleaseKey
struct UWidgetInteractionComponent_ReleaseKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetInteractionComponent.PressPointerKey
struct UWidgetInteractionComponent_PressPointerKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetInteractionComponent.PressKey
struct UWidgetInteractionComponent_PressKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRepeat;                                           // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECE[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
struct UWidgetInteractionComponent_PressAndReleaseKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
struct UWidgetInteractionComponent_IsOverInteractableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
struct UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
struct UWidgetInteractionComponent_IsOverFocusableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function UMG.WidgetInteractionComponent.GetLastHitResult
struct UWidgetInteractionComponent_GetLastHitResult_Params
{
public:
	struct FHitResult                            ReturnValue;                                       // 0x0(0x88)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
struct UWidgetInteractionComponent_GetHoveredWidgetComponent_Params
{
public:
	class UWidgetComponent*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetInteractionComponent.Get2DHitLocation
struct UWidgetInteractionComponent_Get2DHitLocation_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBoxSlot*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUniformGridSlot*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlaySlot*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBoxSlot*                    ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridSlot*                             ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanelSlot*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBorderSlot*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x14(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UWidgetLayoutLibrary_GetViewportSize_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UWidgetLayoutLibrary_GetViewportScale_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
public:
	class APlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationX;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationY;                                         // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
