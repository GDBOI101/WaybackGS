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


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortAnnouncementDisplayPreferenceTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTalkingHeadWidget_C::UpdateVisibility(enum class EFortAnnouncementDisplayPreference Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "UpdateVisibility");

	Params::UQuestTalkingHeadWidget_C_UpdateVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldBlockSubtitlePortrait                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTalkingHeadWidget_C::HandleShouldBlockSubtitlePortraitChanged(bool ShouldBlockSubtitlePortrait)
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "HandleShouldBlockSubtitlePortraitChanged");

	Params::UQuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged_Params Parms;
	Parms.ShouldBlockSubtitlePortrait = ShouldBlockSubtitlePortrait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "HandleTalkingHeadEnd");

	Params::UQuestTalkingHeadWidget_C_HandleTalkingHeadEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (Parm)
// class FText                        Subtitle                                                         (Parm)
// enum class EFortAnnouncementDisplayPreferenceDisplayPreference                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "HandleTalkingHeadBegin");

	Params::UQuestTalkingHeadWidget_C_HandleTalkingHeadBegin_Params Parms;
	Parms.Image = Image;
	Parms.Title = Title;
	Parms.Subtitle = Subtitle;
	Parms.DisplayPreference = DisplayPreference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Subtitle                                                         (Parm)

void UQuestTalkingHeadWidget_C::SetTalkingHeadSubtitle(class FText Subtitle)
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "SetTalkingHeadSubtitle");

	Params::UQuestTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params Parms;
	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTalkingHeadWidget_C::SetTalkingHeadName(class FText Title, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "SetTalkingHeadName");

	Params::UQuestTalkingHeadWidget_C_SetTalkingHeadName_Params Parms;
	Parms.Title = Title;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "SetTalkingHeadImage");

	Params::UQuestTalkingHeadWidget_C_SetTalkingHeadImage_Params Parms;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestTalkingHeadWidget_C::Construct()
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "Construct");

	Params::UQuestTalkingHeadWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)

void UQuestTalkingHeadWidget_C::ExecuteUbergraph_QuestTalkingHeadWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3)
{
	static auto Func = Class->GetFunction("QuestTalkingHeadWidget_C", "ExecuteUbergraph_QuestTalkingHeadWidget");

	Params::UQuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
