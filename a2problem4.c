#include "a2problem4.h"

// check if the value occurs in the array

static int contains(int input[], int length, int value){

	for(int i = 0; i < length; i++){
		if (input[i] == value){
			return 1;
		}
	}
	return 0;
}

// return 1 for a set with a value and 0 if it doesn't

int checkSet(int input[], int input_length){
	(void)input;

	return input_length > 0 ? 1 : 0;
}

// counting elemts that appear in both

int findIntersection(int input1[], int input1_length, int input2[], int input2_length){

	int count = 0;

	for (int i = 0; i < input1_length; i++){
		if (contains(input2, input2_length, input1[i]) && !contains(input1, i, input1[i])){
		count++;
		}
	}
	return count;
}

// count distinct elements across both arrays.
int findUnion(int input1[], int input1_length, int input2[], int input2_length){
	int count = 0;

	// counting values in the first array
	for (int i = 0 ; i < input1_length; i++){
		if (!contains(input1, i, input1[i])){
			count++;
		}
	}

	for (int i = 0; i < input2_length; i++){
		if (!contains(input2, i, input2[i]) && !contains(input1, input1_length, input2[i])){
			count++;
		}
	}

	return count;
}

// divide the intersection by the union

float calculateJaccard(int input1[], int input1_length, int input2[], int input2_length){
	int unionCount = findUnion(input1, input1_length, input2, input2_length);

	int intersectionCount = findIntersection(input1, input1_length, input2, input2_length);

	if (unionCount == 0){
		return 0.0f;
	}

	return (float)intersectionCount / unionCount;
}
