#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahrenheit/Celsius");
  while (fahr <= upper) {
    cels = 5.0 / 9.0 * (fahr - 32);
    printf("%3.0f %6.2f\n", fahr, cels);
    fahr = fahr + step;
  }

  return EXIT_SUCCESS;
}
