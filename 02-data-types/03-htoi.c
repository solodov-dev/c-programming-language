#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 100

int chtoi(char c);
int htoi(char s[]);

int main()
{
  int i;
  char c;
  char buffer[MAXLEN];

  for (i = 0; (c = getchar()) != '\n' && i < MAXLEN; ++i)
    buffer[i] = c;

  buffer[++i] = '\0';

  printf("%d\n", htoi(buffer));
}

int htoi(char s[])
{
  int len = strlen(s) - 1;
  int i = len;
  int n = 0;

  while (s[i] != 'x' && s[i] != 'X' && i >= 0) {
    n += chtoi(s[i]) * pow(16, len - i);
    --i;
  }

  return n;
}

int chtoi(char c)
{
  if (c <= '9' && c >= '0') {
    return c - '0';
  } else if (c >= 'A' && c <= 'F') {
    return c - 'A' + 10;
  } else {
    printf("Not a hexadecimal char '%c'\n", c);
    exit(1);
  }
}
