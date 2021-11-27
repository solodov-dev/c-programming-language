// Write a program to print a histogram of the frequencies of different characters in its input.
// 33 => 126
// 33: !
// 126: ~

#include <stdio.h>

#define MINCHAR 33
#define MAXCHAR 126
#define LENGTH MAXCHAR - MINCHAR

main()
{
	int c;
	int count[LENGTH];

	for (int i = 0; i < LENGTH; ++i)
		count[i] = 0;

	while ((c = getchar()) != EOF)
		if (c <= MAXCHAR && c >= MINCHAR)
			++count[c - MINCHAR];

	for (int i = 0; i < LENGTH; ++i)
	{
		putchar(MINCHAR + i);
		for (int j = 0; j < count[i]; ++j)
			putchar('*');
		putchar('\n');
	}
}
