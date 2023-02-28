// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorThread.h"
#include "InfiniteMap.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

GeneratorThread::GeneratorThread()
{
}

GeneratorThread::~GeneratorThread()
{
}

bool GeneratorThread::Init()
{
	UE_LOG(LogTemp, Log, TEXT("GeneratorThread::Init"));
	return IsValid(InfiniteMap);
}

uint32 GeneratorThread::Run()
{
	UE_LOG(LogTemp, Log, TEXT("Run"));

	if (!IsValid(InfiniteMap))
	{
		UE_LOG(LogTemp, Log, TEXT("InfiniteMap not valid"));
		return 0;
	}

	//GetGameInstance()->GetTimerManager();
	//GetWorldTimerManager().SetTimer(GeneratorTimerHandle, this, &GeneratorThread::Generate, 1.0f, true, 2.0f);
	//UKismetSystemLibrary::K2_SetTimer(this, "Generate", 1, true);
	//UGameplayStatics::GetGameInstance(InfiniteMap)->GetTimerManager().SetTimer(GeneratorTimerHandle, this, &GeneratorThread::Generate, 1.0f, true, 2.0f);

	return 0;
}

void GeneratorThread::Exit()
{
	UE_LOG(LogTemp, Log, TEXT("Exit"));

}

void GeneratorThread::Generate()
{
	UE_LOG(LogTemp, Log, TEXT("GeneratorThread::Generate"));

}
