#include <ctype.h>
#include <stdio.h>

#define STACK_LEN 100

int main(int argc, char *argv[])
{
  int stack[STACK_LEN];
  int *p = &stack[0];

  for (int i = 1; i < argc; i++) {
    char c = *argv[i];

    if (isdigit(c)) {
      *p++ = c - '0';
    } else {
      int op2 = *--p;
      int op1 = *--p;

      switch (c) {
      case '-':
        *p++ = op1 - op2;
        break;
      case '+':
        *p++ = op1 + op2;
        break;
      case '*':
        *p++ = op1 * op2;
        break;
      case '/':
        *p++ = op1 / op2;
        break;
      default: {
        printf("Unknown operand %c", c);
        return -1;
      }
      }
    }
  }

  printf(" = %d", *--p);
}
