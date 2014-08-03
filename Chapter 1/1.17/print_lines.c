#include <stdio.h>
#include <stdlib.h>

#define MINLINE 40
#define MAXLINE 1000

int get_line(char line[], int lim);

int main(void)
{
  int len;
  char line[MAXLINE + 1];

  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > MINLINE) {
      printf("%s", line);
    }

  return EXIT_SUCCESS;
}

int get_line(char line[], int lim)
{
  int c, i;

  for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';
  return i;
}
