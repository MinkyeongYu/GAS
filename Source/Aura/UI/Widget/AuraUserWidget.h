// Copyright Minkyeong

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AuraUserWidget.generated.h"

/**
 * AuraWidget들의 기본 클래스
 */
UCLASS()
class AURA_API UAuraUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Aura|Widget")
	void SetWidgetController(UObject* InWidgetController);

protected:
	// Blueprint 에서만 정의 가능
	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Aura|Widget")
	TObjectPtr<UObject> WidgetController;
};
