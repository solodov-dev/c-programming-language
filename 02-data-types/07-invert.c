#include <assert.h>
#include <stdio.h>

void test_invert();

int main() { test_invert(); }

unsigned short invert(unsigned short x, int p, int n)
{
  // Create a 'take' mask for n bits and shift it by p
  int mask = ~(~0 << n) << (p - 1);

  // Invert bits
  return x ^ mask;
}

void test_invert()
{
  assert(invert(0b11100111, 3, 4) == 0b11011011);
  assert(invert(0b0, 5, 4) == 0b11110000);
  assert(invert(0b1100100111, 5, 3) == 0b1101010111);
  printf("All 'invert(x, p, n)' tests has passed successfully\n");
}
