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


	return EXIT_SUCCESS;
}
