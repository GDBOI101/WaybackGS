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


// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Header                                                           (Parm)
// class FText                        CommanderXP                                                      (Parm)
// class FText                        BoostXP                                                          (Parm)
// class FText                        RestXP                                                           (Parm)
// class FText                        Body                                                             (Parm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UXpBarToolTip_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::CreateXPTooltip(class APlayerController* Owner, class FText Header, class FText CommanderXP, class FText BoostXP, class FText RestXP, class FText Body, class UObject* __WorldContext, class UCommonUserWidget** Out, class UXpBarToolTip_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "CreateXPTooltip");

	Params::UTooltipLibrary_C_CreateXPTooltip_Params Parms;
	Parms.Owner = Owner;
	Parms.Header = Header;
	Parms.CommanderXP = CommanderXP;
	Parms.BoostXP = BoostXP;
	Parms.RestXP = RestXP;
	Parms.Body = Body;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owning_Player                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHeroCoreStat               Data                                                             (Parm, HasGetValueTypeHash)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_CoreStat_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Core_Stat_Tooltip(class APlayerController* Owning_Player, const struct FHeroCoreStat& Data, float Value, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_CoreStat_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Core Stat Tooltip");

	Params::UTooltipLibrary_C_Create_Core_Stat_Tooltip_Params Parms;
	Parms.Owning_Player = Owning_Player;
	Parms.Data = Data;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owning_Player                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                Body_Text                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Header_Text                                                      (Parm)
// class USlateBrushAsset*            Icon_Brush                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_BasicMultiLine_S_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, TArray<class FText>& Body_Text, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_BasicMultiLine_S_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Basic Multi Line Tooltip");

	Params::UTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params Parms;
	Parms.Owning_Player = Owning_Player;
	Parms.Body_Text = Body_Text;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owning_Player                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Header_Text                                                      (Parm)
// class USlateBrushAsset*            Header_Icon                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   ComparedItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Item_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value, class UTooltip_Item_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Compare Item Tooltip");

	Params::UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params Parms;
	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.ComparedItem = ComparedItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owning_Player                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Header_Text                                                      (Parm)
// class USlateBrushAsset*            Header_Icon                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OverrideQuantity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Item_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Item_Tooltip(class APlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int32 OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value, class UTooltip_Item_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Item Tooltip");

	Params::UTooltipLibrary_C_Create_Item_Tooltip_Params Parms;
	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.OverrideQuantity = OverrideQuantity;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Tooltip_Text                                                     (Parm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTooltipLibrary_C::Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, class FText Tooltip_Text, class UObject* __WorldContext, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Set Enabled And Tooltip Text");

	Params::UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params Parms;
	Parms.Widget = Widget;
	Parms.Enabled = Enabled;
	Parms.Tooltip_Text = Tooltip_Text;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owning_Player                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Header_Text                                                      (Parm)
// class USlateBrushAsset*            Icon_Brush                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Custom_S_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Custom_Tooltip(class APlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_Custom_S_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Custom Tooltip");

	Params::UTooltipLibrary_C_Create_Custom_Tooltip_Params Parms;
	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owning_Player                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Body_Text                                                        (Parm)
// class FText                        Header_Text                                                      (Parm)
// class USlateBrushAsset*            Icon_Brush                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Basic_S_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Basic_Tooltip(class APlayerController* Owning_Player, class FText Body_Text, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Basic Tooltip");

	Params::UTooltipLibrary_C_Create_Basic_Tooltip_Params Parms;
	Parms.Owning_Player = Owning_Player;
	Parms.Body_Text = Body_Text;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
