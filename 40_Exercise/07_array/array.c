#include <stdio.h>

#define Array_Length 6


void printArray(int myArray[], int arrayLength) {

	for(int i = 0; i < Array_Length; i++){
	
	printf("%d\n", myArray[i]);	
	}
	printf("finished\n");
}



int main (int argc, char *argv[]){
	
	//create array and init with 0
	int array[Array_Length] = {0};
	
	//print array
	printArray(array, Array_Length);
	
	//fill indices into array
	for(int i = 0; i < Array_Length; i++){
	array[i] = i;	
	}
	
	//print array
	printArray(array, Array_Length);
	
	return 0;
}
