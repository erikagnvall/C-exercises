#include<stdio.h>
#include<stdlib.h>

int *enumerate(size_t n);

int main()
{
	size_t i;
	int *a;

	a = enumerate(10);

	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);

	free(a);
	return 0;
}

int *enumerate(size_t n)
{
	size_t i;
	int *nums;

	nums = malloc(n * sizeof(int));
	if (nums == NULL) {
		fprintf(stderr, "failed to allocate memory\n");
		exit(1);
	}

	for (i = 0; i < n; i++)
		nums[i] = i;

	return nums;
}
