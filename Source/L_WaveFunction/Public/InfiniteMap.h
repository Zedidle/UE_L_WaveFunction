// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InfiniteMap.generated.h"


class ASlot;

UCLASS()
class L_WAVEFUNCTION_API AInfiniteMap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInfiniteMap();

	UPROPERTY(BlueprintReadOnly)
	class APawn* Player; // �������
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float fPlayerVisionField = 32.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector vWorldCenter = FVector(0,0,0);  // ��������λ��

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float fSlotSize = 10.0f;  // �������Σ���۵ı߳��������ַ��������Ŀ����

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FVector, class ASlot*> Map_V2Slot;




	UFUNCTION()
	void StartGenerator();

private:
	void Generate();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;





public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;




	FTimerHandle GeneratorTimerHandle;


	UFUNCTION(BlueprintCallable)
	void SpawnSlotTest();

};
