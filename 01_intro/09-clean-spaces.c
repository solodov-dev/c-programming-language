#include <stdio.h>

#define BLANK 0
#define NON_BLANK 1

int main() {
  int c;
  int state = NON_BLANK;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      state = BLANK;
    } else {
      if (state == BLANK) {
        putchar(' ');
        state = NON_BLANK;
      }
      putchar(c);
    }
  }
}
