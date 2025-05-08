#include <stdio.h>

#define DEFAULT '_'

int main() {
  int c;
  char ch;

  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\t':
      ch = 't';
      break;
    case '\\':
      ch = '\\';
      break;
    case '\b':
      ch = 'b';
      break;
    default:
      ch = DEFAULT;
    }

    if (ch == DEFAULT) {
      putchar(c);
    } else {
      printf("\\%c", ch);
    }
  }
}
