#include <stdio.h>
#include "a2problem2.h"

int main(void){
	int number = 6;

	if (number < 0){
		printf("Error: negative input.\n");
	}
	else {
		printf("Factorial: %llu\n", calculateFactorial(number));
	}

	printf("Counter value: %d\n", countFunctionCalls());

	return 0;
}
