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


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumAvailableSlots                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::Update_Available_Slots_Widget(int32 NumAvailableSlots, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "Update Available Slots Widget");

	Params::UCollectionBookPageListWidget_C_Update_Available_Slots_Widget_Params Parms;
	Parms.NumAvailableSlots = NumAvailableSlots;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ColorToUse                                                       (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsBorderColors(const struct FLinearColor& ColorToUse, bool CallFunc_GetSelected_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "UpdateAvailableSlotsBorderColors");

	Params::UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params Parms;
	Parms.ColorToUse = ColorToUse;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookCategory* Category                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::SetupAsCategory(class UFortCollectionBookCategory* Category)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "SetupAsCategory");

	Params::UCollectionBookPageListWidget_C_SetupAsCategory_Params Parms;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     Page                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::SetupAsPage(class UFortCollectionBookPage* Page)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "SetupAsPage");

	Params::UCollectionBookPageListWidget_C_SetupAsPage_Params Parms;
	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::OnExpansionChanged(bool bExpanded)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnExpansionChanged");

	Params::UCollectionBookPageListWidget_C_OnExpansionChanged_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "PreConstruct");

	Params::UCollectionBookPageListWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumAvailableSlots                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::OnPageDetailsUpdated(int32 NumAvailableSlots, enum class EFortCollectionBookState State)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnPageDetailsUpdated");

	Params::UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params Parms;
	Parms.NumAvailableSlots = NumAvailableSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               ThisButton                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnSelectionChanged");

	Params::UCollectionBookPageListWidget_C_OnSelectionChanged_Params Parms;
	Parms.ThisButton = ThisButton;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookCategory* K2Node_Event_Category                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookPage*     K2Node_Event_Page                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NumAvailableSlots                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateK2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_ThisButton                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSelected                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::ExecuteUbergraph_CollectionBookPageListWidget(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, class UFortCollectionBookCategory* K2Node_Event_Category, class UFortCollectionBookPage* K2Node_Event_Page, bool K2Node_Event_bExpanded, int32 K2Node_Select_Default, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_NumAvailableSlots, enum class EFortCollectionBookState K2Node_Event_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Select2_Default, class UCommonButton* K2Node_CustomEvent_ThisButton, bool K2Node_CustomEvent_bSelected)
{
	static auto Func = Class->GetFunction("CollectionBookPageListWidget_C", "ExecuteUbergraph_CollectionBookPageListWidget");

	Params::UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.K2Node_Event_Category = K2Node_Event_Category;
	Parms.K2Node_Event_Page = K2Node_Event_Page;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_NumAvailableSlots = K2Node_Event_NumAvailableSlots;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_CustomEvent_ThisButton = K2Node_CustomEvent_ThisButton;
	Parms.K2Node_CustomEvent_bSelected = K2Node_CustomEvent_bSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
