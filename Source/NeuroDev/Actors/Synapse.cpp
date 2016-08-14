// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "Synapse.h"


// Sets default values
ASynapse::ASynapse()
{
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	const ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("/Game/StarterContent/Shapes/Shape_Sphere"));
	const ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialObj(TEXT("/Game/Materials/SynapseMaterial"));
	if (MeshObj.Object && MaterialObj.Object)
	{
		Mesh->SetStaticMesh(MeshObj.Object);
		Mesh->SetMaterial(0, MaterialObj.Object);
	}

}

// Called when the game starts or when spawned
void ASynapse::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASynapse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

