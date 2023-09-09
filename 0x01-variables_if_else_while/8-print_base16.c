#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print nums of base16
 *
 * Return: always 0 success
 */

int main(void)
{
	int digit = 48 ; /*48 ; decimal rep of 0 */

	while (digit <= 102) /*102 reo of f*/
	{
		putchar(digit);

		/*after 9 we jump to 96; */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
