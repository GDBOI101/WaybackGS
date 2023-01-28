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


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PointOfInterest                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Removed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInterestIndicatorWidget_C::RemovePointOfInterest(class AActor* PointOfInterest, bool* Removed, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("InterestIndicatorWidget_C", "RemovePointOfInterest");

	Params::UInterestIndicatorWidget_C_RemovePointOfInterest_Params Parms;
	Parms.PointOfInterest = PointOfInterest;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Removed != nullptr)
		*Removed = Parms.Removed;

}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PointOfInterest                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayText                                                      (Parm)
// class UTexture2D*                  DisplayImage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInterestIndicatorWidget_C::InitPointOfInterest(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("InterestIndicatorWidget_C", "InitPointOfInterest");

	Params::UInterestIndicatorWidget_C_InitPointOfInterest_Params Parms;
	Parms.PointOfInterest = PointOfInterest;
	Parms.DisplayText = DisplayText;
	Parms.DisplayImage = DisplayImage;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInterestIndicatorWidget_C::SetDisplayImage(class UTexture2D* Icon, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("InterestIndicatorWidget_C", "SetDisplayImage");

	Params::UInterestIndicatorWidget_C_SetDisplayImage_Params Parms;
	Parms.Icon = Icon;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInterestIndicatorWidget_C::SetDisplayText(class FText Description, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("InterestIndicatorWidget_C", "SetDisplayText");

	Params::UInterestIndicatorWidget_C_SetDisplayText_Params Parms;
	Parms.Description = Description;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInterestIndicatorWidget_C::Construct()
{
	static auto Func = Class->GetFunction("InterestIndicatorWidget_C", "Construct");

	Params::UInterestIndicatorWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInterestIndicatorWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("InterestIndicatorWidget_C", "Destruct");

	Params::UInterestIndicatorWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterestIndicatorWidget_C::ExecuteUbergraph_InterestIndicatorWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("InterestIndicatorWidget_C", "ExecuteUbergraph_InterestIndicatorWidget");

	Params::UInterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
