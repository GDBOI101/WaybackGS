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

// 0x8 (0x8 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Center on Widget
struct UOptionsMenuSlider_Light_C_Center_on_Widget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Update Slider
struct UOptionsMenuSlider_Light_C_Update_Slider_Params
{
public:
	class FText                                  Slider_Text;                                       // 0x0(0x18)(Parm)
	float                                        Slider_Value;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Hover_Text;                                        // 0x20(0x18)(Parm)
	class UCommonTextBlock*                      Tooltip_Text_Block;                                // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x48(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Construct
struct UOptionsMenuSlider_Light_C_Construct_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseLeave
struct UOptionsMenuSlider_Light_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseEnter
struct UOptionsMenuSlider_Light_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.ExecuteUbergraph_OptionsMenuSlider_Light
struct UOptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent2;                          // 0x18(0x78)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x90(0x34)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xC8(0x78)(ConstParm)
	float                                        K2Node_ComponentBoundEvent_Value2;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x148(0x18)()
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x160(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor2;                    // 0x170(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue2;                    // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue3;                    // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.SliderChanged__DelegateSignature
struct UOptionsMenuSlider_Light_C_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
