#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// Output celsius and fahrenheit temperatures in a table format

int main() {
  printf("__F____C__\n");
  for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}
