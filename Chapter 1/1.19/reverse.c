#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

char reverse(char line[]);

int main(void)
{
  char c;
  char line[MAXLINE + 1];

  while ((c = reverse(line)) != EOF)
    printf("%s", line);

  return EXIT_SUCCESS;
}

char reverse(char line[])
{
  int c, i, j;
  char original[MAXLINE + 1];

  for (i = 0; i < MAXLINE && (c = getchar()) != EOF && c != '\n'; ++i) {
    original[i + 1] = c;
  }

  original[0] = '\n';

  j = i;
  i = 0;
  while (j >= 0) {
    line[i] = original[j];
    --j;
    ++i;
  }

  return c;
}
