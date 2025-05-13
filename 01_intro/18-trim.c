#include <stdio.h>

#define MAXBUFFER 1000

int main()
{
  int c, i;
  char buffer[MAXBUFFER];

  i = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      buffer[i] = c;
      ++i;
    } else {
      if (c != '\n' && i != 0) {
        buffer[i] = '\0';
        printf("%s", buffer);
      }

      i = 0;
      putchar(c);
    }
  }

  return 0;
}
