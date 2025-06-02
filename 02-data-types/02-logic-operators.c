/*
 *  Rewrite this for loop without && or || operators:
 *  for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
 *    line[i] = c;
 */

#include <stdio.h>

int main()
{
  int lim = 100;
  int c, i;
  char line[lim];

  for (i = 0; i < lim - 1; ++i) {
    if ((c = getchar()) == '\n')
      break;

    if (c == EOF)
      break;

    line[i] = c;
  }

  line[i] = '\0';

  printf("%s", line);
}
