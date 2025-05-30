#include <stdio.h>

int main() {
  float celcius, fahr;
  int upper, lower, step;

  upper = 300;
  lower = 0;
  step = 20;

  celcius = lower;
  printf("Celcius\tFahr\n");
  while (celcius <= upper) {
    fahr = 9.0 / 5.0 * celcius + 32;
    printf("%3.0f\t%6.1f\n", celcius, fahr);
    celcius += step;
  }
}
