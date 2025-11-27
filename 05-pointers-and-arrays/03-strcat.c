#include <assert.h>
#include <stdio.h>
#include <string.h>

void strend(char *s, char *t)
{
  while (*s++)
    ;

  while ((*s++ = *t++))
    ;
}

int main()
{
  char s[100] = "Once upon";
  char *t = " a time.";
  strend(s, t);

  assert(strcmp(s, "Once upon a time."));
  printf("All 'scat(char *s, char *t)' tests has passed successfully\n");
}
