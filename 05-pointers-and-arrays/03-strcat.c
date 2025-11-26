#include <assert.h>
#include <stdio.h>
#include <string.h>

void test_strend();

int main() { test_strend(); }

void strend(char *s, char *t)
{
  while (*s++)
    ;

  while ((*s++ = *t++))
    ;
}

void test_strend()
{
  char s[100] = "Once upon";
  char *t = " a time.";
  strend(s, t);

  assert(strcmp(s, "Once upon a time."));
  printf("All 'void scat(char *s, char *t)' tests has passed successfully\n");
}
