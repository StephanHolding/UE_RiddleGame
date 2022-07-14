// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class RIDDLE_GAME_API UCustomFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "User Interface")
		static void CenterCursor(const APlayerController* playerController);

};
