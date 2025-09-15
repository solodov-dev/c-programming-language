#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_reverse();
void reverse(char s[], int len);

int main() { test_reverse(); }

void reverse(char s[], int len)
{
  char temp;

  for (int i = len - 1, j = 0; i > j; i--, j++) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }

  s[len] = '\0';
}

void test_reverse()
{
  char s[100];
  reverse("321", s);
  assert(strcmp(s, "123") == 0);
  reverse(123456, s);
  assert(strcmp(s, "123456") == 0);
  reverse(-2147483648, s);
  assert(strcmp(s, "-2147483648") == 0);
  printf("All 'reverse(int n, char s[])' tests has passed successfully\n");
}
