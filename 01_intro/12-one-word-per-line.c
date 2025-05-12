#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == ' ' || c == '\n') {
      state = IN;
    } else {
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }
      putchar(c);
    }
  }
}
