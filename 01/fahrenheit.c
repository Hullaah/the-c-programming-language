#include <stdio.h>
#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/**
 * print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300
 */

int main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3d\t%6.1f", fahr, (5.0 / 9.0) * (fahr - 32));
}
