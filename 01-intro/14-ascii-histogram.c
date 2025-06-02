#include <stdio.h>

#define MAX 255

int main() {
  int c, i;
  int ascii[MAX];

  for (i = 0; i < MAX; i++) {
    ascii[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ascii[c]++;
  }

  for (i = 0; i < MAX; i++) {
    if (ascii[i] != 0) {
      switch (i) {
      case '\t':
        printf("\\t");
        break;
      case '\n':
        printf("\\n");
        break;
      default:
        printf("%c", i);
      }
      printf(" : ");

      for (int j = 0; j < ascii[i]; j++) {
        printf("#");
      }

      printf("\n");
    }
  }
}
