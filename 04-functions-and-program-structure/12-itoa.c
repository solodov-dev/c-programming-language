#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_itoa();

int main() { test_itoa(); }

void itoa(int n, char s[])
{
  static int i;

  if (n / 10) {
	  itoa(n / 10, s);
  } else {
	i = 0;
	if (n < 0)
		s[i++] = '-';
  }
  

  s[i++] = abs(n % 10) + '0';

  s[i] = '\0';
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
