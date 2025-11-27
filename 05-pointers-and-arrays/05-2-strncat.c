#include <assert.h>
#include <stdio.h>
#include <string.h>

void strn_cat(char *dst, char *src, int n)
{
  while (*dst++)
    ;

  dst--;

  while (n--)
    *dst++ = *src++;

  *dst = '\0';
}

int main()
{
  char dst[100] = "Destination";
  char *src = "Source";
  strn_cat(dst, src, 4);
  assert(strcmp("DestinationSour", dst) == 0);

  printf("All 'strn_cat(char *dst, char *src, int n)' tests has passed "
         "successfully\n");
}
