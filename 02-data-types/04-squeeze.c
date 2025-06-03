#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
  printf("Loop");
  squeeze("abcdefg", "cd");
}

void squeeze(char s1[], char s2[])
{
  int i, j, k;

  for (i = j = 0; s1[i] != '\0'; i++) {

    for (k = 0; s2[k] != '\0'; k++)
      if (s1[i] == s2[k])
        break;

    if (s2[k] == '\0')
      s1[j++] = s1[i];
  }

  printf("%s", s1);
}
