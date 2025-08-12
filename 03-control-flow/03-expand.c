#include <assert.h>
#include <stdio.h>
#include <string.h>

void test_expand();

int main() { test_expand(); }

void expand(char s1[], char s2[])
{
  int i = 0;
  int j = 0;
  char c;

  while (s1[i] != '\0') {

    if (s1[i] != '-' || i == 0) {
      s2[j++] = s1[i++];
      continue;
    }

    c = s1[i - 1];

    while (++c != s1[i + 1])
      s2[j++] = c;

    i++;
  }

  s2[j] = '\0';
}

void assert_expand(char init[], char want[])
{
  char s[100];

  expand(init, s);
  assert(strcmp(s, want) == 0);
}

void test_expand()
{
  assert_expand("a-z", "abcdefghijklmnopqrstuvwxyz");
  assert_expand("-a-z", "-abcdefghijklmnopqrstuvwxyz");
  assert_expand("a-z0-9", "abcdefghijklmnopqrstuvwxyz0123456789");
  assert_expand("a-d-g", "abcdefg");

  printf("All 'expand(s1, s2)' tests has passed successfully\n");
}
