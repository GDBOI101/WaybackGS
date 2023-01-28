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


// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UFriendCodePC_C::GetFriendCodeUrl(class FText* Result, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "GetFriendCodeUrl");

	Params::UFriendCodePC_C_GetFriendCodeUrl_Params Parms;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FriendCodePC.FriendCodePC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodePC_C::Construct()
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "Construct");

	Params::UFriendCodePC_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "OnMouseEnter");

	Params::UFriendCodePC_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UFriendCodePC_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "OnMouseLeave");

	Params::UFriendCodePC_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodePC_C::OnClicked()
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "OnClicked");

	Params::UFriendCodePC_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFriendCodeUrl_Result                                 ()
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFriendCodeUrl_Result2                                ()
// class FText                        CallFunc_GetFriendCodeDescription_ReturnValue                    ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetFriendCodeDisplayName_ReturnValue                    ()
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent2                                         (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UFriendCodePC_C::ExecuteUbergraph_FriendCodePC(int32 EntryPoint, class FText CallFunc_GetFriendCodeUrl_Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetFriendCodeUrl_Result2, class FText CallFunc_GetFriendCodeDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetFriendCodeDisplayName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static auto Func = Class->GetFunction("FriendCodePC_C", "ExecuteUbergraph_FriendCodePC");

	Params::UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFriendCodeUrl_Result = CallFunc_GetFriendCodeUrl_Result;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetFriendCodeUrl_Result2 = CallFunc_GetFriendCodeUrl_Result2;
	Parms.CallFunc_GetFriendCodeDescription_ReturnValue = CallFunc_GetFriendCodeDescription_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetFriendCodeDisplayName_ReturnValue = CallFunc_GetFriendCodeDisplayName_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent2 = K2Node_Event_MouseEvent2;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
