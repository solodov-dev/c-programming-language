#include <stdio.h>

#define SPACES_IN_TAB 4

int main()
{
  int c, spaces = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      spaces++;
      if (spaces == SPACES_IN_TAB) {
        putchar('\t');
        spaces = 0;
      }
    } else {
      if (spaces != 0) {
        for (int i = 0; i < spaces; i++)
          putchar(' ');
      }
      putchar(c);
      spaces = 0;
    }
  }

  return 0;
}
