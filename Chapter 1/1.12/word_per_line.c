#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
  int c, prev_blank;
  prev_blank = TRUE;

  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n') {
      if (prev_blank == FALSE) {
        printf("\n");
        prev_blank = TRUE;
      }
    }
    else {
      printf("%c", c);
      prev_blank = FALSE;
    }

  return EXIT_SUCCESS;
}
