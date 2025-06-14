#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	unsigned rightmost = y & ~(~0 << n);
	unsigned shift_by = p + 1 - n;
	unsigned remnant = x & ~(~0 << shift_by);
	return (x >> shift_by | rightmost) << shift_by | remnant ;
}
