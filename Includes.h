#pragma once
#include <Windows.h>
#include <string>
#include <vector>
#include "Memory.h"
#include "SDK/SDK.hpp"
#pragma comment(lib, "Minhook/minhook.lib")
#include "Minhook/minhook.h"

//#define LATEGAME

void CreateHook(uintptr_t Address, void* Hook, void** OG = nullptr) {
	MH_CreateHook((void*)Address, Hook, OG);
	MH_EnableHook((void*)Address);
}

static uintptr_t Base = __int64(GetModuleHandle(0));

using namespace SDK;

UFortEngine* GEngine;
UGameplayStatics* GGameplayStatics;

FQuat Rot2Quat(FRotator Rotation) {
	FQuat Quat = {};
	auto DEG_TO_RAD = 3.14159 / 180;
	auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

	auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
	auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);

	auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
	auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);

	auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
	auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

	Quat.X = CR * SP * SY - SR * CP * CY;
	Quat.Y = -CR * SP * CY - SR * CP * SY;
	Quat.Z = CR * CP * SY - SR * SP * CY;
	Quat.W = CR * CP * CY + SR * SP * SY;

	return Quat;
}


template <class T>
T* SpawnActor(FVector Loc, AActor* Owner) {
	FTransform Transform = {};
	Transform.Rotation = { 0,0,0,1 };
	Transform.Scale3D = { 1,1,1 };
	Transform.Translation = Loc;
	AActor* BeginSpawn = GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, T::StaticClass(), Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner);
	return reinterpret_cast<T*>(GGameplayStatics->FinishSpawningActor(BeginSpawn, Transform));
}

template <class T = UObject>
T* LoadObject(UClass* Class, const wchar_t* Name) {
	static auto FnLoadObject = reinterpret_cast<T*(__fastcall*)(UClass*, UObject*, const wchar_t*, const wchar_t*, unsigned int, UPackageMap*, bool)>(Base + Offsets::StaticLoadObject);
	return (T*)FnLoadObject(Class, nullptr, Name, 0, 0, 0, 0);
}

AActor* SpawnActor2(UClass* T, FRotator Rot, FVector Loc) {
	FTransform Transform = {};
	Transform.Rotation = Rot2Quat(Rot);
	Transform.Scale3D = { 1,1,1 };
	Transform.Translation = Loc;
	AActor* BeginSpawn = GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, T, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr);
	return (GGameplayStatics->FinishSpawningActor(BeginSpawn, Transform));
}

__int64 Patch() {
	return 1;
}

//#define DEBUG //Uncomment to enable debug logs

void LOG(std::string msg, bool bIsDebug = true) {
	#ifdef DEBUG 
	std::cout << "\nWayBack: " << msg << std::endl;
	#else
	if (!bIsDebug) {
		std::cout << msg << std::endl;
	}
	#endif
}

#define check(cond) if (!(cond)) { return; }