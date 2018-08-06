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
void ReadData_func(unsigned int *readData);

unsigned int Send_Data;
unsigned int Received_Data;

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	// Test truyen tham chieu trong C
	int read_Data = 0;
	int send_Data = 100;
	WriteData_func(send_Data);
	ReadData_func(&read_Data);
	puts("!!!Truyen tham chieu trong C!!!");
	printf("read_Data = %d\n", read_Data);

	// Test truyen con tro hang(pointer to constant const int *px) trong C
	puts("!!!pointer to constant - const int *px!!!");
	test_PointerToConstant();

	// Test truyen con tro hang(pointer to constant const int *px) trong C
	puts("!!!pointer to constant version 2 - const int **p_data!!!");
	test_PointerToConstant_v2();

	return EXIT_SUCCESS;
}

void WriteData_func(unsigned int sendData){
	Send_Data = sendData;
}

void ReadData_func(unsigned int *readData){
	*readData = Send_Data;
}

void test_PointerToConstant(){
	int x = 500;
	const int *px;

	px = &x;
	printf("px=%d\n", px);
	printf("*px=%d\n", *px);
}

void test_PointerToConstant_v2(){
	int x = 1000;
	const int **p_data; //Gia tri ben trong cua **p_data khong the thay doi hay **p_data khong the su dung


	*p_data = x;

	printf("%d\n", p_data);
	printf("%d\n", &*p_data);
	printf("%d\n", &(**p_data));

}


