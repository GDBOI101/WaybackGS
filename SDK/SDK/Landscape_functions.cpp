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


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*            InSplineComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartSideFalloff                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndSideFalloff                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartRoll                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndRoll                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSubdivisions                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRaiseHeights                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLowerHeights                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject*   PaintLayer                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "EditorApplySpline");

	Params::ALandscapeProxy_EditorApplySpline_Params Parms;
	Parms.InSplineComponent = InSplineComponent;
	Parms.StartWidth = StartWidth;
	Parms.EndWidth = EndWidth;
	Parms.StartSideFalloff = StartSideFalloff;
	Parms.EndSideFalloff = EndSideFalloff;
	Parms.StartRoll = StartRoll;
	Parms.EndRoll = EndRoll;
	Parms.NumSubdivisions = NumSubdivisions;
	Parms.bRaiseHeights = bRaiseHeights;
	Parms.bLowerHeights = bLowerHeights;
	Parms.PaintLayer = PaintLayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InLODDistanceFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto Func = Class->GetFunction("LandscapeProxy", "ChangeLODDistanceFactor");

	Params::ALandscapeProxy_ChangeLODDistanceFactor_Params Parms;
	Parms.InLODDistanceFactor = InLODDistanceFactor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
