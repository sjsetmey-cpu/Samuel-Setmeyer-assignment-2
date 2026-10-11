#include <stdio.h>
#include "a2problem1.h"

int main(void){

	// testing using the example in the assignment
	printf("%.6f\n", binomialDistribution(4, 6, 0.3f));

	// testing using example number 2
	printf("%.5f\n", binomialDistribution(3, 5, 0.5f));

	return 0;

}
