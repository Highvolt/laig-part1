#ifndef _ROOM_H_
#define _ROOM_H_
#include <gl\glui.h>
#include <math.h>

void draw_room(double x,double y,double z);
void draw_backwall(double x, double y, double z);
void draw_curve_wall(double x, double y, double z, int n_steps);
#endif