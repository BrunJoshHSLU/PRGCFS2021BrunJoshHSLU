#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int n;
	int x;
	int a;
	char ch;
	
	printf("bitte eine ganze Zahl eingeben\n");	
	

		//überprüfen obe es eine Zahl ist!
		if(scanf("%d",&n) != 1 || n%1 != 0){
		goto here;
		}
		
		else if(n%1 == 0){
		printf("Soll die Zahl nach links oder rechts geschoben werden?\n");
		printf("l=links, r=rechts\n");
		
		scanf(" %c",&ch);
			
			if(ch == 'l'){
			
			//Zahl nach links verschieben
			printf("Um wie viele Stellen soll die Zahl verschoben werden?\n");
			scanf("%d",&a);
			x = n*(a*2);
			printf("%d bitweise um %d Stellen nach links geschoben ergibt: %d\n", n, a, x);
			}
			
			
			else if(ch == 'r'){
			
			//zahl nach rechts verschieben
			printf("Um wie viele Stellen soll die Zahl verschoben werden?\n");
			scanf("%d",&a);
			x = n/(a*2);
			printf("%d bitweise um %d Stellen nach rechts geschoben ergibt: %d\n", n, a, x);
			}
			
			else{
			printf("Error, es wurde keine richtige Eingabe getätigt\n");
			}
		}
		
					

		else {
		printf("Error, es wurde keine ganze Zahl eingegeben\n");
		}
		
		if(0){
		here:
		printf("Error, es wurde keine ganze Zahl eingegeben\n");
		}



	return 0;
}
