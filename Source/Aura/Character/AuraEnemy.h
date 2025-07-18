// Copyright Minkyeong

#pragma once

#include "CoreMinimal.h"
#include "Aura/Character/AuraCharacterBase.h"
#include "Aura/Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	AAuraEnemy();

	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
};