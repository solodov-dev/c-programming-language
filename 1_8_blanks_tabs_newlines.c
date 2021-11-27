/* Write a program to count blanks, tabs and newlines */

#include <stdio.h>

main()
{
	int c, bl, tb, nl;
	tb = 0;
	bl = 0;
	nl = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			++tb;
		if (c == ' ')
			++bl;
		if (c == '\n')
			++nl;
	}

	printf("Blanks: %d, tabs: %d, newlines: %d\n", bl, tb, nl);
}