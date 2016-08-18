// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "AxonSegment.generated.h"

UCLASS()
class NEURODEV_API AAxonSegment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAxonSegment();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
		URotatingMovementComponent* RotatingMovement;

	UPROPERTY(EditAnywhere)
		float activity;

	void SetLengthAndRotation(float Length, FRotator Rotation);

	const FVector GetStartLocation();

	const FVector GetEndLocation();

};
