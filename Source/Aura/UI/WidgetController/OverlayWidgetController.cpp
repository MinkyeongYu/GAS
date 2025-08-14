// Copyright Minkyeong


#include "Aura/UI/WidgetController/OverlayWidgetController.h"

#include "Aura/AbilitySystem/AuraAttributeSet.h"

void UOverlayWidgetController::BroadcastInitialValues()
{
	UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);
	
	OnHealthChangedSignature.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealthChangedSignature.Broadcast(AuraAttributeSet->GetMaxHealth());
}