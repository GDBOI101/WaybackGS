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


// Function RadialPickerItem.RadialPickerItem_C.SetKeybindVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialPickerItem_C::SetKeybindVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("RadialPickerItem_C", "SetKeybindVisibility");

	Params::URadialPickerItem_C_SetKeybindVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowImageAndLabel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialPickerItem_C::SetShowImageAndLabel(bool ShowImageAndLabel)
{
	static auto Func = Class->GetFunction("RadialPickerItem_C", "SetShowImageAndLabel");

	Params::URadialPickerItem_C_SetShowImageAndLabel_Params Parms;
	Parms.ShowImageAndLabel = ShowImageAndLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialPickerItem.RadialPickerItem_C.SetItemContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Option_Enabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Radial_Item_Index                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialPickerItem_C::SetItemContent(class UFortItem* Item, bool Option_Enabled, int32 Radial_Item_Index, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue)
{
	static auto Func = Class->GetFunction("RadialPickerItem_C", "SetItemContent");

	Params::URadialPickerItem_C_SetItemContent_Params Parms;
	Parms.Item = Item;
	Parms.Option_Enabled = Option_Enabled;
	Parms.Radial_Item_Index = Radial_Item_Index;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialPickerItem.RadialPickerItem_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()

void URadialPickerItem_C::SetSelected(bool IsSelected, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2)
{
	static auto Func = Class->GetFunction("RadialPickerItem_C", "SetSelected");

	Params::URadialPickerItem_C_SetSelected_Params Parms;
	Parms.IsSelected = IsSelected;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm)
// struct FSlateBrush                 Brush                                                            (Parm)
// bool                               Option_Enabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              RadialItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialPickerItem_C::SetImageAndLabelContent(class FText Text, const struct FSlateBrush& Brush, bool Option_Enabled, int32 RadialItemIndex, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue)
{
	static auto Func = Class->GetFunction("RadialPickerItem_C", "SetImageAndLabelContent");

	Params::URadialPickerItem_C_SetImageAndLabelContent_Params Parms;
	Parms.Text = Text;
	Parms.Brush = Brush;
	Parms.Option_Enabled = Option_Enabled;
	Parms.RadialItemIndex = RadialItemIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialPickerItem.RadialPickerItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URadialPickerItem_C::Construct()
{
	static auto Func = Class->GetFunction("RadialPickerItem_C", "Construct");

	Params::URadialPickerItem_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialPickerItem_C::ExecuteUbergraph_RadialPickerItem(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("RadialPickerItem_C", "ExecuteUbergraph_RadialPickerItem");

	Params::URadialPickerItem_C_ExecuteUbergraph_RadialPickerItem_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
