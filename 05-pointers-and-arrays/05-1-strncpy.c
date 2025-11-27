#include <assert.h>
#include <stdio.h>
#include <string.h>

void strn_cat(char *dst, char *src, int n)
{
  while (n--)
    *dst++ = *src++;

  *dst = '\0';
}

int main()
{
  char dst[100] = "Destination";
  char *src = "Source";
  strn_cat(dst, src, 4);
  assert(strcmp("Sour", dst) == 0);

  printf("All 'strn_cpy(char *dst, char *src, int n)' tests has passed "
         "successfully\n");
}
