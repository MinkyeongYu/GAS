// Copyright Minkyeong


#include "Aura/UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::BroadcastInitialValues()
{

}

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}