#include <stdio.h>

#define MAXLINE 80

int readline(char line[], int maxline);

int main()
{
  int len, c;
  char line[MAXLINE];

  while ((len = readline(line, MAXLINE)) > 0) {
    if (len == MAXLINE - 1) {
      printf("%s", line);
      while ((c = getchar()) != EOF && c != '\n')
        putchar(c);
      putchar('\n');
    }
  }

  return 0;
}

int readline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}
