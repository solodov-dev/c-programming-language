// Write a program to print a histogram of the lengths of words in its input.
// It is easy to draw the histogram with the bars horizontal;
// a vertical orientation is more challenging.

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLEN 10

main()
{
	int c;
	int state = IN;
	int count[MAXLEN];
	int chars = 0;

	for (int i; i < MAXLEN; ++i)
		count[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t' || c == '\n' || c == ' ')
		{
			state = OUT;
			if (chars > 0)
			{
				if (chars > MAXLEN)
					chars = MAXLEN;
				++count[chars - 1];
			}
			chars = 0;
		}
		else
		{
			state = IN;
			++chars;
		}
	}

	for (int i = 0; i < MAXLEN; ++i)
	{
		printf("%d", i + 1);
		for (int j = 0; j < count[i]; ++j)
			putchar('*');
		putchar('\n');
	}
}