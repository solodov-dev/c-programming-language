#include <assert.h>
#include <stdio.h>
#include <string.h>

void test_strncmp();

int main() { test_strncmp(); }

int strn_cat(char *s1, char *s2, int n)
{
  while (n-- && *s1 && *s2) {
    if (*s1 > *s2)
      return 1;
    if (*s1 < *s2)
      return -1;

    s1++;
    s2++;
  }

  return 0;
}

void test_strncmp()
{
  assert(strn_cat("abcd", "abde", 3) == -1);
  assert(strn_cat("abcd", "abad", 3) == 1);
  assert(strn_cat("abcd", "abcd", 3) == 0);
  assert(strn_cat("abcd", "abcd", 8) == 0);

  printf("All 'strn_cat(char *s1, char *s2, int n)' tests has passed "
         "successfully\n");
}
