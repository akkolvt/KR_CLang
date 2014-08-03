#include <stdio.h>
#include <stdlib.h>

#define MAXVAL 300

float ftoc(int fahr);

int main(void)
{
  float fahr;

  for (fahr = 0; fahr <= MAXVAL; fahr += 20)
    printf("%3.0f %6.1f\n", fahr, ftoc(fahr));

  return EXIT_SUCCESS;
}

float ftoc(int fahr)
{
  float cels;

  cels = (5.0/9.0) * (fahr - 32.0);
  return cels;
}
