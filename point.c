#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "point.h"

void init_point(point_t *pt, double x, double y)
{
	pt->x = x;
	pt->y = y;
}

point_t *new_point(double x, double y)
{
	point_t *pt;

	pt = malloc(sizeof(point_t));
	if (pt == NULL) {
		printf("Error while allocating memory in heap");
		exit(1);
	}

	init_point(pt,x,y);
	return pt;
}

void free_point(point_t **pt)
{
	free(*pt);
	*pt = NULL;
}

void print_point(point_t *pt)
{
	printf("[%f,%f]\n", pt->x, pt->y);
}

void move_point_to(point_t *pt, double x, double y)
{
	pt->x = x;
	pt->y = y;
}

void move_point(point_t *pt, double dx, double dy)
{
	pt->x += dx;
	pt->y += dy;
}

double distance_between(point_t *pt1, point_t *pt2)
{
	double dx, dy, res;

	dx = pt2->x - pt1->x;
	dy = pt2->y - pt1->y;
	res = sqrt(dx*dx + dy*dy);

	return res;
}

point_t *midpoint(point_t *pt1, point_t *pt2)
{
	point_t *mid_p;
	double mid_x, mid_y;

	mid_x = (pt2->x - pt1->x) / 2;
	mid_y = (pt2->y - pt1->y) / 2;

	mid_p = new_point(pt1->x + mid_x, pt1->y + mid_y);
	return mid_p;
}
