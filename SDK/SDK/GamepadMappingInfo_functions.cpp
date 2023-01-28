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


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           ()
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        Temp_text_Variable12                                             ()
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           ()
// class FText                        Temp_text_Variable13                                             ()
// class FText                        Temp_text_Variable14                                             ()
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           ()
// class FText                        Temp_text_Variable15                                             ()
// class FText                        Temp_text_Variable16                                             ()
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           ()
// class FText                        Temp_text_Variable17                                             ()
// class FText                        Temp_text_Variable18                                             ()
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           ()
// class FText                        Temp_text_Variable19                                             ()
// class FText                        Temp_text_Variable20                                             ()
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          ()
// class FText                        Temp_text_Variable21                                             ()
// class FText                        Temp_text_Variable22                                             ()
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          ()
// class FText                        Temp_text_Variable23                                             ()
// class FText                        Temp_text_Variable24                                             ()
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          ()
// class FText                        Temp_text_Variable25                                             ()
// class FText                        Temp_text_Variable26                                             ()
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          ()
// class FText                        Temp_text_Variable27                                             ()
// class FText                        Temp_text_Variable28                                             ()
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          ()
// class FText                        Temp_text_Variable29                                             ()
// class FText                        Temp_text_Variable30                                             ()
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          ()
// class FText                        Temp_text_Variable31                                             ()
// class FText                        Temp_text_Variable32                                             ()
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          ()
// class FText                        Temp_text_Variable33                                             ()
// class FText                        Temp_text_Variable34                                             ()
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          ()
// class FText                        Temp_text_Variable35                                             ()
// class FText                        Temp_text_Variable36                                             ()
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          ()
// class FText                        Temp_text_Variable37                                             ()
// class FText                        Temp_text_Variable38                                             ()
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          ()
// class FText                        Temp_text_Variable39                                             ()
// class FText                        Temp_text_Variable40                                             ()
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          ()
// class FText                        Temp_text_Variable41                                             ()
// class FText                        Temp_text_Variable42                                             ()
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select21_Default                                          ()
// class FText                        Temp_text_Variable43                                             ()
// class FText                        Temp_text_Variable44                                             ()
// int32                              Temp_int_Variable23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select22_Default                                          ()
// class FText                        Temp_text_Variable45                                             ()
// class FText                        Temp_text_Variable46                                             ()
// int32                              Temp_int_Variable24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select23_Default                                          ()
// class FText                        Temp_text_Variable47                                             ()
// class FText                        Temp_text_Variable48                                             ()
// int32                              Temp_int_Variable25                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select24_Default                                          ()
// class FText                        Temp_text_Variable49                                             ()
// class FText                        Temp_text_Variable50                                             ()
// int32                              Temp_int_Variable26                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select25_Default                                          ()
// class FText                        Temp_text_Variable51                                             ()
// class FText                        Temp_text_Variable52                                             ()
// int32                              Temp_int_Variable27                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select26_Default                                          ()
// class FText                        Temp_text_Variable53                                             ()
// class FText                        Temp_text_Variable54                                             ()
// int32                              Temp_int_Variable28                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select27_Default                                          ()
// class FText                        Temp_text_Variable55                                             ()
// class FText                        Temp_text_Variable56                                             ()
// int32                              Temp_int_Variable29                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select28_Default                                          ()
// class FText                        Temp_text_Variable57                                             ()
// class FText                        Temp_text_Variable58                                             ()
// int32                              Temp_int_Variable30                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select29_Default                                          ()
// class FText                        Temp_text_Variable59                                             ()
// class FText                        Temp_text_Variable60                                             ()
// int32                              Temp_int_Variable31                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select30_Default                                          ()
// class FText                        Temp_text_Variable61                                             ()
// class FText                        Temp_text_Variable62                                             ()
// int32                              Temp_int_Variable32                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select31_Default                                          ()
// class FText                        Temp_text_Variable63                                             ()
// class FText                        Temp_text_Variable64                                             ()
// int32                              Temp_int_Variable33                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select32_Default                                          ()
// class FText                        Temp_text_Variable65                                             ()
// class FText                        Temp_text_Variable66                                             ()
// int32                              Temp_int_Variable34                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select33_Default                                          ()
// class FText                        Temp_text_Variable67                                             ()
// class FText                        Temp_text_Variable68                                             ()
// int32                              Temp_int_Variable35                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select34_Default                                          ()
// class FText                        Temp_text_Variable69                                             ()
// class FText                        Temp_text_Variable70                                             ()
// int32                              Temp_int_Variable36                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select35_Default                                          ()
// class FText                        Temp_text_Variable71                                             ()
// class FText                        Temp_text_Variable72                                             ()
// int32                              Temp_int_Variable37                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select36_Default                                          ()
// class FText                        Temp_text_Variable73                                             ()
// class FText                        Temp_text_Variable74                                             ()
// int32                              Temp_int_Variable38                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select37_Default                                          ()
// class FText                        Temp_text_Variable75                                             ()
// class FText                        Temp_text_Variable76                                             ()
// int32                              Temp_int_Variable39                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select38_Default                                          ()
// class FText                        Temp_text_Variable77                                             ()
// class FText                        Temp_text_Variable78                                             ()
// int32                              Temp_int_Variable40                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select39_Default                                          ()
// class FText                        Temp_text_Variable79                                             ()
// class FText                        Temp_text_Variable80                                             ()
// int32                              Temp_int_Variable41                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select40_Default                                          ()
// class FText                        Temp_text_Variable81                                             ()
// class FText                        Temp_text_Variable82                                             ()
// int32                              Temp_int_Variable42                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select41_Default                                          ()
// class FText                        Temp_text_Variable83                                             ()
// class FText                        Temp_text_Variable84                                             ()
// int32                              Temp_int_Variable43                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select42_Default                                          ()
// class FText                        Temp_text_Variable85                                             ()
// class FText                        Temp_text_Variable86                                             ()
// int32                              Temp_int_Variable44                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select43_Default                                          ()
// class FText                        Temp_text_Variable87                                             ()
// class FText                        Temp_text_Variable88                                             ()
// int32                              Temp_int_Variable45                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select44_Default                                          ()
// class FText                        Temp_text_Variable89                                             ()
// class FText                        Temp_text_Variable90                                             ()
// int32                              Temp_int_Variable46                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select45_Default                                          ()
// class FText                        Temp_text_Variable91                                             ()
// class FText                        Temp_text_Variable92                                             ()
// int32                              Temp_int_Variable47                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select46_Default                                          ()
// class FText                        Temp_text_Variable93                                             ()
// class FText                        Temp_text_Variable94                                             ()
// int32                              Temp_int_Variable48                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select47_Default                                          ()
// class FText                        Temp_text_Variable95                                             ()
// class FText                        Temp_text_Variable96                                             ()
// int32                              Temp_int_Variable49                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select48_Default                                          ()
// class FText                        Temp_text_Variable97                                             ()
// class FText                        Temp_text_Variable98                                             ()
// class FText                        K2Node_Select49_Default                                          ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select50_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            ()
// class FText                        CallFunc_GetText_ReturnValue2                                    ()
// class FText                        CallFunc_GetText_ReturnValue3                                    ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select51_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select52_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue4                                    ()
// class FText                        CallFunc_GetText_ReturnValue5                                    ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select53_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select54_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable99                                             ()
// class FText                        Temp_text_Variable100                                            ()
// int32                              Temp_int_Variable50                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select55_Default                                          ()

void UGamepadMappingInfo_C::HandleConfigChanged(int32 Mode, int32 Config, bool Temp_bool_Variable, bool K2Node_SwitchInteger_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, int32 Temp_int_Variable2, class FText K2Node_Select_Default, class FText Temp_text_Variable3, class FText Temp_text_Variable4, bool Temp_bool_Variable2, class FText K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable5, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, int32 Temp_int_Variable3, class FText Temp_text_Variable5, class FText Temp_text_Variable6, int32 Temp_int_Variable4, class FText K2Node_Select3_Default, class FText Temp_text_Variable7, class FText Temp_text_Variable8, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable9, class FText Temp_text_Variable10, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable11, class FText Temp_text_Variable12, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable13, class FText Temp_text_Variable14, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable15, class FText Temp_text_Variable16, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable17, class FText Temp_text_Variable18, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable19, class FText Temp_text_Variable20, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable21, class FText Temp_text_Variable22, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable23, class FText Temp_text_Variable24, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable25, class FText Temp_text_Variable26, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable27, class FText Temp_text_Variable28, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable29, class FText Temp_text_Variable30, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable31, class FText Temp_text_Variable32, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable33, class FText Temp_text_Variable34, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable35, class FText Temp_text_Variable36, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable37, class FText Temp_text_Variable38, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable39, class FText Temp_text_Variable40, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable41, class FText Temp_text_Variable42, int32 Temp_int_Variable22, class FText K2Node_Select21_Default, class FText Temp_text_Variable43, class FText Temp_text_Variable44, int32 Temp_int_Variable23, class FText K2Node_Select22_Default, class FText Temp_text_Variable45, class FText Temp_text_Variable46, int32 Temp_int_Variable24, class FText K2Node_Select23_Default, class FText Temp_text_Variable47, class FText Temp_text_Variable48, int32 Temp_int_Variable25, class FText K2Node_Select24_Default, class FText Temp_text_Variable49, class FText Temp_text_Variable50, int32 Temp_int_Variable26, class FText K2Node_Select25_Default, class FText Temp_text_Variable51, class FText Temp_text_Variable52, int32 Temp_int_Variable27, class FText K2Node_Select26_Default, class FText Temp_text_Variable53, class FText Temp_text_Variable54, int32 Temp_int_Variable28, class FText K2Node_Select27_Default, class FText Temp_text_Variable55, class FText Temp_text_Variable56, int32 Temp_int_Variable29, class FText K2Node_Select28_Default, class FText Temp_text_Variable57, class FText Temp_text_Variable58, int32 Temp_int_Variable30, class FText K2Node_Select29_Default, class FText Temp_text_Variable59, class FText Temp_text_Variable60, int32 Temp_int_Variable31, class FText K2Node_Select30_Default, class FText Temp_text_Variable61, class FText Temp_text_Variable62, int32 Temp_int_Variable32, class FText K2Node_Select31_Default, class FText Temp_text_Variable63, class FText Temp_text_Variable64, int32 Temp_int_Variable33, class FText K2Node_Select32_Default, class FText Temp_text_Variable65, class FText Temp_text_Variable66, int32 Temp_int_Variable34, class FText K2Node_Select33_Default, class FText Temp_text_Variable67, class FText Temp_text_Variable68, int32 Temp_int_Variable35, class FText K2Node_Select34_Default, class FText Temp_text_Variable69, class FText Temp_text_Variable70, int32 Temp_int_Variable36, class FText K2Node_Select35_Default, class FText Temp_text_Variable71, class FText Temp_text_Variable72, int32 Temp_int_Variable37, class FText K2Node_Select36_Default, class FText Temp_text_Variable73, class FText Temp_text_Variable74, int32 Temp_int_Variable38, class FText K2Node_Select37_Default, class FText Temp_text_Variable75, class FText Temp_text_Variable76, int32 Temp_int_Variable39, class FText K2Node_Select38_Default, class FText Temp_text_Variable77, class FText Temp_text_Variable78, int32 Temp_int_Variable40, class FText K2Node_Select39_Default, class FText Temp_text_Variable79, class FText Temp_text_Variable80, int32 Temp_int_Variable41, class FText K2Node_Select40_Default, class FText Temp_text_Variable81, class FText Temp_text_Variable82, int32 Temp_int_Variable42, class FText K2Node_Select41_Default, class FText Temp_text_Variable83, class FText Temp_text_Variable84, int32 Temp_int_Variable43, class FText K2Node_Select42_Default, class FText Temp_text_Variable85, class FText Temp_text_Variable86, int32 Temp_int_Variable44, class FText K2Node_Select43_Default, class FText Temp_text_Variable87, class FText Temp_text_Variable88, int32 Temp_int_Variable45, class FText K2Node_Select44_Default, class FText Temp_text_Variable89, class FText Temp_text_Variable90, int32 Temp_int_Variable46, class FText K2Node_Select45_Default, class FText Temp_text_Variable91, class FText Temp_text_Variable92, int32 Temp_int_Variable47, class FText K2Node_Select46_Default, class FText Temp_text_Variable93, class FText Temp_text_Variable94, int32 Temp_int_Variable48, class FText K2Node_Select47_Default, class FText Temp_text_Variable95, class FText Temp_text_Variable96, int32 Temp_int_Variable49, class FText K2Node_Select48_Default, class FText Temp_text_Variable97, class FText Temp_text_Variable98, class FText K2Node_Select49_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select50_Default, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_GetText_ReturnValue2, class FText CallFunc_GetText_ReturnValue3, bool CallFunc_EqualEqual_TextText_ReturnValue2, bool CallFunc_EqualEqual_TextText_ReturnValue3, enum class ESlateVisibility K2Node_Select51_Default, enum class ESlateVisibility K2Node_Select52_Default, class FText CallFunc_GetText_ReturnValue4, class FText CallFunc_GetText_ReturnValue5, bool CallFunc_EqualEqual_TextText_ReturnValue4, bool CallFunc_EqualEqual_TextText_ReturnValue5, enum class ESlateVisibility K2Node_Select53_Default, enum class ESlateVisibility K2Node_Select54_Default, class FText Temp_text_Variable99, class FText Temp_text_Variable100, int32 Temp_int_Variable50, class FText K2Node_Select55_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "HandleConfigChanged");

	Params::UGamepadMappingInfo_C_HandleConfigChanged_Params Parms;
	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_int_Variable23 = Temp_int_Variable23;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_int_Variable24 = Temp_int_Variable24;
	Parms.K2Node_Select23_Default = K2Node_Select23_Default;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_int_Variable25 = Temp_int_Variable25;
	Parms.K2Node_Select24_Default = K2Node_Select24_Default;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_int_Variable26 = Temp_int_Variable26;
	Parms.K2Node_Select25_Default = K2Node_Select25_Default;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_int_Variable27 = Temp_int_Variable27;
	Parms.K2Node_Select26_Default = K2Node_Select26_Default;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_int_Variable28 = Temp_int_Variable28;
	Parms.K2Node_Select27_Default = K2Node_Select27_Default;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_int_Variable29 = Temp_int_Variable29;
	Parms.K2Node_Select28_Default = K2Node_Select28_Default;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_int_Variable30 = Temp_int_Variable30;
	Parms.K2Node_Select29_Default = K2Node_Select29_Default;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_int_Variable31 = Temp_int_Variable31;
	Parms.K2Node_Select30_Default = K2Node_Select30_Default;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_int_Variable32 = Temp_int_Variable32;
	Parms.K2Node_Select31_Default = K2Node_Select31_Default;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_int_Variable33 = Temp_int_Variable33;
	Parms.K2Node_Select32_Default = K2Node_Select32_Default;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.Temp_text_Variable66 = Temp_text_Variable66;
	Parms.Temp_int_Variable34 = Temp_int_Variable34;
	Parms.K2Node_Select33_Default = K2Node_Select33_Default;
	Parms.Temp_text_Variable67 = Temp_text_Variable67;
	Parms.Temp_text_Variable68 = Temp_text_Variable68;
	Parms.Temp_int_Variable35 = Temp_int_Variable35;
	Parms.K2Node_Select34_Default = K2Node_Select34_Default;
	Parms.Temp_text_Variable69 = Temp_text_Variable69;
	Parms.Temp_text_Variable70 = Temp_text_Variable70;
	Parms.Temp_int_Variable36 = Temp_int_Variable36;
	Parms.K2Node_Select35_Default = K2Node_Select35_Default;
	Parms.Temp_text_Variable71 = Temp_text_Variable71;
	Parms.Temp_text_Variable72 = Temp_text_Variable72;
	Parms.Temp_int_Variable37 = Temp_int_Variable37;
	Parms.K2Node_Select36_Default = K2Node_Select36_Default;
	Parms.Temp_text_Variable73 = Temp_text_Variable73;
	Parms.Temp_text_Variable74 = Temp_text_Variable74;
	Parms.Temp_int_Variable38 = Temp_int_Variable38;
	Parms.K2Node_Select37_Default = K2Node_Select37_Default;
	Parms.Temp_text_Variable75 = Temp_text_Variable75;
	Parms.Temp_text_Variable76 = Temp_text_Variable76;
	Parms.Temp_int_Variable39 = Temp_int_Variable39;
	Parms.K2Node_Select38_Default = K2Node_Select38_Default;
	Parms.Temp_text_Variable77 = Temp_text_Variable77;
	Parms.Temp_text_Variable78 = Temp_text_Variable78;
	Parms.Temp_int_Variable40 = Temp_int_Variable40;
	Parms.K2Node_Select39_Default = K2Node_Select39_Default;
	Parms.Temp_text_Variable79 = Temp_text_Variable79;
	Parms.Temp_text_Variable80 = Temp_text_Variable80;
	Parms.Temp_int_Variable41 = Temp_int_Variable41;
	Parms.K2Node_Select40_Default = K2Node_Select40_Default;
	Parms.Temp_text_Variable81 = Temp_text_Variable81;
	Parms.Temp_text_Variable82 = Temp_text_Variable82;
	Parms.Temp_int_Variable42 = Temp_int_Variable42;
	Parms.K2Node_Select41_Default = K2Node_Select41_Default;
	Parms.Temp_text_Variable83 = Temp_text_Variable83;
	Parms.Temp_text_Variable84 = Temp_text_Variable84;
	Parms.Temp_int_Variable43 = Temp_int_Variable43;
	Parms.K2Node_Select42_Default = K2Node_Select42_Default;
	Parms.Temp_text_Variable85 = Temp_text_Variable85;
	Parms.Temp_text_Variable86 = Temp_text_Variable86;
	Parms.Temp_int_Variable44 = Temp_int_Variable44;
	Parms.K2Node_Select43_Default = K2Node_Select43_Default;
	Parms.Temp_text_Variable87 = Temp_text_Variable87;
	Parms.Temp_text_Variable88 = Temp_text_Variable88;
	Parms.Temp_int_Variable45 = Temp_int_Variable45;
	Parms.K2Node_Select44_Default = K2Node_Select44_Default;
	Parms.Temp_text_Variable89 = Temp_text_Variable89;
	Parms.Temp_text_Variable90 = Temp_text_Variable90;
	Parms.Temp_int_Variable46 = Temp_int_Variable46;
	Parms.K2Node_Select45_Default = K2Node_Select45_Default;
	Parms.Temp_text_Variable91 = Temp_text_Variable91;
	Parms.Temp_text_Variable92 = Temp_text_Variable92;
	Parms.Temp_int_Variable47 = Temp_int_Variable47;
	Parms.K2Node_Select46_Default = K2Node_Select46_Default;
	Parms.Temp_text_Variable93 = Temp_text_Variable93;
	Parms.Temp_text_Variable94 = Temp_text_Variable94;
	Parms.Temp_int_Variable48 = Temp_int_Variable48;
	Parms.K2Node_Select47_Default = K2Node_Select47_Default;
	Parms.Temp_text_Variable95 = Temp_text_Variable95;
	Parms.Temp_text_Variable96 = Temp_text_Variable96;
	Parms.Temp_int_Variable49 = Temp_int_Variable49;
	Parms.K2Node_Select48_Default = K2Node_Select48_Default;
	Parms.Temp_text_Variable97 = Temp_text_Variable97;
	Parms.Temp_text_Variable98 = Temp_text_Variable98;
	Parms.K2Node_Select49_Default = K2Node_Select49_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select50_Default = K2Node_Select50_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.CallFunc_GetText_ReturnValue2 = CallFunc_GetText_ReturnValue2;
	Parms.CallFunc_GetText_ReturnValue3 = CallFunc_GetText_ReturnValue3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue2 = CallFunc_EqualEqual_TextText_ReturnValue2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue3 = CallFunc_EqualEqual_TextText_ReturnValue3;
	Parms.K2Node_Select51_Default = K2Node_Select51_Default;
	Parms.K2Node_Select52_Default = K2Node_Select52_Default;
	Parms.CallFunc_GetText_ReturnValue4 = CallFunc_GetText_ReturnValue4;
	Parms.CallFunc_GetText_ReturnValue5 = CallFunc_GetText_ReturnValue5;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue4 = CallFunc_EqualEqual_TextText_ReturnValue4;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue5 = CallFunc_EqualEqual_TextText_ReturnValue5;
	Parms.K2Node_Select53_Default = K2Node_Select53_Default;
	Parms.K2Node_Select54_Default = K2Node_Select54_Default;
	Parms.Temp_text_Variable99 = Temp_text_Variable99;
	Parms.Temp_text_Variable100 = Temp_text_Variable100;
	Parms.Temp_int_Variable50 = Temp_int_Variable50;
	Parms.K2Node_Select55_Default = K2Node_Select55_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select3_Default                                           ()
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select4_Default                                           ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable13                                             ()
// class FText                        Temp_text_Variable14                                             ()
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select5_Default                                           ()
// class FText                        Temp_text_Variable15                                             ()
// class FText                        Temp_text_Variable16                                             ()
// class FText                        Temp_text_Variable17                                             ()
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select6_Default                                           ()
// class FText                        Temp_text_Variable18                                             ()
// class FText                        Temp_text_Variable19                                             ()
// class FText                        Temp_text_Variable20                                             ()
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select7_Default                                           ()
// class FText                        Temp_text_Variable21                                             ()
// class FText                        Temp_text_Variable22                                             ()
// class FText                        Temp_text_Variable23                                             ()
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select8_Default                                           ()
// class FText                        Temp_text_Variable24                                             ()
// class FText                        Temp_text_Variable25                                             ()
// class FText                        Temp_text_Variable26                                             ()
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select9_Default                                           ()
// class FText                        Temp_text_Variable27                                             ()
// class FText                        Temp_text_Variable28                                             ()
// class FText                        Temp_text_Variable29                                             ()
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select10_Default                                          ()
// class FText                        Temp_text_Variable30                                             ()
// class FText                        Temp_text_Variable31                                             ()
// class FText                        Temp_text_Variable32                                             ()
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select11_Default                                          ()
// class FText                        Temp_text_Variable33                                             ()
// class FText                        Temp_text_Variable34                                             ()
// class FText                        Temp_text_Variable35                                             ()
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12_Default                                          ()
// class FText                        Temp_text_Variable36                                             ()
// class FText                        Temp_text_Variable37                                             ()
// class FText                        Temp_text_Variable38                                             ()
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select13_Default                                          ()
// class FText                        Temp_text_Variable39                                             ()
// class FText                        Temp_text_Variable40                                             ()
// class FText                        Temp_text_Variable41                                             ()
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select14_Default                                          ()
// class FText                        Temp_text_Variable42                                             ()
// class FText                        Temp_text_Variable43                                             ()
// class FText                        Temp_text_Variable44                                             ()
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select15_Default                                          ()
// class FText                        Temp_text_Variable45                                             ()
// class FText                        Temp_text_Variable46                                             ()
// class FText                        Temp_text_Variable47                                             ()
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select16_Default                                          ()
// class FText                        Temp_text_Variable48                                             ()
// class FText                        Temp_text_Variable49                                             ()
// class FText                        Temp_text_Variable50                                             ()
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select17_Default                                          ()
// class FText                        Temp_text_Variable51                                             ()
// class FText                        Temp_text_Variable52                                             ()
// class FText                        Temp_text_Variable53                                             ()
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select18_Default                                          ()
// class FText                        Temp_text_Variable54                                             ()
// class FText                        Temp_text_Variable55                                             ()
// class FText                        Temp_text_Variable56                                             ()
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select19_Default                                          ()
// class FText                        Temp_text_Variable57                                             ()
// class FText                        Temp_text_Variable58                                             ()
// class FText                        Temp_text_Variable59                                             ()
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select20_Default                                          ()
// class FText                        Temp_text_Variable60                                             ()
// class FText                        Temp_text_Variable61                                             ()
// class FText                        Temp_text_Variable62                                             ()
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select21_Default                                          ()
// class FText                        Temp_text_Variable63                                             ()
// class FText                        Temp_text_Variable64                                             ()
// class FText                        Temp_text_Variable65                                             ()
// int32                              Temp_int_Variable23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select22_Default                                          ()
// class FText                        Temp_text_Variable66                                             ()
// class FText                        Temp_text_Variable67                                             ()
// class FText                        Temp_text_Variable68                                             ()
// int32                              Temp_int_Variable24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select23_Default                                          ()
// class FText                        Temp_text_Variable69                                             ()
// class FText                        Temp_text_Variable70                                             ()
// class FText                        Temp_text_Variable71                                             ()
// int32                              Temp_int_Variable25                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select24_Default                                          ()
// class FText                        Temp_text_Variable72                                             ()
// class FText                        Temp_text_Variable73                                             ()
// class FText                        Temp_text_Variable74                                             ()
// int32                              Temp_int_Variable26                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select25_Default                                          ()
// class FText                        Temp_text_Variable75                                             ()
// class FText                        Temp_text_Variable76                                             ()
// class FText                        Temp_text_Variable77                                             ()
// int32                              Temp_int_Variable27                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select26_Default                                          ()
// class FText                        Temp_text_Variable78                                             ()
// class FText                        Temp_text_Variable79                                             ()
// class FText                        Temp_text_Variable80                                             ()
// int32                              Temp_int_Variable28                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select27_Default                                          ()
// class FText                        Temp_text_Variable81                                             ()
// class FText                        Temp_text_Variable82                                             ()
// class FText                        Temp_text_Variable83                                             ()
// int32                              Temp_int_Variable29                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select28_Default                                          ()
// class FText                        Temp_text_Variable84                                             ()
// class FText                        Temp_text_Variable85                                             ()
// int32                              Temp_int_Variable30                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select29_Default                                          ()
// class FText                        Temp_text_Variable86                                             ()
// class FText                        Temp_text_Variable87                                             ()
// class FText                        Temp_text_Variable88                                             ()
// int32                              Temp_int_Variable31                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select30_Default                                          ()
// class FText                        Temp_text_Variable89                                             ()
// class FText                        Temp_text_Variable90                                             ()
// class FText                        Temp_text_Variable91                                             ()
// int32                              Temp_int_Variable32                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select31_Default                                          ()
// class FText                        Temp_text_Variable92                                             ()
// class FText                        Temp_text_Variable93                                             ()
// class FText                        Temp_text_Variable94                                             ()
// int32                              Temp_int_Variable33                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select32_Default                                          ()
// class FText                        Temp_text_Variable95                                             ()
// class FText                        Temp_text_Variable96                                             ()
// class FText                        Temp_text_Variable97                                             ()
// int32                              Temp_int_Variable34                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select33_Default                                          ()
// class FText                        Temp_text_Variable98                                             ()
// class FText                        Temp_text_Variable99                                             ()
// class FText                        Temp_text_Variable100                                            ()
// int32                              Temp_int_Variable35                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select34_Default                                          ()
// class FText                        Temp_text_Variable101                                            ()
// class FText                        Temp_text_Variable102                                            ()
// class FText                        Temp_text_Variable103                                            ()
// int32                              Temp_int_Variable36                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select35_Default                                          ()
// class FText                        Temp_text_Variable104                                            ()
// class FText                        Temp_text_Variable105                                            ()
// class FText                        Temp_text_Variable106                                            ()
// int32                              Temp_int_Variable37                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select36_Default                                          ()
// class FText                        Temp_text_Variable107                                            ()
// class FText                        Temp_text_Variable108                                            ()
// class FText                        Temp_text_Variable109                                            ()
// int32                              Temp_int_Variable38                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select37_Default                                          ()
// class FText                        Temp_text_Variable110                                            ()
// class FText                        Temp_text_Variable111                                            ()
// class FText                        Temp_text_Variable112                                            ()
// int32                              Temp_int_Variable39                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select38_Default                                          ()
// class FText                        Temp_text_Variable113                                            ()
// class FText                        Temp_text_Variable114                                            ()
// class FText                        Temp_text_Variable115                                            ()
// int32                              Temp_int_Variable40                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select39_Default                                          ()
// class FText                        Temp_text_Variable116                                            ()
// class FText                        Temp_text_Variable117                                            ()
// class FText                        Temp_text_Variable118                                            ()
// int32                              Temp_int_Variable41                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select40_Default                                          ()
// class FText                        Temp_text_Variable119                                            ()
// class FText                        Temp_text_Variable120                                            ()
// class FText                        Temp_text_Variable121                                            ()
// int32                              Temp_int_Variable42                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select41_Default                                          ()
// class FText                        Temp_text_Variable122                                            ()
// class FText                        Temp_text_Variable123                                            ()
// class FText                        Temp_text_Variable124                                            ()
// int32                              Temp_int_Variable43                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select42_Default                                          ()
// class FText                        Temp_text_Variable125                                            ()
// class FText                        Temp_text_Variable126                                            ()
// class FText                        Temp_text_Variable127                                            ()
// int32                              Temp_int_Variable44                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select43_Default                                          ()
// class FText                        Temp_text_Variable128                                            ()
// class FText                        Temp_text_Variable129                                            ()
// class FText                        Temp_text_Variable130                                            ()
// int32                              Temp_int_Variable45                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select44_Default                                          ()
// class FText                        Temp_text_Variable131                                            ()
// class FText                        Temp_text_Variable132                                            ()
// class FText                        Temp_text_Variable133                                            ()
// int32                              Temp_int_Variable46                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select45_Default                                          ()
// class FText                        Temp_text_Variable134                                            ()
// class FText                        Temp_text_Variable135                                            ()
// class FText                        Temp_text_Variable136                                            ()
// int32                              Temp_int_Variable47                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select46_Default                                          ()
// class FText                        Temp_text_Variable137                                            ()
// class FText                        Temp_text_Variable138                                            ()
// class FText                        Temp_text_Variable139                                            ()
// int32                              Temp_int_Variable48                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select47_Default                                          ()
// class FText                        Temp_text_Variable140                                            ()
// class FText                        Temp_text_Variable141                                            ()
// class FText                        Temp_text_Variable142                                            ()
// int32                              Temp_int_Variable49                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select48_Default                                          ()
// class FText                        Temp_text_Variable143                                            ()
// class FText                        Temp_text_Variable144                                            ()
// class FText                        Temp_text_Variable145                                            ()
// int32                              Temp_int_Variable50                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select49_Default                                          ()
// class FText                        Temp_text_Variable146                                            ()
// class FText                        Temp_text_Variable147                                            ()
// class FText                        Temp_text_Variable148                                            ()
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FText                        K2Node_Select50_Default                                          ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// class FText                        CallFunc_GetText_ReturnValue2                                    ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select51_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue5                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue6                            ()
// class FText                        CallFunc_GetText_ReturnValue3                                    ()
// class FText                        CallFunc_GetText_ReturnValue4                                    ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select52_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select53_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue5                                    ()
// class FText                        CallFunc_GetText_ReturnValue6                                    ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select54_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select55_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select56_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_C::HandleConfigChanged_Athena(int32 Mode, int32 Config, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable2, bool Temp_bool_Variable, class FText K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 Temp_int_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, int32 Temp_int_Variable3, class FText K2Node_Select2_Default, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class FText K2Node_Select3_Default, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable5, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, int32 Temp_int_Variable4, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, int32 Temp_int_Variable5, class FText K2Node_Select4_Default, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, int32 Temp_int_Variable6, class FText K2Node_Select5_Default, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, int32 Temp_int_Variable7, class FText K2Node_Select6_Default, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, int32 Temp_int_Variable8, class FText K2Node_Select7_Default, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, int32 Temp_int_Variable9, class FText K2Node_Select8_Default, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, int32 Temp_int_Variable10, class FText K2Node_Select9_Default, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, int32 Temp_int_Variable11, class FText K2Node_Select10_Default, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, int32 Temp_int_Variable12, class FText K2Node_Select11_Default, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, int32 Temp_int_Variable13, class FText K2Node_Select12_Default, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, int32 Temp_int_Variable14, class FText K2Node_Select13_Default, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, int32 Temp_int_Variable15, class FText K2Node_Select14_Default, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, int32 Temp_int_Variable16, class FText K2Node_Select15_Default, class FText Temp_text_Variable45, class FText Temp_text_Variable46, class FText Temp_text_Variable47, int32 Temp_int_Variable17, class FText K2Node_Select16_Default, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, int32 Temp_int_Variable18, class FText K2Node_Select17_Default, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, int32 Temp_int_Variable19, class FText K2Node_Select18_Default, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, int32 Temp_int_Variable20, class FText K2Node_Select19_Default, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, int32 Temp_int_Variable21, class FText K2Node_Select20_Default, class FText Temp_text_Variable60, class FText Temp_text_Variable61, class FText Temp_text_Variable62, int32 Temp_int_Variable22, class FText K2Node_Select21_Default, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, int32 Temp_int_Variable23, class FText K2Node_Select22_Default, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText Temp_text_Variable68, int32 Temp_int_Variable24, class FText K2Node_Select23_Default, class FText Temp_text_Variable69, class FText Temp_text_Variable70, class FText Temp_text_Variable71, int32 Temp_int_Variable25, class FText K2Node_Select24_Default, class FText Temp_text_Variable72, class FText Temp_text_Variable73, class FText Temp_text_Variable74, int32 Temp_int_Variable26, class FText K2Node_Select25_Default, class FText Temp_text_Variable75, class FText Temp_text_Variable76, class FText Temp_text_Variable77, int32 Temp_int_Variable27, class FText K2Node_Select26_Default, class FText Temp_text_Variable78, class FText Temp_text_Variable79, class FText Temp_text_Variable80, int32 Temp_int_Variable28, class FText K2Node_Select27_Default, class FText Temp_text_Variable81, class FText Temp_text_Variable82, class FText Temp_text_Variable83, int32 Temp_int_Variable29, class FText K2Node_Select28_Default, class FText Temp_text_Variable84, class FText Temp_text_Variable85, int32 Temp_int_Variable30, class FText K2Node_Select29_Default, class FText Temp_text_Variable86, class FText Temp_text_Variable87, class FText Temp_text_Variable88, int32 Temp_int_Variable31, class FText K2Node_Select30_Default, class FText Temp_text_Variable89, class FText Temp_text_Variable90, class FText Temp_text_Variable91, int32 Temp_int_Variable32, class FText K2Node_Select31_Default, class FText Temp_text_Variable92, class FText Temp_text_Variable93, class FText Temp_text_Variable94, int32 Temp_int_Variable33, class FText K2Node_Select32_Default, class FText Temp_text_Variable95, class FText Temp_text_Variable96, class FText Temp_text_Variable97, int32 Temp_int_Variable34, class FText K2Node_Select33_Default, class FText Temp_text_Variable98, class FText Temp_text_Variable99, class FText Temp_text_Variable100, int32 Temp_int_Variable35, class FText K2Node_Select34_Default, class FText Temp_text_Variable101, class FText Temp_text_Variable102, class FText Temp_text_Variable103, int32 Temp_int_Variable36, class FText K2Node_Select35_Default, class FText Temp_text_Variable104, class FText Temp_text_Variable105, class FText Temp_text_Variable106, int32 Temp_int_Variable37, class FText K2Node_Select36_Default, class FText Temp_text_Variable107, class FText Temp_text_Variable108, class FText Temp_text_Variable109, int32 Temp_int_Variable38, class FText K2Node_Select37_Default, class FText Temp_text_Variable110, class FText Temp_text_Variable111, class FText Temp_text_Variable112, int32 Temp_int_Variable39, class FText K2Node_Select38_Default, class FText Temp_text_Variable113, class FText Temp_text_Variable114, class FText Temp_text_Variable115, int32 Temp_int_Variable40, class FText K2Node_Select39_Default, class FText Temp_text_Variable116, class FText Temp_text_Variable117, class FText Temp_text_Variable118, int32 Temp_int_Variable41, class FText K2Node_Select40_Default, class FText Temp_text_Variable119, class FText Temp_text_Variable120, class FText Temp_text_Variable121, int32 Temp_int_Variable42, class FText K2Node_Select41_Default, class FText Temp_text_Variable122, class FText Temp_text_Variable123, class FText Temp_text_Variable124, int32 Temp_int_Variable43, class FText K2Node_Select42_Default, class FText Temp_text_Variable125, class FText Temp_text_Variable126, class FText Temp_text_Variable127, int32 Temp_int_Variable44, class FText K2Node_Select43_Default, class FText Temp_text_Variable128, class FText Temp_text_Variable129, class FText Temp_text_Variable130, int32 Temp_int_Variable45, class FText K2Node_Select44_Default, class FText Temp_text_Variable131, class FText Temp_text_Variable132, class FText Temp_text_Variable133, int32 Temp_int_Variable46, class FText K2Node_Select45_Default, class FText Temp_text_Variable134, class FText Temp_text_Variable135, class FText Temp_text_Variable136, int32 Temp_int_Variable47, class FText K2Node_Select46_Default, class FText Temp_text_Variable137, class FText Temp_text_Variable138, class FText Temp_text_Variable139, int32 Temp_int_Variable48, class FText K2Node_Select47_Default, class FText Temp_text_Variable140, class FText Temp_text_Variable141, class FText Temp_text_Variable142, int32 Temp_int_Variable49, class FText K2Node_Select48_Default, class FText Temp_text_Variable143, class FText Temp_text_Variable144, class FText Temp_text_Variable145, int32 Temp_int_Variable50, class FText K2Node_Select49_Default, class FText Temp_text_Variable146, class FText Temp_text_Variable147, class FText Temp_text_Variable148, class FText CallFunc_GetText_ReturnValue, class FText K2Node_Select50_Default, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_GetText_ReturnValue2, bool CallFunc_EqualEqual_TextText_ReturnValue2, enum class ESlateVisibility K2Node_Select51_Default, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_GetText_ReturnValue3, class FText CallFunc_GetText_ReturnValue4, bool CallFunc_EqualEqual_TextText_ReturnValue3, bool CallFunc_EqualEqual_TextText_ReturnValue4, enum class ESlateVisibility K2Node_Select52_Default, enum class ESlateVisibility K2Node_Select53_Default, class FText CallFunc_GetText_ReturnValue5, class FText CallFunc_GetText_ReturnValue6, bool CallFunc_EqualEqual_TextText_ReturnValue5, bool CallFunc_EqualEqual_TextText_ReturnValue6, enum class ESlateVisibility K2Node_Select54_Default, enum class ESlateVisibility K2Node_Select55_Default, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility Temp_byte_Variable12, bool Temp_bool_Variable6, enum class ESlateVisibility K2Node_Select56_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "HandleConfigChanged_Athena");

	Params::UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params Parms;
	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.K2Node_Select15_Default = K2Node_Select15_Default;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.K2Node_Select16_Default = K2Node_Select16_Default;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.K2Node_Select17_Default = K2Node_Select17_Default;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.K2Node_Select18_Default = K2Node_Select18_Default;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.K2Node_Select19_Default = K2Node_Select19_Default;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.K2Node_Select20_Default = K2Node_Select20_Default;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.K2Node_Select21_Default = K2Node_Select21_Default;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.Temp_int_Variable23 = Temp_int_Variable23;
	Parms.K2Node_Select22_Default = K2Node_Select22_Default;
	Parms.Temp_text_Variable66 = Temp_text_Variable66;
	Parms.Temp_text_Variable67 = Temp_text_Variable67;
	Parms.Temp_text_Variable68 = Temp_text_Variable68;
	Parms.Temp_int_Variable24 = Temp_int_Variable24;
	Parms.K2Node_Select23_Default = K2Node_Select23_Default;
	Parms.Temp_text_Variable69 = Temp_text_Variable69;
	Parms.Temp_text_Variable70 = Temp_text_Variable70;
	Parms.Temp_text_Variable71 = Temp_text_Variable71;
	Parms.Temp_int_Variable25 = Temp_int_Variable25;
	Parms.K2Node_Select24_Default = K2Node_Select24_Default;
	Parms.Temp_text_Variable72 = Temp_text_Variable72;
	Parms.Temp_text_Variable73 = Temp_text_Variable73;
	Parms.Temp_text_Variable74 = Temp_text_Variable74;
	Parms.Temp_int_Variable26 = Temp_int_Variable26;
	Parms.K2Node_Select25_Default = K2Node_Select25_Default;
	Parms.Temp_text_Variable75 = Temp_text_Variable75;
	Parms.Temp_text_Variable76 = Temp_text_Variable76;
	Parms.Temp_text_Variable77 = Temp_text_Variable77;
	Parms.Temp_int_Variable27 = Temp_int_Variable27;
	Parms.K2Node_Select26_Default = K2Node_Select26_Default;
	Parms.Temp_text_Variable78 = Temp_text_Variable78;
	Parms.Temp_text_Variable79 = Temp_text_Variable79;
	Parms.Temp_text_Variable80 = Temp_text_Variable80;
	Parms.Temp_int_Variable28 = Temp_int_Variable28;
	Parms.K2Node_Select27_Default = K2Node_Select27_Default;
	Parms.Temp_text_Variable81 = Temp_text_Variable81;
	Parms.Temp_text_Variable82 = Temp_text_Variable82;
	Parms.Temp_text_Variable83 = Temp_text_Variable83;
	Parms.Temp_int_Variable29 = Temp_int_Variable29;
	Parms.K2Node_Select28_Default = K2Node_Select28_Default;
	Parms.Temp_text_Variable84 = Temp_text_Variable84;
	Parms.Temp_text_Variable85 = Temp_text_Variable85;
	Parms.Temp_int_Variable30 = Temp_int_Variable30;
	Parms.K2Node_Select29_Default = K2Node_Select29_Default;
	Parms.Temp_text_Variable86 = Temp_text_Variable86;
	Parms.Temp_text_Variable87 = Temp_text_Variable87;
	Parms.Temp_text_Variable88 = Temp_text_Variable88;
	Parms.Temp_int_Variable31 = Temp_int_Variable31;
	Parms.K2Node_Select30_Default = K2Node_Select30_Default;
	Parms.Temp_text_Variable89 = Temp_text_Variable89;
	Parms.Temp_text_Variable90 = Temp_text_Variable90;
	Parms.Temp_text_Variable91 = Temp_text_Variable91;
	Parms.Temp_int_Variable32 = Temp_int_Variable32;
	Parms.K2Node_Select31_Default = K2Node_Select31_Default;
	Parms.Temp_text_Variable92 = Temp_text_Variable92;
	Parms.Temp_text_Variable93 = Temp_text_Variable93;
	Parms.Temp_text_Variable94 = Temp_text_Variable94;
	Parms.Temp_int_Variable33 = Temp_int_Variable33;
	Parms.K2Node_Select32_Default = K2Node_Select32_Default;
	Parms.Temp_text_Variable95 = Temp_text_Variable95;
	Parms.Temp_text_Variable96 = Temp_text_Variable96;
	Parms.Temp_text_Variable97 = Temp_text_Variable97;
	Parms.Temp_int_Variable34 = Temp_int_Variable34;
	Parms.K2Node_Select33_Default = K2Node_Select33_Default;
	Parms.Temp_text_Variable98 = Temp_text_Variable98;
	Parms.Temp_text_Variable99 = Temp_text_Variable99;
	Parms.Temp_text_Variable100 = Temp_text_Variable100;
	Parms.Temp_int_Variable35 = Temp_int_Variable35;
	Parms.K2Node_Select34_Default = K2Node_Select34_Default;
	Parms.Temp_text_Variable101 = Temp_text_Variable101;
	Parms.Temp_text_Variable102 = Temp_text_Variable102;
	Parms.Temp_text_Variable103 = Temp_text_Variable103;
	Parms.Temp_int_Variable36 = Temp_int_Variable36;
	Parms.K2Node_Select35_Default = K2Node_Select35_Default;
	Parms.Temp_text_Variable104 = Temp_text_Variable104;
	Parms.Temp_text_Variable105 = Temp_text_Variable105;
	Parms.Temp_text_Variable106 = Temp_text_Variable106;
	Parms.Temp_int_Variable37 = Temp_int_Variable37;
	Parms.K2Node_Select36_Default = K2Node_Select36_Default;
	Parms.Temp_text_Variable107 = Temp_text_Variable107;
	Parms.Temp_text_Variable108 = Temp_text_Variable108;
	Parms.Temp_text_Variable109 = Temp_text_Variable109;
	Parms.Temp_int_Variable38 = Temp_int_Variable38;
	Parms.K2Node_Select37_Default = K2Node_Select37_Default;
	Parms.Temp_text_Variable110 = Temp_text_Variable110;
	Parms.Temp_text_Variable111 = Temp_text_Variable111;
	Parms.Temp_text_Variable112 = Temp_text_Variable112;
	Parms.Temp_int_Variable39 = Temp_int_Variable39;
	Parms.K2Node_Select38_Default = K2Node_Select38_Default;
	Parms.Temp_text_Variable113 = Temp_text_Variable113;
	Parms.Temp_text_Variable114 = Temp_text_Variable114;
	Parms.Temp_text_Variable115 = Temp_text_Variable115;
	Parms.Temp_int_Variable40 = Temp_int_Variable40;
	Parms.K2Node_Select39_Default = K2Node_Select39_Default;
	Parms.Temp_text_Variable116 = Temp_text_Variable116;
	Parms.Temp_text_Variable117 = Temp_text_Variable117;
	Parms.Temp_text_Variable118 = Temp_text_Variable118;
	Parms.Temp_int_Variable41 = Temp_int_Variable41;
	Parms.K2Node_Select40_Default = K2Node_Select40_Default;
	Parms.Temp_text_Variable119 = Temp_text_Variable119;
	Parms.Temp_text_Variable120 = Temp_text_Variable120;
	Parms.Temp_text_Variable121 = Temp_text_Variable121;
	Parms.Temp_int_Variable42 = Temp_int_Variable42;
	Parms.K2Node_Select41_Default = K2Node_Select41_Default;
	Parms.Temp_text_Variable122 = Temp_text_Variable122;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_text_Variable124 = Temp_text_Variable124;
	Parms.Temp_int_Variable43 = Temp_int_Variable43;
	Parms.K2Node_Select42_Default = K2Node_Select42_Default;
	Parms.Temp_text_Variable125 = Temp_text_Variable125;
	Parms.Temp_text_Variable126 = Temp_text_Variable126;
	Parms.Temp_text_Variable127 = Temp_text_Variable127;
	Parms.Temp_int_Variable44 = Temp_int_Variable44;
	Parms.K2Node_Select43_Default = K2Node_Select43_Default;
	Parms.Temp_text_Variable128 = Temp_text_Variable128;
	Parms.Temp_text_Variable129 = Temp_text_Variable129;
	Parms.Temp_text_Variable130 = Temp_text_Variable130;
	Parms.Temp_int_Variable45 = Temp_int_Variable45;
	Parms.K2Node_Select44_Default = K2Node_Select44_Default;
	Parms.Temp_text_Variable131 = Temp_text_Variable131;
	Parms.Temp_text_Variable132 = Temp_text_Variable132;
	Parms.Temp_text_Variable133 = Temp_text_Variable133;
	Parms.Temp_int_Variable46 = Temp_int_Variable46;
	Parms.K2Node_Select45_Default = K2Node_Select45_Default;
	Parms.Temp_text_Variable134 = Temp_text_Variable134;
	Parms.Temp_text_Variable135 = Temp_text_Variable135;
	Parms.Temp_text_Variable136 = Temp_text_Variable136;
	Parms.Temp_int_Variable47 = Temp_int_Variable47;
	Parms.K2Node_Select46_Default = K2Node_Select46_Default;
	Parms.Temp_text_Variable137 = Temp_text_Variable137;
	Parms.Temp_text_Variable138 = Temp_text_Variable138;
	Parms.Temp_text_Variable139 = Temp_text_Variable139;
	Parms.Temp_int_Variable48 = Temp_int_Variable48;
	Parms.K2Node_Select47_Default = K2Node_Select47_Default;
	Parms.Temp_text_Variable140 = Temp_text_Variable140;
	Parms.Temp_text_Variable141 = Temp_text_Variable141;
	Parms.Temp_text_Variable142 = Temp_text_Variable142;
	Parms.Temp_int_Variable49 = Temp_int_Variable49;
	Parms.K2Node_Select48_Default = K2Node_Select48_Default;
	Parms.Temp_text_Variable143 = Temp_text_Variable143;
	Parms.Temp_text_Variable144 = Temp_text_Variable144;
	Parms.Temp_text_Variable145 = Temp_text_Variable145;
	Parms.Temp_int_Variable50 = Temp_int_Variable50;
	Parms.K2Node_Select49_Default = K2Node_Select49_Default;
	Parms.Temp_text_Variable146 = Temp_text_Variable146;
	Parms.Temp_text_Variable147 = Temp_text_Variable147;
	Parms.Temp_text_Variable148 = Temp_text_Variable148;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_Select50_Default = K2Node_Select50_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.CallFunc_GetText_ReturnValue2 = CallFunc_GetText_ReturnValue2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue2 = CallFunc_EqualEqual_TextText_ReturnValue2;
	Parms.K2Node_Select51_Default = K2Node_Select51_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.CallFunc_MakeLiteralText_ReturnValue5 = CallFunc_MakeLiteralText_ReturnValue5;
	Parms.CallFunc_MakeLiteralText_ReturnValue6 = CallFunc_MakeLiteralText_ReturnValue6;
	Parms.CallFunc_GetText_ReturnValue3 = CallFunc_GetText_ReturnValue3;
	Parms.CallFunc_GetText_ReturnValue4 = CallFunc_GetText_ReturnValue4;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue3 = CallFunc_EqualEqual_TextText_ReturnValue3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue4 = CallFunc_EqualEqual_TextText_ReturnValue4;
	Parms.K2Node_Select52_Default = K2Node_Select52_Default;
	Parms.K2Node_Select53_Default = K2Node_Select53_Default;
	Parms.CallFunc_GetText_ReturnValue5 = CallFunc_GetText_ReturnValue5;
	Parms.CallFunc_GetText_ReturnValue6 = CallFunc_GetText_ReturnValue6;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue5 = CallFunc_EqualEqual_TextText_ReturnValue5;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue6 = CallFunc_EqualEqual_TextText_ReturnValue6;
	Parms.K2Node_Select54_Default = K2Node_Select54_Default;
	Parms.K2Node_Select55_Default = K2Node_Select55_Default;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_Select56_Default = K2Node_Select56_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_C::OnConfigChanged(int32 Mode, int32 Config, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "OnConfigChanged");

	Params::UGamepadMappingInfo_C_OnConfigChanged_Params Parms;
	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Platform                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Configuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_Mode_Combat                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_Mode_Build                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_PS4_Lines                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_XboxOne_Lines                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_PS4                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  T_XboxOne                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select2_Default                                           ()
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_C::Update_Displayed_Mapping(int32 Platform, int32 Mode, int32 Configuration, class UTexture2D* T_Mode_Combat, class UTexture2D* T_Mode_Build, class UTexture2D* T_PS4_Lines, class UTexture2D* T_XboxOne_Lines, class UTexture2D* T_PS4, class UTexture2D* T_XboxOne, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, int32 Temp_int_Variable2, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable3, class FText Temp_text_Variable, class FText Temp_text_Variable2, int32 Temp_int_Variable4, class FText K2Node_Select2_Default, int32 Temp_int_Variable5, int32 Temp_int_Variable6, class UTexture2D* K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, class UTexture2D* K2Node_Select5_Default, class UTexture2D* K2Node_Select6_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_C", "Update Displayed Mapping");

	Params::UGamepadMappingInfo_C_Update_Displayed_Mapping_Params Parms;
	Parms.Platform = Platform;
	Parms.Mode = Mode;
	Parms.Configuration = Configuration;
	Parms.T_Mode_Combat = T_Mode_Combat;
	Parms.T_Mode_Build = T_Mode_Build;
	Parms.T_PS4_Lines = T_PS4_Lines;
	Parms.T_XboxOne_Lines = T_XboxOne_Lines;
	Parms.T_PS4 = T_PS4;
	Parms.T_XboxOne = T_XboxOne;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
