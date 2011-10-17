#include<stdio.h>

void print(int x)
{
	printf("x: %d\n", x);
}

void func(int a, void (*f)(int))
{
	printf("doing some heavy stuff with %d that could take time\n", a);
	f(3);
}

int main()
{
	func(2, print);
}
