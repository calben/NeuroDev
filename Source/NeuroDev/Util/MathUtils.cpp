// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "MathUtils.h"


int UMathUtils::GenerateIndexByBetaDistribution(int count, float alpha, float beta)
{
	// tmp
	return count - 1;
}

void UMathUtils::PivotActorAboutPoint(AActor* actor, FVector point, FRotator rotation)
{
	actor->SetActorRotation(actor->GetActorRotation() + rotation);
}