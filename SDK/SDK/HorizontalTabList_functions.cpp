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


// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetTabButtonByID_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonButton* UHorizontalTabList_C::Get_Tab_From_Id(class FName TabNameID, class UCommonButton* CallFunc_GetTabButtonByID_ReturnValue)
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "Get Tab From Id");

	Params::UHorizontalTabList_C_Get_Tab_From_Id_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.CallFunc_GetTabButtonByID_ReturnValue = CallFunc_GetTabButtonByID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NextBinding                                                      (Parm, NoDestructor)
// struct FDataTableRowHandle         PreviousBinding                                                  (Parm, NoDestructor)

void UHorizontalTabList_C::ChangeInputBindings(const struct FDataTableRowHandle& NextBinding, const struct FDataTableRowHandle& PreviousBinding)
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "ChangeInputBindings");

	Params::UHorizontalTabList_C_ChangeInputBindings_Params Parms;
	Parms.NextBinding = NextBinding;
	Parms.PreviousBinding = PreviousBinding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList.HorizontalTabList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHorizontalTabList_C::Construct()
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "Construct");

	Params::UHorizontalTabList_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHorizontalTabList_C::Handle_OnInputMethodChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "Handle OnInputMethodChanged");

	Params::UHorizontalTabList_C_Handle_OnInputMethodChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHorizontalTabList_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "PreConstruct");

	Params::UHorizontalTabList_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList.HorizontalTabList_C.Previous Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHorizontalTabList_C::Previous_Visibility()
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "Previous Visibility");

	Params::UHorizontalTabList_C_Previous_Visibility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_C::HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "HandleTabCreated");

	Params::UHorizontalTabList_C_HandleTabCreated_Params Parms;
	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_C::CustomEvent_0(class FName TabId)
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "CustomEvent_0");

	Params::UHorizontalTabList_C_CustomEvent_0_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTabCount_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTabCount_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_TabNameID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_Event_TabButton                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_TabId                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_C::ExecuteUbergraph_HorizontalTabList(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable2, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_CustomEvent_bUsingGamepad, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable10, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetTabCount_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue2, enum class ESlateVisibility K2Node_Select3_Default, class FName K2Node_Event_TabNameID, class UCommonButton* K2Node_Event_TabButton, enum class ESlateVisibility K2Node_Select4_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool Temp_bool_Variable5, enum class ESlateVisibility K2Node_Select5_Default, class FName K2Node_CustomEvent_TabId)
{
	static auto Func = Class->GetFunction("HorizontalTabList_C", "ExecuteUbergraph_HorizontalTabList");

	Params::UHorizontalTabList_C_ExecuteUbergraph_HorizontalTabList_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetTabCount_ReturnValue = CallFunc_GetTabCount_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTabCount_ReturnValue2 = CallFunc_GetTabCount_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Event_TabNameID = K2Node_Event_TabNameID;
	Parms.K2Node_Event_TabButton = K2Node_Event_TabButton;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_CustomEvent_TabId = K2Node_CustomEvent_TabId;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
