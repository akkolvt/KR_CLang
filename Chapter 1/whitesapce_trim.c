#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
  int c, prev_blank;
  prev_blank = FALSE;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (prev_blank == FALSE) {
        putchar(c);
        prev_blank = TRUE;
      }
    }
    else {
      putchar(c);
      prev_blank = FALSE;
    }
  }

  return EXIT_SUCCESS;
}
