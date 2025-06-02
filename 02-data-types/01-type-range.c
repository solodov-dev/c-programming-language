#include <limits.h>
#include <stdio.h>

int main()
{
  printf("Int min: %d\n", INT_MIN);
  printf("Int max: %d\n", INT_MAX);
  printf("Unsigned int max: %u\n\n", UINT_MAX);

  printf("Char min: %d\n", CHAR_MIN);
  printf("Char max: %d\n", CHAR_MAX);
  printf("Unsigned char max: %d\n\n", UCHAR_MAX);

  printf("Short min: %d\n", SHRT_MIN);
  printf("Short max: %d\n", SHRT_MAX);
  printf("Unsigned short max: %d\n\n", USHRT_MAX);

  printf("Long min: %ld\n", LONG_MIN);
  printf("Long max: %ld\n", LONG_MAX);
  printf("Unsigned long max: %lu\n\n", ULONG_MAX);
}
