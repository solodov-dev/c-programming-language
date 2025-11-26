#include <ctype.h>
#include <stdio.h>

#define SIZE 10

int getch(void);
void ungetch(int);
double getfloat(double *pn);

int main()
{
  double ret, c;

  if ((ret = getfloat(&c)) == 0)
    printf("Not a valid number\n");
  else if (ret > 0)
    printf("Valid number: %f\n", c);
  else
    printf("End of file\n");

  return 0;
}

double getfloat(double *pn)
{
  int c, sign;

  while (isspace(c = getch()))
    ;

  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c);
    return 0;
  }

  sign = (c == '-') ? -1 : 1;

  if (c == '+' || c == '-')
    c = getch();

  if (!isdigit(c) && c != EOF) {
    ungetch(c);
    return 0;
  }

  for (*pn = 0; isdigit(c); c = getch())
    *pn = 10 * *pn + (c - '0');

  if (c == '.') {
    c = getch();

    for (double fraction = 0.1; isdigit(c); c = getch(), fraction /= 10)
      *pn = fraction * (c - '0') + *pn;
  }

  *pn *= sign;

  if (c != EOF)
    ungetch(c);

  return c;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void) { return (bufp > 0) ? buf[--bufp] : getchar(); }

void ungetch(int c)
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
