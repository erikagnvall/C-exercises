#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Careful with too big size, will eat a BIG chunk of your RAM. */
#define SIZE (100)

void *xcalloc(size_t count, size_t size);
double **make_matrix_slow(int m, int n);
double *make_matrix(int m, int n);
void free_matrix(double** a);


int main()
{
	int 	i;
	int 	j;
	clock_t	time;
	double 	**a;
	double 	*b;
	double 	sum;


	time = clock();

	a = make_matrix_slow(SIZE, SIZE);

	sum = 0;
	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			sum += a[i][j];

	time = clock() - time;
	printf("time for slow: %lf\n", (double)time/CLOCKS_PER_SEC);


	time = clock();

	b = make_matrix(SIZE, SIZE);

	sum = 0;
	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			sum += b[i * SIZE + j];

	time = clock() - time;
	printf("time for fast: %lf\n", (double)time/CLOCKS_PER_SEC);


	free(b);
	free_matrix(a);

	return 0;
}

double **make_matrix_slow(int m, int n)
{
	double **a;
	int i;

	a = xcalloc(m, sizeof(double *));

	for (i = 0; i < m; i++)
		a[i] = xcalloc(n, sizeof(double));

	return a;

}

double *make_matrix(int m, int n)
{
	double *a;
	
	a = xcalloc(m * n, sizeof(double));

	return a;
}

void *xcalloc(size_t count, size_t size)
{
	void *p;

	p = calloc(count, size);

	if (p == NULL) {
		fprintf(stderr, "failed to allocate memory\n");
		exit(1);
	}
	
	return p;
}

void free_matrix(double **a)
{
	int i;
	int j;

	for (i = 0; i < SIZE; i++) {
		free(a[i]);
		a[i] = NULL;
	}

	free(a);
	a = NULL;
}
