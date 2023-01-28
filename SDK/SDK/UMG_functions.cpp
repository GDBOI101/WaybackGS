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


// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskDownloadImage*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const class FString& URL)
{
	static auto Func = Class->GetFunction("AsyncTaskDownloadImage", "DownloadImage");

	Params::UAsyncTaskDownloadImage_DownloadImage_Params Parms;
	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDragDropOperation::Drop(struct FPointerEvent& PointerEvent)
{
	static auto Func = Class->GetFunction("DragDropOperation", "Drop");

	Params::UDragDropOperation_Drop_Params Parms;
	Parms.PointerEvent = PointerEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDragDropOperation::Dragged(struct FPointerEvent& PointerEvent)
{
	static auto Func = Class->GetFunction("DragDropOperation", "Dragged");

	Params::UDragDropOperation_Dragged_Params Parms;
	Parms.PointerEvent = PointerEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDragDropOperation::DragCancelled(struct FPointerEvent& PointerEvent)
{
	static auto Func = Class->GetFunction("DragDropOperation", "DragCancelled");

	Params::UDragDropOperation_DragCancelled_Params Parms;
	Parms.PointerEvent = PointerEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBoolBinding::GetValue()
{
	static auto Func = Class->GetFunction("BoolBinding", "GetValue");

	Params::UBoolBinding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UBrushBinding::GetValue()
{
	static auto Func = Class->GetFunction("BrushBinding", "GetValue");

	Params::UBrushBinding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UCheckedStateBinding::GetValue()
{
	static auto Func = Class->GetFunction("CheckedStateBinding", "GetValue");

	Params::UCheckedStateBinding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateColor UColorBinding::GetSlateValue()
{
	static auto Func = Class->GetFunction("ColorBinding", "GetSlateValue");

	Params::UColorBinding_GetSlateValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UColorBinding::GetLinearValue()
{
	static auto Func = Class->GetFunction("ColorBinding", "GetLinearValue");

	Params::UColorBinding_GetLinearValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFloatBinding::GetValue()
{
	static auto Func = Class->GetFunction("FloatBinding", "GetValue");

	Params::UFloatBinding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInt32Binding::GetValue()
{
	static auto Func = Class->GetFunction("Int32Binding", "GetValue");

	Params::UInt32Binding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMouseCursor UMouseCursorBinding::GetValue()
{
	static auto Func = Class->GetFunction("MouseCursorBinding", "GetValue");

	Params::UMouseCursorBinding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UTextBinding::GetTextValue()
{
	static auto Func = Class->GetFunction("TextBinding", "GetTextValue");

	Params::UTextBinding_GetTextValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTextBinding::GetStringValue()
{
	static auto Func = Class->GetFunction("TextBinding", "GetStringValue");

	Params::UTextBinding_GetStringValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UVisibilityBinding::GetValue()
{
	static auto Func = Class->GetFunction("VisibilityBinding", "GetValue");

	Params::UVisibilityBinding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidgetBinding::GetValue()
{
	static auto Func = Class->GetFunction("WidgetBinding", "GetValue");

	Params::UWidgetBinding_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   LocalCoordinate                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetLocal");

	Params::USlateBlueprintLibrary_ScreenToWidgetLocal_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = Geometry;
	Parms.ScreenPosition = ScreenPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = Parms.LocalCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteCoordinate                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetAbsolute");

	Params::USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = Parms.AbsoluteCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToViewport");

	Params::USlateBlueprintLibrary_ScreenToViewport_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (ViewportPosition != nullptr)
		*ViewportPosition = Parms.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   LocalCoordinate                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PixelPosition                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToViewport");

	Params::USlateBlueprintLibrary_LocalToViewport_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (PixelPosition != nullptr)
		*PixelPosition = Parms.PixelPosition;

	if (ViewportPosition != nullptr)
		*ViewportPosition = Parms.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   LocalCoordinate                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToAbsolute");

	Params::USlateBlueprintLibrary_LocalToAbsolute_Params Parms;
	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteCoordinate                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USlateBlueprintLibrary::IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "IsUnderLocation");

	Params::USlateBlueprintLibrary_IsUnderLocation_Params Parms;
	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::GetLocalSize(struct FGeometry& Geometry)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalSize");

	Params::USlateBlueprintLibrary_GetLocalSize_Params Parms;
	Parms.Geometry = Geometry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSlateBrush                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USlateBlueprintLibrary::EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "EqualEqual_SlateBrush");

	Params::USlateBlueprintLibrary_EqualEqual_SlateBrush_Params Parms;
	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteDesktopCoordinate                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PixelPosition                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToViewport");

	Params::USlateBlueprintLibrary_AbsoluteToViewport_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (PixelPosition != nullptr)
		*PixelPosition = Parms.PixelPosition;

	if (ViewportPosition != nullptr)
		*ViewportPosition = Parms.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteCoordinate                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToLocal");

	Params::USlateBlueprintLibrary_AbsoluteToLocal_Params Parms;
	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetVisibility(enum class ESlateVisibility InVisibility)
{
	static auto Func = Class->GetFunction("Widget", "SetVisibility");

	Params::UWidget_SetVisibility_Params Parms;
	Parms.InVisibility = InVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("Widget", "SetUserFocus");

	Params::UWidget_SetUserFocus_Params Parms;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InToolTipText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UWidget::SetToolTipText(class FText& InToolTipText)
{
	static auto Func = Class->GetFunction("Widget", "SetToolTipText");

	Params::UWidget_SetToolTipText_Params Parms;
	Parms.InToolTipText = InToolTipText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetToolTip(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("Widget", "SetToolTip");

	Params::UWidget_SetToolTip_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Translation                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static auto Func = Class->GetFunction("Widget", "SetRenderTranslation");

	Params::UWidget_SetRenderTranslation_Params Parms;
	Parms.Translation = Translation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Pivot                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static auto Func = Class->GetFunction("Widget", "SetRenderTransformPivot");

	Params::UWidget_SetRenderTransformPivot_Params Parms;
	Parms.Pivot = Pivot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform            InTransform                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static auto Func = Class->GetFunction("Widget", "SetRenderTransform");

	Params::UWidget_SetRenderTransform_Params Parms;
	Parms.InTransform = InTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Shear                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static auto Func = Class->GetFunction("Widget", "SetRenderShear");

	Params::UWidget_SetRenderShear_Params Parms;
	Parms.Shear = Shear;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Scale                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static auto Func = Class->GetFunction("Widget", "SetRenderScale");

	Params::UWidget_SetRenderScale_Params Parms;
	Parms.Scale = Scale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderAngle(float Angle)
{
	static auto Func = Class->GetFunction("Widget", "SetRenderAngle");

	Params::UWidget_SetRenderAngle_Params Parms;
	Parms.Angle = Angle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUINavigationRule       Rule                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        WidgetToFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static auto Func = Class->GetFunction("Widget", "SetNavigationRule");

	Params::UWidget_SetNavigationRule_Params Parms;
	Parms.Direction = Direction;
	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::SetKeyboardFocus()
{
	static auto Func = Class->GetFunction("Widget", "SetKeyboardFocus");

	Params::UWidget_SetKeyboardFocus_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsEnabled                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static auto Func = Class->GetFunction("Widget", "SetIsEnabled");

	Params::UWidget_SetIsEnabled_Params Parms;
	Parms.bInIsEnabled = bInIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMouseCursor            InCursor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetCursor(enum class EMouseCursor InCursor)
{
	static auto Func = Class->GetFunction("Widget", "SetCursor");

	Params::UWidget_SetCursor_Params Parms;
	Parms.InCursor = InCursor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigationRule       Rule                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        WidgetToFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static auto Func = Class->GetFunction("Widget", "SetAllNavigationRules");

	Params::UWidget_SetAllNavigationRules_Params Parms;
	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ResetCursor()
{
	static auto Func = Class->GetFunction("Widget", "ResetCursor");

	Params::UWidget_ResetCursor_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidget::RemoveFromParent()
{
	static auto Func = Class->GetFunction("Widget", "RemoveFromParent");

	Params::UWidget_RemoveFromParent_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "OnReply__DelegateSignature");

	Params::UWidget_OnReply__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("Widget", "OnPointerEvent__DelegateSignature");

	Params::UWidget_OnPointerEvent__DelegateSignature_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::IsVisible()
{
	static auto Func = Class->GetFunction("Widget", "IsVisible");

	Params::UWidget_IsVisible_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsHovered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::IsHovered()
{
	static auto Func = Class->GetFunction("Widget", "IsHovered");

	Params::UWidget_IsHovered_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::InvalidateLayoutAndVolatility()
{
	static auto Func = Class->GetFunction("Widget", "InvalidateLayoutAndVolatility");

	Params::UWidget_InvalidateLayoutAndVolatility_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("Widget", "HasUserFocusedDescendants");

	Params::UWidget_HasUserFocusedDescendants_Params Parms;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasUserFocus(class APlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("Widget", "HasUserFocus");

	Params::UWidget_HasUserFocus_Params Parms;
	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasMouseCapture()
{
	static auto Func = Class->GetFunction("Widget", "HasMouseCapture");

	Params::UWidget_HasMouseCapture_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasKeyboardFocus()
{
	static auto Func = Class->GetFunction("Widget", "HasKeyboardFocus");

	Params::UWidget_HasKeyboardFocus_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasFocusedDescendants()
{
	static auto Func = Class->GetFunction("Widget", "HasFocusedDescendants");

	Params::UWidget_HasFocusedDescendants_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasAnyUserFocus()
{
	static auto Func = Class->GetFunction("Widget", "HasAnyUserFocus");

	Params::UWidget_HasAnyUserFocus_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetWidget__DelegateSignature");

	Params::UWidget_GetWidget__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UWidget::GetVisibility()
{
	static auto Func = Class->GetFunction("Widget", "GetVisibility");

	Params::UWidget_GetVisibility_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWidget::GetText__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetText__DelegateSignature");

	Params::UWidget_GetText__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetSlateVisibility__DelegateSignature");

	Params::UWidget_GetSlateVisibility__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetSlateColor__DelegateSignature");

	Params::UWidget_GetSlateColor__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetSlateBrush__DelegateSignature");

	Params::UWidget_GetSlateBrush__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelWidget* UWidget::GetParent()
{
	static auto Func = Class->GetFunction("Widget", "GetParent");

	Params::UWidget_GetParent_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetOwningPlayer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UWidget::GetOwningPlayer()
{
	static auto Func = Class->GetFunction("Widget", "GetOwningPlayer");

	Params::UWidget_GetOwningPlayer_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMouseCursor UWidget::GetMouseCursor__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetMouseCursor__DelegateSignature");

	Params::UWidget_GetMouseCursor__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetLinearColor__DelegateSignature");

	Params::UWidget_GetLinearColor__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::GetIsEnabled()
{
	static auto Func = Class->GetFunction("Widget", "GetIsEnabled");

	Params::UWidget_GetIsEnabled_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWidget::GetInt32__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetInt32__DelegateSignature");

	Params::UWidget_GetInt32__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidget::GetFloat__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetFloat__DelegateSignature");

	Params::UWidget_GetFloat__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidget::GetDesiredSize()
{
	static auto Func = Class->GetFunction("Widget", "GetDesiredSize");

	Params::UWidget_GetDesiredSize_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetCheckBoxState__DelegateSignature");

	Params::UWidget_GetCheckBoxState__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGeometry UWidget::GetCachedGeometry()
{
	static auto Func = Class->GetFunction("Widget", "GetCachedGeometry");

	Params::UWidget_GetCachedGeometry_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::GetBool__DelegateSignature()
{
	static auto Func = Class->GetFunction("Widget", "GetBool__DelegateSignature");

	Params::UWidget_GetBool__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Item                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const class FString& Item)
{
	static auto Func = Class->GetFunction("Widget", "GenerateWidgetForString__DelegateSignature");

	Params::UWidget_GenerateWidgetForString__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("Widget", "GenerateWidgetForObject__DelegateSignature");

	Params::UWidget_GenerateWidgetForObject__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::ForceVolatile(bool bForce)
{
	static auto Func = Class->GetFunction("Widget", "ForceVolatile");

	Params::UWidget_ForceVolatile_Params Parms;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ForceLayoutPrepass()
{
	static auto Func = Class->GetFunction("Widget", "ForceLayoutPrepass");

	Params::UWidget_ForceLayoutPrepass_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::UnregisterInputComponent()
{
	static auto Func = Class->GetFunction("UserWidget", "UnregisterInputComponent");

	Params::UUserWidget_UnregisterInputComponent_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("UserWidget", "Tick");

	Params::UUserWidget_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::StopListeningForInputAction(class FName ActionName, enum class EInputEvent EventType)
{
	static auto Func = Class->GetFunction("UserWidget", "StopListeningForInputAction");

	Params::UUserWidget_StopListeningForInputAction_Params Parms;
	Parms.ActionName = ActionName;
	Parms.EventType = EventType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::StopListeningForAllInputActions()
{
	static auto Func = Class->GetFunction("UserWidget", "StopListeningForAllInputActions");

	Params::UUserWidget_StopListeningForAllInputActions_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.StopAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static auto Func = Class->GetFunction("UserWidget", "StopAnimation");

	Params::UUserWidget_StopAnimation_Params Parms;
	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRemoveDPIScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static auto Func = Class->GetFunction("UserWidget", "SetPositionInViewport");

	Params::UUserWidget_SetPositionInViewport_Params Parms;
	Parms.Position = Position;
	Parms.bRemoveDPIScale = bRemoveDPIScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static auto Func = Class->GetFunction("UserWidget", "SetPlaybackSpeed");

	Params::UUserWidget_SetPlaybackSpeed_Params Parms;
	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("UserWidget", "SetPadding");

	Params::UUserWidget_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           LocalPlayerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static auto Func = Class->GetFunction("UserWidget", "SetOwningPlayer");

	Params::UUserWidget_SetOwningPlayer_Params Parms;
	Parms.LocalPlayerController = LocalPlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto Func = Class->GetFunction("UserWidget", "SetOwningLocalPlayer");

	Params::UUserWidget_SetOwningLocalPlayer_Params Parms;
	Parms.LocalPlayer = LocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay)
{
	static auto Func = Class->GetFunction("UserWidget", "SetNumLoopsToPlay");

	Params::UUserWidget_SetNumLoopsToPlay_Params Parms;
	Parms.InAnimation = InAnimation;
	Parms.NumLoopsToPlay = NumLoopsToPlay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetInputActionPriority(int32 NewPriority)
{
	static auto Func = Class->GetFunction("UserWidget", "SetInputActionPriority");

	Params::UUserWidget_SetInputActionPriority_Params Parms;
	Parms.NewPriority = NewPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bShouldBlock                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static auto Func = Class->GetFunction("UserWidget", "SetInputActionBlocking");

	Params::UUserWidget_SetInputActionBlocking_Params Parms;
	Parms.bShouldBlock = bShouldBlock;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (Parm, NativeAccessSpecifierPublic)

void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto Func = Class->GetFunction("UserWidget", "SetForegroundColor");

	Params::UUserWidget_SetForegroundColor_Params Parms;
	Parms.InForegroundColor = InForegroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static auto Func = Class->GetFunction("UserWidget", "SetDesiredSizeInViewport");

	Params::UUserWidget_SetDesiredSizeInViewport_Params Parms;
	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto Func = Class->GetFunction("UserWidget", "SetColorAndOpacity");

	Params::UUserWidget_SetColorAndOpacity_Params Parms;
	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    Anchors                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static auto Func = Class->GetFunction("UserWidget", "SetAnchorsInViewport");

	Params::UUserWidget_SetAnchorsInViewport_Params Parms;
	Parms.Anchors = Anchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Alignment                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static auto Func = Class->GetFunction("UserWidget", "SetAlignmentInViewport");

	Params::UUserWidget_SetAlignmentInViewport_Params Parms;
	Parms.Alignment = Alignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto Func = Class->GetFunction("UserWidget", "ReverseAnimation");

	Params::UUserWidget_ReverseAnimation_Params Parms;
	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.RemoveFromViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::RemoveFromViewport()
{
	static auto Func = Class->GetFunction("UserWidget", "RemoveFromViewport");

	Params::UUserWidget_RemoveFromViewport_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::RegisterInputComponent()
{
	static auto Func = Class->GetFunction("UserWidget", "RegisterInputComponent");

	Params::UUserWidget_RegisterInputComponent_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UserWidget", "PreConstruct");

	Params::UUserWidget_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  SoundToPlay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static auto Func = Class->GetFunction("UserWidget", "PlaySound");

	Params::UUserWidget_PlaySound_Params Parms;
	Parms.SoundToPlay = SoundToPlay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.PlayAnimationTo
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAtTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAtTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static auto Func = Class->GetFunction("UserWidget", "PlayAnimationTo");

	Params::UUserWidget_PlayAnimationTo_Params Parms;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAtTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static auto Func = Class->GetFunction("UserWidget", "PlayAnimation");

	Params::UUserWidget_PlayAnimation_Params Parms;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto Func = Class->GetFunction("UserWidget", "PauseAnimation");

	Params::UUserWidget_PauseAnimation_Params Parms;
	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnTouchStarted");

	Params::UUserWidget_OnTouchStarted_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnTouchMoved");

	Params::UUserWidget_OnTouchMoved_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               GestureEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, struct FPointerEvent& GestureEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnTouchGesture");

	Params::UUserWidget_OnTouchGesture_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.GestureEvent = GestureEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnTouchEnded");

	Params::UUserWidget_OnTouchEnded_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnPreviewMouseButtonDown");

	Params::UUserWidget_OnPreviewMouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent                   InKeyEvent                                                       (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnPreviewKeyDown");

	Params::UUserWidget_OnPreviewKeyDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::OnPaint(struct FPaintContext& Context)
{
	static auto Func = Class->GetFunction("UserWidget", "OnPaint");

	Params::UUserWidget_OnPaint_Params Parms;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMouseWheel");

	Params::UUserWidget_OnMouseWheel_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMouseMove");

	Params::UUserWidget_OnMouseMove_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserWidget::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMouseLeave");

	Params::UUserWidget_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMouseEnter");

	Params::UUserWidget_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMouseButtonUp");

	Params::UUserWidget_OnMouseButtonUp_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMouseButtonDown");

	Params::UUserWidget_OnMouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMouseButtonDoubleClick");

	Params::UUserWidget_OnMouseButtonDoubleClick_Params Parms;
	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FMotionEvent                InMotionEvent                                                    (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnMotionDetected");

	Params::UUserWidget_OnMotionDetected_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InMotionEvent = InMotionEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent                   InKeyEvent                                                       (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnKeyUp");

	Params::UUserWidget_OnKeyUp_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent                   InKeyEvent                                                       (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnKeyDown");

	Params::UUserWidget_OnKeyDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FCharacterEvent             InCharacterEvent                                                 (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnKeyChar");

	Params::UUserWidget_OnKeyChar_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InCharacterEvent = InCharacterEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnFocusReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnFocusReceived");

	Params::UUserWidget_OnFocusReceived_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnFocusLost");

	Params::UUserWidget_OnFocusLost_Params Parms;
	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnDrop");

	Params::UUserWidget_OnDrop_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnDragOver");

	Params::UUserWidget_OnDragOver_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnDragLeave");

	Params::UUserWidget_OnDragLeave_Params Parms;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnDragEnter");

	Params::UUserWidget_OnDragEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnDragDetected");

	Params::UUserWidget_OnDragDetected_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnDragCancelled");

	Params::UUserWidget_OnDragCancelled_Params Parms;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnControllerButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerEvent            ControllerEvent                                                  (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnControllerButtonReleased");

	Params::UUserWidget_OnControllerButtonReleased_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.ControllerEvent = ControllerEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnControllerButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerEvent            ControllerEvent                                                  (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnControllerButtonPressed");

	Params::UUserWidget_OnControllerButtonPressed_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.ControllerEvent = ControllerEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnControllerAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerEvent            ControllerEvent                                                  (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnControllerAnalogValueChanged");

	Params::UUserWidget_OnControllerAnalogValueChanged_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.ControllerEvent = ControllerEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnAnimationStarted");

	Params::UUserWidget_OnAnimationStarted_Params Parms;
	Parms.Animation = Animation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("UserWidget", "OnAnimationFinished");

	Params::UUserWidget_OnAnimationFinished_Params Parms;
	Parms.Animation = Animation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static auto Func = Class->GetFunction("UserWidget", "OnAnalogValueChanged");

	Params::UUserWidget_OnAnalogValueChanged_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConsume                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::ListenForInputAction(class FName ActionName, enum class EInputEvent EventType, bool bConsume, UDelegateProperty_ Callback)
{
	static auto Func = Class->GetFunction("UserWidget", "ListenForInputAction");

	Params::UUserWidget_ListenForInputAction_Params Parms;
	Parms.ActionName = ActionName;
	Parms.EventType = EventType;
	Parms.bConsume = bConsume;
	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsPlayingAnimation()
{
	static auto Func = Class->GetFunction("UserWidget", "IsPlayingAnimation");

	Params::UUserWidget_IsPlayingAnimation_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsListeningForInputAction(class FName ActionName)
{
	static auto Func = Class->GetFunction("UserWidget", "IsListeningForInputAction");

	Params::UUserWidget_IsListeningForInputAction_Params Parms;
	Parms.ActionName = ActionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsInViewport()
{
	static auto Func = Class->GetFunction("UserWidget", "IsInViewport");

	Params::UUserWidget_IsInViewport_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsInteractable()
{
	static auto Func = Class->GetFunction("UserWidget", "IsInteractable");

	Params::UUserWidget_IsInteractable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsAnyAnimationPlaying()
{
	static auto Func = Class->GetFunction("UserWidget", "IsAnyAnimationPlaying");

	Params::UUserWidget_IsAnyAnimationPlaying_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
{
	static auto Func = Class->GetFunction("UserWidget", "IsAnimationPlayingForward");

	Params::UUserWidget_IsAnimationPlayingForward_Params Parms;
	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
{
	static auto Func = Class->GetFunction("UserWidget", "IsAnimationPlaying");

	Params::UUserWidget_IsAnimationPlaying_Params Parms;
	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static auto Func = Class->GetFunction("UserWidget", "GetOwningPlayerPawn");

	Params::UUserWidget_GetOwningPlayerPawn_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UUserWidget::GetOwningLocalPlayer()
{
	static auto Func = Class->GetFunction("UserWidget", "GetOwningLocalPlayer");

	Params::UUserWidget_GetOwningLocalPlayer_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::GetIsVisible()
{
	static auto Func = Class->GetFunction("UserWidget", "GetIsVisible");

	Params::UUserWidget_GetIsVisible_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
{
	static auto Func = Class->GetFunction("UserWidget", "GetAnimationCurrentTime");

	Params::UUserWidget_GetAnimationCurrentTime_Params Parms;
	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static auto Func = Class->GetFunction("UserWidget", "GetAnchorsInViewport");

	Params::UUserWidget_GetAnchorsInViewport_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static auto Func = Class->GetFunction("UserWidget", "GetAlignmentInViewport");

	Params::UUserWidget_GetAlignmentInViewport_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Destruct()
{
	static auto Func = Class->GetFunction("UserWidget", "Destruct");

	Params::UUserWidget_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Construct()
{
	static auto Func = Class->GetFunction("UserWidget", "Construct");

	Params::UUserWidget_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.AddToViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::AddToViewport(int32 ZOrder)
{
	static auto Func = Class->GetFunction("UserWidget", "AddToViewport");

	Params::UUserWidget_AddToViewport_Params Parms;
	Parms.ZOrder = ZOrder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::AddToPlayerScreen(int32 ZOrder)
{
	static auto Func = Class->GetFunction("UserWidget", "AddToPlayerScreen");

	Params::UUserWidget_AddToPlayerScreen_Params Parms;
	Parms.ZOrder = ZOrder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("BackgroundBlurSlot", "SetVerticalAlignment");

	Params::UBackgroundBlurSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("BackgroundBlurSlot", "SetPadding");

	Params::UBackgroundBlurSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("BackgroundBlurSlot", "SetHorizontalAlignment");

	Params::UBackgroundBlurSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorderSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("BorderSlot", "SetVerticalAlignment");

	Params::UBorderSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("BorderSlot", "SetPadding");

	Params::UBorderSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorderSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("BorderSlot", "SetHorizontalAlignment");

	Params::UBorderSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButtonSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("ButtonSlot", "SetVerticalAlignment");

	Params::UButtonSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("ButtonSlot", "SetPadding");

	Params::UButtonSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButtonSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("ButtonSlot", "SetHorizontalAlignment");

	Params::UButtonSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InZOrder                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetZOrder(int32 InZOrder)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetZOrder");

	Params::UCanvasPanelSlot_SetZOrder_Params Parms;
	Parms.InZOrder = InZOrder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetSize");

	Params::UCanvasPanelSlot_SetSize_Params Parms;
	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPosition                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetPosition");

	Params::UCanvasPanelSlot_SetPosition_Params Parms;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InOffset                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetOffsets");

	Params::UCanvasPanelSlot_SetOffsets_Params Parms;
	Parms.InOffset = InOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMinimumAnchors                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetMinimum");

	Params::UCanvasPanelSlot_SetMinimum_Params Parms;
	Parms.InMinimumAnchors = InMinimumAnchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMaximumAnchors                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetMaximum");

	Params::UCanvasPanelSlot_SetMaximum_Params Parms;
	Parms.InMaximumAnchors = InMaximumAnchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnchorData                 InLayoutData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetLayout(struct FAnchorData& InLayoutData)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetLayout");

	Params::UCanvasPanelSlot_SetLayout_Params Parms;
	Parms.InLayoutData = InLayoutData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbAutoSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetAutoSize");

	Params::UCanvasPanelSlot_SetAutoSize_Params Parms;
	Parms.InbAutoSize = InbAutoSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    InAnchors                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetAnchors");

	Params::UCanvasPanelSlot_SetAnchors_Params Parms;
	Parms.InAnchors = InAnchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InAlignment                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "SetAlignment");

	Params::UCanvasPanelSlot_SetAlignment_Params Parms;
	Parms.InAlignment = InAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCanvasPanelSlot::GetZOrder()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetZOrder");

	Params::UCanvasPanelSlot_GetZOrder_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UCanvasPanelSlot::GetSize()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetSize");

	Params::UCanvasPanelSlot_GetSize_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetPosition");

	Params::UCanvasPanelSlot_GetPosition_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetOffsets");

	Params::UCanvasPanelSlot_GetOffsets_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetLayout");

	Params::UCanvasPanelSlot_GetLayout_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCanvasPanelSlot::GetAutoSize()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetAutoSize");

	Params::UCanvasPanelSlot_GetAutoSize_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetAnchors");

	Params::UCanvasPanelSlot_GetAnchors_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static auto Func = Class->GetFunction("CanvasPanelSlot", "GetAlignment");

	Params::UCanvasPanelSlot_GetAlignment_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("GridSlot", "SetVerticalAlignment");

	Params::UGridSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRowSpan                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetRowSpan(int32 InRowSpan)
{
	static auto Func = Class->GetFunction("GridSlot", "SetRowSpan");

	Params::UGridSlot_SetRowSpan_Params Parms;
	Parms.InRowSpan = InRowSpan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetRow(int32 InRow)
{
	static auto Func = Class->GetFunction("GridSlot", "SetRow");

	Params::UGridSlot_SetRow_Params Parms;
	Parms.InRow = InRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGridSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("GridSlot", "SetPadding");

	Params::UGridSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InLayer                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetLayer(int32 InLayer)
{
	static auto Func = Class->GetFunction("GridSlot", "SetLayer");

	Params::UGridSlot_SetLayer_Params Parms;
	Parms.InLayer = InLayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("GridSlot", "SetHorizontalAlignment");

	Params::UGridSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumnSpan                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetColumnSpan(int32 InColumnSpan)
{
	static auto Func = Class->GetFunction("GridSlot", "SetColumnSpan");

	Params::UGridSlot_SetColumnSpan_Params Parms;
	Parms.InColumnSpan = InColumnSpan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetColumn(int32 InColumn)
{
	static auto Func = Class->GetFunction("GridSlot", "SetColumn");

	Params::UGridSlot_SetColumn_Params Parms;
	Parms.InColumn = InColumn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("HorizontalBoxSlot", "SetVerticalAlignment");

	Params::UHorizontalBoxSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static auto Func = Class->GetFunction("HorizontalBoxSlot", "SetSize");

	Params::UHorizontalBoxSlot_SetSize_Params Parms;
	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("HorizontalBoxSlot", "SetPadding");

	Params::UHorizontalBoxSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("HorizontalBoxSlot", "SetHorizontalAlignment");

	Params::UHorizontalBoxSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOverlaySlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("OverlaySlot", "SetVerticalAlignment");

	Params::UOverlaySlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("OverlaySlot", "SetPadding");

	Params::UOverlaySlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOverlaySlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("OverlaySlot", "SetHorizontalAlignment");

	Params::UOverlaySlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("ScaleBoxSlot", "SetVerticalAlignment");

	Params::UScaleBoxSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("ScaleBoxSlot", "SetPadding");

	Params::UScaleBoxSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("ScaleBoxSlot", "SetHorizontalAlignment");

	Params::UScaleBoxSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("ScrollBoxSlot", "SetPadding");

	Params::UScrollBoxSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("ScrollBoxSlot", "SetHorizontalAlignment");

	Params::UScrollBoxSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("SizeBoxSlot", "SetVerticalAlignment");

	Params::USizeBoxSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("SizeBoxSlot", "SetPadding");

	Params::USizeBoxSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("SizeBoxSlot", "SetHorizontalAlignment");

	Params::USizeBoxSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("UniformGridSlot", "SetVerticalAlignment");

	Params::UUniformGridSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetRow(int32 InRow)
{
	static auto Func = Class->GetFunction("UniformGridSlot", "SetRow");

	Params::UUniformGridSlot_SetRow_Params Parms;
	Parms.InRow = InRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("UniformGridSlot", "SetHorizontalAlignment");

	Params::UUniformGridSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetColumn(int32 InColumn)
{
	static auto Func = Class->GetFunction("UniformGridSlot", "SetColumn");

	Params::UUniformGridSlot_SetColumn_Params Parms;
	Parms.InColumn = InColumn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("VerticalBoxSlot", "SetVerticalAlignment");

	Params::UVerticalBoxSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static auto Func = Class->GetFunction("VerticalBoxSlot", "SetSize");

	Params::UVerticalBoxSlot_SetSize_Params Parms;
	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("VerticalBoxSlot", "SetPadding");

	Params::UVerticalBoxSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("VerticalBoxSlot", "SetHorizontalAlignment");

	Params::UVerticalBoxSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcherSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("WidgetSwitcherSlot", "SetVerticalAlignment");

	Params::UWidgetSwitcherSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("WidgetSwitcherSlot", "SetPadding");

	Params::UWidgetSwitcherSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcherSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("WidgetSwitcherSlot", "SetHorizontalAlignment");

	Params::UWidgetSwitcherSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::RemoveChildAt(int32 Index)
{
	static auto Func = Class->GetFunction("PanelWidget", "RemoveChildAt");

	Params::UPanelWidget_RemoveChildAt_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static auto Func = Class->GetFunction("PanelWidget", "RemoveChild");

	Params::UPanelWidget_RemoveChild_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::HasChild(class UWidget* Content)
{
	static auto Func = Class->GetFunction("PanelWidget", "HasChild");

	Params::UPanelWidget_HasChild_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::HasAnyChildren()
{
	static auto Func = Class->GetFunction("PanelWidget", "HasAnyChildren");

	Params::UPanelWidget_HasAnyChildren_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPanelWidget::GetChildrenCount()
{
	static auto Func = Class->GetFunction("PanelWidget", "GetChildrenCount");

	Params::UPanelWidget_GetChildrenCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPanelWidget::GetChildIndex(class UWidget* Content)
{
	static auto Func = Class->GetFunction("PanelWidget", "GetChildIndex");

	Params::UPanelWidget_GetChildIndex_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UPanelWidget::GetChildAt(int32 Index)
{
	static auto Func = Class->GetFunction("PanelWidget", "GetChildAt");

	Params::UPanelWidget_GetChildAt_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.ClearChildren
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPanelWidget::ClearChildren()
{
	static auto Func = Class->GetFunction("PanelWidget", "ClearChildren");

	Params::UPanelWidget_ClearChildren_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static auto Func = Class->GetFunction("PanelWidget", "AddChild");

	Params::UPanelWidget_AddChild_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
{
	static auto Func = Class->GetFunction("ContentWidget", "SetContent");

	Params::UContentWidget_SetContent_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UContentWidget::GetContentSlot()
{
	static auto Func = Class->GetFunction("ContentWidget", "GetContentSlot");

	Params::UContentWidget_GetContentSlot_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarArea::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("WindowTitleBarArea", "SetVerticalAlignment");

	Params::UWindowTitleBarArea_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("WindowTitleBarArea", "SetPadding");

	Params::UWindowTitleBarArea_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarArea::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("WindowTitleBarArea", "SetHorizontalAlignment");

	Params::UWindowTitleBarArea_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarAreaSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetVerticalAlignment");

	Params::UWindowTitleBarAreaSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetPadding");

	Params::UWindowTitleBarAreaSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetHorizontalAlignment");

	Params::UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("WrapBoxSlot", "SetVerticalAlignment");

	Params::UWrapBoxSlot_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("WrapBoxSlot", "SetPadding");

	Params::UWrapBoxSlot_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("WrapBoxSlot", "SetHorizontalAlignment");

	Params::UWrapBoxSlot_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFillSpanWhenLessThan                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static auto Func = Class->GetFunction("WrapBoxSlot", "SetFillSpanWhenLessThan");

	Params::UWrapBoxSlot_SetFillSpanWhenLessThan_Params Parms;
	Parms.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbFillEmptySpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static auto Func = Class->GetFunction("WrapBoxSlot", "SetFillEmptySpace");

	Params::UWrapBoxSlot_SetFillEmptySpace_Params Parms;
	Parms.InbFillEmptySpace = InbFillEmptySpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCircularThrobber::SetRadius(float InRadius)
{
	static auto Func = Class->GetFunction("CircularThrobber", "SetRadius");

	Params::UCircularThrobber_SetRadius_Params Parms;
	Parms.InRadius = InRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPeriod                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCircularThrobber::SetPeriod(float InPeriod)
{
	static auto Func = Class->GetFunction("CircularThrobber", "SetPeriod");

	Params::UCircularThrobber_SetPeriod_Params Parms;
	Parms.InPeriod = InPeriod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCircularThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static auto Func = Class->GetFunction("CircularThrobber", "SetNumberOfPieces");

	Params::UCircularThrobber_SetNumberOfPieces_Params Parms;
	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxString::SetSelectedOption(const class FString& Option)
{
	static auto Func = Class->GetFunction("ComboBoxString", "SetSelectedOption");

	Params::UComboBoxString_SetSelectedOption_Params Parms;
	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComboBoxString::RemoveOption(const class FString& Option)
{
	static auto Func = Class->GetFunction("ComboBoxString", "RemoveOption");

	Params::UComboBoxString_RemoveOption_Params Parms;
	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::RefreshOptions()
{
	static auto Func = Class->GetFunction("ComboBoxString", "RefreshOptions");

	Params::UComboBoxString_RefreshOptions_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      SelectedItem                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static auto Func = Class->GetFunction("ComboBoxString", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("ComboBoxString", "OnOpeningEvent__DelegateSignature");

	Params::UComboBoxString_OnOpeningEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UComboBoxString::GetSelectedOption()
{
	static auto Func = Class->GetFunction("ComboBoxString", "GetSelectedOption");

	Params::UComboBoxString_GetSelectedOption_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UComboBoxString::GetOptionCount()
{
	static auto Func = Class->GetFunction("ComboBoxString", "GetOptionCount");

	Params::UComboBoxString_GetOptionCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UComboBoxString::GetOptionAtIndex(int32 Index)
{
	static auto Func = Class->GetFunction("ComboBoxString", "GetOptionAtIndex");

	Params::UComboBoxString_GetOptionAtIndex_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UComboBoxString::FindOptionIndex(const class FString& Option)
{
	static auto Func = Class->GetFunction("ComboBoxString", "FindOptionIndex");

	Params::UComboBoxString_FindOptionIndex_Params Parms;
	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearSelection()
{
	static auto Func = Class->GetFunction("ComboBoxString", "ClearSelection");

	Params::UComboBoxString_ClearSelection_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearOptions()
{
	static auto Func = Class->GetFunction("ComboBoxString", "ClearOptions");

	Params::UComboBoxString_ClearOptions_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxString::AddOption(const class FString& Option)
{
	static auto Func = Class->GetFunction("ComboBoxString", "AddOption");

	Params::UComboBoxString_AddOption_Params Parms;
	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UEditableText::SetText(class FText InText)
{
	static auto Func = Class->GetFunction("EditableText", "SetText");

	Params::UEditableText_SetText_Params Parms;
	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsReadyOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static auto Func = Class->GetFunction("EditableText", "SetIsReadOnly");

	Params::UEditableText_SetIsReadOnly_Params Parms;
	Parms.InbIsReadyOnly = InbIsReadyOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsPassword                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static auto Func = Class->GetFunction("EditableText", "SetIsPassword");

	Params::UEditableText_SetIsPassword_Params Parms;
	Parms.InbIsPassword = InbIsPassword;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Parm, NativeAccessSpecifierPublic)

void UEditableText::SetHintText(class FText InHintText)
{
	static auto Func = Class->GetFunction("EditableText", "SetHintText");

	Params::UEditableText_SetHintText_Params Parms;
	Parms.InHintText = InHintText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("EditableText", "OnEditableTextCommittedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("EditableText", "OnEditableTextChangedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEditableText::GetText()
{
	static auto Func = Class->GetFunction("EditableText", "GetText");

	Params::UEditableText_GetText_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UEditableTextBox::SetText(class FText InText)
{
	static auto Func = Class->GetFunction("EditableTextBox", "SetText");

	Params::UEditableTextBox_SetText_Params Parms;
	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (Parm, NativeAccessSpecifierPublic)

void UEditableTextBox::SetError(class FText InError)
{
	static auto Func = Class->GetFunction("EditableTextBox", "SetError");

	Params::UEditableTextBox_SetError_Params Parms;
	Parms.InError = InError;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableTextBox::HasError()
{
	static auto Func = Class->GetFunction("EditableTextBox", "HasError");

	Params::UEditableTextBox_HasError_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEditableTextBox::GetText()
{
	static auto Func = Class->GetFunction("EditableTextBox", "GetText");

	Params::UEditableTextBox_GetText_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableTextBox::ClearError()
{
	static auto Func = Class->GetFunction("EditableTextBox", "ClearError");

	Params::UEditableTextBox_ClearError_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static auto Func = Class->GetFunction("ExpandableArea", "SetIsExpanded_Animated");

	Params::UExpandableArea_SetIsExpanded_Animated_Params Parms;
	Parms.IsExpanded = IsExpanded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static auto Func = Class->GetFunction("ExpandableArea", "SetIsExpanded");

	Params::UExpandableArea_SetIsExpanded_Params Parms;
	Parms.IsExpanded = IsExpanded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExpandableArea::GetIsExpanded()
{
	static auto Func = Class->GetFunction("ExpandableArea", "GetIsExpanded");

	Params::UExpandableArea_GetIsExpanded_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetOpacity(float InOpacity)
{
	static auto Func = Class->GetFunction("Image", "SetOpacity");

	Params::UImage_SetOpacity_Params Parms;
	Parms.InOpacity = InOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto Func = Class->GetFunction("Image", "SetColorAndOpacity");

	Params::UImage_SetColorAndOpacity_Params Parms;
	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static auto Func = Class->GetFunction("Image", "SetBrushFromTextureDynamic");

	Params::UImage_SetBrushFromTextureDynamic_Params Parms;
	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static auto Func = Class->GetFunction("Image", "SetBrushFromTexture");

	Params::UImage_SetBrushFromTexture_Params Parms;
	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto Func = Class->GetFunction("Image", "SetBrushFromMaterial");

	Params::UImage_SetBrushFromMaterial_Params Parms;
	Parms.Material = Material;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto Func = Class->GetFunction("Image", "SetBrushFromAsset");

	Params::UImage_SetBrushFromAsset_Params Parms;
	Parms.Asset = Asset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UImage::SetBrush(struct FSlateBrush& InBrush)
{
	static auto Func = Class->GetFunction("Image", "SetBrush");

	Params::UImage_SetBrush_Params Parms;
	Parms.InBrush = InBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static auto Func = Class->GetFunction("Image", "GetDynamicMaterial");

	Params::UImage_GetDynamicMaterial_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputChord                 InSelectedKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static auto Func = Class->GetFunction("InputKeySelector", "SetSelectedKey");

	Params::UInputKeySelector_SetSelectedKey_Params Parms;
	Parms.InSelectedKey = InSelectedKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InKeySelectionText                                               (Parm, NativeAccessSpecifierPublic)

void UInputKeySelector::SetKeySelectionText(class FText InKeySelectionText)
{
	static auto Func = Class->GetFunction("InputKeySelector", "SetKeySelectionText");

	Params::UInputKeySelector_SetKeySelectionText_Params Parms;
	Parms.InKeySelectionText = InKeySelectionText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowModifierKeys                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static auto Func = Class->GetFunction("InputKeySelector", "SetAllowModifierKeys");

	Params::UInputKeySelector_SetAllowModifierKeys_Params Parms;
	Parms.bInAllowModifierKeys = bInAllowModifierKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto Func = Class->GetFunction("InputKeySelector", "OnKeySelected__DelegateSignature");

	Params::UInputKeySelector_OnKeySelected__DelegateSignature_Params Parms;
	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("InputKeySelector", "OnIsSelectingKeyChanged__DelegateSignature");

	Params::UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputKeySelector::GetIsSelectingKey()
{
	static auto Func = Class->GetFunction("InputKeySelector", "GetIsSelectingKey");

	Params::UInputKeySelector_GetIsSelectingKey_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static auto Func = Class->GetFunction("CanvasPanel", "AddChildToCanvas");

	Params::UCanvasPanel_AddChildToCanvas_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("BackgroundBlur", "SetVerticalAlignment");

	Params::UBackgroundBlur_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("BackgroundBlur", "SetPadding");

	Params::UBackgroundBlur_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetLowQualityFallbackBrush(struct FSlateBrush& InBrush)
{
	static auto Func = Class->GetFunction("BackgroundBlur", "SetLowQualityFallbackBrush");

	Params::UBackgroundBlur_SetLowQualityFallbackBrush_Params Parms;
	Parms.InBrush = InBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("BackgroundBlur", "SetHorizontalAlignment");

	Params::UBackgroundBlur_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStrength                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetBlurStrength(float InStrength)
{
	static auto Func = Class->GetFunction("BackgroundBlur", "SetBlurStrength");

	Params::UBackgroundBlur_SetBlurStrength_Params Parms;
	Parms.InStrength = InStrength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InBlurRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetBlurRadius(int32 InBlurRadius)
{
	static auto Func = Class->GetFunction("BackgroundBlur", "SetBlurRadius");

	Params::UBackgroundBlur_SetBlurRadius_Params Parms;
	Parms.InBlurRadius = InBlurRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInApplyAlphaToBlur                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static auto Func = Class->GetFunction("BackgroundBlur", "SetApplyAlphaToBlur");

	Params::UBackgroundBlur_SetApplyAlphaToBlur_Params Parms;
	Parms.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static auto Func = Class->GetFunction("Border", "SetVerticalAlignment");

	Params::UBorder_SetVerticalAlignment_Params Parms;
	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static auto Func = Class->GetFunction("Border", "SetPadding");

	Params::UBorder_SetPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static auto Func = Class->GetFunction("Border", "SetHorizontalAlignment");

	Params::UBorder_SetHorizontalAlignment_Params Parms;
	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InScale                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static auto Func = Class->GetFunction("Border", "SetDesiredSizeScale");

	Params::UBorder_SetDesiredSizeScale_Params Parms;
	Parms.InScale = InScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InContentColorAndOpacity                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static auto Func = Class->GetFunction("Border", "SetContentColorAndOpacity");

	Params::UBorder_SetContentColorAndOpacity_Params Parms;
	Parms.InContentColorAndOpacity = InContentColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static auto Func = Class->GetFunction("Border", "SetBrushFromTexture");

	Params::UBorder_SetBrushFromTexture_Params Parms;
	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto Func = Class->GetFunction("Border", "SetBrushFromMaterial");

	Params::UBorder_SetBrushFromMaterial_Params Parms;
	Parms.Material = Material;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto Func = Class->GetFunction("Border", "SetBrushFromAsset");

	Params::UBorder_SetBrushFromAsset_Params Parms;
	Parms.Asset = Asset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static auto Func = Class->GetFunction("Border", "SetBrushColor");

	Params::UBorder_SetBrushColor_Params Parms;
	Parms.InBrushColor = InBrushColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBorder::SetBrush(struct FSlateBrush& InBrush)
{
	static auto Func = Class->GetFunction("Border", "SetBrush");

	Params::UBorder_SetBrush_Params Parms;
	Parms.InBrush = InBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static auto Func = Class->GetFunction("Border", "GetDynamicMaterial");

	Params::UBorder_GetDynamicMaterial_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FButtonStyle                InStyle                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UButton::SetStyle(struct FButtonStyle& InStyle)
{
	static auto Func = Class->GetFunction("Button", "SetStyle");

	Params::UButton_SetStyle_Params Parms;
	Parms.InStyle = InStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto Func = Class->GetFunction("Button", "SetColorAndOpacity");

	Params::UButton_SetColorAndOpacity_Params Parms;
	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBackgroundColor                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static auto Func = Class->GetFunction("Button", "SetBackgroundColor");

	Params::UButton_SetBackgroundColor_Params Parms;
	Parms.InBackgroundColor = InBackgroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UButton::IsPressed()
{
	static auto Func = Class->GetFunction("Button", "IsPressed");

	Params::UButton_IsPressed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsChecked                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static auto Func = Class->GetFunction("CheckBox", "SetIsChecked");

	Params::UCheckBox_SetIsChecked_Params Parms;
	Parms.InIsChecked = InIsChecked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECheckBoxState          InCheckedState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState)
{
	static auto Func = Class->GetFunction("CheckBox", "SetCheckedState");

	Params::UCheckBox_SetCheckedState_Params Parms;
	Parms.InCheckedState = InCheckedState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCheckBox::IsPressed()
{
	static auto Func = Class->GetFunction("CheckBox", "IsPressed");

	Params::UCheckBox_IsPressed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCheckBox::IsChecked()
{
	static auto Func = Class->GetFunction("CheckBox", "IsChecked");

	Params::UCheckBox_IsChecked_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UCheckBox::GetCheckedState()
{
	static auto Func = Class->GetFunction("CheckBox", "GetCheckedState");

	Params::UCheckBox_GetCheckedState_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               CanCache                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInvalidationBox::SetCanCache(bool CanCache)
{
	static auto Func = Class->GetFunction("InvalidationBox", "SetCanCache");

	Params::UInvalidationBox_SetCanCache_Params Parms;
	Parms.CanCache = CanCache;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInvalidationBox::InvalidateCache()
{
	static auto Func = Class->GetFunction("InvalidationBox", "InvalidateCache");

	Params::UInvalidationBox_InvalidateCache_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInvalidationBox::GetCanCache()
{
	static auto Func = Class->GetFunction("InvalidationBox", "GetCanCache");

	Params::UInvalidationBox_GetCanCache_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusOnOpen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static auto Func = Class->GetFunction("MenuAnchor", "ToggleOpen");

	Params::UMenuAnchor_ToggleOpen_Params Parms;
	Parms.bFocusOnOpen = bFocusOnOpen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMenuAnchor::ShouldOpenDueToClick()
{
	static auto Func = Class->GetFunction("MenuAnchor", "ShouldOpenDueToClick");

	Params::UMenuAnchor_ShouldOpenDueToClick_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusMenu                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMenuAnchor::Open(bool bFocusMenu)
{
	static auto Func = Class->GetFunction("MenuAnchor", "Open");

	Params::UMenuAnchor_Open_Params Parms;
	Parms.bFocusMenu = bFocusMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMenuAnchor::IsOpen()
{
	static auto Func = Class->GetFunction("MenuAnchor", "IsOpen");

	Params::UMenuAnchor_IsOpen_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMenuAnchor::HasOpenSubMenus()
{
	static auto Func = Class->GetFunction("MenuAnchor", "HasOpenSubMenus");

	Params::UMenuAnchor_HasOpenSubMenus_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static auto Func = Class->GetFunction("MenuAnchor", "GetMenuPosition");

	Params::UMenuAnchor_GetMenuPosition_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMenuAnchor::Close()
{
	static auto Func = Class->GetFunction("MenuAnchor", "Close");

	Params::UMenuAnchor_Close_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TextureParameter                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URetainerBox::SetTextureParameter(class FName TextureParameter)
{
	static auto Func = Class->GetFunction("RetainerBox", "SetTextureParameter");

	Params::URetainerBox_SetTextureParameter_Params Parms;
	Parms.TextureParameter = TextureParameter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          EffectMaterial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static auto Func = Class->GetFunction("RetainerBox", "SetEffectMaterial");

	Params::URetainerBox_SetEffectMaterial_Params Parms;
	Parms.EffectMaterial = EffectMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static auto Func = Class->GetFunction("RetainerBox", "GetEffectMaterial");

	Params::URetainerBox_GetEffectMaterial_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SafeZone.SetSidesToPad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InPadLeft                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InPadRight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InPadTop                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InPadBottom                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static auto Func = Class->GetFunction("SafeZone", "SetSidesToPad");

	Params::USafeZone_SetSidesToPad_Params Parms;
	Parms.InPadLeft = InPadLeft;
	Parms.InPadRight = InPadRight;
	Parms.InPadTop = InPadTop;
	Parms.InPadBottom = InPadBottom;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InUserSpecifiedScale                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static auto Func = Class->GetFunction("ScaleBox", "SetUserSpecifiedScale");

	Params::UScaleBox_SetUserSpecifiedScale_Params Parms;
	Parms.InUserSpecifiedScale = InUserSpecifiedScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretchDirection       InStretchDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetStretchDirection(enum class EStretchDirection InStretchDirection)
{
	static auto Func = Class->GetFunction("ScaleBox", "SetStretchDirection");

	Params::UScaleBox_SetStretchDirection_Params Parms;
	Parms.InStretchDirection = InStretchDirection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretch                InStretch                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetStretch(enum class EStretch InStretch)
{
	static auto Func = Class->GetFunction("ScaleBox", "SetStretch");

	Params::UScaleBox_SetStretch_Params Parms;
	Parms.InStretch = InStretch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIgnoreInheritedScale                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static auto Func = Class->GetFunction("ScaleBox", "SetIgnoreInheritedScale");

	Params::UScaleBox_SetIgnoreInheritedScale_Params Parms;
	Parms.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InWidthOverride                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static auto Func = Class->GetFunction("SizeBox", "SetWidthOverride");

	Params::USizeBox_SetWidthOverride_Params Parms;
	Parms.InWidthOverride = InWidthOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto Func = Class->GetFunction("SizeBox", "SetMinDesiredWidth");

	Params::USizeBox_SetMinDesiredWidth_Params Parms;
	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static auto Func = Class->GetFunction("SizeBox", "SetMinDesiredHeight");

	Params::USizeBox_SetMinDesiredHeight_Params Parms;
	Parms.InMinDesiredHeight = InMinDesiredHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static auto Func = Class->GetFunction("SizeBox", "SetMaxDesiredWidth");

	Params::USizeBox_SetMaxDesiredWidth_Params Parms;
	Parms.InMaxDesiredWidth = InMaxDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static auto Func = Class->GetFunction("SizeBox", "SetMaxDesiredHeight");

	Params::USizeBox_SetMaxDesiredHeight_Params Parms;
	Parms.InMaxDesiredHeight = InMaxDesiredHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxAspectRatio                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static auto Func = Class->GetFunction("SizeBox", "SetMaxAspectRatio");

	Params::USizeBox_SetMaxAspectRatio_Params Parms;
	Parms.InMaxAspectRatio = InMaxAspectRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHeightOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static auto Func = Class->GetFunction("SizeBox", "SetHeightOverride");

	Params::USizeBox_SetHeightOverride_Params Parms;
	Parms.InHeightOverride = InHeightOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearWidthOverride()
{
	static auto Func = Class->GetFunction("SizeBox", "ClearWidthOverride");

	Params::USizeBox_ClearWidthOverride_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredWidth()
{
	static auto Func = Class->GetFunction("SizeBox", "ClearMinDesiredWidth");

	Params::USizeBox_ClearMinDesiredWidth_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredHeight()
{
	static auto Func = Class->GetFunction("SizeBox", "ClearMinDesiredHeight");

	Params::USizeBox_ClearMinDesiredHeight_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredWidth()
{
	static auto Func = Class->GetFunction("SizeBox", "ClearMaxDesiredWidth");

	Params::USizeBox_ClearMaxDesiredWidth_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredHeight()
{
	static auto Func = Class->GetFunction("SizeBox", "ClearMaxDesiredHeight");

	Params::USizeBox_ClearMaxDesiredHeight_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxAspectRatio()
{
	static auto Func = Class->GetFunction("SizeBox", "ClearMaxAspectRatio");

	Params::USizeBox_ClearMaxAspectRatio_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearHeightOverride()
{
	static auto Func = Class->GetFunction("SizeBox", "ClearHeightOverride");

	Params::USizeBox_ClearHeightOverride_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UViewport::Spawn(TSubclassOf<class AActor> ActorClass)
{
	static auto Func = Class->GetFunction("Viewport", "Spawn");

	Params::UViewport_Spawn_Params Parms;
	Parms.ActorClass = ActorClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static auto Func = Class->GetFunction("Viewport", "SetViewRotation");

	Params::UViewport_SetViewRotation_Params Parms;
	Parms.Rotation = Rotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UViewport::SetViewLocation(const struct FVector& Location)
{
	static auto Func = Class->GetFunction("Viewport", "SetViewLocation");

	Params::UViewport_SetViewLocation_Params Parms;
	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UViewport::GetViewRotation()
{
	static auto Func = Class->GetFunction("Viewport", "GetViewRotation");

	Params::UViewport_GetViewRotation_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UViewport::GetViewportWorld()
{
	static auto Func = Class->GetFunction("Viewport", "GetViewportWorld");

	Params::UViewport_GetViewportWorld_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UViewport::GetViewLocation()
{
	static auto Func = Class->GetFunction("Viewport", "GetViewLocation");

	Params::UViewport_GetViewLocation_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content)
{
	static auto Func = Class->GetFunction("GridPanel", "AddChildToGrid");

	Params::UGridPanel_AddChildToGrid_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static auto Func = Class->GetFunction("HorizontalBox", "AddChildToHorizontalBox");

	Params::UHorizontalBox_AddChildToHorizontalBox_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static auto Func = Class->GetFunction("Overlay", "AddChildToOverlay");

	Params::UOverlay_AddChildToOverlay_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewScrollOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static auto Func = Class->GetFunction("ScrollBox", "SetScrollOffset");

	Params::UScrollBox_SetScrollOffset_Params Parms;
	Parms.NewScrollOffset = NewScrollOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     WidgetToFind                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AnimateScroll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDescendantScrollDestinationScrollDesintion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDesintion)
{
	static auto Func = Class->GetFunction("ScrollBox", "ScrollWidgetIntoView");

	Params::UScrollBox_ScrollWidgetIntoView_Params Parms;
	Parms.WidgetToFind = WidgetToFind;
	Parms.AnimateScroll = AnimateScroll;
	Parms.ScrollDesintion = ScrollDesintion;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToStart()
{
	static auto Func = Class->GetFunction("ScrollBox", "ScrollToStart");

	Params::UScrollBox_ScrollToStart_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToEnd()
{
	static auto Func = Class->GetFunction("ScrollBox", "ScrollToEnd");

	Params::UScrollBox_ScrollToEnd_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UScrollBox::GetScrollOffset()
{
	static auto Func = Class->GetFunction("ScrollBox", "GetScrollOffset");

	Params::UScrollBox_GetScrollOffset_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InSlotPadding                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static auto Func = Class->GetFunction("UniformGridPanel", "SetSlotPadding");

	Params::UUniformGridPanel_SetSlotPadding_Params Parms;
	Parms.InSlotPadding = InSlotPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotWidth                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static auto Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotWidth");

	Params::UUniformGridPanel_SetMinDesiredSlotWidth_Params Parms;
	Parms.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotHeight                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static auto Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotHeight");

	Params::UUniformGridPanel_SetMinDesiredSlotHeight_Params Parms;
	Parms.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content)
{
	static auto Func = Class->GetFunction("UniformGridPanel", "AddChildToUniformGrid");

	Params::UUniformGridPanel_AddChildToUniformGrid_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static auto Func = Class->GetFunction("VerticalBox", "AddChildToVerticalBox");

	Params::UVerticalBox_AddChildToVerticalBox_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcher::SetActiveWidgetIndex(int32 Index)
{
	static auto Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidgetIndex");

	Params::UWidgetSwitcher_SetActiveWidgetIndex_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidget");

	Params::UWidgetSwitcher_SetActiveWidget_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32 Index)
{
	static auto Func = Class->GetFunction("WidgetSwitcher", "GetWidgetAtIndex");

	Params::UWidgetSwitcher_GetWidgetAtIndex_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWidgetSwitcher::GetNumWidgets()
{
	static auto Func = Class->GetFunction("WidgetSwitcher", "GetNumWidgets");

	Params::UWidgetSwitcher_GetNumWidgets_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWidgetSwitcher::GetActiveWidgetIndex()
{
	static auto Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidgetIndex");

	Params::UWidgetSwitcher_GetActiveWidgetIndex_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPadding                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static auto Func = Class->GetFunction("WrapBox", "SetInnerSlotPadding");

	Params::UWrapBox_SetInnerSlotPadding_Params Parms;
	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBox.AddChildWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWrapBoxSlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget* Content)
{
	static auto Func = Class->GetFunction("WrapBox", "AddChildWrapBox");

	Params::UWrapBox_AddChildWrapBox_Params Parms;
	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProgressBar::SetPercent(float InPercent)
{
	static auto Func = Class->GetFunction("ProgressBar", "SetPercent");

	Params::UProgressBar_SetPercent_Params Parms;
	Parms.InPercent = InPercent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsMarquee                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static auto Func = Class->GetFunction("ProgressBar", "SetIsMarquee");

	Params::UProgressBar_SetIsMarquee_Params Parms;
	Parms.InbIsMarquee = InbIsMarquee;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto Func = Class->GetFunction("ProgressBar", "SetFillColorAndOpacity");

	Params::UProgressBar_SetFillColorAndOpacity_Params Parms;
	Parms.InColor = InColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOffsetFraction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThumbSizeFraction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static auto Func = Class->GetFunction("ScrollBar", "SetState");

	Params::UScrollBar_SetState_Params Parms;
	Parms.InOffsetFraction = InOffsetFraction;
	Parms.InThumbSizeFraction = InThumbSizeFraction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetValue(float InValue)
{
	static auto Func = Class->GetFunction("Slider", "SetValue");

	Params::USlider_SetValue_Params Parms;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetStepSize(float InValue)
{
	static auto Func = Class->GetFunction("Slider", "SetStepSize");

	Params::USlider_SetStepSize_Params Parms;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("Slider", "SetSliderHandleColor");

	Params::USlider_SetSliderHandleColor_Params Parms;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("Slider", "SetSliderBarColor");

	Params::USlider_SetSliderBarColor_Params Parms;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetLocked(bool InValue)
{
	static auto Func = Class->GetFunction("Slider", "SetLocked");

	Params::USlider_SetLocked_Params Parms;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetIndentHandle(bool InValue)
{
	static auto Func = Class->GetFunction("Slider", "SetIndentHandle");

	Params::USlider_SetIndentHandle_Params Parms;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USlider::GetValue()
{
	static auto Func = Class->GetFunction("Slider", "GetValue");

	Params::USlider_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpacer::SetSize(const struct FVector2D& InSize)
{
	static auto Func = Class->GetFunction("Spacer", "SetSize");

	Params::USpacer_SetSize_Params Parms;
	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetValue(float NewValue)
{
	static auto Func = Class->GetFunction("SpinBox", "SetValue");

	Params::USpinBox_SetValue_Params Parms;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMinValue(float NewValue)
{
	static auto Func = Class->GetFunction("SpinBox", "SetMinValue");

	Params::USpinBox_SetMinValue_Params Parms;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMinSliderValue(float NewValue)
{
	static auto Func = Class->GetFunction("SpinBox", "SetMinSliderValue");

	Params::USpinBox_SetMinSliderValue_Params Parms;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMaxValue(float NewValue)
{
	static auto Func = Class->GetFunction("SpinBox", "SetMaxValue");

	Params::USpinBox_SetMaxValue_Params Parms;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMaxSliderValue(float NewValue)
{
	static auto Func = Class->GetFunction("SpinBox", "SetMaxSliderValue");

	Params::USpinBox_SetMaxSliderValue_Params Parms;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (Parm, NativeAccessSpecifierPublic)

void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto Func = Class->GetFunction("SpinBox", "SetForegroundColor");

	Params::USpinBox_SetForegroundColor_Params Parms;
	Parms.InForegroundColor = InForegroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("SpinBox", "OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms;
	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto Func = Class->GetFunction("SpinBox", "OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms;
	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static auto Func = Class->GetFunction("SpinBox", "OnSpinBoxBeginSliderMovement__DelegateSignature");

	Params::USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetValue()
{
	static auto Func = Class->GetFunction("SpinBox", "GetValue");

	Params::USpinBox_GetValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMinValue()
{
	static auto Func = Class->GetFunction("SpinBox", "GetMinValue");

	Params::USpinBox_GetMinValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMinSliderValue()
{
	static auto Func = Class->GetFunction("SpinBox", "GetMinSliderValue");

	Params::USpinBox_GetMinSliderValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMaxValue()
{
	static auto Func = Class->GetFunction("SpinBox", "GetMaxValue");

	Params::USpinBox_GetMaxValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMaxSliderValue()
{
	static auto Func = Class->GetFunction("SpinBox", "GetMaxSliderValue");

	Params::USpinBox_GetMaxSliderValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinValue()
{
	static auto Func = Class->GetFunction("SpinBox", "ClearMinValue");

	Params::USpinBox_ClearMinValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinSliderValue()
{
	static auto Func = Class->GetFunction("SpinBox", "ClearMinSliderValue");

	Params::USpinBox_ClearMinSliderValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxValue()
{
	static auto Func = Class->GetFunction("SpinBox", "ClearMaxValue");

	Params::USpinBox_ClearMaxValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxSliderValue()
{
	static auto Func = Class->GetFunction("SpinBox", "ClearMaxSliderValue");

	Params::USpinBox_ClearMaxSliderValue_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTableViewBase::OnGenerateRowUObject__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("TableViewBase", "OnGenerateRowUObject__DelegateSignature");

	Params::UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.TileView.SetItemWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTileView::SetItemWidth(float Width)
{
	static auto Func = Class->GetFunction("TileView", "SetItemWidth");

	Params::UTileView_SetItemWidth_Params Parms;
	Parms.Width = Width;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TileView.SetItemHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTileView::SetItemHeight(float Height)
{
	static auto Func = Class->GetFunction("TileView", "SetItemHeight");

	Params::UTileView_SetItemHeight_Params Parms;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TileView.RequestListRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTileView::RequestListRefresh()
{
	static auto Func = Class->GetFunction("TileView", "RequestListRefresh");

	Params::UTileView_RequestListRefresh_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetText(class FText InText)
{
	static auto Func = Class->GetFunction("MultiLineEditableText", "SetText");

	Params::UMultiLineEditableText_SetText_Params Parms;
	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMultiLineEditableText::GetText()
{
	static auto Func = Class->GetFunction("MultiLineEditableText", "GetText");

	Params::UMultiLineEditableText_GetText_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetText(class FText InText)
{
	static auto Func = Class->GetFunction("MultiLineEditableTextBox", "SetText");

	Params::UMultiLineEditableTextBox_SetText_Params Parms;
	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetError(class FText InError)
{
	static auto Func = Class->GetFunction("MultiLineEditableTextBox", "SetError");

	Params::UMultiLineEditableTextBox_SetError_Params Parms;
	Parms.InError = InError;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMultiLineEditableTextBox::GetText()
{
	static auto Func = Class->GetFunction("MultiLineEditableTextBox", "GetText");

	Params::UMultiLineEditableTextBox_GetText_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UTextBlock::SetText(class FText InText)
{
	static auto Func = Class->GetFunction("TextBlock", "SetText");

	Params::UTextBlock_SetText_Params Parms;
	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto Func = Class->GetFunction("TextBlock", "SetShadowOffset");

	Params::UTextBlock_SetShadowOffset_Params Parms;
	Parms.InShadowOffset = InShadowOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto Func = Class->GetFunction("TextBlock", "SetShadowColorAndOpacity");

	Params::UTextBlock_SetShadowColorAndOpacity_Params Parms;
	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetOpacity(float InOpacity)
{
	static auto Func = Class->GetFunction("TextBlock", "SetOpacity");

	Params::UTextBlock_SetOpacity_Params Parms;
	Parms.InOpacity = InOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto Func = Class->GetFunction("TextBlock", "SetMinDesiredWidth");

	Params::UTextBlock_SetMinDesiredWidth_Params Parms;
	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetJustification(enum class ETextJustify InJustification)
{
	static auto Func = Class->GetFunction("TextBlock", "SetJustification");

	Params::UTextBlock_SetJustification_Params Parms;
	Parms.InJustification = InJustification;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static auto Func = Class->GetFunction("TextBlock", "SetFont");

	Params::UTextBlock_SetFont_Params Parms;
	Parms.InFontInfo = InFontInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (Parm, NativeAccessSpecifierPublic)

void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static auto Func = Class->GetFunction("TextBlock", "SetColorAndOpacity");

	Params::UTextBlock_SetColorAndOpacity_Params Parms;
	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UTextBlock::GetText()
{
	static auto Func = Class->GetFunction("TextBlock", "GetText");

	Params::UTextBlock_GetText_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
	static auto Func = Class->GetFunction("TextBlock", "GetDynamicOutlineMaterial");

	Params::UTextBlock_GetDynamicOutlineMaterial_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.GetDynamicFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
	static auto Func = Class->GetFunction("TextBlock", "GetDynamicFontMaterial");

	Params::UTextBlock_GetDynamicFontMaterial_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static auto Func = Class->GetFunction("Throbber", "SetNumberOfPieces");

	Params::UThrobber_SetNumberOfPieces_Params Parms;
	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateVertically                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static auto Func = Class->GetFunction("Throbber", "SetAnimateVertically");

	Params::UThrobber_SetAnimateVertically_Params Parms;
	Parms.bInAnimateVertically = bInAnimateVertically;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateOpacity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static auto Func = Class->GetFunction("Throbber", "SetAnimateOpacity");

	Params::UThrobber_SetAnimateOpacity_Params Parms;
	Parms.bInAnimateOpacity = bInAnimateOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateHorizontally                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static auto Func = Class->GetFunction("Throbber", "SetAnimateHorizontally");

	Params::UThrobber_SetAnimateHorizontally_Params Parms;
	Parms.bInAnimateHorizontally = bInAnimateHorizontally;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetAnimation::GetStartTime()
{
	static auto Func = Class->GetFunction("WidgetAnimation", "GetStartTime");

	Params::UWidgetAnimation_GetStartTime_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetAnimation::GetEndTime()
{
	static auto Func = Class->GetFunction("WidgetAnimation", "GetEndTime");

	Params::UWidgetAnimation_GetEndTime_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply& Reply)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "UnlockMouse");

	Params::UWidgetBlueprintLibrary_UnlockMouse_Params Parms;
	Parms.Reply = Reply;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "Unhandled");

	Params::UWidgetBlueprintLibrary_Unhandled_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     FocusWidget                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAllUsers                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetUserFocus");

	Params::UWidgetBlueprintLibrary_SetUserFocus_Params Parms;
	Parms.Reply = Reply;
	Parms.FocusWidget = FocusWidget;
	Parms.bInAllUsers = bInAllUsers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D                   NewMousePosition                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply& Reply, const struct FVector2D& NewMousePosition)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetMousePosition");

	Params::UWidgetBlueprintLibrary_SetMousePosition_Params Parms;
	Parms.Reply = Reply;
	Parms.NewMousePosition = NewMousePosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidgetToFocus                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMouseLockMode          InMouseLockMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnlyEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params Parms;
	Parms.Target = Target;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidgetToFocus                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockMouseToViewport                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnly");

	Params::UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params Parms;
	Parms.Target = Target;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.bLockMouseToViewport = bLockMouseToViewport;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* Target)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameOnly");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params Parms;
	Parms.Target = Target;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidgetToFocus                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMouseLockMode          InMouseLockMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHideCursorDuringCapture                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUIEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params Parms;
	Parms.Target = Target;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidgetToFocus                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockMouseToViewport                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHideCursorDuringCapture                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUI");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params Parms;
	Parms.Target = Target;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.bLockMouseToViewport = bLockMouseToViewport;
	Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetFocusToGameViewport");

	Params::UWidgetBlueprintLibrary_SetFocusToGameViewport_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush& Brush, class UTexture2D* Texture)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToTexture");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params Parms;
	Parms.Brush = Brush;
	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush& Brush, class UMaterialInterface* Material)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToMaterial");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params Parms;
	Parms.Brush = Brush;
	Parms.Material = Material;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply& Reply)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseMouseCapture");

	Params::UWidgetBlueprintLibrary_ReleaseMouseCapture_Params Parms;
	Parms.Reply = Reply;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bInAllJoysticks                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseJoystickCapture");

	Params::UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params Parms;
	Parms.Reply = Reply;
	Parms.bInAllJoysticks = bInAllJoysticks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "NoResourceBrush");

	Params::UWidgetBlueprintLibrary_NoResourceBrush_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromTexture");

	Params::UWidgetBlueprintLibrary_MakeBrushFromTexture_Params Parms;
	Parms.Texture = Texture;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromMaterial");

	Params::UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params Parms;
	Parms.Material = Material;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset*            BrushAsset                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromAsset");

	Params::UWidgetBlueprintLibrary_MakeBrushFromAsset_Params Parms;
	Parms.BrushAsset = BrushAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     CapturingWidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply& Reply, class UWidget* CapturingWidget)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "LockMouse");

	Params::UWidgetBlueprintLibrary_LockMouse_Params Parms;
	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "IsDragDropping");

	Params::UWidgetBlueprintLibrary_IsDragDropping_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "Handled");

	Params::UWidgetBlueprintLibrary_Handled_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   SafePadding                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   SafePaddingScale                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   SpillOverPadding                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetSafeZonePadding");

	Params::UWidgetBlueprintLibrary_GetSafeZonePadding_Params Parms;
	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (SafePadding != nullptr)
		*SafePadding = Parms.SafePadding;

	if (SafePaddingScale != nullptr)
		*SafePaddingScale = Parms.SafePaddingScale;

	if (SpillOverPadding != nullptr)
		*SpillOverPadding = Parms.SpillOverPadding;

}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnalogInputEvent           Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FKeyEvent                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetKeyEventFromAnalogInputEvent");

	Params::UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params Parms;
	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(struct FPointerEvent& Event)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromPointerEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params Parms;
	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent            Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(struct FNavigationEvent& Event)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromNavigationEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params Parms;
	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(struct FKeyEvent& Event)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromKeyEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params Parms;
	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FControllerEvent            Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromControllerEvent(struct FControllerEvent& Event)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromControllerEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params Parms;
	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent             Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(struct FCharacterEvent& Event)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromCharacterEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params Parms;
	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush& Brush)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDynamicMaterial");

	Params::UWidgetBlueprintLibrary_GetDynamicMaterial_Params Parms;
	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDragDroppingContent");

	Params::UWidgetBlueprintLibrary_GetDragDroppingContent_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(struct FSlateBrush& Brush)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsTexture2D");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params Parms;
	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(struct FSlateBrush& Brush)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsMaterial");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params Parms;
	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UWidgetBlueprintLibrary::GetBrushResource(struct FSlateBrush& Brush)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResource");

	Params::UWidgetBlueprintLibrary_GetBrushResource_Params Parms;
	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UInterface>      Interface                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>         FoundWidgets                                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               TopLevelOnly                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TSubclassOf<class UInterface> Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsWithInterface");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.Interface = Interface;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = Parms.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>         FoundWidgets                                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TopLevelOnly                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsOfClass");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = Parms.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply& Reply)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "EndDragDrop");

	Params::UWidgetBlueprintLibrary_EndDragDrop_Params Parms;
	Parms.Reply = Reply;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFont*                       Font                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FontSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FontTypeFace                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext& Context, class FText& Text, const struct FVector2D& Position, class UFont* Font, int32 FontSize, class FName FontTypeFace, const struct FLinearColor& Tint)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawTextFormatted");

	Params::UWidgetBlueprintLibrary_DrawTextFormatted_Params Parms;
	Parms.Context = Context;
	Parms.Text = Text;
	Parms.Position = Position;
	Parms.Font = Font;
	Parms.FontSize = FontSize;
	Parms.FontTypeFace = FontTypeFace;
	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawText(struct FPaintContext& Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawText");

	Params::UWidgetBlueprintLibrary_DrawText_Params Parms;
	Parms.Context = Context;
	Parms.InString = InString;
	Parms.Position = Position;
	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           Points                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAntiAlias                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext& Context, TArray<struct FVector2D>& Points, const struct FLinearColor& Tint, bool bAntiAlias)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLines");

	Params::UWidgetBlueprintLibrary_DrawLines_Params Parms;
	Parms.Context = Context;
	Parms.Points = Points;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   PositionA                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PositionB                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAntiAlias                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLine");

	Params::UWidgetBlueprintLibrary_DrawLine_Params Parms;
	Parms.Context = Context;
	Parms.PositionA = PositionA;
	Parms.PositionB = PositionB;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Size                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USlateBrushAsset*            Brush                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext& Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawBox");

	Params::UWidgetBlueprintLibrary_DrawBox_Params Parms;
	Parms.Context = Context;
	Parms.Position = Position;
	Parms.Size = Size;
	Parms.Brush = Brush;
	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DismissAllMenus");

	Params::UWidgetBlueprintLibrary_DismissAllMenus_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     WidgetDetectingDrag                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        DragKey                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDragIfPressed");

	Params::UWidgetBlueprintLibrary_DetectDragIfPressed_Params Parms;
	Parms.PointerEvent = PointerEvent;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     WidgetDetectingDrag                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        DragKey                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply& Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDrag");

	Params::UWidgetBlueprintLibrary_DetectDrag_Params Parms;
	Parms.Reply = Reply;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UDragDropOperation>OperationClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDragDropOperation*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(TSubclassOf<class UDragDropOperation> OperationClass)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "CreateDragDropOperation");

	Params::UWidgetBlueprintLibrary_CreateDragDropOperation_Params Parms;
	Parms.OperationClass = OperationClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "Create");

	Params::UWidgetBlueprintLibrary_Create_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetType = WidgetType;
	Parms.OwningPlayer = OwningPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bInAllUsers                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "ClearUserFocus");

	Params::UWidgetBlueprintLibrary_ClearUserFocus_Params Parms;
	Parms.Reply = Reply;
	Parms.bInAllUsers = bInAllUsers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     CapturingWidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply& Reply, class UWidget* CapturingWidget)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureMouse");

	Params::UWidgetBlueprintLibrary_CaptureMouse_Params Parms;
	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     CapturingWidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAllJoysticks                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureJoystick");

	Params::UWidgetBlueprintLibrary_CaptureJoystick_Params Parms;
	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;
	Parms.bInAllJoysticks = bInAllJoysticks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static auto Func = Class->GetFunction("WidgetBlueprintLibrary", "CancelDragDrop");

	Params::UWidgetBlueprintLibrary_CancelDragDrop_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetComponent", "SetWidget");

	Params::UWidgetComponent_SetWidget_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto Func = Class->GetFunction("WidgetComponent", "SetOwnerPlayer");

	Params::UWidgetComponent_SetOwnerPlayer_Params Parms;
	Parms.LocalPlayer = LocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static auto Func = Class->GetFunction("WidgetComponent", "SetDrawSize");

	Params::UWidgetComponent_SetDrawSize_Params Parms;
	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewBackgroundColor                                               (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static auto Func = Class->GetFunction("WidgetComponent", "SetBackgroundColor");

	Params::UWidgetComponent_SetBackgroundColor_Params Parms;
	Parms.NewBackgroundColor = NewBackgroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidgetComponent::RequestRedraw()
{
	static auto Func = Class->GetFunction("WidgetComponent", "RequestRedraw");

	Params::UWidgetComponent_RequestRedraw_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static auto Func = Class->GetFunction("WidgetComponent", "GetUserWidgetObject");

	Params::UWidgetComponent_GetUserWidgetObject_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static auto Func = Class->GetFunction("WidgetComponent", "GetRenderTarget");

	Params::UWidgetComponent_GetRenderTarget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static auto Func = Class->GetFunction("WidgetComponent", "GetOwnerPlayer");

	Params::UWidgetComponent_GetOwnerPlayer_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static auto Func = Class->GetFunction("WidgetComponent", "GetMaterialInstance");

	Params::UWidgetComponent_GetMaterialInstance_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetComponent::GetDrawSize()
{
	static auto Func = Class->GetFunction("WidgetComponent", "GetDrawSize");

	Params::UWidgetComponent_GetDrawSize_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::SetCustomHitResult(struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "SetCustomHitResult");

	Params::UWidgetInteractionComponent_SetCustomHitResult_Params Parms;
	Parms.HitResult = HitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Characters                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRepeat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::SendKeyChar(const class FString& Characters, bool bRepeat)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "SendKeyChar");

	Params::UWidgetInteractionComponent_SendKeyChar_Params Parms;
	Parms.Characters = Characters;
	Parms.bRepeat = bRepeat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollDelta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "ScrollWheel");

	Params::UWidgetInteractionComponent_ScrollWheel_Params Parms;
	Parms.ScrollDelta = ScrollDelta;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "ReleasePointerKey");

	Params::UWidgetInteractionComponent_ReleasePointerKey_Params Parms;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "ReleaseKey");

	Params::UWidgetInteractionComponent_ReleaseKey_Params Parms;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "PressPointerKey");

	Params::UWidgetInteractionComponent_PressPointerKey_Params Parms;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRepeat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "PressKey");

	Params::UWidgetInteractionComponent_PressKey_Params Parms;
	Parms.Key = Key;
	Parms.bRepeat = bRepeat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "PressAndReleaseKey");

	Params::UWidgetInteractionComponent_PressAndReleaseKey_Params Parms;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "IsOverInteractableWidget");

	Params::UWidgetInteractionComponent_IsOverInteractableWidget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "IsOverHitTestVisibleWidget");

	Params::UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "IsOverFocusableWidget");

	Params::UWidgetInteractionComponent_IsOverFocusableWidget_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "GetLastHitResult");

	Params::UWidgetInteractionComponent_GetLastHitResult_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "GetHoveredWidgetComponent");

	Params::UWidgetInteractionComponent_GetHoveredWidgetComponent_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static auto Func = Class->GetFunction("WidgetInteractionComponent", "Get2DHitLocation");

	Params::UWidgetInteractionComponent_Get2DHitLocation_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsVerticalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsUniformGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsOverlaySlot");

	Params::UWidgetLayoutLibrary_SlotAsOverlaySlot_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsHorizontalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsGridSlot_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsCanvasSlot");

	Params::UWidgetLayoutLibrary_SlotAsCanvasSlot_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBorderSlot*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsBorderSlot");

	Params::UWidgetLayoutLibrary_SlotAsBorderSlot_Params Parms;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "RemoveAllWidgets");

	Params::UWidgetLayoutLibrary_RemoveAllWidgets_Params Parms;
	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "ProjectWorldLocationToWidgetPosition");

	Params::UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.WorldLocation = WorldLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = Parms.ScreenPosition;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportSize");

	Params::UWidgetLayoutLibrary_GetViewportSize_Params Parms;
	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportScale");

	Params::UWidgetLayoutLibrary_GetViewportScale_Params Parms;
	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LocationX                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LocationY                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static auto Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionScaledByDPI");

	Params::UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params Parms;
	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (LocationX != nullptr)
		*LocationX = Parms.LocationX;

	if (LocationY != nullptr)
		*LocationY = Parms.LocationY;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
