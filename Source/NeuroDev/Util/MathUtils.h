// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathUtils.generated.h"

/**
 *
 */
UCLASS()
class NEURODEV_API UMathUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	int GenerateIndexByBetaDistribution(int count, float alpha, float beta);


};
