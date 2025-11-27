#include <assert.h>
#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
  char first, last;

  int len = strlen(s);

  if (len < 2)
    return;

  first = s[0];
  last = s[len - 1];
  s[len - 1] = '\0';

  // array decay to pointer - later in the book
  reverse(s + 1);

  s[0] = last;
  s[len - 1] = first;
}

int main()
{
  char s1[] = "321";
  reverse(s1);
  assert(strcmp(s1, "123") == 0);

  char s2[] = "abcde";
  reverse(s2);
  assert(strcmp(s2, "edcba") == 0);

  printf("All 'reverse(char s[])' tests has passed successfully\n");
}
