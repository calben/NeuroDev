// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "AxonSegment.h"


// Sets default values
AAxonSegment::AAxonSegment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	const ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("/Game/StarterContent/Shapes/Shape_Cube"));
	const ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialObj(TEXT("/Game/Materials/AxonSegmentMaterial"));
	if (MeshObj.Object && MaterialObj.Object)
	{
		Mesh->SetStaticMesh(MeshObj.Object);
		Mesh->SetMaterial(0, MaterialObj.Object);
	}

}

// Called when the game starts or when spawned
void AAxonSegment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAxonSegment::Tick( float DeltaTime )
{

}

void AAxonSegment::SetLength(float Value)
{
	Mesh->SetRelativeScale3D(FVector::FVector(Value, 1.0f, 1.0f));
}

