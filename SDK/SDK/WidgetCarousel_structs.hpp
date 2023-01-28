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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x888 (0x890 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HighlightBrush;                                    // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          LeftButtonStyle;                                   // 0x98(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CenterButtonStyle;                                 // 0x340(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RightButtonStyle;                                  // 0x5E8(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x3C8 (0x3D0 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          InnerButtonStyle;                                  // 0x8(0x2A8)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonLeftImage;                         // 0x2B0(0x90)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonRightImage;                        // 0x340(0x90)(NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
