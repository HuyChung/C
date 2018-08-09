/*
 * shape.c
 *
 *  Created on: 2018/08/09
 *      Author: Chung
 */
#include "shape.h"

void Shape_ctor(Shape *const me, int x, int y){
	me->x = x;
	me->y = y;
}

void Shape_moveBy(Shape *const me, int dx, int dy){
	me->x = me->x + dx;
	me->y = me->y + dy;
}

