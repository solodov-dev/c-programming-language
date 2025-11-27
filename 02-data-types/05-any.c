#include <assert.h>
#include <stdio.h>

int any(char s1[], char s2[])
{
  for (int i = 0; s1[i] != '\0'; i++)
    for (int j = 0; s2[j] != '\0'; j++)
      if (s1[i] == s2[j])
        return i;
  return -1;
}

int main(void)
{
  assert(any("asdf", "ba") == 0);
  assert(any("asdf", "eghk") == -1);
  assert(any("abcdefghig", "klmnopqre") == 4);
  assert(any("Mahatma Ghandi", "ALSKDJG") == 8);
  printf("All 'any(char s1[], char s2[])' tests has passed\n");
  return 0;
}
