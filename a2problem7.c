#include "a2problem7.h"

// Calculating Fibonacci using recursion
unsigned long long int fibonacciRecursive(int n) {
	if (n < 0) {
        	return 0;
    	}

    	if (n <= 1) {
        	return (unsigned long long int)n;
    	}

    	return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Helper function for improved Fibonacci
unsigned long long int fibonacciImprovedHelper(int n, unsigned long long int memo[]) {

	if (n <= 1) {
        	return (unsigned long long int)n;
    	}

    	if (memo[n] != 0) {
        	return memo[n];
    	}

    	memo[n] = fibonacciImprovedHelper(n - 1, memo)
            + fibonacciImprovedHelper(n - 2, memo);

    	return memo[n];
}

// Improved Fibonacci using memoization
unsigned long long int fibonacciImproved(int n) {
    	if (n < 0) {
        	return 0;
    	}

    	unsigned long long int memo[n + 1];

    	for (int i = 0; i <= n; i++) {
        	memo[i] = 0;
    	}

    	return fibonacciImprovedHelper(n, memo);
}

// Fibonacci using an iterative loop
unsigned long long int fibonacciIterative(int n) {
    	if (n < 0) {
        	return 0;
    	}

    	if (n <= 1) {
        	return (unsigned long long int)n;
    	}

    	unsigned long long int previous = 0;
    	unsigned long long int current = 1;

    	for (int i = 2; i <= n; i++) {
        	unsigned long long int next = previous + current;
        	previous = current;
        	current = next;
    	}

    	return current;
}
