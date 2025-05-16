#include <stdio.h>

/*
 * test block comment
 * / Test nested slash
 * */

enum State {
  PROG,
  STR,
  CHAR,
  SLASH,
  STAR,
  BLOCK_COM,
  LINE_COM,
};

// Test comment
//
// Another one

int main()
{
  char c;
  enum State state = PROG;

  while ((c = getchar()) != EOF) {
    switch (state) {
    case PROG:
      if (c == '\'')
        state = CHAR;
      if (c == '"')
        state = STR;
      if (c == '/')
        state = SLASH; // TEST same line comment
      break;
    case CHAR:
      if (c == '\'')
        state = PROG;
      // TEST
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
      /* ANOTHER TEST */
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
