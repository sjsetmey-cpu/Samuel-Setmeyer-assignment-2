#include "a2problem2.h"

// We have to track the amount of times the function is called

int countFunctionCalls(void){

	static int static_count = 0;

	static_count++;

	return static_count;
}

// factorial using recursion.

unsigned long long int calculateFactorial(int n){

	//count the function calls
	countFunctionCalls();

	// return error values of negative inputs

	if (n < 0){
		return (unsigned long long int)-1;
	}

	// stop the recursion when n reaches 0 or 1

	if (n <= 1){
		return 1;
	}

	// multiply n using the factorial of the previous integer

	return n * calculateFactorial(n - 1);
}
