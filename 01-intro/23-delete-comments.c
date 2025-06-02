#include <stdio.h>

#define SINGLE_QUOTE 39 // ' ASCII code

enum State {
  PROG,
  STR,
  CHAR,
  SLASH,
  STAR,
  BLOCK_COM,
  LINE_COM,
};

int main()
{
  char c;
  enum State state = PROG;

  while ((c = getchar()) != EOF) {
    switch (state) {
    case PROG:
      if (c == SINGLE_QUOTE)
        state = CHAR;
      if (c == '"')
        state = STR;
      if (c == '/')
        state = SLASH;
      break;
    case CHAR:
      if (c == SINGLE_QUOTE)
        state = PROG;
      break;
    case STR:
      if (c == '"')
        state = PROG;
      break;
    case SLASH:
      if (c == '*') {
        state = BLOCK_COM;
      } else if (c == '/') {
        state = LINE_COM;
      } else {
        state = PROG;
        putchar('/');
      }
      break;
    case LINE_COM:
      if (c == '\n') {
        state = PROG;
        continue;
      }
      break;
    case BLOCK_COM:
      if (c == '*')
        state = STAR;
      break;
    case STAR:
      if (c == '/') {
        state = PROG;
        continue;
      } else {
        state = BLOCK_COM;
      }
      break;
    }

    if (state == PROG || state == STR || state == CHAR) {
      putchar(c);
    }
  }

  return 0;
}
