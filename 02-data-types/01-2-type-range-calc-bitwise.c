#include <stdio.h>

int main()
{
  int min = (1 << (sizeof(int) * 8 - 1));
  printf("Int min: %d\n", min);
  printf("Int max: %d\n", --min);

  char c_min = (char)(1 << (sizeof(char) * 8 - 1));
  printf("Char min: %d\n", c_min);
  printf("Char max: %d\n", --c_min);

  unsigned int u = ~0U;
  printf("Unsigned int max: %u\n", u);

  short s_min = (short)(1 << (sizeof(short) * 8 - 1));
  printf("Short min %d\n", s_min);
  printf("Short max %d\n", --s_min);

  long l_min = (1L << (sizeof(long) * 8 - 1));
  printf("Long min %ld\n", l_min);
  printf("Long max %ld\n", --l_min);

  return 0;
}
