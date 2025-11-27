#include <assert.h>
#include <stdio.h>
#include <string.h>

int strrindex(char s[], char t[])
{
  int i, j, k;
  int len_s = strlen(s) - 1;
  int len_t = strlen(t) - 1;

  for (i = len_s; i >= 0; i--) {
    for (j = i, k = len_t; k >= 0 && s[j] == t[k]; k--, j--)
      ;

    if (k == -1 && i != -1)
      return i - len_t;
  }

  return -1;
}

int main()
{
  assert(strrindex("abcdef", "def") == 3);
  assert(strrindex("abcdefalksjdf;akjf", "bcd") == 1);
  assert(strrindex("abcdef", "abc") == 0);
  assert(strrindex("abcdef", "ghl") == -1);
  printf("All 'strrindex(int n, char s[])' tests has passed successfully\n");
}
