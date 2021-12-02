#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int nextline(char line[], int maxline);
void reverse(char origin[], int len);

/* print the longest input line */
main()
{
	int len;						/* current line length */
	char line[MAXLINE]; /* current input line */

	while ((len = nextline(line, MAXLINE)) > 0)
		reverse(line, len);

	return 0;
}

/* nextline: read a line into s, return length */
int nextline(char s[], int lim)
{
	int c, i;
	i = 0;

	while (i < lim - 1)
	{
		c = getchar();
		if (c != EOF)
		{
			if (c != '\n')
			{
				s[i] = c;
				++i;
			}
			else
			{
				break;
			}
		}
		else
		{
			break;
		}
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char origin[], int len)
{
	for (int i = len - 2; i >= 0; --i)
		putchar(origin[i]);
	putchar('\n');
}