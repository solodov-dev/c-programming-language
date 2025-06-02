#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, i, count = 0;
  int state = OUT;
  int words[20];

  for (i = 0; i < 20; i++) {
    words[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == ' ' || c == '\n') {
      if (state == IN) {
        words[count]++;
        count = 0;
        state = OUT;
      }
    } else {
      state = IN;
      count++;
    }
  }

  for (i = 1; i < 20; i++) {
    printf("%2d: ", i);

    for (int j = 0; j < words[i]; j++) {
      printf("#");
    }

    printf("\n");
  }
}
