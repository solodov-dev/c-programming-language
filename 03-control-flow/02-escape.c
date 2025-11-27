#include <assert.h>
#include <stdio.h>
#include <string.h>

void escape(char s[], char t[])
{
  int i, j;

  for (i = 0, j = 0; t[i] != '\0'; i++) {
    switch (t[i]) {
    case '\n':
      s[j++] = '\\';
      s[j++] = 'n';
      break;
    case '\t':
      s[j++] = '\\';
      s[j++] = 't';
      break;
    default:
      s[j++] = t[i];
      break;
    }
  }
  s[j] = '\0';
}

int main()
{
  char t[100] = "This is a \tTAB test and \n a newline test";
  char s[100] = "Before test";

  escape(s, t);
  assert(strcmp(s, "This is a \\tTAB test and \\n a newline test") == 0);

  printf("All 'escape(s, t)' tests has passed successfully\n");
}
