#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
#define MAXLENGTH 80

int nextline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int len;						/* current line length */
	char line[MAXLINE]; /* current input line */

	while ((len = nextline(line, MAXLINE)) > 0)
	{
		if (len > MAXLENGTH)
			printf("LENGTH: %d > 80\nCONTENTS: %s", len, line);
		else
			printf("LENGTH: %d < 80\n", len);
	}
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