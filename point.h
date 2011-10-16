typedef struct {
	double x;
	double y;
} point_t;

void init_point(point_t *pt, double x, double y);

point_t *new_point(double x, double y);

void free_point(point_t **pt);

void print_point(point_t *pt);

void move_point_to(point_t *pt, double x, double y);

void move_point(point_t *pt, double dx, double dy);

double distance_between(point_t *pt1, point_t *pt2);

point_t *midpoint(point_t *pt1, point_t *pt2);
