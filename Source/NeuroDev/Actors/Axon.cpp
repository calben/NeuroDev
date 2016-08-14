// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "Axon.h"
#include "Util/MathUtils.h"
#include "AxonSegment.h"

// Sets default values
AAxon::AAxon()
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
void AAxon::BeginPlay()
{
	Super::BeginPlay();
	
	AAxonSegment* new_segment = GetWorld()->SpawnActor<AAxonSegment>(GetActorLocation(),
		GetActorRotation());
	Segments.push_back(new_segment);

	for (auto i = 0; i < 2; i++)
	{
		this->Grow();
	}
}

// Called every frame
void AAxon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAxon::Grow()
{
	AAxonSegment* segment_of_origin = Segments[Segments.size() - 1];
	UE_LOG(LogTemp, Warning, TEXT("NEW ORIGIN IS %s"), *(segment_of_origin->GetEndLocation().ToString()));
	AAxonSegment* new_segment = GetWorld()->SpawnActor<AAxonSegment>(segment_of_origin->GetEndLocation(), FRotator::ZeroRotator);
	new_segment->SetLength(10.0f);
	Segments.push_back(new_segment);
}
