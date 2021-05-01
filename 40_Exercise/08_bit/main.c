#include <stdio.h>
#include "bitOps.h"


int main(void){

//initialize three unsigned chars with "0xD3" saved in it
unsigned char* data1 = "00010011";
unsigned char* data2 = "11010011";
unsigned char* data3 = "11010011";
int BitN  = 3;


//modifie char 1

void setBitNInByte(&data1, int BitN);

void setBitNInByte(&data1, int BitN);

void setBitNInByte(&data1, int BitN);

/*
//modifie char 2
void clearBitNInByte(unsigned char* data2, 4);
void clearBitNInByte(unsigned char* data2, 6);
void clearBitNInByte(unsigned char* data2, 7);


//modifie char 3
void toggleBitNInByte(unsigned char* data3, 1);
void toggleBitNInByte(unsigned char* data3, 4);
void toggleBitNInByte(unsigned char* data3, 6);
*/

//print chars to check the modifications
printf("data1 = %s\n", data1);
printf("data2 = %s\n", data2);
printf("data3 = %s\n", data3);


return 0;
}
