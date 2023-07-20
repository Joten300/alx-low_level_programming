#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - states if a number is positive or negative
 * @i : integer
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative followed by a new line
 *Return: always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
