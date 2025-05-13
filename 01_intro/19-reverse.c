#include <stdio.h>

#define SIZE 1000

void reverse(char line[], int len);

int main()
{
  int c, i;
  char buffer[SIZE];

  i = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      buffer[i] = '\0';
      reverse(buffer, i);
      putchar(c);
      i = 0;
    } else {
      buffer[i] = c;
      ++i;
    }
  }

  return 0;
}

void reverse(char line[], int len)
{
  for (int i = len; i >= 0; --i) {
    putchar(line[i]);
  }
}
