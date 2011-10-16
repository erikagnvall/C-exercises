#include<stdio.h>

unsigned int hexadecimal_sum(unsigned int value);

int main()
{
	unsigned int sum = hexadecimal_sum(0x3eba);

	printf("Digit sum in hexadeximal number 0x3eba: %u\n", sum);
	printf("In hexadecimal representation: 0x%x\n", sum);
	return 0;
}

// unsigned since bit operations is unhappy with signed values
unsigned int hexadecimal_sum(unsigned int value)
{
	unsigned int sum = 0;

	while (value) {
		sum += value & 0xf;
		value >>= 4;
	}
	return sum;
}
