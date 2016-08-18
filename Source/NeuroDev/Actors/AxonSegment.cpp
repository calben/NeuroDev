// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "AxonSegment.h"
#include "Kismet/KismetMathLibrary.h"
#include "Util/MathUtils.h"

// Sets default values
AAxonSegment::AAxonSegment()
{
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	const ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("/Game/StarterContent/Shapes/Shape_Cube"));
	const ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialObj(TEXT("/Game/Materials/AxonSegmentMaterial"));
	if (MeshObj.Object && MaterialObj.Object)
	{
		Mesh->SetStaticMesh(MeshObj.Object);
		Mesh->SetMaterial(0, MaterialObj.Object);
	}
	RootComponent = Mesh;
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

void AAxonSegment::SetLengthAndRotation(float Length, FRotator Rotation)
{
	FVector Direction = Rotation.Vector();
	this->SetActorRotation(Rotation);
	Mesh->SetRelativeScale3D(FVector::FVector(Length, 1.0f, 1.0f));
	this->SetActorLocation(this->GetActorLocation() + Direction * Length * 50);
}

const FVector AAxonSegment::GetStartLocation()
{
	return this->GetActorLocation() - this->GetActorForwardVector() * this->GetActorScale().X * 50;
}

const FVector AAxonSegment::GetEndLocation()
{
	return this->GetActorLocation() + this->GetActorForwardVector() * this->GetActorScale().X * 50;
}
