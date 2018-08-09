/*
 * SHAPE.h
 *
 *  Created on: 2018/08/09
 *      Author: Chung
 */

#ifndef SHAPE_H_
#define SHAPE_H_

/*Trien khai interface = shape.h*/
//Khai bao thuoc tinh cua shape
typedef struct {
	int x;
	int y;
} Shape;

// Khai bao constructor cua shape tuong tu constructor trong java this.x = x
void Shape_ctor(Shape * const me, int x, int y);
// Khai bao phuong thuc cua shape trong interface
void Shape_MoveBy(Shape * const me, int x, int y);

#endif /* SHAPE_H_ */
