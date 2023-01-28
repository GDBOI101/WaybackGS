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


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button_Hovered                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuRowSelector_C::Button_Hovered(class UCommonButton* Button_Hovered, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "Button Hovered");

	Params::UOptionsMenuRowSelector_C_Button_Hovered_Params Parms;
	Parms.Button_Hovered = Button_Hovered;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuRowSelector_C::Deselect_All_Rows()
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "Deselect All Rows");

	Params::UOptionsMenuRowSelector_C_Deselect_All_Rows_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Number                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuRowSelector_C::Update_Row_Selector(int32 Tab_Number)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "Update Row Selector");

	Params::UOptionsMenuRowSelector_C_Update_Row_Selector_Params Parms;
	Parms.Tab_Number = Tab_Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Row_Text                                                         (Parm)
// TArray<class FText>                Buttons                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FText>                Hover_Texts                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               Require_Selection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonTextBlock*            Tab_Tooltip                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuRowSelector_C::Initialize_Row_Selector(class FText Row_Text, TArray<class FText>& Buttons, TArray<class FText>& Hover_Texts, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "Initialize Row Selector");

	Params::UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params Parms;
	Parms.Row_Text = Row_Text;
	Parms.Buttons = Buttons;
	Parms.Hover_Texts = Hover_Texts;
	Parms.Require_Selection = Require_Selection;
	Parms.Tab_Tooltip = Tab_Tooltip;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenuRowSelector_C::Construct()
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "Construct");

	Params::UOptionsMenuRowSelector_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               AssociatedButton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuRowSelector_C::OnSelectedButtonChanged_Event_0(class UCommonButton* AssociatedButton, int32 ButtonIndex)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "OnSelectedButtonChanged_Event_0");

	Params::UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0_Params Parms;
	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UOptionsMenuRowSelector_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "OnMouseLeave");

	Params::UOptionsMenuRowSelector_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenuRowSelector_C::Destruct()
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "Destruct");

	Params::UOptionsMenuRowSelector_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuRowSelector_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "PreConstruct");

	Params::UOptionsMenuRowSelector_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_AssociatedButton                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ButtonIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UOptionsMenuRowSelector_C::ExecuteUbergraph_OptionsMenuRowSelector(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, bool K2Node_Event_IsDesignTime, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText Temp_text_Variable, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "ExecuteUbergraph_OptionsMenuRowSelector");

	Params::UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_AssociatedButton = K2Node_CustomEvent_AssociatedButton;
	Parms.K2Node_CustomEvent_ButtonIndex = K2Node_CustomEvent_ButtonIndex;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuRowSelector_C::Selector_Button_Selected__DelegateSignature(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("OptionsMenuRowSelector_C", "Selector Button Selected__DelegateSignature");

	Params::UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
