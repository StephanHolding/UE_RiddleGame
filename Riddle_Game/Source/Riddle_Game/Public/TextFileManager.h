// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileManager.generated.h"

/**
 * 
 */
UCLASS()
class RIDDLE_GAME_API UTextFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		//UFUNCTION(BlueprintCallable)
		static bool SaveArrayText(FString directory, FString fileName, TArray<FString> text);
	
};
