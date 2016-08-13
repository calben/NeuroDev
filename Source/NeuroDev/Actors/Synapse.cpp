// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "Synapse.h"


// Sets default values
ASynapse::ASynapse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASynapse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASynapse::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

