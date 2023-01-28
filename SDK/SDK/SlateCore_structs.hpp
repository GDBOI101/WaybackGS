#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESlateBrushImageType : uint8
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	ESlateBrushImageType_MAX       = 3,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified             = 0,
	UseColor_Specified_Link        = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_MAX                   = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	ESlateBrushDrawType_MAX        = 4,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class EFontHinting : uint8
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class EFontFallback : uint8
{
	FF_NoFallback                  = 0,
	FF_LocalizedFallback           = 1,
	FF_LastResortFallback          = 2,
	FF_Max                         = 3,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
};

enum class ETextCommit : uint8
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,
};

enum class EOrientation : uint8
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MAX              = 12,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2,
};

enum class EUINavigation : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                      = 0,
	PreciseTap                     = 1,
	EButtonTouchMethod_MAX         = 2,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class ECheckBoxState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};

enum class ETextShapingMethod : uint8
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class EFocusCause : uint8
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class EUINavigationRule : uint8
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	Invalid                        = 5,
	EUINavigationRule_MAX          = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Margin
struct FMargin
{
public:
	float                                        Left;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.SlateColor
struct FSlateColor
{
public:
	struct FLinearColor                          SpecifiedColor;                                    // 0x0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateColorStylingMode            ColorUseRule;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AF8[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush
{
public:
	uint8                                        Pad_1AF9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ImageSize;                                         // 0x8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Margin;                                            // 0x14(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Tint;                                              // 0x24(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TintColor;                                         // 0x38(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESlateBrushTileType               Tiling;                                            // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushMirrorType             Mirroring;                                         // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushImageType              ImageType;                                         // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ResourceObject;                                    // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ResourceName;                                      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDynamicallyLoaded;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasUObject;                                       // 0x79(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AFD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox2D                                UVRegion;                                          // 0x7C(0x14)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct SlateCore.Geometry
struct FGeometry
{
public:
	uint8                                        Pad_1AFE[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.InputEvent
struct FInputEvent
{
public:
	uint8                                        Pad_1AFF[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x78 - 0x20)
// ScriptStruct SlateCore.PointerEvent
struct FPointerEvent : public FInputEvent
{
public:
	uint8                                        Pad_1B00[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings
{
public:
	int32                                        OutlineSize;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               OutlineMaterial;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutlineColor;                                      // 0x10(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSeparateFillAlpha;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B02[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               FontMaterial;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x10(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B03[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TypefaceFontName;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FontName;                                          // 0x58(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontHinting                      Hinting;                                           // 0x60(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B05[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle
{
public:
	uint8                                        Pad_1B06[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x710 (0x718 - 0x8)
// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           SelectorFocusedBrush;                              // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveHoveredBrush;                                // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBrush;                                       // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveHoveredBrush;                              // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveBrush;                                     // 0x248(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundHoveredBrush;                     // 0x2D8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundBrush;                            // 0x368(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundHoveredBrush;                      // 0x3F8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundBrush;                             // 0x488(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           TextColor;                                         // 0x518(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedTextColor;                                 // 0x540(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Above;                               // 0x568(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Onto;                                // 0x5F8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Below;                               // 0x688(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.SlateSound
struct FSlateSound
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B07[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2A0 (0x2A8 - 0x8)
// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Normal;                                            // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Hovered;                                           // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Pressed;                                           // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               NormalPadding;                                     // 0x248(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PressedPadding;                                    // 0x258(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x268(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x280(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  PressedSound;                                      // 0x298(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HoveredSound;                                      // 0x2A0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3D8 (0x3E0 - 0x8)
// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x8(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0x2B0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuBorderBrush;                                   // 0x340(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               MenuBorderPadding;                                 // 0x3D0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x420 (0x428 - 0x8)
// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : public FSlateWidgetStyle
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x8(0x3E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x3E8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           SelectionChangeSlateSound;                         // 0x400(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  PressedSound;                                      // 0x418(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SelectionChangeSound;                              // 0x420(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x240 (0x248 - 0x8)
// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x68)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x70(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageSelected;                           // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageComposing;                          // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CaretImage;                                        // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x510 (0x518 - 0x8)
// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HorizontalBackgroundImage;                         // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBackgroundImage;                           // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalTopSlotImage;                              // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalTopSlotImage;                            // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBottomSlotImage;                           // 0x248(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalBottomSlotImage;                         // 0x2D8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x368(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x3F8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DraggedThumbImage;                                 // 0x488(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x868 (0x870 - 0x8)
// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundImageNormal;                             // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageHovered;                            // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageFocused;                            // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageReadOnly;                           // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x248(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x258(0x68)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x2C0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0x2E8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ReadOnlyForegroundColor;                           // 0x310(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               HScrollBarPadding;                                 // 0x338(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               VScrollBarPadding;                                 // 0x348(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x358(0x518)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x200 (0x208 - 0x8)
// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x68)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x70(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x98(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0xA0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedBackgroundColor;                           // 0xB0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighlightColor;                                    // 0xD8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HighlightShape;                                    // 0xE8(0x90)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UnderlineBrush;                                    // 0x178(0x90)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x308 (0x310 - 0x8)
// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundBrush;                                   // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBackgroundBrush;                            // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveFillBrush;                                   // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveFillBrush;                                 // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ArrowsImage;                                       // 0x248(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x2D8(0x28)(NativeAccessSpecifierPublic)
	struct FMargin                               TextPadding;                                       // 0x300(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct SlateCore.KeyEvent
struct FKeyEvent : public FInputEvent
{
public:
	uint8                                        Pad_1B08[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct SlateCore.AnalogInputEvent
struct FAnalogInputEvent : public FKeyEvent
{
public:
	uint8                                        Pad_1B09[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x40 - 0x20)
// ScriptStruct SlateCore.ControllerEvent
struct FControllerEvent : public FInputEvent
{
public:
	uint8                                        Pad_1B0A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.FocusEvent
struct FFocusEvent
{
public:
	uint8                                        Pad_1B0B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.CharacterEvent
struct FCharacterEvent : public FInputEvent
{
public:
	uint8                                        Pad_1B0C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x50 - 0x20)
// ScriptStruct SlateCore.MotionEvent
struct FMotionEvent : public FInputEvent
{
public:
	uint8                                        Pad_1B0D[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontData
struct FFontData
{
public:
	class FString                                FontFilename;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontHinting                      Hinting;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontLoadingPolicy                LoadingPolicy;                                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B0E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               FontFaceAsset;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontData                             Font;                                              // 0x8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Typeface
struct FTypeface
{
public:
	TArray<struct FTypefaceEntry>                Fonts;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont
{
public:
	struct FTypeface                             Typeface;                                          // 0x0(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FInt32Range>                   CharacterRanges;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ScalingFactor;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont
{
public:
	struct FTypeface                             DefaultTypeface;                                   // 0x0(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FCompositeSubFont>             SubTypefaces;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B10[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10C0 (0x10C8 - 0x8)
// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          MinimizeButtonStyle;                               // 0x8(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          MaximizeButtonStyle;                               // 0x2B0(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RestoreButtonStyle;                                // 0x558(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x800(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TitleTextStyle;                                    // 0xAA8(0x208)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveTitleBrush;                                  // 0xCB0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveTitleBrush;                                // 0xD40(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FlashTitleBrush;                                   // 0xDD0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OutlineBrush;                                      // 0xE60(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           OutlineColor;                                      // 0xEF0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBrush;                                       // 0xF18(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0xFA8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChildBackgroundBrush;                              // 0x1038(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           TopShadowBrush;                                    // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x240 (0x248 - 0x8)
// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           TopShadowBrush;                                    // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LeftShadowBrush;                                   // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           RightShadowBrush;                                  // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x6D8 (0x6E0 - 0x8)
// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x8(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x2B0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBrush;                                       // 0x340(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorOverlayBrush;                                 // 0x3D0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ForegroundBrush;                                   // 0x460(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x4F0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ContentAreaBrush;                                  // 0x580(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabWellBrush;                                      // 0x610(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0x6A0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OverlapWidth;                                      // 0x6B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           FlashColor;                                        // 0x6B8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x510 (0x518 - 0x8)
// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           SortPrimaryAscendingImage;                         // 0x8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortPrimaryDescendingImage;                        // 0x98(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryAscendingImage;                       // 0x128(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryDescendingImage;                      // 0x1B8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x248(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x2D8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownImage;                                 // 0x368(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownNormalBorderBrush;                     // 0x3F8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownHoveredBorderBrush;                    // 0x488(0x90)(Edit, NativeAccessSpecifierPublic)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HandleNormalBrush;                                 // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HandleHighlightBrush;                              // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC10 (0xC18 - 0x8)
// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : public FSlateWidgetStyle
{
public:
	struct FTableColumnHeaderStyle               ColumnStyle;                                       // 0x8(0x518)(Edit, NativeAccessSpecifierPublic)
	struct FTableColumnHeaderStyle               LastColumnStyle;                                   // 0x520(0x518)(Edit, NativeAccessSpecifierPublic)
	struct FSplitterStyle                        ColumnSplitterStyle;                               // 0xA38(0x128)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0xB60(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0xBF0(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Image;                                             // 0x8(0x90)(Edit, NativeAccessSpecifierPublic)
	int16                                        Baseline;                                          // 0x98(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B12[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x248 (0x250 - 0x8)
// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           NormalBarImage;                                    // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledThumbImage;                                // 0x1B8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BarThickness;                                      // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B13[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x520 (0x528 - 0x8)
// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : public FSlateWidgetStyle
{
public:
	struct FSliderStyle                          SliderStyle;                                       // 0x8(0x250)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HighVolumeImage;                                   // 0x258(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MidVolumeImage;                                    // 0x2E8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LowVolumeImage;                                    // 0x378(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NoVolumeImage;                                     // 0x408(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MutedImage;                                        // 0x498(0x90)(Edit, NativeAccessSpecifierPublic)
};

// 0xB30 (0xB38 - 0x8)
// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : public FSlateWidgetStyle
{
public:
	struct FEditableTextBoxStyle                 TextBoxStyle;                                      // 0x8(0x870)(Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        ActiveFontInfo;                                    // 0x878(0x68)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UpArrowImage;                                      // 0x8E0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0x970(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlassImage;                                        // 0xA00(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ClearImage;                                        // 0xA90(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ImagePadding;                                      // 0xB20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignButtons;                                 // 0xB30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B14[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x130 - 0x8)
// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           CollapsedImage;                                    // 0x8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ExpandedImage;                                     // 0x98(0x90)(Edit, NativeAccessSpecifierPublic)
	float                                        RolloutAnimationSeconds;                           // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B15[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x1B8 - 0x8)
// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundImage;                                   // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FillImage;                                         // 0x98(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarqueeImage;                                      // 0x128(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA78 (0xA80 - 0x8)
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x8(0x870)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x878(0x208)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x4C0 (0x4C8 - 0x8)
// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          UnderlineStyle;                                    // 0x8(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x2B0(0x208)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x4B8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5D8 (0x5E0 - 0x8)
// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : public FSlateWidgetStyle
{
public:
	enum class ESlateCheckBoxType                CheckBoxType;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UncheckedImage;                                    // 0x10(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedHoveredImage;                             // 0xA0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedPressedImage;                             // 0x130(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedImage;                                      // 0x1C0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedHoveredImage;                               // 0x250(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedPressedImage;                               // 0x2E0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedImage;                                 // 0x370(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedHoveredImage;                          // 0x400(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedPressedImage;                          // 0x490(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x520(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x530(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderBackgroundColor;                             // 0x558(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           CheckedSlateSound;                                 // 0x580(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           UncheckedSlateSound;                               // 0x598(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x5B0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  CheckedSound;                                      // 0x5C8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UncheckedSound;                                    // 0x5D0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HoveredSound;                                      // 0x5D8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.NavigationEvent
struct FNavigationEvent : public FInputEvent
{
public:
	uint8                                        Pad_1B17[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
