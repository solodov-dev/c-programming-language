#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int nextline(char line[], int maxline);
int lentrailing(char s[], int len);

/* print the longest input line */
main()
{
	int len;						/* current line length */
	char line[MAXLINE]; /* current input line */

	while ((len = nextline(line, MAXLINE)) > 0)
		if (len > 1)
			for (int i = 0; i <= lentrailing(line, len); i++)
				putchar(line[i]);
	return 0;
}

/* nextline: read a line into s, return length */
int nextline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int lentrailing(char s[], int len)
{
	for (int i = len; i >= 0; --i)
		if (s[i] != '\n' || s[i] != '\0' || s[i] != '\t' || s[i] != ' ')
			return i;
}