#include <assert.h>
#include <stdio.h>

void test_invert();

int main() { test_invert(); }

unsigned short invert(unsigned short x, int p, int n, unsigned short y)
{
  // Create a 'take' mask for n right bits
  int take = ~(~0 << n);

  // Take n right bits from y
  y &= take;

  // Shift taken bits by p positions
  y <<= p - 1;

  // Shift original mask by p positions and invert
  int clear = ~(take << (p - 1));

  // Clear bits from x that we want to replace
  x &= clear;

  // Apply y bits on x
  x |= y;

  return x;
}

void test_invert()
{
  assert(invert(0b11100111, 3, 4, 0b1011) == 0b11101111);
  assert(invert(0b0, 5, 4, 0b1011) == 0b10110000);
  assert(invert(0b1100100111, 5, 3, 0b1111111101) == 0b1101010111);
  printf("All 'setbits(x, p, n, y)' tests has passed successfully\n");
}
