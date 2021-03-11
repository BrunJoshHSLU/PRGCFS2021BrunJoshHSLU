#include <stdio.h>

int main () {
	int sum = 1;
	int start = 1;
	int end = 55;
	
	
	
	
	for(int i = start; i <= end; i++){
		sum = sum + i;
		
		if (sum >= 1000){
		printf("Sum to high\n");
		break;
		}
	}
	
	if (sum <= 1000){
	printf("sum from %d to %d is %d\n", start, end, sum);
	}
	
	
	return 0;
}
