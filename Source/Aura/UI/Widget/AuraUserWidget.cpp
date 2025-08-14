// Copyright Minkyeong


#include "Aura/UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;

	WidgetControllerSet();
}