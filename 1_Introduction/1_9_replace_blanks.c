/* Copy input to output replacing mutliple blanks with one blank */

#include <stdio.h>

main()
{
	int c, blanks = 0;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
		{
			if (blanks > 0)
			{
				putchar(' ');
				blanks = 0;
			}
			putchar(c);
		}
		if (c == ' ')
			++blanks;
	}
}