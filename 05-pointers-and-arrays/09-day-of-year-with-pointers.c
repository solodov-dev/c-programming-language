#include <stdio.h>

static char *daytab[2] = {
    (char[]){0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    (char[]){0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int is_leap(int year)
{
  return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int day_of_year(int year, int month, int day)
{
  if (month < 1 || month > 12 || day < 1 || day > 31) {
    return -1;
  }

  int i, leap;

  leap = is_leap(year);

  for (i = 1; i < month; i++)
    day += daytab[leap][i];

  return day;
}

int month_day(int year, int yearday, int *pmonth, int *pday)
{
  if (yearday < 0 || yearday > 366) {
    return -1;
  }

  int i, leap;

  leap = is_leap(year);

  for (i = 1; yearday > daytab[leap][i]; i++)
    yearday -= daytab[leap][i];

  *pmonth = i;
  *pday = yearday;

  return 0;
}

int main()
{
  printf("10/11/2025 is day of year: %d", day_of_year(2025, 11, 10));
}
