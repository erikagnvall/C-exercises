#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	double sq, e;
	printf(" _______________________________\n");
	printf("|______e^x______|____sqrt(x)____|\n");
	for (i = 0; i < 4; i++) {
		e = exp((double)i/10);
		sq = sqrt((double)i/10);
		printf("|   %lf    |   %lf    |\n", e, sq);
	}
	printf("|_______________|_______________|\n");
	return 0;
}
