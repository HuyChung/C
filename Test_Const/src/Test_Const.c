/*
 ============================================================================
 Name        : Test_Const.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int test();

unsigned int Send_Data = 150;
unsigned int Received_Data;

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	test();

	return EXIT_SUCCESS;
}

int test() {
	const int x = 3;

	printf("%d\n", x);

	return x;
}

void WriteData_fun(){
	unsigned int data = 0;

}

void ReadData_fun(unsigned int *readData){
	*readData = Send_Data;
}

