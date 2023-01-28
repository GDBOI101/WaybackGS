#pragma once
#include <Windows.h>
#include <string>
#include <vector>
#include "Memory.h"
#include "SDK/SDK.hpp"
#pragma comment(lib, "Minhook/minhook.lib")
#include "Minhook/minhook.h"

void CreateHook(uintptr_t Address, void* Hook, void** OG = nullptr) {
	MH_CreateHook((void*)Address, Hook, OG);
	MH_EnableHook((void*)Address);
}

static uintptr_t Base = __int64(GetModuleHandle(0));

using namespace SDK;

UFortEngine* GEngine;
UGameplayStatics* GGameplayStatics;

template <class T>
T* SpawnActor(FVector Loc = {0,0,0}, AActor* Owner = nullptr) {
	FTransform Transform = {};
	Transform.Rotation = { 0,0,0,1 };
	Transform.Scale3D = { 1,1,1 };
	Transform.Translation = Loc;
	AActor* BeginSpawn = GGameplayStatics->BeginDeferredActorSpawnFromClass(GEngine->GameViewport->World, T::StaticClass(), Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner);
	return reinterpret_cast<T*>(GGameplayStatics->FinishSpawningActor(BeginSpawn, Transform));
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