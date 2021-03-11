#include <stdio.h>


int main()
{

printf("Size of char: %ld byte(s).\n", sizeof(char));		//Die Funktion Sizeof bestimmt die Grösse des jeweiligen Datentyps, und Printf gibt dieses dann über %ld aus.
printf("Size of short: %ld byte(s).\n", sizeof(short));		
printf("Size of int: %ld byte(s).\n", sizeof(int));			
printf("Size of long: %ld byte(s).\n", sizeof(long));		
printf("Size of longlong: %ld byte(s).\n", sizeof(long long));	
printf("Size of float: %ld byte(s).\n", sizeof(float));		
printf("Size of double: %ld byte(s).\n", sizeof(double));		
printf("Size of longdouble: %ld byte(s).\n", sizeof(long double));	


 return 0;
}
