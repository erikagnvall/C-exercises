#include<stdio.h>
#include<time.h>

int main()
{
	clock_t time;
	long double sum;
	unsigned int i;

	sum = 0;
	i = 1;

	time = clock();
	while (sum < 18) {
		sum += 1.0/i;
		i += 1;
	}
	time = clock() - time;

	printf("Sum: %.10Lf\n", sum);
	printf("Terms: %u\n", i);
	printf("Time taken: %f\n", (double)time/CLOCKS_PER_SEC);

	return 0;
}
