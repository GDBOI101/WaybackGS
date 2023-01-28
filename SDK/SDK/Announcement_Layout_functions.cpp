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


// Function Announcement_Layout.Announcement_Layout_C.CreateAnnouncementWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewWidgetClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceCreateUI                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAnnouncementWidget*     NewWidget                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAnnouncementWidget*     K2Node_DynamicCast_AsFort_Announcement_Widget                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAnnouncementWidget*     K2Node_DynamicCast_AsFort_Announcement_Widget2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnnouncement_Layout_C::CreateAnnouncementWidget(class UClass* NewWidgetClass, bool ForceCreateUI, class UFortAnnouncementWidget** NewWidget, bool CallFunc_IsValidClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue2, class UFortAnnouncementWidget* K2Node_DynamicCast_AsFort_Announcement_Widget, bool K2Node_DynamicCast_bSuccess, class UFortAnnouncementWidget* K2Node_DynamicCast_AsFort_Announcement_Widget2, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("Announcement_Layout_C", "CreateAnnouncementWidget");

	Params::UAnnouncement_Layout_C_CreateAnnouncementWidget_Params Parms;
	Parms.NewWidgetClass = NewWidgetClass;
	Parms.ForceCreateUI = ForceCreateUI;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Announcement_Widget = K2Node_DynamicCast_AsFort_Announcement_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Announcement_Widget2 = K2Node_DynamicCast_AsFort_Announcement_Widget2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

	if (NewWidget != nullptr)
		*NewWidget = Parms.NewWidget;

}


// Function Announcement_Layout.Announcement_Layout_C.SwapAnnouncementUIContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     NewAnnouncement                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Basic*K2Node_DynamicCast_AsFort_Client_Announcement_Basic              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAnnouncementWidget*     CallFunc_CreateAnnouncementWidget_NewWidget                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnnouncement_Layout_C::SwapAnnouncementUIContent(class AFortClientAnnouncement* NewAnnouncement, class AFortClientAnnouncement_Basic* K2Node_DynamicCast_AsFort_Client_Announcement_Basic, bool K2Node_DynamicCast_bSuccess, class UFortAnnouncementWidget* CallFunc_CreateAnnouncementWidget_NewWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Announcement_Layout_C", "SwapAnnouncementUIContent");

	Params::UAnnouncement_Layout_C_SwapAnnouncementUIContent_Params Parms;
	Parms.NewAnnouncement = NewAnnouncement;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Basic = K2Node_DynamicCast_AsFort_Client_Announcement_Basic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateAnnouncementWidget_NewWidget = CallFunc_CreateAnnouncementWidget_NewWidget;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_Layout.Announcement_Layout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAnnouncement_Layout_C::Construct()
{
	static auto Func = Class->GetFunction("Announcement_Layout_C", "Construct");

	Params::UAnnouncement_Layout_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_Layout.Announcement_Layout_C.OnStartNewAnnouncement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     NewAnnouncement                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Layout_C::OnStartNewAnnouncement(class AFortClientAnnouncement* NewAnnouncement)
{
	static auto Func = Class->GetFunction("Announcement_Layout_C", "OnStartNewAnnouncement");

	Params::UAnnouncement_Layout_C_OnStartNewAnnouncement_Params Parms;
	Parms.NewAnnouncement = NewAnnouncement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_Layout.Announcement_Layout_C.ExecuteUbergraph_Announcement_Layout
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement*     K2Node_CustomEvent_NewAnnouncement                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTutorialContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAnnouncement_Layout_C::ExecuteUbergraph_Announcement_Layout(int32 EntryPoint, class AFortClientAnnouncement* K2Node_CustomEvent_NewAnnouncement, class UFortTutorialContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("Announcement_Layout_C", "ExecuteUbergraph_Announcement_Layout");

	Params::UAnnouncement_Layout_C_ExecuteUbergraph_Announcement_Layout_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewAnnouncement = K2Node_CustomEvent_NewAnnouncement;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
