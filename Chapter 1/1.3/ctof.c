#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float cels, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 1;

  cels = lower;
  printf("Celsius/Fahrenheit\n");
  while (cels <= upper) {
    fahr = cels * 9.0 / 5.0 + 32;
    printf("%3.0f %6.1f\n", cels, fahr);
    cels = cels + step;
  }

  return EXIT_SUCCESS;
}
