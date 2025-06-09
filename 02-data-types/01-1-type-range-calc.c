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

  printf("Short min: %d\n", s);
  printf("Short max: %d\n", --s);

  /* This calculation takes a reaaaaally long time
   *
   * long l = 1;
   * while (l > 0)
   *   l++;
   *
   * printf("Long min: %ld\n", l);
   * printf("Long max: %ld\n", --l);
   *
   */
}
