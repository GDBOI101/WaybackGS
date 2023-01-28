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

// 0x0 (0x0 - 0x0)
// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
struct UTalkingHeadWidget_C_HandleTalkingHeadEnd_Params
{
public:
};

// 0x3E (0x3E - 0x0)
// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
struct UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x8(0x18)(Parm)
	class FText                                  Subtitle;                                          // 0x20(0x18)(Parm)
	enum class EFortAnnouncementDisplayPreference DisplayPreference;                                 // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortAnnouncementDisplayPreference Temp_byte_Variable4;                               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
struct UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params
{
public:
	class FText                                  Subtitle;                                          // 0x0(0x18)(Parm)
};

// 0x18 (0x18 - 0x0)
// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
struct UTalkingHeadWidget_C_SetTalkingHeadName_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
};

// 0x8 (0x8 - 0x0)
// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
struct UTalkingHeadWidget_C_SetTalkingHeadImage_Params
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
struct UTalkingHeadWidget_C_Construct_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
struct UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
