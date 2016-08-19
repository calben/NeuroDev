// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuroDev.h"
#include "MathUtils.h"
#include <random>


int UMathUtils::GenerateIndexByBetaDistribution(int count, float a, float b)
{
	std::default_random_engine generator;
	std::gamma_distribution<double> distribution(a, b);
	double beta_value = distribution(generator);
	return FMath::Ceil(beta_value * count) - 1;
}
