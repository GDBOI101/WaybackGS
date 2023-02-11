#pragma once
#include "Includes.h"
namespace Abilities {
	void GrantAbility(AFortPlayerPawn* Pawn, UGameplayAbility* AbilityClass) {
		//Make the Gameplay Ability Spec
		FGameplayAbilitySpecHandle Handle{};
		Handle.Handle = rand();
		FGameplayAbilitySpec Spec = FGameplayAbilitySpec{ -1, -1, -1, Handle, (UGameplayAbility*)AbilityClass, 1, -1, nullptr, 0, false, false, false };;
		static auto GiveAbility = reinterpret_cast<FGameplayAbilitySpecHandle(*)(UAbilitySystemComponent*, const FGameplayAbilitySpecHandle*, FGameplayAbilitySpec)>(uintptr_t(GetModuleHandle(0)) + Offsets::GiveAbility);
		GiveAbility(Pawn->AbilitySystemComponent, &Handle, Spec);
	}

	void GiveBaseAbilities(AFortPlayerPawn* Pawn) {
		static auto Jump = UObject::FindObjectFast<UGameplayAbility>("Default__FortGameplayAbility_Jump");
		static auto Sprint = UObject::FindObjectFast<UGameplayAbility>("Default__FortGameplayAbility_Sprint");
		static auto Consumable = UObject::FindObjectFast<UGameplayAbility>("Default__GA_DefaultPlayer_Consumable_C");
		static auto Shoot = UObject::FindObjectFast<UGameplayAbility>("Default__GA_Ranged_GenericDamage_C");
		static auto Use = UObject::FindObjectFast<UGameplayAbility>("Default__GA_DefaultPlayer_InteractUse_C");
		static auto Search = UObject::FindObjectFast<UGameplayAbility>("Default__GA_DefaultPlayer_InteractSearch_C");
		
		GrantAbility(Pawn, Jump);
		GrantAbility(Pawn, Sprint);
		GrantAbility(Pawn, Consumable);
		GrantAbility(Pawn, Shoot);
		GrantAbility(Pawn, Use);
		GrantAbility(Pawn, Search);
	}

	FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle)
	{
		auto Specs = AbilitySystemComponent->ActivatableAbilities.Items;

		for (int i = 0; i < Specs.Num(); i++)
		{
			auto& Spec = Specs[i];

			if (Spec.Handle.Handle == Handle.Handle)
			{
				return &Spec;
			}
		}

		return nullptr;
	}
}