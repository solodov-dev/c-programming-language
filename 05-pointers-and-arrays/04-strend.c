#include <assert.h>
#include <stdio.h>
#include <string.h>

int strend(char *s, char *t)
{
  if (strlen(t) > strlen(s))
    return 0;

  s += strlen(s) - strlen(t);

  while (*s && *t)
    if (*s++ != *t++)
      return 0;

  return 1;
}

int main()
{
  char *s = "one";
  char *t = "ne";

  assert(strend(s, t) == 1);

  char *s2 = "one";
  char *t2 = "ww";

  assert(strend(s2, t2) == 0);

  printf("All 'strend(char *s, char *t)' tests has passed successfully\n");
}
