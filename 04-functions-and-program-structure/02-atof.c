#include <assert.h>
#include <ctype.h>
#include <stdio.h>

double atof(char s[])
{
  double val, power;
  int i, sign, e_sign, e;

  // skip spaces
  for (i = 0; isspace(s[i]); i++)
    ;

  // save sign
  sign = (s[i] == '-') ? -1 : 1;

  // step over if char is a sign
  if (s[i] == '+' || s[i] == '-')
    i++;

  // while char is a digit add it to the number
  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');

  // step over if dot
  if (s[i] == '.')
    i++;

  // add digits to the number while saving the power (number of digits after the
  // dot)
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }

  // if scientific notation
  if (s[i] == 'e') {
    i++;
    e_sign = (s[i] == '-') ? -1 : 1;
    i++;

    for (e = 0; isdigit(s[i]); i++) {
      e = 10 * e + (s[i] - '0');
    }

    for (; e > 0; e--) {
      power = e_sign == -1 ? power * 10.0 : power / 10.0;
    }
  }

  return sign * val / power;
}

int main()
{
  assert(atof("10.0") == 10.0);
  assert(atof("10123.123") == 10123.123);
  assert(atof("10123.1e-1") == 1012.31);
  printf("All 'itof(char s[])' tests has passed successfully\n");
}
