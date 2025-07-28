// Copyright Minkyeong


#include "Aura/Player/AuraPlayerState.h"

#include "Aura/AbilitySystem/AuraAttributeSet.h"
#include "Aura/AbilitySystem/AuraAbilitySystemComponent.h"

AAuraPlayerState::AAuraPlayerState()
{
	NetUpdateFrequency = 100.f;

	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	// Minimal : Gameplay Effects are not replicated. Gameplay Cues and Tags replicated to all clients. 
	//				Multi-player, AI-Controlled
	// Mixed : Gameplay Effects are replicated to the owning client only.
	//		   Gameplay Cues and Tags replicated to all clients. 
	//				Multi-player, PlayerControlled
	// Full : Gameplay Effects are replicated to all clients. 
	//				SinglePlayer
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}