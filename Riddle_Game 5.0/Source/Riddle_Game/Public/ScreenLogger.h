// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScreenLogger.generated.h"

UCLASS()
class RIDDLE_GAME_API AScreenLogger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScreenLogger();
	UFUNCTION(BlueprintCallable, Category="Logging")
	static void Log(FString message);
	UFUNCTION(BlueprintCallable, Category = "Logging")
	static void LogError(FString message);
	UFUNCTION(BlueprintCallable, Category = "Logging")
	static void LogWarning(FString message);

};
