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


// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static auto Func = Class->GetFunction("TalkingHeadWidget_C", "HandleTalkingHeadEnd");

	Params::UTalkingHeadWidget_C_HandleTalkingHeadEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (Parm)
// class FText                        Subtitle                                                         (Parm)
// enum class EFortAnnouncementDisplayPreferenceDisplayPreference                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAnnouncementDisplayPreferenceTemp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortAnnouncementDisplayPreference Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TalkingHeadWidget_C", "HandleTalkingHeadBegin");

	Params::UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params Parms;
	Parms.Image = Image;
	Parms.Title = Title;
	Parms.Subtitle = Subtitle;
	Parms.DisplayPreference = DisplayPreference;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Subtitle                                                         (Parm)

void UTalkingHeadWidget_C::SetTalkingHeadSubtitle(class FText Subtitle)
{
	static auto Func = Class->GetFunction("TalkingHeadWidget_C", "SetTalkingHeadSubtitle");

	Params::UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params Parms;
	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)

void UTalkingHeadWidget_C::SetTalkingHeadName(class FText Title)
{
	static auto Func = Class->GetFunction("TalkingHeadWidget_C", "SetTalkingHeadName");

	Params::UTalkingHeadWidget_C_SetTalkingHeadName_Params Parms;
	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static auto Func = Class->GetFunction("TalkingHeadWidget_C", "SetTalkingHeadImage");

	Params::UTalkingHeadWidget_C_SetTalkingHeadImage_Params Parms;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTalkingHeadWidget_C::Construct()
{
	static auto Func = Class->GetFunction("TalkingHeadWidget_C", "Construct");

	Params::UTalkingHeadWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkingHeadWidget_C::ExecuteUbergraph_TalkingHeadWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("TalkingHeadWidget_C", "ExecuteUbergraph_TalkingHeadWidget");

	Params::UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
