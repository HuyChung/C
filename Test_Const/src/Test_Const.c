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

unsigned int Buffer_Data;

const int *Buffer_Pointer_Data;

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	// Test truyen tham chieu trong C
	int send_Data = 100;
	int read_Data = 0;

	WriteData_func(send_Data);
	ReadData_func(&read_Data);
	puts("!!!Truyen tham chieu trong C!!!");
	printf("send_Data = %d\n", send_Data);
	printf("read_Data = %d\n", read_Data);

	// Test truyen con tro hang(pointer to constant const int *px) trong C
	puts("!!!pointer to constant - const int *px!!!");
	test_PointerToConstant();

	// Test truyen vao con tro hang(pointer to constant: const int *px) trong C
	puts("!!!Test truyen vao con tro hang - const int *p_data!!!");
	const int *send_Pointer_Data = 789;
	const int *read_Pointer_Data = 0;

	Write_PointerToConstant(send_Pointer_Data);
	Read_PointerToConstant(&read_Pointer_Data);
	printf("send_Pointer_Data = %d\n", send_Pointer_Data);
	printf("read_Pointer_Data = %d\n", read_Pointer_Data);

	return EXIT_SUCCESS;
}

// Ghi du lieu vao bo dem Buffer_Data
void WriteData_func(unsigned int sendData){
	Buffer_Data = sendData;
}

//Doc du lieu vao bo dem Buffer_Data
void ReadData_func(unsigned int *readData){
	*readData = Buffer_Data;
}

void test_PointerToConstant(){
	int x = 500;
	int y = 200;
	const int *px; // khong the sử dụng dereference pointer để thay đổi giá trị của "x" hay "y"

	px = &x;       // => Khong the khai bao *px = 200; duoc
	printf("px=%p\n", px);
	printf("*px=%d\n", *px);

	px = &y;
	printf("px=%p\n", px);
	printf("*px=%d\n", *px);
}

// Ghi du lieu vao bo dem Buffer_Pointer_Data
void Write_PointerToConstant(const int *sendData){
	Buffer_Pointer_Data = sendData;
}

// Doc du lieu tu bo dem Buffer_Pointer_Data
void Read_PointerToConstant(const int **readData){
	*readData = Buffer_Pointer_Data;
}


