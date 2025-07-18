// Copyright Minkyeong


#include "Aura/Character/AuraCharacterBase.h"

#include "Components/SkeletalMeshComponent.h"

AAuraCharacterBase::AAuraCharacterBase()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	// GetMesh ÈÄ, Weapon ºÎÂøÇÒ ½ºÄÌ·¹Å» ¸Þ½¬ ¼ÒÄÏ ÀÌ¸§¿¡ ºÎÂø
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}