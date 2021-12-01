/* Verify that the expression getChar() != EOF returns 1 or 0 */
#include <stdio.h>

main()
{
	printf("%d\n", getchar() != EOF);
}