#include <assert.h>
#include <stdio.h>

void test_rightrot();

int main() { test_rightrot(); }

unsigned short rightrot(unsigned short x, int n)
{
  while (n--) {
    unsigned short bit = x & 1;
    bit = bit << (sizeof(unsigned short) * 8 - 1);
    x = bit | (x >> 1);
  };

  return x;
}

void test_rightrot()
{
  assert(rightrot(0b11100111, 3) == 0b1110000000011100);
  assert(rightrot(0b10100100, 6) == 0b1001000000000010);
  printf("All 'rightrot(x, p, n)' tests has passed successfully\n");
}
