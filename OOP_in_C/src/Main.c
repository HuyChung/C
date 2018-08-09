/*
 ============================================================================
 Name        : Shape.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "shape.h"

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	//Tuong duong voi Shape s1 = new Shape(0,1); trong java
	Shape s1;
	Shape_ctor(&s1, 0, 1);

	//Tuong duong voi Shape s2 = new Shape(-1,-2); trong java
	Shape s2;
	Shape_ctor(&s2, -1, -2);

	puts("!!!Khoi tao gia tri!!!");
	printf("Shape s1(x=%d, y=%d)\n",s1.x,s1.y);
	printf("Shape s2(x=%d, y=%d)\n",s2.x,s2.y);

	//Tuong duong s1.Shape_moveBy(2,-4) trong java
	Shape_moveBy(&s1, 2, -4);
	//Tuong duong s2.Shape_moveBy(2,-4) trong java
	Shape_moveBy(&s2, 1, -2);

	puts("!!!chay ham Shape_moveBy!!!");
	printf("Shape s1(x=%d, y=%d)\n",s1.x,s1.y);
	printf("Shape s2(x=%d, y=%d)\n",s2.x,s2.y);

	return EXIT_SUCCESS;
}
