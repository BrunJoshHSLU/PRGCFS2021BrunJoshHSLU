#include <math.h> 
#include <stdio.h>

int aufsteigend = 1;


void swap(int *a, int *b) 
{ 
int temp = *a; 
*a = *b; 
*b = temp; 
}  

void bubbleSort(int array[], int n) 
{
if (aufsteigend == 1){ 
int i, j; 
for (i = 0; i < n-1; i++)       
	for (j = 0; j < n-i-1; j++) 
		if (array[j] > array[j+1]) 
swap(&array[j], &array[j+1]);
}

if (aufsteigend == 0){ 
int i, j; 
for (i = 0; i < n-1; i++)       
	for (j = 0; j < n-i-1; j++) 
		if (array[j] < array[j-1]) 
swap(&array[j], &array[j-1]);
} 
}

   
// Insertion Sort Function
void insertionSort(int array[], int n) 
{ 	
    
	int i, element, j; 
	for (i = 1; i < n; i++) 
	{ 
		element = array[i];
		j = i - 1; 
		// compare "element" to its neighbor to the left
		while (j >= 0 && array[j] > element)  // compare elemet
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		}
 		array[j + 1] = element; 
	}
    	
	
    if (aufsteigend == 0){	
	int i, element, j; 
	for (i = 1; i < n; i++) 
	{ 
		element = array[i];
		j = i - 1; 
		// compare "element" to its neighbor to the left
		while (j >= 0 && array[j] < element)  // compare elemet
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		}
 		array[j + 1] = element; 
	}
	}	 
}
   
// Function to print the elements of an array
void printArray(int array[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
	{
		printf("%d ", array[i]); 
	}
	printf("\n"); 
}  

// Main Function 
int main() 
{ 
	int array[] = { 122, 17, 93, 3, 56, -5, -378, -65, 37, 37}; 
	int n = sizeof(array) / sizeof(array[0]); 
	//insertionSort(array, n); 
	bubbleSort(array, n);
	printArray(array, n); 
	return 0; 
}
