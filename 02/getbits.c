#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main()
{
	printf("%#o\n", getbits(076573, 8, 3));
	printf("%#x\n", getbits(0xfde678, 11, 4));
}

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);
}
