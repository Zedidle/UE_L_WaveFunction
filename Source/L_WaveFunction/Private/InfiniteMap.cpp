// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteMap.h"
#include "GameFramework/Pawn.h"
#include "GeneratorThread.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Slot.h"

// Sets default values
AInfiniteMap::AInfiniteMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

}

void AInfiniteMap::StartGenerator()
{
	// ���߳� + ��ʱ�� ��ү��
	//GeneratorThread* Runnable = new GeneratorThread(this);
	//FRunnableThread* RunnableThread = FRunnableThread::Create(Runnable, TEXT("TheThreadGenertorSlot"));

	GetWorldTimerManager().SetTimer(GeneratorTimerHandle, this, &AInfiniteMap::Generate, 1.0f, true, 2.0f);
}

void AInfiniteMap::Generate()
{
	//UE_LOG(LogTemp, Log, TEXT("AInfiniteMap::Generate"));
	if (IsValid(Player))
	{
		FVector PlayerLocation = Player->GetActorLocation();
		//FVector::Distance(PlayerLocation, )

	}




}




// Called when the game starts or when spawned
void AInfiniteMap::BeginPlay()
{
	Super::BeginPlay();
	StartGenerator();
}

// Called every frame
void AInfiniteMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInfiniteMap::SpawnSlotTest()
{
	int x = 0, y = 0, z = 0;
	for (; x < 10; x++)
	{
		for (; y < 10; y++)
		{
			for (; z < 10; z++)
			{
				FVector V = FVector(fSlotSize * x, fSlotSize * y, fSlotSize * z);
				AActor* A = GetWorld()->SpawnActor<ASlot>(V);
			}
		}
	}
}



