#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int fahrenheit_to_celcius(int fahr)
{
	return 5 * (fahr - 32) / 9;
}

int celcius_to_fahrenheit(int celcius)
{
	return 9 * celcius / 5 + 32;
}

int main()
{
	int fahr, celcius;
	for (fahr = LOWER, celcius = LOWER; fahr <= UPPER && celcius <= UPPER;
	     fahr += STEP, celcius += STEP) {
		printf("celcius_to_fahrenheit(%d) = %d\n", celcius,
		       celcius_to_fahrenheit(celcius));
		printf("fahrenheit_to_celcius(%d) = %d\n", fahr,
		       fahrenheit_to_celcius(fahr));
	}
}
