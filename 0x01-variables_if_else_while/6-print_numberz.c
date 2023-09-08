#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrption: prints 0-9
 *
 * Return: always 0 success
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*converts digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
