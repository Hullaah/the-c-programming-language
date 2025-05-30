#include <stdio.h>

/**
 * print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300
 */

int main() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr += 20)
    printf("%3d\t%6.1f", fahr, (5.0 / 9.0) * (fahr - 32));
}
