#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	if( argc != 4){
		printf("Usage:\n");
		printf("logicOperators Input1 Input2 Input3\n");
	}
	
	else{
	
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]); 
		int val3 = atoi(argv[3]);
	
	
		//printf("%d, %d, %d\n", val1, val2, val3);
		
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0)){
		printf("All Inputs must be greater than 0\n");
		}
		
		
		else{
			//find greatest number
			if(val1 >= val2 && val1 >= val3){
				printf("%d is the greatest\n", val1);
			}	
			
			else if(val2 >= val1 && val2 >= val3){
				printf("%d is the greatest\n", val2);
			}
			
			else{
				printf("%d is the greatest\n", val3);
			}
		
		
			//find smallest number		
			if(val1 <= val2 && val1 <= val3){
				printf("%d is the smallest\n", val1);
			}	
			
			else if(val2 <= val1 && val2 <= val3){
				printf("%d is the smallest\n", val2);
			}
			
			else{
				printf("%d is the smallest\n", val3);
			}
			
			
			//compute sum
			int sum = val1 + val2 + val3;
			printf("The sum is: %d\n", sum);
			
			//compute average
			float average = sum/3.0;
			printf("The average is: %.2f\n", average);
		
		
			}
	}
	
	
	/*
	
	printf("Number of input arguments: %d\n", argc);
	
	for(int i = 0; i < argc; i++){
		printf("Argument %d was %s\n", i, argv[i]);
	}
	
	*/
	return 0;
}	

