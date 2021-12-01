/* Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c;
	int state = IN;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t' || c == '\n' || c == ' ')
			state = OUT;
		else
		{
			if (state == OUT)
				putchar('\n');
			state = IN;
			putchar(c);
		}
	}
}
