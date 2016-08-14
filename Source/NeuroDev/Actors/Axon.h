// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
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

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;

	FVector Target;
	
	FVector FakeTarget;

	std::vector<class AAxonSegment*> Segments;

	std::vector<class ASynapse*> Synapses;

	float Activity;

	void Grow();

};
