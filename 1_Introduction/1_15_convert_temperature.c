// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

int c_to_f(int c);

main()
{
	int celsius;
	int lower, upper, step;

	lower = 0;	 /* lower limit of temperature scale */
	upper = 100; /* upper limit */
	step = 10;	 /* step size */

	celsius = lower;
	printf("%3s\t%6s", "C", "F\n");
	while (celsius <= upper)
	{
		printf("%3d\t%6d\n", celsius, c_to_f(celsius));
		celsius = celsius + step;
	}
	return 0;
}

c_to_f(int c)
{
	return (c * 9 / 5) + 32;
}