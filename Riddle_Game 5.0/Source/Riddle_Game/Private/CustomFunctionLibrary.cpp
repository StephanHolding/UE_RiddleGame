// Fill out your copyright notice in the Description page of Project Settings.



#include "CustomFunctionLibrary.h"

void UCustomFunctionLibrary::CenterCursor(const APlayerController* playerController)
{
	if (playerController)
	{
		const ULocalPlayer* LocalPlayer = playerController->GetLocalPlayer();

		if (LocalPlayer && LocalPlayer->ViewportClient)
		{
			FViewport* Viewport = LocalPlayer->ViewportClient->Viewport;

			if (Viewport)
			{
				FVector2D ViewportSize;
				LocalPlayer->ViewportClient->GetViewportSize(ViewportSize);

				const int centerX = static_cast<int>(ViewportSize.X * 0.5f);
				const int centerY = static_cast<int>(ViewportSize.Y * 0.5f);

				Viewport->SetMouse(centerX, centerY);
			}
		}
	}
}
