// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenLogger.h"

// Sets default values
AScreenLogger::AScreenLogger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AScreenLogger::Log(FString message)
{
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, message);
	UE_LOG(LogTemp, Log, TEXT("%s"), *message);
}

void AScreenLogger::LogError(FString message)
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, message);
	UE_LOG(LogTemp, Error, TEXT("%s"), *message);
}

void AScreenLogger::LogWarning(FString message)
{
	GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Yellow, message);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *message);
}

