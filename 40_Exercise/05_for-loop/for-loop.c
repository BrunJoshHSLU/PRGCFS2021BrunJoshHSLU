#include <stdio.h>

int main () {
	int sum = 1;
	int start = 1;
	int end = 100;
	
	
	
	
	for(int i = start; i <= end; i++){
		printf("%d ", i);
		
		if(i % 10 == 0){
		printf("\n");
		}
	}
	
	
	
	
	
	return 0;
}
