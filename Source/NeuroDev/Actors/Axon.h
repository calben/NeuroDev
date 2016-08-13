// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Actors/AxonSegment.h"
#include <vector>
#include "Axon.generated.h"

UCLASS()
class NEURODEV_API AAxon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAxon();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	FVector Target;
	
	FVector FakeTarget;

	std::vector<AAxonSegment*> Segments;


	
};
