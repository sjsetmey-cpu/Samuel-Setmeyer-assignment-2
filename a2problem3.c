#include "a2problem3.h"

// calculate the n! using a for loop

int factorial(int n){
	int result = 1;

	for (int i =1; i <= n; i++){
		result *= i;
	}

	return result;

}

// calculating x to the nonnegative integer n

int power(int x, int n){
	int result = 1;

	for (int i = 0; i < n; i++){
		result *= x;
	}
	return result;
}

// return 1 if number equals a prime number and 0 if it doesn't

static int isPrime(int number){
	if (number < 2){
		return 0;
	}

	for (int divisor = 2; divisor <= number / divisor; divisor++){
		if (number % divisor == 0){
			return 0;
		}
	}

	return 1;
}

// return the prime in the range of l through r
// return 0 if there a fewer than i

int generatePrime(int l, int r, int i){
	if (i <= 0 || l > r){
		return 0;
	}

	int primeCount = 0;

	for (int number = l; number <= r; number++){
		if (isPrime(number)){
			primeCount++;

			if (primeCount == i){
				return number;
			}
		}
	}
	return 0;
}

// calculating the full series

float computeSeries(int x, int n, int l, int r) {
	float sum = (float)x;

	for (int i = 1; i <= n; i++) {
		// Add the ith prime in the range, or 0 if it doesn't exist
        	sum += generatePrime(l, r, i);

        	// Add x^(i+1) / (i+1)
		if (i < n){
        		sum += (float)power(x, i + 1) / factorial(i + 1);
		}
	}

	return sum;
}
