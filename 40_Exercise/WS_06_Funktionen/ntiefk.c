#include <stdio.h>
#include <stdlib.h>

//Calculate factorial of n by recursion
long factorialn(int n){
	if (n>=1)
		return n*factorialn(n-1);
	else
		return 1;
} 

//Calculate factorial of k by recurion
long factorialk(int k){
	if (k>=1)
		return k*factorialn(k-1);
	else
		return 1;
} 

//Calculate factorial of n-k by recursion
long factorialnk(int in){
	if (in>=1){
		return in*factorialn(in-1);
	}
	else
		return 1;
} 




int main(int argc, char *argv[]){


int n = atoi(argv[1]);
int k = atoi(argv[2]); 
int output;
int in = n-k;

	//check if all Numbers aren't 0 & that n is great as k
	if (n==0||k==0||n<=k){
		printf("Error\n");
		printf("Please enter n <<Space>> k\n");
		printf("-> All Numbers must be greater than 0\n");
		printf("-> n must be bigger than k\n");
	}
	
	else{
		//Check for negativ numbers
		if(n<0||k<0){
		output = 0;
		printf("n tief k ist %d\n", output);
		}
		
		//Calculate and print "ntiefk"
		else{	
		long factn = factorialn(n);
		long factk = factorialk(k);
		long factnk = factorialnk(in);
	
		printf("factn = %ld, factk= %ld, factnk=%ld\n",factn,factk,factnk);
		output = (factn / (factk*factnk));
		printf("n tief k ist %d\n", output);
		}
	}
	return 0;
}
