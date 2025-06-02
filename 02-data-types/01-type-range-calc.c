#include <stdio.h>

int main()
{
  int i = 1;
  while (i > 0)
    i++;

  printf("Int min: %d\n", i);
  printf("Int max: %d\n", --i);

  char c = 1;
  while (c > 0)
    c++;

  printf("Char min: %d\n", c);
  printf("Char max: %d\n", --c);

  short s = 1;
  while (s > 0)
    s++;

  printf("Char min: %d\n", s);
  printf("Char max: %d\n", --s);

  long l = 1;
  while (l > 0)
    l++;

  printf("Char min: %ld\n", l);
  printf("Char max: %ld\n", --l);
}
