#include <stdio.h>
#include <stdlib.h>

#define OUT 0
#define IN 1
#define MAXLINE 1000

int last_non_blank;

char rstrip(char line[], int lim);

int main(void)
{
  extern int last_non_blank;
  char c;
  char line[MAXLINE + 1];

  last_non_blank = 0;
  while ((c = rstrip(line, MAXLINE)) != EOF)
    if (last_non_blank > 0) {
      printf("%s<END", line);
    }

  return EXIT_SUCCESS;
}

char rstrip(char line[], int lim)
{
  int c, i, state;
  extern int last_non_blank;

  last_non_blank = 0;
  state = IN;
  for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i) {
    if (c == ' ' || c == '\t' || c == '\b') {
      if (state == IN) {
        state = OUT;
      }
    } else {
      last_non_blank = i;
      state = IN;
    }

    line[i] = c;
  }

  line[last_non_blank + 1] = '\0';

  return c;
}
