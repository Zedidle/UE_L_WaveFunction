// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"

/**
 * 
 */
class L_WAVEFUNCTION_API GeneratorThread : public FRunnable
{
public:
	GeneratorThread(class AInfiniteMap* Map) : InfiniteMap(Map) {}
	GeneratorThread();
	~GeneratorThread();

	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Exit() override;

	void Generate();


	FTimerHandle GeneratorTimerHandle;
	class AInfiniteMap* InfiniteMap;

};
