#include<stdio.h>
#include<stdbool.h>

bool leap_year(unsigned short year);

int main()
{
	bool leap = false;
	unsigned short years[5] = {1900, 1501, 2000, 2012, 2011};


	int i;
	for (i = 0; i < 5; i++) {
		leap = leap_year(years[i]);
		printf("%u: %sleap year\n", years[i], leap ? "" : "not ");
	}

	return 0;
}

// Calculating leap years in the Gregorian calendar since 1582
// or in the proleptic Gregorian calendar before 1582
bool leap_year(unsigned short year)
{
	return year % 4 == 0 &&
		(year % 100 == 0 && year % 400 == 0 || !(year % 100 == 0));

}
