#include <stdio.h>
#include <stdlib.h>

#define CHARNUM 128

int main(void)
{
  int c, i;
  int chars[CHARNUM];

  for (i = 0; i < CHARNUM; ++i)
    chars[i] = 0;

  while ((c = getchar()) != EOF)
    chars[c] += 1;

  for (c = 0; c < CHARNUM; ++c) {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\n')
      printf("\\n");
    else
      printf("%2c", c);

    printf(" (code: %3d): %d occurrences\n", c, chars[c]);
  }

  return EXIT_SUCCESS;
}
