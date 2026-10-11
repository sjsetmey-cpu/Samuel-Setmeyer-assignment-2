#include <stdio.h>
#include <time.h>
#include "a2problem7.h"

// measuring the length of time for the fibonacci function

static double measureTime(unsigned long long int (*function)(int), int n){

	clock_t start = clock();

	unsigned long long int result = function(n);

	clock_t end = clock();

	printf("Result: %llu\n", result);

	return (double)(end - start) / CLOCKS_PER_SEC;
}

int main(void){

	int n = 40;

	double recursiveTime = measureTime(fibonacciRecursive, n);
	double improvedTime = measureTime(fibonacciImproved, n);
	double iterativeTime = measureTime(fibonacciIterative, n);

	printf("Ordinary time: %.6f seconds\n", recursiveTime);
	printf("Improved time: %.6f seconds\n", improvedTime);
	printf("Iterative time %.6f seconds\n", iterativeTime);

	return 0;
}
