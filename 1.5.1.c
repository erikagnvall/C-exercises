#include<stdio.h>
#include "point.h"

int main()
{
	point_t *p1, *p2, *mid_p;
	double dist;

	p1 = new_point(1,2);
	p2 = new_point(3,4);

	print_point(p1);
	print_point(p2);

	dist = distance_between(p1, p2);
	printf("Distance between p1 and p2: %f\n", dist);

	mid_p = midpoint(p1, p2);
	print_point(mid_p);

	free_point(&p1);
	free_point(&p2);
	return 0;
}
