#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_itoa();
void reverse(char s[], int len);

int main() { test_itoa(); }

void itoa(int n, char s[])
{
  int i, sign;
  sign = n;

  i = 0;

  do {
    s[i++] = abs(n % 10) + '0';
  } while ((n /= 10) != 0);

  if (sign < 0)
    s[i++] = '-';

  s[i] = '\0';
  reverse(s, i);
}

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

void test_itoa()
{
  char s[100];
  itoa(123, s);
  assert(strcmp(s, "123") == 0);
  itoa(123456, s);
  assert(strcmp(s, "123456") == 0);
  itoa(-2147483648, s);
  assert(strcmp(s, "-2147483648") == 0);
  printf("All 'itoa(int n, char s[])' tests has passed successfully\n");
}
