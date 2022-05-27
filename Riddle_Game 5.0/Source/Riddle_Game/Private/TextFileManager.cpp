// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UTextFileManager::SaveArrayText(FString directory, FString fileName, TArray<FString> text)
{
	FString fullFilePath = directory + "\\" + fileName;
	FString allText = "";

	for (FString &t : text)
	{
		allText += t;
		allText += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(allText, *fullFilePath);
}
