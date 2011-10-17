#include<stdio.h>

unsigned int length_ushort();

int main()
{
	unsigned int len;

	len = length_ushort();
	printf("Length of unsigned short: %u bits\n", len);

	return 0;
}

unsigned int length_ushort()
{
	unsigned short s;
	unsigned int bits;

	s = 1;
	bits = 0;

	while (s) {
		s = s << 1;
		bits++;
	}
	return bits;
}
