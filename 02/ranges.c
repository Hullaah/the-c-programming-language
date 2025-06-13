#include <limits.h>
#include <float.h>
#include <stdio.h>

int main()
{
	printf("char: %hhd to %hhd\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char: %hhu to %hhu\n", 0, UCHAR_MAX);
	printf("short: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short: %hu to %hu\n", 0, USHRT_MAX);
	printf("int: %d to %d\n", INT_MIN, INT_MAX);
	printf("unsigned int: %u to %u\n", 0, UINT_MAX);
	printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long: %lu to %lu\n", 0UL, ULONG_MAX);
	printf("float: %.10e to %.10e\n", FLT_MIN, FLT_MAX);
	printf("double: %.10e to %.10e\n", DBL_MIN, DBL_MAX);
	return 0;
}
