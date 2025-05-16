#include <stdio.h>

#define MAX_BUF_SIZE 100

char get_pair(char c);

int main()
{
  int c;
  char buf[MAX_BUF_SIZE];
  int i = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
    case '[':
    case '(':
    case '{':
      buf[i++] = c;
      break;
    case ']':
    case ')':
    case '}':
      if (buf[i - 1] == get_pair(c)) {
        i--;
      } else {
        break;
      }
    }
  }

  return i;
}

char get_pair(char c)
{
  if (c == ')')
    return '(';
  if (c == ']')
    return '[';
  if (c == '}')
    return '{';
  return -1;
}
