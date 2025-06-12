#include <stdio.h>

int power(int m, int n);

/**
 * test power function
 */
int main()
{
	int i;

	for (i = 0; i < 10; ++i) {
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	}
}
/**
 * power: raise base to the nth power; n >= 0
 */
int power(int base, int n)
{
	int i, answer = 1;

	for (i = 0; i < n; i++) {
		answer *= base;
	}
	return answer;
}
