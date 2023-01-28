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


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraEffect*              EffectTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnEffectAttached");

	Params::UNiagaraFunctionLibrary_SpawnEffectAttached_Params Parms;
	Parms.EffectTemplate = EffectTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraEffect*              EffectTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
{
	static auto Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnEffectAtLocation");

	Params::UNiagaraFunctionLibrary_SpawnEffectAtLocation_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.EffectTemplate = EffectTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
