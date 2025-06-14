#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main()
{
	printf("%#o\n", getbits(076573, 8, 3));
	printf("%#x\n", getbits(0xfde678, 11, 4));
}

/**
 * getbits - get n bits of x starting at position p
 * @x: the original number
 * @p: the position to start getting bits (0-indexed from the right)
 * @n: the number of bits to get
 * Returns: the n bits from x starting at position p
 */
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);
}
