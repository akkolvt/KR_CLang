#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int c, sc, tc, nc;

  sc = tc = nc = 0;
  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++sc;
    else if (c == '\t')
      ++tc;
    else if (c == '\n')
      ++nc;

  printf("Whitespace count: %d\nTab count: %d\nLines count: %d\n", sc, tc, nc);
  return EXIT_SUCCESS;
}
