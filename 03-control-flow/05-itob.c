#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void itob(int n, char s[], int base);
void reverse(char s[], int len);

int main()
{
  char s[100];
  itob(34, s, 16);
  assert(strcmp(s, "22") == 0);
  itob(34, s, 2);
  assert(strcmp(s, "100010") == 0);
  itob(34, s, 8);
  assert(strcmp(s, "42") == 0);
  printf("All 'itob(int n, char s[])' tests has passed successfully\n");
}

void itob(int n, char s[], int base)
{
  int i, sign;
  int digit;
  sign = n;

  i = 0;

  do {
    digit = abs(n % base);
    s[i++] = base == 16 && digit > 9 ? digit - 10 + 'A' : digit + '0';
  } while ((n /= base) != 0);

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
