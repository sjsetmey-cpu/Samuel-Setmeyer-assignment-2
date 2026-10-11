#include "a2problem1.h"

// Calculates the factorial for the nonnegative integer.
static double factorial(int number){
	double result = 1.0;

	for (int i = 1; i <= number; i++){
		result *= i;
	}

	return result;
}

// Calculating the probability of succes of k in n trials

float binomialDistribution(int k, int n, float p){
	// need to also reject invalid inputs
	if (k < 0 || n < 0 || k > n || p < 0.0f || p > 1.0f){
		return -1.0f;
	}

	double combinations = factorial(n) / (factorial(k) * factorial(n - k));

	double probability = combinations;

	for (int i = 0; i < k; i++){
		probability *= p;
	}

	for (int i =0; i < n - k; i++){
		probability *= (1.0 - p);
	}

	return (float)probability;
}
