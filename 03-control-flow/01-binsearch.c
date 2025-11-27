#include <assert.h>
#include <stdio.h>

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;

  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;

    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}

int binsearch2(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;
  mid = (low + high) / 2;

  while (low <= high && v[mid] != x) {
    x < v[mid] ? (high = mid - 1) : (low = mid + 1);
    mid = (low + high) / 2;
  }

  return v[mid] == x ? mid : -1;
}

int main()
{
  int v[] = {1, 2, 3, 4, 5, 6};
  assert(binsearch(3, v, 6) == 2);
  assert(binsearch(2, v, 6) == 1);
  assert(binsearch(7, v, 6) == -1);
  assert(binsearch(5, v, 6) == 4);
  printf(
      "All 'binsearch(int x, int v[], int n)' tests has passed successfully\n");
  assert(binsearch2(3, v, 6) == 2);
  assert(binsearch2(2, v, 6) == 1);
  assert(binsearch2(7, v, 6) == -1);
  assert(binsearch2(5, v, 6) == 4);
  printf("All 'binsearch2(int x, int v[], int n)' tests has passed "
         "successfully\n");
}
