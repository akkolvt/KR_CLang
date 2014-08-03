#include <stdio.h>
#include <stdlib.h>

#define INSIDE 1
#define OUTSIDE 0
#define MAXLENGTH 20

int main(void)
{
  int c, wlength, state;
  int i, j;
  int wordscount[MAXLENGTH + 1];

  wlength = 0;
  state = OUTSIDE;
  for (i = 0; i <= MAXLENGTH; ++i)
    wordscount[i] = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == INSIDE && wlength <= MAXLENGTH) {
        wordscount[wlength] += 1;
        state = OUTSIDE;
      }
      wlength = 0;
    }
    else {
      if (state == OUTSIDE) {
        state = INSIDE;
      }
      wlength++;
    }

  /*Horizontal histogram*/
  for (i = 0; i <= MAXLENGTH; ++i)
    if (i == 0) {
      printf("Wordlength histogram:\n");
    }
    else {
      printf("%2d: ", i);
      for (j = 1; j <= wordscount[i]; ++j)
        putchar('#');
      putchar('\n');
    }

  return EXIT_SUCCESS;
}
