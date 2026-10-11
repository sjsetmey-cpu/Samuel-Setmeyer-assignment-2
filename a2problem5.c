#include "a2problem5.h"

// merging the two arrays into one

void mergeArrays(int a[], int size_a, int b[], int size_b, int c[]){

	int i = 0;
	int j = 0;
	int k = 0;

	// comparing elements while both arrays have values
	while (i < size_a && j < size_b){
		if (a[i] <= b[j]){
			c[k] = a[i];
			i++;
		}
		else{
			c[k] = b[j];
			j++;
		}

		k++;
	}

	// copy elements from a
	while (i < size_a){
		c[k] = a[i];
		i++;
		k++;
	}

	// copy elements from b
	while (j < size_b){
		c[k] = b[j];
		j++;
		k++;
	}
}
