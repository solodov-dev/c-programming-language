#include <stdio.h>

int main() {
  int c;
  int nt, ns, nl = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\t':
      nt++;
      break;
    case '\n':
      nl++;
      break;
    case ' ':
      ns++;
      break;
    }
  }

  printf("Tabs: %d\nSpaces: %d\nNew lines: %d\n", nt, ns, nl);
}
