#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
	printf("%#o\n", setbits(076573, 8, 3, 0x7));
	printf("%#x\n", setbits(0xfde678, 11, 4, 0x3));
}
/**
 * setbits - set n bits of x starting at position p to the rightmost n bits of y
 * @x: the original number
 * @p: the position to start setting bits (0-indexed from the right)
 * @n: the number of bits to set
 * @y: the number from which to take the rightmost n bits
 * Returns: the modified number with the specified bits set
 */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	unsigned rightmost = y & ~(~0 << n);
	unsigned shift_by = p + 1 - n;
	unsigned remnant = x & ~(~0 << shift_by);
	return ((x >> shift_by) & (~0 << n) | rightmost) << shift_by | remnant ;
}
