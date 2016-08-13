// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "Axon.h"


// Sets default values
AAxon::AAxon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAxon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAxon::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

