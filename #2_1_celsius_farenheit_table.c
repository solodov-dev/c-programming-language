#include <stdio.h>
/* print Celsius-Fahrenheit table
	for celsius = 0, 10, ..., 100 */

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	 /* lower limit of temperature scale */
	upper = 100; /* upper limit */
	step = 10;	 /* step size */

	celsius = lower;
	printf("%3s\t%6s", "C", "F\n");
	while (celsius <= upper)
	{
		fahr = (celsius * 9 / 5) + 32;
		printf("%3d\t%6d\n", celsius, fahr);
		celsius = celsius + step;
	}
}