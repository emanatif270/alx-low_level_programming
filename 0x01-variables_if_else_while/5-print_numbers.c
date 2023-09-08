#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit num
 *
 * Return: always 0 success
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	pritnf("\n");

	return (0);
}
