#include <stdio.h>

#define MAX_LINE_LEN 20

int main()
{
  int c, line_ptr, buf_ptr;
  char buf[MAX_LINE_LEN];

  line_ptr = 0;
  buf_ptr = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      buf[buf_ptr] = c;
      buf_ptr++;
      line_ptr++;
      continue;
    }

    if (line_ptr >= MAX_LINE_LEN) {
      putchar('\n');
      line_ptr = 0;
    } else {
      buf[buf_ptr] = '\0';
      printf("%s", buf);
    }

    buf_ptr = 0;
    putchar(c);
    line_ptr++;
  }
}
