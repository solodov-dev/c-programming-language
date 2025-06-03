#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
  char s1[] = "This is a string of some chars";
  squeeze(s1, "ioae");
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

  s1[j] = '\0';

  printf("%s\n", s1);
}
