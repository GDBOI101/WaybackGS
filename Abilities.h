#pragma once
#include "Includes.h"

// I TESTING IT ITS REMAKE PROB ASSSSSSSSSSSSSS
namespace Abilities {
    void GrantAbility(AFortPlayerPawn* Pawn, UGameplayAbility* AbilityClass) {
        if (!Pawn || !Pawn->AbilitySystemComponent || !AbilityClass) {
            return;
        }

        // Crear la especificación de la capacidad de juego
        FGameplayAbilitySpecHandle Handle{};
       // Handle.Handle = FMath::Rand();
        FGameplayAbilitySpec Spec = FGameplayAbilitySpec{
            -1, -1, -1, Handle, AbilityClass, 1, -1, nullptr, 0, false, false, false
        };

        if (Pawn->AbilitySystemComponent) {
           //Pawn->AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Spec));
        }
    }

    void GiveBaseAbilities(AFortPlayerPawn* Pawn) {
        if (!Pawn) {
            return;
        }

        static UGameplayAbility* Jump = UObject::FindObject<UGameplayAbility>("Default__FortGameplayAbility_Jump");
        static UGameplayAbility* Sprint = UObject::FindObject<UGameplayAbility>("Default__FortGameplayAbility_Sprint");
        static UGameplayAbility* Consumable = UObject::FindObject<UGameplayAbility>("Default__GA_DefaultPlayer_Consumable_C");
        static UGameplayAbility* Shoot = UObject::FindObject<UGameplayAbility>("Default__GA_Ranged_GenericDamage_C");
        static UGameplayAbility* Use = UObject::FindObject<UGameplayAbility>("Default__GA_DefaultPlayer_InteractUse_C");
        static UGameplayAbility* Search = UObject::FindObject<UGameplayAbility>("Default__GA_DefaultPlayer_InteractSearch_C");

        GrantAbility(Pawn, Jump);
        GrantAbility(Pawn, Sprint);
        GrantAbility(Pawn, Consumable);
        GrantAbility(Pawn, Shoot);
        GrantAbility(Pawn, Use);
        GrantAbility(Pawn, Search);
    }

    FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle) {
        if (!AbilitySystemComponent) {
            return nullptr;
        }

        TArray<FGameplayAbilitySpec>& Specs = AbilitySystemComponent->ActivatableAbilities.Items;

        for (int i = 0; i < Specs.Num(); i++) {
            if (Specs[i].Handle.Handle == Handle.Handle) {
                return &Specs[i];
            }
        }

        return nullptr;
    }
}
