#include <stdio.h>
#include "a2problem4.h"

int main(void){

	int set1[] = {1, 2, 5, 6};
	int set2[] = {2, 4, 5, 8};

	int length1 = 4;
	int length2 = 4;

	printf("Intersection: %d\n", findIntersection(set1, length1, set2, length2));

	printf("Union: %d\n", findUnion(set1, length1, set2, length2));

	printf("Jaccard similarity: %.3f\n", calculateJaccard(set1, length1, set2, length2));

	return 0;
}
