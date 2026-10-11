#include <stdio.h>
#include "a2problem5.h"

int main(void){

	int a[] = {1, 2, 5, 7, 8};
	int b[] = {1, 3, 4, 6};
	int c[9];

	mergeArrays(a, 5, b, 4, c);

	for (int i =0; i < 9; i++){
		printf("%d ", c[i]);
	}

	printf("\n");

	return 0;
}
