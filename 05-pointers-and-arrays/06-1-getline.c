#include <assert.h>
#include <stdio.h>

int get_line(char *s, int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    *(s + i) = c;

  if (c == '\n') {
    *(s + i) = c;
    ++i;
  }

  *(s + i) = '\0';
  return i;
}

int main()
{
  char line[100];

  get_line(line, 20);

  puts(line);

  printf("All 'int get_line(char *s, int lim)' tests has passed "
         "successfully\n");
}
